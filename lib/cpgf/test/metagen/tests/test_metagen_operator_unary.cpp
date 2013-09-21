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


void metagenTest_Operators_Plus(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorUnary(10));
	QDO(b = a._opPlus());
	QASSERT(b.value == 10);

	QNEWOBJ(a, mtest.MetagenOperatorUnary(-5));
	QDO(b = a._opPlus());
	QASSERT(b.value == 5);
}

#define CASE metagenTest_Operators_Plus
#include "do_testcase.h"


void metagenTest_Operators_Minus(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorUnary(10));
	QDO(b = a._opMinus());
	QASSERT(b.value == -10);

	QNEWOBJ(a, mtest.MetagenOperatorUnary(-5));
	QDO(b = a._opMinus());
	QASSERT(b.value == 5);
}

#define CASE metagenTest_Operators_Minus
#include "do_testcase.h"


void metagenTest_Operators_Inc(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorUnary(10));
	QDO(b = a._opInc());
	QASSERT(a.value == 11);
	QASSERT(b.value == 11);
}

#define CASE metagenTest_Operators_Inc
#include "do_testcase.h"



void metagenTest_Operators_IncSuffix(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorUnary(10));
	QDO(b = a._opIncSuffix());
	QASSERT(a.value == 11);
	QASSERT(b.value == 10);
}

#define CASE metagenTest_Operators_IncSuffix
#include "do_testcase.h"


void metagenTest_Operators_Dec(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorUnary(10));
	QDO(b = a._opDec());
	QASSERT(a.value == 9);
	QASSERT(b.value == 9);
}

#define CASE metagenTest_Operators_Dec
#include "do_testcase.h"



void metagenTest_Operators_DecSuffix(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenOperatorUnary(10));
	QDO(b = a._opDecSuffix());
	QASSERT(a.value == 9);
	QASSERT(b.value == 10);
}

#define CASE metagenTest_Operators_DecSuffix
#include "do_testcase.h"




}
