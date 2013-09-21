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


namespace {


void metagenTest_Operators_Assign(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorOther(10));
	QNEWOBJ(b, mtest.MetagenOperatorOther(5));
	QASSERTNOT(b.value == 10);
	QDO(b._opAssign(a));
	QASSERT(b.value == 10);
}

#define CASE metagenTest_Operators_Assign
#include "do_testcase.h"


void metagenTest_Operators_Comma(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorOther(10));
	QDO(b = a._opComma(5));
	QASSERT(b.value == 15);
}

#define CASE metagenTest_Operators_Comma
#include "do_testcase.h"


void metagenTest_Operators_ArrayGet(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorOther(3));
	QDO(b = a._opArrayGet(5));
	QASSERT(b == 8);
	
	QDO(b = a._opArrayGet("abcd"));
	QASSERT(b == 7);
}

#define CASE metagenTest_Operators_ArrayGet
#include "do_testcase.h"


void metagenTest_Operators_ArraySet(TestScriptContext * context)
{
	QNEWOBJ(index, mtest.MetagenOperatorOther());
	
	QNEWOBJ(a, mtest.MetagenOperatorOther(3));
	QASSERT(a.f >= 2.9);
	QASSERT(a.f <= 3.1);
	
	QDO(b = a._opArrayGet(index));
	QASSERT(b >= 2.9);
	QASSERT(b <= 3.1);
	
	QDO(a._opArraySet(index, 8.0));
	QASSERT(a.f >= 7.9);
	QASSERT(a.f <= 8.1);
}

#define CASE metagenTest_Operators_ArraySet
#include "do_testcase.h"


void metagenTest_Operators_Address(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorOther(8));
	QDO(b = a._opAddress());
	QASSERT(b == 9);
}

#define CASE metagenTest_Operators_Address
#include "do_testcase.h"



void metagenTest_Operators_Derefer(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorOther(8));
	QDO(b = a._opDerefer());
	QASSERT(b == 7);
}

#define CASE metagenTest_Operators_Derefer
#include "do_testcase.h"


void metagenTest_Operators_Function(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorOther(8));
	QDO(b = a._opFunction("abcd", 5));
	QASSERT(b == 17);
	
	QDO(b = a._opFunction(1, 2, 3, 4, 5));
	QASSERT(b == 23);
}

#define CASE metagenTest_Operators_Function
#include "do_testcase.h"



}
