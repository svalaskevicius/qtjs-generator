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


namespace {


void testHierarchyMethod(TestScriptContext * context)
{
	QNEWOBJ(e, DeriveE())
	DO("scriptAssert(e.getA() == \"DeriveE\")")

	QASSERT(e.getB() == Magic1 + 1)
	QASSERT(e.getC() == Magic2 + 2)
	QASSERT(e.getD() == Magic3 + 3)
	QASSERT(e.getE() == Magic1 + Magic2 + Magic3)

	QDO(a = DeriveE.pretendA())
	DO("scriptAssert(a.getA() == \"DeriveE\")")
	QERR(a.getB())
	QERR(a.getC())

	QNEWOBJ(d, DeriveD())
	DO("scriptAssert(d.getA() == \"DeriveA\")")
	QASSERT(d.getB() == Magic1)
	QASSERT(d.getC() == Magic2)
	QASSERT(d.getD() == Magic3)
}

#define CASE testHierarchyMethod
#include "../bind_testcase.h"


void testHierarchyData(TestScriptContext * context)
{
	QNEWOBJ(e, DeriveE())
	QDO(e.setData(8))

	QASSERT(e.e == 8 * 5)
	QASSERT(e.d == 8 * 4)
	QASSERT(e.c == 8 * 3)
	QASSERT(e.b == 8 * 2)
	QASSERT(e.a == 8 * 1)
}

#define CASE testHierarchyData
#include "../bind_testcase.h"



}
