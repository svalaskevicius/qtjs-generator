
#include <QApplication>
#include <QMainWindow>

#include "cpgf/gmetadefine.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/gscopedinterface.h"
#include "cpgf/scriptbind/gv8runner.h"
#include "cpgf/scriptbind/gv8bind.h"

#include <iostream>
#include <string.h>
#include "v8.h"
#include "../../lib/node/src/v8_typed_array.h"

#include "register_meta_qtcore.h"
#include "register_meta_qtgui.h"
#include "register_meta_qtwidgets.h"
#include "register_meta_qtqml.h"

#include <QtCore/QObject>
#include <QtCore/QSharedPointer>

#include "dynamic_qobject.h"
#include "qmlRegisterType.h"

#include <QDebug>
#include <QFileInfo>
#include <QDir>
#include <QTimer>

#include "eventdispatcherlibuv.h"

using namespace cpgf;
using namespace std;

namespace node {
char** Init(int argc, char *argv[]);
v8::Handle<v8::Object> SetupProcessObject(int argc, char *argv[]);
void Load(v8::Handle<v8::Object> process_l);
void EmitExit(v8::Handle<v8::Object> process_l);
void RunAtExit();
}

namespace {

int __exitCode = 1;

void setExitCode(int code)
{
    __exitCode = code;
}

struct ExecutionStackNode {
    std::string filename;
};

typedef std::vector<ExecutionStackNode> ExecutionStack;

ExecutionStack executionStack;
GScriptRunner *globalScriptRunnerInstance = nullptr;

const char *currentJsFileName()
{
    assert(executionStack.size());
    return executionStack.back().filename.c_str();
}

void invokeV8Gc()
{
    while (!v8::V8::IdleNotification());
}

QString makeIncludePathAbsolute(QString fileName)
{
    if (QFileInfo(fileName).isRelative()) {
        QDir baseDir;
        if (executionStack.size()) {
            baseDir = QFileInfo(currentJsFileName()).absoluteDir();
        } else {
            baseDir = QDir::current();
        }
        return baseDir.absoluteFilePath(fileName);
    }
    return fileName;
}

bool includeJsFile(QString fileName) {
    if (!globalScriptRunnerInstance) {
        throw std::logic_error("a global script runner has to be registered before including js files");
    }

    fileName = makeIncludePathAbsolute(fileName);
    executionStack.push_back({fileName.toLatin1().constData()});
    int ret = globalScriptRunnerInstance->executeFile(fileName.toLatin1().constData());
    executionStack.pop_back();
    return ret;
}

void registerQt(GDefineMetaNamespace &define)
{
    meta_qtcore::registerMain_QtCore(define);
    meta_qtgui::registerMain_QtGui(define);
    meta_qtwidgets::registerMain_QtWidgets(define);
    meta_qtqml::registerMain_QtQml(define);

    define._class(qtjs_binder::createDynamicObjectsMetaClasses());
    define._method("finalizeAndRegisterMetaObjectBuilderToQml", &qtjs_binder::finalizeAndRegisterMetaObjectBuilderToQml);

    qtjs_binder::QtSignalConnectorBinder::reset(new qtjs_binder::QtSignalConnector());
    define._method("connect", &qtjs_binder::QtSignalConnectorBinder::connect);
    define._method("setExitCode", &setExitCode);
    define._method("include", &includeJsFile);
    define._method("__fileName__", &currentJsFileName);
    define._method("makeIncludePathAbsolute", &makeIncludePathAbsolute);
    define._method("invokeV8Gc", &invokeV8Gc);
}

struct CpgfBinder {
    GDefineMetaNamespace define;
    GScopedInterface<IMetaService> service;
    GScopedPointer<GScriptRunner> runner;
    GScopedInterface<IScriptObject> scriptObject;
    GScopedInterface<IMetaClass> metaClass;

    CpgfBinder(v8::Persistent<v8::Context> ctx)
        : define(GDefineMetaNamespace::declare("qt")),
          service(createDefaultMetaService()),
          runner(createV8ScriptRunner(service.get(), ctx)),
          scriptObject(runner->getScripeObject()),
          metaClass(static_cast<IMetaClass *>(metaItemToInterface(define.getMetaClass())))
    {
        registerQt(define);
        scriptObject->bindCoreService("cpgf", NULL);
        scriptSetValue(scriptObject.get(), "qt", GScriptValue::fromClass(metaClass.get()));
        globalScriptRunnerInstance = runner.get();
    }

    ~CpgfBinder()
    {
        globalScriptRunnerInstance = nullptr;
        invokeV8Gc();
        clearV8DataPool();
        qtjs_binder::QtSignalConnectorBinder::reset();
        qtjs_binder::dynamicMetaObjects.dispose();
    }
};

static char **copy_argv(int argc, char **argv) {
  size_t strlen_sum;
  char **argv_copy;
  char *argv_data;
  size_t len;
  int i;

  strlen_sum = 0;
  for(i = 0; i < argc; i++) {
    strlen_sum += strlen(argv[i]) + 1;
  }

  argv_copy = (char **) malloc(sizeof(char *) * (argc + 1) + strlen_sum);
  if (!argv_copy) {
    return NULL;
  }

  argv_data = (char *) argv_copy + sizeof(char *) * (argc + 1);

  for(i = 0; i < argc; i++) {
    argv_copy[i] = argv_data;
    len = strlen(argv[i]) + 1;
    memcpy(argv_data, argv[i], len);
    argv_data += len;
  }

  argv_copy[argc] = NULL;

  return argv_copy;
}


} // namespace



int main(int argc, char * argv[])
{
    // Hack aroung with the argv pointer. Used for process.title = "blah".
    argv = uv_setup_args(argc, argv);

    // Logic to duplicate argv as Init() modifies arguments
    // that are passed into it.
    char **argv_copy = copy_argv(argc, argv);

    auto ev_dispatcher = new EventDispatcherLibUv();
    QCoreApplication::setEventDispatcher(ev_dispatcher);
    QApplication app(argc, argv);

    if ((argc > 1) && (!strcmp("-v", argv[1]))) {
        cout << "v8 version: "<<v8::V8::GetVersion() << endl;
        return 0;
    }

    // This needs to run *before* V8::Initialize()
    // Use copy here as to not modify the original argv:
    node::Init(argc, argv_copy);

    v8::V8::Initialize();
    {
        v8::Locker locker;
        v8::HandleScope handle_scope;

        // Create the one and only Context.
        v8::Persistent<v8::Context> context = v8::Context::New();
        v8::Context::Scope context_scope(context);

        // Use original argv, as we're just copying values out of it.
        v8::Handle<v8::Object> process_l = node::SetupProcessObject(argc, argv);
        v8_typed_array::AttachBindings(context->Global());

        CpgfBinder cpgfBinder(context);

        bool appHadQuitRequest = false;
        QObject::connect(&app, &QCoreApplication::aboutToQuit, [&appHadQuitRequest]{
            appHadQuitRequest = true;
        });

        // Create all the objects, load modules, do everything.
        // so your next reading stop should be node::Load()!
        node::Load(process_l);

        if (!appHadQuitRequest) {
            ev_dispatcher->finalize = true;
            app.exec();
        }

        node::EmitExit(process_l);
        node::RunAtExit();

        context.Dispose();

    }
    v8::V8::Dispose();

    // Clean up the copy:
    free(argv_copy);

    return __exitCode;
}

