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

namespace {

int __exitCode = 1;
void setExitCode(int code) {
    __exitCode = code;
}

void registerQt(GDefineMetaNamespace &define) 
{
    meta_qtcore::registerMain_QtCore(define);
    meta_qtwidgets::registerMain_QtWidgets(define);

    qtjs_binder::QtSignalConnectorBinder::reset(new qtjs_binder::QtSignalConnector());
    define._method("connect", &qtjs_binder::QtSignalConnectorBinder::connect);
    define._method("setExitCode", &setExitCode );
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
    scriptObject->bindClass("qt", metaClass.get());

    bool ret = runner->executeFile(fileName);

    while (!v8::V8::IdleNotification()); // run GC
    clearV8DataPool();
    qtjs_binder::QtSignalConnectorBinder::reset();
    
    service->releaseReference();

    return ret;
}

} // namespace

int main(int argc, char * argv[])
{
    QApplication app(argc, argv);

	const char * fileName = "main.js";
	if(argc > 1) {
		fileName = argv[1];
	}

    if (!executeJs(fileName)) {
        cerr << "Failed to execute " << fileName << ", maybe it doesn't exist?" << endl;
    }

    v8::V8::Dispose();

	return __exitCode;
}

