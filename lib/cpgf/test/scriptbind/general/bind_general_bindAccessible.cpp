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
void doTestBindAccessible(T * binding, TestScriptContext * context)
{
	GScopedInterface<IMetaClass> metaClass(context->getService()->findClassByName(REG_NAME_TestObject));
	GCHECK(metaClass);

	TestObject bound(10);
	bound.data.x = 0;
	bound.data.name = "";

	GScopedInterface<IMetaField> field;
	
	field.reset(metaClass->getField("data"));
	binding->bindAccessible("baData", &bound, field.get());

	if(context->isPython()) {
		QDO(baData.__get__(0).x = 38);
		QDO(baData.__get__(0).name = "aha");
	}
	else {
		QDO(baData.x = 38);
		QDO(baData.name = "aha");
	}

	GEQUAL(bound.data.x, 38);
	GEQUAL(bound.data.name, "aha");
}

void testBindAccessible(TestScriptContext * context)
{
	IScriptObject * bindingApi = context->getBindingApi();
	GScriptObject * bindingLib = context->getBindingLib();

	if(bindingLib) {
		doTestBindAccessible(bindingLib, context);
	}
	
	if(bindingApi) {
		doTestBindAccessible(bindingApi, context);
	}
}

#define CASE testBindAccessible
#include "../bind_testcase.h"




}
