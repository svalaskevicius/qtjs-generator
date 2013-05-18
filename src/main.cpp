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


#include "cpgf/gmetadefine.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/gscopedinterface.h"
#include "cpgf/scriptbind/gv8runner.h"
#include "cpgf/scriptbind/gv8bind.h"

#include <iostream>
#include <string.h>
#include "v8.h"

#include "register_meta_qtcore.h"

#include <QtCore/QObject>


using namespace cpgf;
using namespace std;

void connectToSignal(QObject *obj, QString signal, IScriptFunction * callback ) {
    cout << "connect! " << endl;
                                                                                                       
    cpgf::GVariantData params[REF_MAX_ARITY];
    params[0] = GVariant("testparam").takeData();
    GVariant result;

    callback->invoke(&result.refData(), params, 1);
    //callback->invokeIndirectly(&result.refData(), params, 1);

//    delete params[0];
}

// object, signal, callback
// v8::Handle<v8::Value> V8ConnectToSignal()
int main(int argc, char * argv[])
{
	GDefineMetaNamespace define = GDefineMetaNamespace::declare("qt");
    meta_qtcore::registerMain_QtCore(define);

    define._method("connect", &connectToSignal);

	const char * fileName = "main.js";
	
	if(argc > 1) {
		fileName = argv[1];
	}

	cout << "Running.." << endl;
    {	
        GScopedInterface<IMetaService> service(createDefaultMetaService());
        GScopedPointer<GScriptRunner> runner(createV8ScriptRunner(service.get()));
        GScopedInterface<IScriptObject> scriptObject(runner->getScripeObject());

        scriptObject->bindCoreService("cpgf", NULL);
	

        GScopedInterface<IMetaClass> metaClass(static_cast<IMetaClass *>(metaItemToInterface(define.getMetaClass())));
        scriptObject->bindClass("qt", metaClass.get());

        if(!runner->executeFile(fileName)) {
            cout << "Failed to execute " << fileName << ", maybe it doesn't exist?" << endl;
        }
    }
    while (!v8::V8::IdleNotification()); // run GC
    clearV8DataPool();
	return 0;
}

