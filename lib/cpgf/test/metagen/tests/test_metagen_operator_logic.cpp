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


void metagenTest_Operators_Greater(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorLogic(10));

	QDO(b = a._opGreater(5));
	QASSERT(b);

	QNEWOBJ(a, mtest.MetagenOperatorLogic(3));
	QNEWOBJ(other, mtest.MetagenOperatorLogic(3));
	QDO(b = a._opGreater(other));
	QASSERTNOT(b);

	QDO(b = a._opGreater("abcd"));
	QASSERTNOT(b);
}

#define CASE metagenTest_Operators_Greater
#include "do_testcase.h"


void metagenTest_Operators_GreaterEqual(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorLogic(5));

	QDO(b = a._opGreaterEqual(5));
	QASSERT(b);

	QDO(b = a._opGreaterEqual(2));
	QASSERT(b);

	QNEWOBJ(a, mtest.MetagenOperatorLogic(0));
	QNEWOBJ(other, mtest.MetagenOperatorLogic(6));
	QDO(b = a._opGreaterEqual(other));
	QASSERTNOT(b);

	QDO(b = a._opGreaterEqual("abcd"));
	QASSERTNOT(b);
}

#define CASE metagenTest_Operators_GreaterEqual
#include "do_testcase.h"


void metagenTest_Operators_Less(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorLogic(6));

	QDO(b = a._opLess(8));
	QASSERT(b);

	QNEWOBJ(a, mtest.MetagenOperatorLogic(6));
	QNEWOBJ(other, mtest.MetagenOperatorLogic(6));
	QDO(b = a._opLess(other));
	QASSERTNOT(b);

	QDO(b = a._opLess("abcd"));
	QASSERTNOT(b);
}

#define CASE metagenTest_Operators_Less
#include "do_testcase.h"


void metagenTest_Operators_LessEqual(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorLogic(3));

	QDO(b = a._opLessEqual(5));
	QASSERT(b);

	QDO(b = a._opLessEqual(3));
	QASSERT(b);

	QNEWOBJ(a, mtest.MetagenOperatorLogic(6));
	QNEWOBJ(other, mtest.MetagenOperatorLogic(5));
	QDO(b = a._opLessEqual(other));
	QASSERTNOT(b);

	QDO(b = a._opLessEqual("abcd"));
	QASSERTNOT(b);
}

#define CASE metagenTest_Operators_LessEqual
#include "do_testcase.h"


void metagenTest_Operators_And(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorLogic(3));

	QDO(b = a._opAnd(5));
	QASSERT(b);

	QNEWOBJ(a, mtest.MetagenOperatorLogic(0));
	QNEWOBJ(other, mtest.MetagenOperatorLogic(6));
	QDO(b = a._opAnd(other));
	QASSERTNOT(b);

	QDO(b = a._opAnd("abcd"));
	QASSERTNOT(b);
}

#define CASE metagenTest_Operators_And
#include "do_testcase.h"


void metagenTest_Operators_Or(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorLogic(3));

	QDO(b = a._opOr(5));
	QASSERT(b);

	QDO(b = a._opOr(0));
	QASSERT(b);

	QNEWOBJ(a, mtest.MetagenOperatorLogic(0));
	QNEWOBJ(other, mtest.MetagenOperatorLogic(0));
	QDO(b = a._opOr(other));
	QASSERTNOT(b);

	QDO(b = a._opOr("abcd"));
	QASSERT(b);
}

#define CASE metagenTest_Operators_Or
#include "do_testcase.h"


void metagenTest_Operators_Not(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorLogic(0));

	QDO(b = a._opNot());
	QASSERT(b);

	QNEWOBJ(a, mtest.MetagenOperatorLogic(5));
	QDO(b = a._opNot());
	QASSERTNOT(b);
}

#define CASE metagenTest_Operators_Not
#include "do_testcase.h"


}
