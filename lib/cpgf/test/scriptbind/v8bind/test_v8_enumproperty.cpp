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


namespace {

void testEnumObjectProperty(TestScriptContext * context)
{
	QNEWOBJ(a, DeriveA())

	QDO(namesA = new Array())
	QASSERT(namesA.indexOf("getA") < 0)
	QASSERT(namesA.indexOf("setData") < 0)
	QASSERT(namesA.indexOf("a") < 0)

	QDO(for(p in a) { namesA.push(p) })

	QASSERT(namesA.indexOf("getA") >= 0)
	QASSERT(namesA.indexOf("setData") >= 0)
	QASSERT(namesA.indexOf("a") >= 0)

	QNEWOBJ(b, DeriveB())
	QDO(namesB = new Array())
	QDO(for(p in b) { namesB.push(p) })
	QASSERT(namesB.indexOf("getA") >= 0)
	QASSERT(namesB.indexOf("setData") >= 0)
	QASSERT(namesB.indexOf("a") >= 0)
	QASSERT(namesB.indexOf("getB") >= 0)
	QASSERT(namesB.indexOf("b") >= 0)
}

#define CASE testEnumObjectProperty
#include "../testcase_v8.h"


void testEnumEnumProperty(TestScriptContext * context)
{
	QDO(namesA = new Array())
	QASSERT(namesA.indexOf("teCpp") < 0)
	QASSERT(namesA.indexOf("teLua") < 0)
	QASSERT(namesA.indexOf("teV8") < 0)

	QDO(for(p in TestEnum) { namesA.push(p) })

	QASSERT(namesA.indexOf("teCpp") >= 0)
	QASSERT(namesA.indexOf("teLua") >= 0)
	QASSERT(namesA.indexOf("teV8") >= 0)
}

#define CASE testEnumEnumProperty
#include "../testcase_v8.h"



}
