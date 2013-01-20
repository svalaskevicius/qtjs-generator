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


#include "../samplescriptbindutil.h"

#include "cpgf/scriptbind/gscriptbindapi.h"
#include "cpgf/gmetaapi.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/gscopedptr.h"
#include "cpgf/gapiutil.h"
#include "cpgf/gscopedinterface.h"

#include <cmath>
#include <cstring>
#include <iostream>

using namespace std;
using namespace cpgf;

void scriptTrace(const char * s)
{
	cout << "script message: " << s << endl;
}

void run(GScriptRunner * runner, const char * fileName)
{
	GScopedInterface<IMetaService> service(runner->getService());
	GScopedInterface<IScriptObject> scriptObject(runner->getScripeObject());
	GScopedInterface<IMetaClass> metaClass(service->findClassByName("sfml"));
	scriptObject->bindClass("sfml", metaClass.get());
	
	metaClass.reset(service->findClassByName("test"));
	scriptObject->bindClass("test", metaClass.get());

	if(! runner->executeFile(fileName)) {
		cout << "Failed to execute " << fileName << ", maybe it doesn't exist?" << endl;
	}
}

int main(int argc, char * argv[])
{
	const char * fileName = "sfml.js";
	
	if(argc > 1) {
		fileName = argv[1];
	}
	
	ScriptLanguage lang = getScriptLanguageFromFileName(fileName);
	
	cout << "Executing file " << fileName << " as " << getLanguageText(lang) << endl;

	GDefineMetaGlobal()
		._class(
			GDefineMetaNamespace::declare("test")
				._method("scriptTrace", &scriptTrace)
		)
	;

	GScopedInterface<IMetaService> service(createDefaultMetaService());

	intializeScriptEngine(lang);

	GScopedPointer<GScriptRunner> runner(createScriptRunnerFromScriptLanguage(lang, service.get()));
	
	run(runner.get(), fileName);
	
	finalizeScriptEngine(lang);
	
	return 0;
}
