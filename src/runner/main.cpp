
#include <QApplication>
#include <QMainWindow>

#include "cpgf/gmetadefine.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/gscopedinterface.h"
#include "cpgf/scriptbind/gv8runner.h"
#include "cpgf/scriptbind/gv8bind.h"
#include "cpgf/glifecycle.h"

#include <iostream>
#include <string.h>
#include "v8.h"

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
#include "uv.h"

#include "../../lib/node/src/node.h"
#include "../../lib/node/src/env.h"
#include "../../lib/node/src/env-inl.h"
#include "../../lib/node/src/node_internals.h"

using namespace cpgf;
using namespace std;


namespace node {

extern v8::Isolate* node_isolate;
bool v8_is_profiling;

char** Init(int* argc,
            const char** argv,
            int* exec_argc,
            const char*** exec_argv);
void SetupProcessObject(Environment* env,
                        int argc,
                        const char* const* argv,
                        int exec_argc,
                        const char* const* exec_argv);
void Load(Environment* env);
void EmitExit(Environment* env);
void RunAtExit(Environment* env);
static void InstallEarlyDebugSignalHandler();
void StartProfilerIdleNotifier(Environment* env);

v8::Handle<v8::Value> MakeCallback(Environment* env,
                           const v8::Handle<v8::Object> object,
                           const v8::Handle<v8::Function> callback,
                           int argc,
                           v8::Handle<v8::Value> argv[]);
}

namespace {

int __exitCode = -1;

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

QObject *objectFromVariant(QVariant *v) {
    return v->value<QObject *>();
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
    define._method("objectFromVariant", &objectFromVariant);
}

struct CpgfBinder {
    GDefineMetaNamespace define;
    GScopedInterface<IMetaService> service;
    GScopedPointer<GScriptRunner> runner;
    GScopedInterface<IScriptObject> scriptObject;
    GScopedInterface<IMetaClass> metaClass;

    CpgfBinder(v8::Handle<v8::Context> ctx)
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
        invokeV8Gc();
        clearV8DataPool();
        globalScriptRunnerInstance = nullptr;
        qtjs_binder::QtSignalConnectorBinder::reset();
        qtjs_binder::dynamicMetaObjects.dispose();
    }
};



node::Environment* CreateNodeEnvironment(v8::Isolate* isolate,
                               int argc,
                               const char* const* argv,
                               int exec_argc,
                               const char* const* exec_argv) {
  using namespace v8;
  using namespace node;

  HandleScope handle_scope(isolate);

  Local<Context> context = Context::New(isolate);
  Context::Scope context_scope(context);
  Environment* env = Environment::New(context);

  uv_check_init(env->event_loop(), env->immediate_check_handle());
  uv_unref(
      reinterpret_cast<uv_handle_t*>(env->immediate_check_handle()));
  uv_idle_init(env->event_loop(), env->immediate_idle_handle());

  // Inform V8's CPU profiler when we're idle.  The profiler is sampling-based
  // but not all samples are created equal; mark the wall clock time spent in
  // epoll_wait() and friends so profiling tools can filter it out.  The samples
  // still end up in v8.log but with state=IDLE rather than state=EXTERNAL.
  // TODO(bnoordhuis) Depends on a libuv implementation detail that we should
  // probably fortify in the API contract, namely that the last started prepare
  // or check watcher runs first.  It's not 100% foolproof; if an add-on starts
  // a prepare or check watcher after us, any samples attributed to its callback
  // will be recorded with state=IDLE.
  uv_prepare_init(env->event_loop(), env->idle_prepare_handle());
  uv_check_init(env->event_loop(), env->idle_check_handle());
  uv_unref(reinterpret_cast<uv_handle_t*>(env->idle_prepare_handle()));
  uv_unref(reinterpret_cast<uv_handle_t*>(env->idle_check_handle()));

  if (v8_is_profiling) {
    StartProfilerIdleNotifier(env);
  }

  Local<FunctionTemplate> process_template = FunctionTemplate::New();
  process_template->SetClassName(FIXED_ONE_BYTE_STRING(isolate, "process"));

  Local<Object> process_object = process_template->GetFunction()->NewInstance();
  env->set_process_object(process_object);

  SetupProcessObject(env, argc, argv, exec_argc, exec_argv);

  return env;
}


void EmitNodeExit(node::Environment* env) {
  // process.emit('exit')
  using namespace v8;
  using namespace node;
  Context::Scope context_scope(env->context());
  HandleScope handle_scope(env->isolate());
  Local<Object> process_object = env->process_object();
  process_object->Set(FIXED_ONE_BYTE_STRING(node_isolate, "_exiting"),
                      True(node_isolate));

  Handle<String> exitCode = FIXED_ONE_BYTE_STRING(node_isolate, "exitCode");
  int code = process_object->Get(exitCode)->IntegerValue();

  Local<Value> args[] = {
    FIXED_ONE_BYTE_STRING(node_isolate, "exit"),
    Integer::New(code, node_isolate)
  };

  MakeCallback(env, process_object, "emit", ARRAY_SIZE(args), args);

  if (__exitCode < 0) {
      __exitCode = code;
  }
//  exit(code);
}

} // namespace



int main(int argc, char * argv[])
{
//#if !defined(_WIN32)
//  // Try hard not to lose SIGUSR1 signals during the bootstrap process.
//  node::InstallEarlyDebugSignalHandler();
//#endif

  assert(argc > 0);

  // Hack around with the argv pointer. Used for process.title = "blah".
  argv = uv_setup_args(argc, argv);


  auto ev_dispatcher = new qtjs::EventDispatcherLibUv();
  QCoreApplication::setEventDispatcher(ev_dispatcher);

  if ((argc > 1) && (!strcmp("-v", argv[1]))) {
      cout << "v8 version: "<<v8::V8::GetVersion() << endl;
      return 0;
  }


  // This needs to run *before* V8::Initialize().  The const_cast is not
  // optional, in case you're wondering.
  int exec_argc;
  const char** exec_argv;
  node::Init(&argc, const_cast<const char**>(argv), &exec_argc, &exec_argv);

//#if HAVE_OPENSSL
//  // V8 on Windows doesn't have a good source of entropy. Seed it from
//  // OpenSSL's pool.
//  V8::SetEntropySource(crypto::EntropySource);
//#endif

  v8::V8::Initialize();
  {
    node::Environment* env = CreateNodeEnvironment(node::node_isolate, argc, argv, exec_argc, exec_argv);
    cpgf::setV8Isolate(node::node_isolate);
    v8::Locker locker(node::node_isolate);
    v8::Context::Scope context_scope(env->context());
    v8::HandleScope handle_scope(env->isolate());

    {
        QApplication app(argc, argv);
        ev_dispatcher->setFinalise();
        CpgfBinder cpgfBinder(env->context());

        node::Load(env);

        if (__exitCode < 0) {
            QCoreApplication::exec();
        }
    }

    EmitNodeExit(env);
    node::RunAtExit(env);
    env->Dispose();
    env = NULL;
  }

  v8::V8::Dispose();
  cpgf::shutDownLibrary();

  delete[] exec_argv;
  exec_argv = NULL;

  return __exitCode;
}

