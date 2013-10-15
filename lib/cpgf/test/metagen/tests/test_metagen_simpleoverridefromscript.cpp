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


#include "testmetagen.h"
#include "../include/simpleoverridefromscript.h"
#include "../metadata/include/meta_test_simpleoverridefromscript.h"


using namespace meta_test;
using namespace std;

namespace {


template <typename T>
void doTestSimpleOverrideFromScript_OverrideFromScriptClass(T * binding, TestScriptContext * context)
{
	if(context->isLua()) {
		QDO(function overrideGetValue(me) return me.super_getValue() + 15 end)
		QDO(function overrideGetName(me) return "abc" end)
	}
	if(context->isV8() || context->isSpiderMonkey()) {
		QDO(function overrideGetValue(me) { return me.super_getValue() + 15; })
		QDO(function overrideGetName(me) { return "abc"; })
	}
	if(context->isPython()) {
		QDO(def overrideGetValue(me): return me.super_getValue() + 15)
		QDO(def overrideGetName(me): return "abc")
	}

	QDO(cpgf._import("cpgf", "builtin.core"));
	QDO(DerivedClass = cpgf.cloneClass(mtest.SimpleOverrideWrapper))
	QDO(GrandDerivedClass = cpgf.cloneClass(DerivedClass))

	QVARNEWOBJ(a, GrandDerivedClass(3))
	QASSERT(a.getValue() == 3);
	QDO(GrandDerivedClass.getValue = overrideGetValue)
	QASSERT(a.getValue() == 18);
	
	QVARNEWOBJ(d, mtest.SimpleOverrideWrapper(3))
	QASSERT(d.getValue() == 3);
	QNEWOBJ(d, DerivedClass(3))
	QASSERT(d.getValue() == 3);

	QVARNEWOBJ(b, GrandDerivedClass(5))
	QASSERT(b.getValue() == 20);
	QVARNEWOBJ(c, mtest.SimpleOverrideWrapper(3))
	QASSERT(c.getValue() == 3);

	SimpleOverrideWrapper * objA = static_cast<SimpleOverrideWrapper *>(scriptGetValue(binding, "a").toObjectAddress(NULL, NULL));
	GEQUAL(18, objA->getValue());
	
	QDO(GrandDerivedClass.getName = overrideGetName);
	QASSERT(a.getName() == "abc");
	
	QASSERT(a.baseOnly() == 38);
}

void testSimpleOverrideFromScript_OverrideFromScriptClass(TestScriptContext * context)
{
	GScriptObject * bindingLib = context->getBindingLib();
	IScriptObject * bindingApi = context->getBindingApi();

	if(bindingLib) {
		doTestSimpleOverrideFromScript_OverrideFromScriptClass(bindingLib, context);
	}
	
	if(bindingApi) {
		doTestSimpleOverrideFromScript_OverrideFromScriptClass(bindingApi, context);
	}
}

#define CASE testSimpleOverrideFromScript_OverrideFromScriptClass
#include "do_testcase.h"


template <typename T>
void doTestSimpleOverrideFromScript_OverrideFromScriptObject(T * binding, TestScriptContext * context)
{
	if(context->isLua()) {
		QDO(function overrideGetValue(me) return me.super_getValue() + 5 end)
		QDO(function overrideGetName(me) return "abc" end)
	}
	if(context->isV8() || context->isSpiderMonkey()) {
		QDO(function overrideGetValue(me) { return 2 + 5; })
		QDO(function overrideGetName(me) { return "abc"; })
		QDO(function overrideGetAnother(me) { return 2; })
	}
	if(context->isPython()) {
		QDO(def overrideGetValue(me): return me.super_getValue() + 5)
		QDO(def overrideGetName(me): return "abc")
	}

	QVARNEWOBJ(a, mtest.SimpleOverrideWrapper(2))
	
	QASSERT(a.getValue() == 2);
	QDO(a.getValue = overrideGetValue);
	QASSERT(a.getValue() == 7);

	QVARNEWOBJ(b, mtest.SimpleOverrideWrapper(6))
	QASSERT(b.getValue() == 6);

	SimpleOverrideWrapper * objA = static_cast<SimpleOverrideWrapper *>(scriptGetValue(binding, "a").toObjectAddress(NULL, NULL));
	GEQUAL(7, objA->getValue());

	QDO(a.getName = overrideGetName);
	QASSERT(a.getName() == "abc");

	GEQUAL(string("abc"), objA->getName());

	QASSERT(a.baseOnly() == 38);
}

void testSimpleOverrideFromScript_OverrideFromScriptObject(TestScriptContext * context)
{
	GScriptObject * bindingLib = context->getBindingLib();
	IScriptObject * bindingApi = context->getBindingApi();

	if(bindingLib) {
		doTestSimpleOverrideFromScript_OverrideFromScriptObject(bindingLib, context);
	}
	
	if(bindingApi) {
		doTestSimpleOverrideFromScript_OverrideFromScriptObject(bindingApi, context);
	}
}

#define CASE testSimpleOverrideFromScript_OverrideFromScriptObject
#include "do_testcase.h"



}
