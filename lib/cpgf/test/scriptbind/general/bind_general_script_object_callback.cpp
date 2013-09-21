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


#include "../testscriptbind.h"

#include "cpgf/scriptbind/gscriptbindutil.h"


namespace {

string makeObject(const string & name, TestScriptContext * context)
{
	if(context->isLua()) {
		return "" + name + (name == "" ? "" : " = ") + " { myInt = 20 }";
	}
	if(context->isV8() || context->isSpiderMonkey()) {
//		return "function " + name + "() { this.myInt = 20; }";
		return "function xxx() { this.myInt = 20; }; " + name + " = new xxx();";
	}
	if(context->isPython()) {
		return "" + name + (name == "" ? "" : " = ") + " { 'myInt' : 20 }";
	}

	return "";
}

template <typename T>
void doTestScriptObjectCallback(T * binding, TestScriptContext * context)
{
	(void)binding;

	DO(makeObject("fcallback", context))
	QNEWOBJ(a, TestObject())
	QDO(b = a.scriptObjectCallback(fcallback))
	QASSERT(b == 20 + 38)
	
	if(context->isV8() || context->isSpiderMonkey()) {
		return;
	}

	DO(string("b = a.scriptObjectCallback(") + makeObject("", context) + ")")
	QASSERT(b == 20 + 38)
}

void testScriptObjectCallback(TestScriptContext * context)
{
	GScriptObject * bindingLib = context->getBindingLib();
	IScriptObject * bindingApi = context->getBindingApi();

	if(bindingLib) {
		doTestScriptObjectCallback(bindingLib, context);
	}
	
	if(bindingApi) {
		doTestScriptObjectCallback(bindingApi, context);
	}
}

#define CASE testScriptObjectCallback
#include "../bind_testcase.h"




}
