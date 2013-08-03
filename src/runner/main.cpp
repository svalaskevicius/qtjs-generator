
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
#include "private/v8-profiler.h"

#include "register_meta_qtcore.h"
#include "register_meta_qtwidgets.h"

#include <QtCore/QObject>
#include <QtCore/QSharedPointer>

#include "QtSignalConnector.h"

using namespace cpgf;
using namespace std;

class HPOUT : public v8::OutputStream {
public:
    void EndOfStream() {}
    WriteResult WriteAsciiChunk(char *data, int size) {
        std::cout.write(data, size);
        return kContinue;
    }
};

int main(int argc, char * argv[])
{
    QApplication app(argc, argv);
int ret;
    {

	GDefineMetaNamespace define = GDefineMetaNamespace::declare("qt");
    meta_qtcore::registerMain_QtCore(define);
    meta_qtwidgets::registerMain_QtWidgets(define);

    qtjs_binder::QtSignalConnectorBinder::reset(new qtjs_binder::QtSignalConnector());
    define._method("connect", &qtjs_binder::QtSignalConnectorBinder::connect);

	const char * fileName = "main.js";
	
	if(argc > 1) {
		fileName = argv[1];
	}

	cout << "Running.." << endl;
    GScopedPointer<GScriptRunner> runner;
    GScopedInterface<IMetaService> service(createDefaultMetaService());
    runner.reset(createV8ScriptRunner(service.get()));
    GScopedInterface<IScriptObject> scriptObject(runner->getScripeObject());

    scriptObject->bindCoreService("cpgf", NULL);


    GScopedInterface<IMetaClass> metaClass(static_cast<IMetaClass *>(metaItemToInterface(define.getMetaClass())));
    scriptObject->bindClass("qt", metaClass.get());

    if(!runner->executeFile(fileName)) {
        cout << "Failed to execute " << fileName << ", maybe it doesn't exist?" << endl;
    }

    ret = app.exec();

    while (!v8::V8::IdleNotification()); // run GC

    v8::Local<v8::String> title = v8::String::New("end");
    const v8::HeapSnapshot *heapsnap = v8::HeapProfiler::TakeSnapshot(title);
    HPOUT hpout;
    heapsnap->Serialize(&hpout, v8::HeapSnapshot::kJSON);

    clearV8DataPool();
    qtjs_binder::QtSignalConnectorBinder::reset();
    
    service->releaseReference();
    }

    v8::V8::Dispose();

	return ret;
}

