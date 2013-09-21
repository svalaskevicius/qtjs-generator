/*
  cpgf Library
  Copyright (C) 2011 - 2013 Wang Qi http://www.cpgf.org/
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


#include "../../testmetatraits.h"

#include "cpgf/scriptbind/gscriptbind.h"
#include "cpgf/scriptbind/gscriptbindapi.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/goutmain.h"

#include <iostream>

using namespace std;
using namespace cpgf;


template <typename T>
void bindClass(T * script, cpgf::IMetaService * service, const char * metaName, const char * bindName)
{
	using namespace cpgf;
	
	GScopedInterface<IMetaClass> metaClass(service->findClassByName(metaName));
	
	scriptSetValue(script, bindName, GScriptValue::fromClass(metaClass.get()));
}


template <typename T>
void bindMethod(T * script, cpgf::IMetaService * service, const char * metaName, const char * bindName)
{
	using namespace cpgf;
	
	GScopedInterface<IMetaModule> module(service->getModuleAt(0));
	GScopedInterface<IMetaClass> metaClass(module->getGlobalMetaClass());
	GScopedInterface<IMetaMethod> method(metaClass->getMethod(metaName));
	
	scriptSetValue(script, bindName, GScriptValue::fromMethod(NULL, method.get()));
}


template <typename T>
void bindBasicInfo(T * script, cpgf::IMetaService * service)
{
	bindClass(script, service, "metatest", "mtest");
	bindMethod(script, service, "scriptAssert", "scriptAssert");
	bindMethod(script, service, "scriptNot", "scriptNot");
}

void metagenBindBasicData(cpgf::GScriptObject * script, cpgf::IMetaService * service)
{
	bindBasicInfo(script, service);
}

void metagenBindBasicData(cpgf::IScriptObject * script, cpgf::IMetaService * service)
{
	bindBasicInfo(script, service);
}

void scriptAssert(bool b)
{
	if(! b) {
		cpgf::raiseException(1, "Script assertion failure!");
	}
}

void scriptNot(bool b)
{
	if(b) {
		cpgf::raiseException(1, "Script NOT assertion failure!");
	}
}

G_AUTO_RUN_BEFORE_MAIN()
{
	GDefineMetaGlobal()
		._method("scriptAssert", &scriptAssert)
		._method("scriptNot", &scriptNot)
	;
}


