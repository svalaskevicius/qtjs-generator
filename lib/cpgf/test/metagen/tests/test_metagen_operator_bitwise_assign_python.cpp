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


void metagenTest_Operators_Python_BitAndAssign(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorBitwiseAssign(255));

	QDO(a &= 5);
	QASSERT(a.value == 5);

	QNEWOBJ(other, mtest.MetagenOperatorBitwiseAssign(6));
	QDO(a &= other);
	QDO(a &= "abcd");
	QASSERT(a.value == 4);
}

#define CASE metagenTest_Operators_Python_BitAndAssign
#include "do_testcase_python.h"


void metagenTest_Operators_Python_BitOrAssign(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorBitwiseAssign(2));

	QDO(a |= 5);
	QASSERT(a.value == 7);

	QNEWOBJ(other, mtest.MetagenOperatorBitwiseAssign(6));
	QDO(a |= other);
	QDO(a |= "abcd");
	QASSERT(a.value == 7);
}

#define CASE metagenTest_Operators_Python_BitOrAssign
#include "do_testcase_python.h"


void metagenTest_Operators_Python_BitXorAssign(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorBitwiseAssign(10));

	QDO(a ^= 5);
	QASSERT(a.value == 15);

	QNEWOBJ(other, mtest.MetagenOperatorBitwiseAssign(6));
	QDO(a ^= other);
	QDO(a ^= "abcd");
	QASSERT(a.value == 13);
}

#define CASE metagenTest_Operators_Python_BitXorAssign
#include "do_testcase_python.h"


void metagenTest_Operators_Python_LeftShiftAssign(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorBitwiseAssign(3));

	QDO(a <<= 1);
	QASSERT(a.value == 6);

	QNEWOBJ(other, mtest.MetagenOperatorBitwiseAssign(2));
	QDO(a <<= other);
	QDO(a <<= "abcd");
	QASSERT(a.value == 384);
}

#define CASE metagenTest_Operators_Python_LeftShiftAssign
#include "do_testcase_python.h"


void metagenTest_Operators_Python_RightShiftAssign(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorBitwiseAssign(255));

	QDO(a >>= 1);
	QASSERT(a.value == 127);

	QNEWOBJ(other, mtest.MetagenOperatorBitwiseAssign(2));
	QDO(a >>= other);
	QDO(a >>= "abcd");
	QASSERT(a.value == 1);
}

#define CASE metagenTest_Operators_Python_RightShiftAssign
#include "do_testcase_python.h"



}
