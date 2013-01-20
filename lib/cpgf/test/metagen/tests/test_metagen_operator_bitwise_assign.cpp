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


#include "testmetagen.h"


namespace {


void metagenTest_Operators_BitAndAssign(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorBitwiseAssign(255));

	QDO(a = a._opBitAndAssign(5));
	QASSERT(a.value == 5);

	QNEWOBJ(other, mtest.MetagenOperatorBitwiseAssign(6));
	QDO(a = a._opBitAndAssign(other)._opBitAndAssign("abcd"));
	QASSERT(a.value == 4);
}

#define CASE metagenTest_Operators_BitAndAssign
#include "do_testcase.h"


void metagenTest_Operators_BitOrAssign(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorBitwiseAssign(2));

	QDO(a = a._opBitOrAssign(5));
	QASSERT(a.value == 7);

	QNEWOBJ(other, mtest.MetagenOperatorBitwiseAssign(6));
	QDO(a = a._opBitOrAssign(other)._opBitOrAssign("abcd"));
	QASSERT(a.value == 7);
}

#define CASE metagenTest_Operators_BitOrAssign
#include "do_testcase.h"


void metagenTest_Operators_BitXorAssign(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorBitwiseAssign(10));

	QDO(a = a._opBitXorAssign(5));
	QASSERT(a.value == 15);

	QNEWOBJ(other, mtest.MetagenOperatorBitwiseAssign(6));
	QDO(a = a._opBitXorAssign(other)._opBitXorAssign("abcd"));
	QASSERT(a.value == 13);
}

#define CASE metagenTest_Operators_BitXorAssign
#include "do_testcase.h"


void metagenTest_Operators_LeftShiftAssign(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorBitwiseAssign(3));

	QDO(a = a._opLeftShiftAssign(1));
	QASSERT(a.value == 6);

	QNEWOBJ(other, mtest.MetagenOperatorBitwiseAssign(2));
	QDO(a = a._opLeftShiftAssign(other)._opLeftShiftAssign("abcd"));
	QASSERT(a.value == 384);
}

#define CASE metagenTest_Operators_LeftShiftAssign
#include "do_testcase.h"


void metagenTest_Operators_RightShiftAssign(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorBitwiseAssign(255));

	QDO(a = a._opRightShiftAssign(1));
	QASSERT(a.value == 127);

	QNEWOBJ(other, mtest.MetagenOperatorBitwiseAssign(2));
	QDO(a = a._opRightShiftAssign(other)._opRightShiftAssign("abcd"));
	QASSERT(a.value == 1);
}

#define CASE metagenTest_Operators_RightShiftAssign
#include "do_testcase.h"



}
