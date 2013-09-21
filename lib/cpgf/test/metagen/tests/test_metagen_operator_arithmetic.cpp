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


void metagenTest_Operators_Add(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorArithmetic(3));

	QDO(b = a._opAdd(5));
	QASSERT(b.value == 8);

	QNEWOBJ(other, mtest.MetagenOperatorArithmetic(12));
	QDO(b = a._opAdd(other));
	QASSERT(b.value == 15);

	QDO(b = a._opAdd("abcd"));
	QASSERT(b.value == 7);
}

#define CASE metagenTest_Operators_Add
#include "do_testcase.h"


void metagenTest_Operators_Sub(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorArithmetic(20));

	QDO(b = a._opSub(5));
	QASSERT(b.value == 15);

	QNEWOBJ(other, mtest.MetagenOperatorArithmetic(12));
	QDO(b = a._opSub(other));
	QASSERT(b.value == 8);

	QDO(b = a._opSub("abcd"));
	QASSERT(b.value == 16);
}

#define CASE metagenTest_Operators_Sub
#include "do_testcase.h"


void metagenTest_Operators_Mul(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorArithmetic(3));

	QDO(b = a._opMul(5));
	QASSERT(b.value == 15);

	QNEWOBJ(other, mtest.MetagenOperatorArithmetic(12));
	QDO(b = a._opMul(other));
	QASSERT(b.value == 36);

	QDO(b = a._opMul("abcd"));
	QASSERT(b.value == 12);
}

#define CASE metagenTest_Operators_Mul
#include "do_testcase.h"


void metagenTest_Operators_Div(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorArithmetic(96));

	QDO(b = a._opDiv(3));
	QASSERT(b.value == 32);

	QNEWOBJ(other, mtest.MetagenOperatorArithmetic(12));
	QDO(b = a._opDiv(other));
	QASSERT(b.value == 8);

	QDO(b = a._opDiv("abcd"));
	QASSERT(b.value == 24);
}

#define CASE metagenTest_Operators_Div
#include "do_testcase.h"


void metagenTest_Operators_Mod(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorArithmetic(30));

	QDO(b = a._opMod(5));
	QASSERT(b.value == 0);

	QNEWOBJ(other, mtest.MetagenOperatorArithmetic(12));
	QDO(b = a._opMod(other));
	QASSERT(b.value == 6);

	QDO(b = a._opMod("abcd"));
	QASSERT(b.value == 2);
}

#define CASE metagenTest_Operators_Mod
#include "do_testcase.h"






}
