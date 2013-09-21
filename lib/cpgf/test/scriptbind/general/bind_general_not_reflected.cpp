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
void doTestNotReflected(T * binding, TestScriptContext * context)
{
	(void)binding;

	QVARNEWOBJ(obj, TestObject())
	QVAR(a = obj.pointerRaw())
	QASSERT(obj.isRawPointer(a))
	QASSERT(obj.isRawRef(a))
	QDO(obj.setRaw(a, 38, "what"))

	QVARNEWOBJ(obj2, TestObject())
	QVAR(b = obj2.refRaw())
	QASSERT(obj2.isRawPointer(b))
	QASSERT(obj2.isRawRef(b))
	QDO(obj2.setRaw(b, 19, "how"))

	QERR(obj2.isRawPointer(18))
	QERR(obj2.isRawPointer("cd"))
	
	QERR(obj2.isRawRef(0))
	QERR(obj2.isRawRef("cd"))
}

void testNotReflected(TestScriptContext * context)
{
	IScriptObject * bindingApi = context->getBindingApi();
	GScriptObject * bindingLib = context->getBindingLib();

	GVariant a;
	GVariant b;

	if(bindingLib) {
		doTestNotReflected(bindingLib, context);

		a = bindingLib->getValue("a").toRaw();
		b = bindingLib->getValue("b").toRaw();
	}
	
	if(bindingApi) {
		doTestNotReflected(bindingApi, context);
		
		a = scriptGetValue(bindingApi, "a").toRaw();
		b = scriptGetValue(bindingApi, "b").toRaw();
	}

	GCHECK(!a.isEmpty());
	GCHECK(!b.isEmpty());

	GCHECK(fromVariant<RawData *>(a)->n == 38);
	GCHECK(fromVariant<RawData *>(a)->s == "what");

	GCHECK(fromVariant<RawData &>(b).n == 19);
	GCHECK(fromVariant<RawData &>(b).s == "how");
}

#define CASE testNotReflected
#include "../bind_testcase.h"



}
