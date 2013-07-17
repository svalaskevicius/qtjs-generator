/*
  cpgf Library
  Copyright (C) 2011, 2012 Wang Qi http://www.cpgf.org/
  All rights reserved.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/


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
#include "register_meta_qtwidgets.h"

#include <QtCore/QObject>
#include <QtCore/QSharedPointer>

#include "QtSignalConnector.h"

using namespace cpgf;
using namespace std;

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
    clearV8DataPool();
    qtjs_binder::QtSignalConnectorBinder::reset();
    
    }

    v8::V8::Dispose();

	return ret;
}

