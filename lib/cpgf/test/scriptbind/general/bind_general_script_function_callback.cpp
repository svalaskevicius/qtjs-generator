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

string makeFunc(const string & name, TestScriptContext * context)
{
	if(context->isLua()) {
		return "function " + name + "(t, u) return t + u end";
	}
	if(context->isV8() || context->isSpiderMonkey()) {
		return "function " + name + "(t, u) { return t + u; }";
	}
	if(context->isPython()) {
		if(name == "") {
			return "lambda t, u: t + u";
		}
		else {
			return "def " + name + "(t, u): return t + u";
		}
	}

	return "";
}

template <typename T>
void doTestScriptFunctionCallback(T * binding, TestScriptContext * context)
{
	(void)binding;

	DO(makeFunc("fcallback", context))
	QDO(a = testAddCallback(fcallback))
	QASSERT(a == 11)
	
	DO(string("b = testAddCallback(") + makeFunc("", context) + ")")
	QASSERT(b == 11)
}

void testScriptFunctionCallback(TestScriptContext * context)
{
	GScriptObject * bindingLib = context->getBindingLib();
	IScriptObject * bindingApi = context->getBindingApi();

	if(bindingLib) {
		doTestScriptFunctionCallback(bindingLib, context);
	}
	
	if(bindingApi) {
		doTestScriptFunctionCallback(bindingApi, context);
	}
}

#define CASE testScriptFunctionCallback
#include "../bind_testcase.h"



template <typename T>
void doTestScriptFunctionProperty(T * binding, TestScriptContext * context)
{
	(void)binding;

	DO(makeFunc("fcallback", context))
	if(context->isPython()) {
		QDO(testScriptFunction.__set__(0, fcallback))
	}
	else {
		QDO(testScriptFunction = fcallback)
	}
	QDO(a = testExecAddCallback())
	QASSERT(a == 11)

	if(context->isPython()) {
		DO(string("testScriptFunction.__set__(0, lambda t, u : t + u )"))
	}
	else {
		DO(string("testScriptFunction = ") + makeFunc("", context) + "")
	}
	QDO(b = testExecAddCallback())
	QASSERT(b == 11)
}

void testScriptFunctionProperty(TestScriptContext * context)
{
	GScriptObject * bindingLib = context->getBindingLib();
	IScriptObject * bindingApi = context->getBindingApi();

	if(bindingLib) {
		doTestScriptFunctionProperty(bindingLib, context);
	}
	
	if(bindingApi) {
		doTestScriptFunctionProperty(bindingApi, context);
	}
}

#define CASE testScriptFunctionProperty
#include "../bind_testcase.h"




}
