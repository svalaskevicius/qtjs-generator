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


namespace {

template <typename T>
void doTestAccessData(T * binding, TestScriptContext * context)
{
	QVARNEWOBJ(a, TestObject())
	QASSERT(a.data.x == 0)
	QASSERT(a.data.name == "")

	TestObject * obj;
	
	obj = static_cast<TestObject *>(scriptGetValue(binding, "a").toObjectAddress(NULL, NULL));
	obj->data.x = 38;
	obj->data.name = "blah";

	QASSERT(a.data.x == 38)
	QASSERT(a.data.name == "blah")

	QDO(a.data.x = 5)
	QDO(a.data.name = "script")

	obj = static_cast<TestObject *>(scriptGetValue(binding, "a").toObjectAddress(NULL, NULL));
	GCHECK(obj->data.x == 5);
	GCHECK(obj->data.name == "script");

	QVARNEWOBJ(b, TestData())
	QDO(b.x = 96)
	QDO(b.name = "what")
	QDO(a.data = b)

	obj = static_cast<TestObject *>(scriptGetValue(binding, "a").toObjectAddress(NULL, NULL));
	GCHECK(obj->data.x == 96);
	GCHECK(obj->data.name == "what");
}

void testAccessData(TestScriptContext * context)
{
	IScriptObject * bindingApi = context->getBindingApi();
	GScriptObject * bindingLib = context->getBindingLib();

	if(bindingLib) {
		doTestAccessData(bindingLib, context);
	}
	
	if(bindingApi) {
		doTestAccessData(bindingApi, context);
	}
}


#define CASE testAccessData
#include "../bind_testcase.h"


template <typename T>
void doTestRefData(T * binding, TestScriptContext * context)
{
	QVARNEWOBJ(a, TestObject())
	QASSERT(a.data.x == 0)
	QASSERT(a.data.name == "")

	TestObject * obj;
	
	QVAR(b = a.refData())
	QVAR(c = a.constRefData())
	
	obj = static_cast<TestObject *>(scriptGetValue(binding, "a").toObjectAddress(NULL, NULL));
	obj->data.x = 38;
	obj->data.name = "blah";

	QASSERT(b.x == 38)
	QASSERT(b.name == "blah")
	QASSERT(c.x == 38)
	QASSERT(c.name == "blah")

	QDO(b.x = 96)
	QDO(b.name = "what")

	QDO(b = a.pointerData())
	QDO(c = a.constPointerData())
	
	obj = static_cast<TestObject *>(scriptGetValue(binding, "a").toObjectAddress(NULL, NULL));
	GCHECK(obj->data.x == 96);
	GCHECK(obj->data.name == "what");
	
	QASSERT(b.x == 96)
	QASSERT(b.name == "what")
	QASSERT(c.x == 96)
	QASSERT(c.name == "what")

	QDO(b.x = 18)
	QDO(b.name = "how")
	QASSERT(c.x == 18)
	QASSERT(c.name == "how")

	obj = static_cast<TestObject *>(scriptGetValue(binding, "a").toObjectAddress(NULL, NULL));
	GCHECK(obj->data.x == 18);
	GCHECK(obj->data.name == "how");

	QERR(c.x = 1)
	QERR(c.name = "")
}

void testRefData(TestScriptContext * context)
{
	IScriptObject * bindingApi = context->getBindingApi();
	GScriptObject * bindingLib = context->getBindingLib();

	if(bindingLib) {
		doTestRefData(bindingLib, context);
	}
	
	if(bindingApi) {
		doTestRefData(bindingApi, context);
	}
}


#define CASE testRefData
#include "../bind_testcase.h"


template <typename T>
void doTestDataConstness(T * binding, TestScriptContext * context)
{
	QVARNEWOBJ(a, TestObject())
	
	QVAR(b = a.selfConst())
	QASSERT(a.data.x == 0)
	QASSERT(a.data.name == "")

	TestObject * obj;
	
	obj = static_cast<TestObject *>(scriptGetValue(binding, "a").toObjectAddress(NULL, NULL));
	obj->data.x = 38;
	obj->data.name = "blah";

	QASSERT(b.data.x == 38)
	QASSERT(b.data.name == "blah")

	QERR(b.data.x = 1)
	QERR(b.data.name = "")
}

void testDataConstness(TestScriptContext * context)
{
	IScriptObject * bindingApi = context->getBindingApi();
	GScriptObject * bindingLib = context->getBindingLib();

	if(bindingLib) {
		doTestDataConstness(bindingLib, context);
	}
	
	if(bindingApi) {
		doTestDataConstness(bindingApi, context);
	}
}


#define CASE testDataConstness
#include "../bind_testcase.h"


}
