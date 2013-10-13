
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

using namespace cpgf;
using namespace std;

namespace {

QStringList __programArguments;
int __exitCode = 1;

QStringList programArguments() 
{
    return __programArguments;
}

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

const char *makeIncludePathAbsolute(const char *fileName)
{
    if (QFileInfo(fileName).isRelative()) {
        QDir baseDir;
        if (executionStack.size()) {
            baseDir = QFileInfo(currentJsFileName()).absoluteDir();
        } else {
            baseDir = QDir::current();
        }
        return baseDir.absoluteFilePath(fileName).toLatin1().constData();
    }
    return fileName;
}

bool includeJsFile(const char *fileName) {
    if (!globalScriptRunnerInstance) {
        throw std::logic_error("a global script runner has to be registered before including js files");
    }

    fileName = makeIncludePathAbsolute(fileName);
    executionStack.push_back({fileName});
    int ret = globalScriptRunnerInstance->executeFile(fileName);
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
    define._method("programArguments", &programArguments);
    define._method("setExitCode", &setExitCode);
    define._method("include", &includeJsFile);
    define._method("__fileName__", &currentJsFileName);
    define._method("makeIncludePathAbsolute", &makeIncludePathAbsolute);
}


bool executeJs(const char *fileName)
{
    v8::Persistent<v8::Context> ctx = v8::Context::New();

    GDefineMetaNamespace define = GDefineMetaNamespace::declare("qt");
    registerQt(define);

    GScopedPointer<GScriptRunner> runner;
    GScopedInterface<IMetaService> service(createDefaultMetaService());
    runner.reset(createV8ScriptRunner(service.get(), ctx));
    GScopedInterface<IScriptObject> scriptObject(runner->getScripeObject());

    scriptObject->bindCoreService("cpgf", NULL);
    GScopedInterface<IMetaClass> metaClass(static_cast<IMetaClass *>(metaItemToInterface(define.getMetaClass())));
    scriptSetValue(scriptObject.get(), "qt", GScriptValue::fromClass(metaClass.get()));

    globalScriptRunnerInstance = runner.get();
    bool ret = includeJsFile(fileName);
    globalScriptRunnerInstance = nullptr;

    while (!v8::V8::IdleNotification()); // run GC
    clearV8DataPool();
    qtjs_binder::QtSignalConnectorBinder::reset();

    return ret;
}

} // namespace

int main(int argc, char * argv[])
{
    QApplication app(argc, argv);

    if ((argc > 1) && (!strcmp("-v", argv[1]))) {
        cout << "v8 version: "<<v8::V8::GetVersion() << endl;
        return 0;
    }

    const char * fileName = "main.js";
    if (argc > 1) {
        fileName = argv[1];
    }
    for (int i = 2; i < argc; i++) {
        __programArguments.append(argv[i]);
    }

    if (!executeJs(fileName)) {
        cerr << "Failed to execute " << fileName << ", maybe it doesn't exist?" << endl;
    }

    v8::V8::Dispose();

    return __exitCode;
}

