
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

#include "QtSignalConnector.h"

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

void registerQt(GDefineMetaNamespace &define)
{
    meta_qtcore::registerMain_QtCore(define);
    meta_qtgui::registerMain_QtGui(define);
    meta_qtwidgets::registerMain_QtWidgets(define);
    meta_qtqml::registerMain_QtQml(define);

    qtjs_binder::QtSignalConnectorBinder::reset(new qtjs_binder::QtSignalConnector());
    define._method("connect", &qtjs_binder::QtSignalConnectorBinder::connect);
    define._method("programArguments", &programArguments);
    define._method("setExitCode", &setExitCode);
}

bool executeJs(const char *fileName)
{
    GDefineMetaNamespace define = GDefineMetaNamespace::declare("qt");
    registerQt(define);

    GScopedPointer<GScriptRunner> runner;
    GScopedInterface<IMetaService> service(createDefaultMetaService());
    runner.reset(createV8ScriptRunner(service.get()));
    GScopedInterface<IScriptObject> scriptObject(runner->getScripeObject());

    scriptObject->bindCoreService("cpgf", NULL);
    GScopedInterface<IMetaClass> metaClass(static_cast<IMetaClass *>(metaItemToInterface(define.getMetaClass())));
    scriptSetValue(scriptObject.get(), "qt", GScriptValue::fromClass(metaClass.get()));

    bool ret = runner->executeFile(fileName);

    while (!v8::V8::IdleNotification()); // run GC
    clearV8DataPool();
    qtjs_binder::QtSignalConnectorBinder::reset();

    return ret;
}

} // namespace

int main(int argc, char * argv[])
{
    QApplication app(argc, argv);

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

