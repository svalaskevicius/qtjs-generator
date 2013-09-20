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


void testGlobalMethodString(TestScriptContext * context)
{
	QASSERT(mtest.getCString(0) == "zero");
	QASSERT(mtest.getCString(1) == "one");
	QASSERT(mtest.getStdString("bcd") == "a-bcd");
}


#define CASE testGlobalMethodString
#include "do_testcase.h"


void testGlobalMethodWideString(TestScriptContext * context)
{
	QASSERT(mtest.getCWideString(0) == "WideZero");
	QASSERT(mtest.getCWideString(1) == "WideOne");
	QASSERT(mtest.getStdWideString("bcd") == "W-bcd");
}


#define CASE testGlobalMethodWideString
#include "do_testcase.h"


void testGlobalEnum(TestScriptContext * context)
{
	QASSERT(mtest.GlobalEnum.globalEnumA == 5);
	QASSERT(mtest.GlobalEnum.globalEnumB == 8);
	QASSERT(mtest.globalEnumA == 5);
	QASSERT(mtest.globalEnumB == 8);

	QERR(mtest.GlobalEnum.globalEnumA = 5);
	QERR(mtest.GlobalEnum.globalEnumB = 8);
	QERR(mtest.globalEnumA = 5);
	QERR(mtest.globalEnumB = 8);
}


#define CASE testGlobalEnum
#include "do_testcase.h"


void testGlobalFields(TestScriptContext * context)
{
	QASSERT(mtest.globalInt == 38);
	QASSERT(mtest.globalString == "global");
	QASSERT(mtest.globalStdString == "globalStd");
	QASSERT(mtest.globalStdWideString == "globalStdWide");
}


#define CASE testGlobalFields
#include "do_testcase.h"


void testGlobalRaw(TestScriptContext * context)
{
	QDO(a = mtest.globalRaw);
	QASSERT(mtest.checkGlobalRaw(a));
}


#define CASE testGlobalRaw
#include "do_testcase.h"


}
