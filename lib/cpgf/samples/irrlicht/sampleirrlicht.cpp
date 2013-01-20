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
#include "../samplescriptbindutil.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/gscopedinterface.h"

#include <iostream>

using namespace cpgf;
using namespace std;

int main(int argc, const char * argv[])
{
	const char * fileName = "irrlicht.js";

	if(argc > 1) {
		fileName = argv[1];
	}

	ScriptLanguage lang = getScriptLanguageFromFileName(fileName);
	
	cout << "Running " << getLanguageText(lang) << " script." << endl;

	intializeScriptEngine(lang);

	GScopedPointer<GScriptRunner> runner;
	GScopedInterface<IMetaService> service(createDefaultMetaService());
	
	runner.reset(createScriptRunnerFromScriptLanguage(lang, service.get()));

	GScopedInterface<IScriptObject> scriptObject(runner->getScripeObject());

	scriptObject->bindCoreService("cpgf", NULL);
	
	GScopedInterface<IMetaClass> metaClass(service->findClassByName("irrlicht"));
	
	scriptObject->bindClass("irr", metaClass.get());

	if(! runner->executeFile(fileName)) {
		cout << "Failed to execute " << fileName << ", maybe it doesn't exist?" << endl;
	}

	return 0;
}
