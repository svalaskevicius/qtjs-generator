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
#include "../testscriptbindmetadata2.h"

#include "cpgf/scriptbind/gscriptbindutil.h"

namespace {


template <typename T>
void doTestInvokeScriptFunction(T * binding, TestScriptContext * context)
{
	if(context->isLua()) {
		QDO(function funcAdd(a, b) return a + b end)
		QDO(function funcLen(a, b) return string.len(a) + b end)
		QDO(function funcTestData(a) return a.x + string.len(a.name) end)
		QDO(function funcNewTestData() a = TestData() a.x = 3 a.name = "def" return a end)
	}
	if(context->isV8() || context->isSpiderMonkey()) {
		QDO(function funcAdd(a, b) { return a + b; })
		QDO(function funcLen(a, b) { return a.length + b; })
		QDO(function funcTestData(a) { return a.x + a.name.length; })
		QDO(function funcNewTestData() { a = new TestData(); a.x = 3; a.name = "def"; return a; })
	}
	if(context->isPython()) {
		QDO(def funcAdd(a, b): return a + b)
		QDO(def funcLen(a, b): return len(a) + b)
		QDO(def funcTestData(a): return a.x + len(a.name))
		QDO(t = None) // we have to use a global variable to reference to the new object, otherwise the returned object will be released after returned.
		DO("def funcNewTestData(): \n\tglobal t \n\tt = TestData() \n\tt.x = 3 \n\tt.name = 'def' \n\treturn t")
	}

	GVariant result;
	
	TestData data;
	data.x = 5;
	data.name = "abc";
	
	result = invokeScriptFunction(binding, "funcAdd", 8, 2);
	GEQUAL(fromVariant<int>(result), 10);
		
	result = invokeScriptFunction(binding, "funcLen", "abc", 2);
	GEQUAL(fromVariant<int>(result), 5);

	result = invokeScriptFunction(binding, "funcTestData", &data);
	GEQUAL(fromVariant<int>(result), 8);

	result = 0;
	GDIFF(fromVariant<int>(result), 8);

	result = invokeScriptFunction(binding, "funcTestData", &data);
	GEQUAL(fromVariant<int>(result), 8);

	TestData * pdata;
	result = invokeScriptFunction(binding, "funcNewTestData");
	pdata = fromVariant<TestData *>(result);
	GEQUAL(pdata->x, 3);
	GEQUAL(pdata->name, "def");
}

void testInvokeScriptFunction(TestScriptContext * context)
{
	GScriptObject * bindingLib = context->getBindingLib();
	IScriptObject * bindingApi = context->getBindingApi();

	if(bindingLib) {
		doTestInvokeScriptFunction(bindingLib, context);
	}
	
	if(bindingApi) {
		doTestInvokeScriptFunction(bindingApi, context);
	}
}

#define CASE testInvokeScriptFunction
#include "../bind_testcase.h"


template <typename T>
void doTestInvokeCppFunction(T * binding, TestScriptContext * context)
{
	(void)context;

	GVariant result;
	
	result = invokeScriptFunction(binding, "testAdd", 25);
	GEQUAL(fromVariant<int>(result), 38 + 25);
		
	result = invokeScriptFunction(binding, "testAdd", 7, 8);
	GEQUAL(fromVariant<int>(result), 2 + 7 + 8);

	result = invokeScriptFunction(binding, "testAdd", 9, 7, 8);
	GEQUAL(fromVariant<int>(result), 3 + 9 + 7 + 8);

	result = invokeScriptFunction(binding, "testAdd", 9, 7, 8, 38, 68);
	GEQUAL(fromVariant<int>(result), 3 + 9 + 7 + 8 + 38 + 68);
}

void testInvokeCppFunction(TestScriptContext * context)
{
	GScriptObject * bindingLib = context->getBindingLib();
	IScriptObject * bindingApi = context->getBindingApi();

	if(bindingLib) {
		doTestInvokeCppFunction(bindingLib, context);
	}
	
	if(bindingApi) {
		doTestInvokeCppFunction(bindingApi, context);
	}
}


#define CASE testInvokeCppFunction
#include "../bind_testcase.h"




}
