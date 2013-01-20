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


void Method_OverloadGlobal(TestScriptContext * context)
{
	QASSERT(testAdd(25) == 38 + 25)
	QASSERT(testAdd(7, 8) == 2 + 7 + 8)
	QASSERT(testAdd(9, 7, 8) == 3 + 9 + 7 + 8)
	QASSERT(testAdd(9, 7, 8, 38, 68) == 3 + 9 + 7 + 8 + 38 + 68)
}


#define CASE Method_OverloadGlobal
#include "../bind_testcase.h"



void Method_Overload(TestScriptContext * context)
{
	QNEWOBJ(a, TestObject())
	QASSERT(a.methodOverload(2, 3) == 2 * 3)
			
	QNEWOBJ(a, TestObject())
	QNEWOBJ(b, TestObject(2))
	QASSERT(a.methodOverload(b, 3) == 2 + 3)
			
	QNEWOBJ(a, TestObject())
	QNEWOBJ(b, TestObject(2))
	QASSERT(a.methodOverload(3, b) == 2 + 3 + 1)
			
	QNEWOBJ(a, TestObject())
	QASSERT(a.methodOverload("ab", 3) == 2 + 3)
			
	QNEWOBJ(a, TestObject())
	QASSERT(a.methodOverload(3, "ab") == 2 + 3 + 1)
}


#define CASE Method_Overload
#include "../bind_testcase.h"



void Method_OverloadObject(TestScriptContext * context)
{
	QNEWOBJ(a, TestObject())
	QNEWOBJ(b, TestBase())
	QASSERT(a.methodOverloadObject(b) == Magic1)
			
	QNEWOBJ(a, TestObject())
	QNEWOBJ(b, TestA())
	QASSERT(a.methodOverloadObject(b) == Magic2)
			
	QNEWOBJ(a, TestObject())
	QNEWOBJ(b, TestB())
	QASSERT(a.methodOverloadObject(b) == Magic3)
			
	QNEWOBJ(a, TestObject())
	QNEWOBJ(b, TestC())
	QASSERT(a.methodOverloadObject(b) == Magic1 + Magic2)
}

#define CASE Method_OverloadObject
#include "../bind_testcase.h"



}
