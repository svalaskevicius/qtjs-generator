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


void MethodIndirectInvoke(TestScriptContext * context)
{
	QDO(a = TestObject())
	QDO(a.value = 1)
	QASSERT(a.value == 1)

	QDO(b = TestObject())
	QDO(b.value = 8)
	QASSERT(b.value == 8)

	QDO(f = a.add)
	QASSERT(f(2) == 3)

	QDO(f = b.add)
	QASSERT(f(2) == 10)
}

#define CASE MethodIndirectInvoke
#include "../testcase_python.h"


void OverloadMethodIndirectInvoke(TestScriptContext * context)
{
	QDO(a = TestObject())
	QDO(a.value = 1)
	QASSERT(a.value == 1)

	QDO(b = TestObject())
	QDO(b.value = 8)
	QASSERT(b.value == 8)

	QDO(f = a.methodOverload)
	QASSERT(f(2, 3) == 2 * 3)
	QASSERT(f(TestObject(2), 3) == 2 + 3)
	QASSERT(f(3, TestObject(2)) == 2 + 3 + 1)
	QASSERT(f("ab", 3) == 2 + 3)
	QASSERT(f(3, "ab") == 2 + 3 + 1)

	QDO(g = b.methodOverload)
	QDO(f = g)
	QASSERT(f(5, 3) == 5 * 3)
	QASSERT(f(TestObject(5), 3) == 5 + 3)
	QASSERT(f(3, TestObject(2)) == 2 + 3 + 1)
	QASSERT(f("ab", 3) == 2 + 3)
	QASSERT(f(3, "ab") == 2 + 3 + 1)
}

#define CASE OverloadMethodIndirectInvoke
#include "../testcase_python.h"



}
