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


#include "../testscriptbind.h"
#include "../testscriptbindmetadata2.h"


namespace {

template <typename T>
void doTestGlobal(T * binding, TestScriptContext * context)
{
	GScopedInterface<IMetaClass> metaClass(context->getService()->findClassByName(REG_NAME_TestData));
	GCHECK(metaClass);
	
	GScopedPointer<TestData> dataLib(new TestData);
	GScopedPointer<TestData> dataApi(new TestData);
	dataLib->x = 10;
	dataLib->name = "abc";
	dataApi->x = 10;
	dataApi->name = "abc";

	binding->bindObject("data", dataLib.get(), metaClass.get(), false);
	
	QASSERT(data.x == 10)
	QASSERT(data.name == "abc")
	QDO(data.x = data.x + 1)
	
	GEQUAL(dataLib->x, 11);
	
	binding->nullifyValue("data");
	
	if(context->isLua()) {
		QASSERT(data == nil)
	}
	if(context->isV8()) {
		QASSERT(data == null)
	}
	if(context->isPython()) {
		QASSERT(data == None)
	}
}

void testGlobal(TestScriptContext * context)
{
	IScriptObject * bindingApi = context->getBindingApi();
	GScriptObject * bindingLib = context->getBindingLib();

	if(bindingLib) {
		doTestGlobal(bindingLib, context);
	}
	
	if(bindingApi) {
		doTestGlobal(bindingApi, context);
	}
}

#define CASE testGlobal
#include "../bind_testcase.h"


void testStaticMember(TestScriptContext * context)
{
	TestObject::staticValue = 0;
	GCHECK(TestObject::staticValue == 0);

	QDO(TestObject.staticValue = 10)
	GCHECK(TestObject::staticValue == 10);
	
	QDO(a = TestObject.incStaticValue())
	QASSERT(a == 11);
	GCHECK(TestObject::staticValue == 11);
}

#define CASE testStaticMember
#include "../bind_testcase.h"




}
