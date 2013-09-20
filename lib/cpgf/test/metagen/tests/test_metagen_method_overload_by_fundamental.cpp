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


void metagenTest_MetagenMethodOverloadByFundamental_overload_Boolean_Int(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenMethodOverloadByFundamental());
	if(context->isPython()) {
		QDO(t = True);
		QDO(f = False);
	}
	else {
		QDO(t = true);
		QDO(f = false);
	}
	QASSERT(a.overload_Boolean_Int(t) == "true");
	QASSERT(a.overload_Boolean_Int(f) == "false");
	QASSERT(a.overload_Boolean_Int(1) == "int");
	QASSERT(a.overload_Boolean_Int(123456) == "int");
	QASSERT(a.overload_Boolean_Int(0.5) == "int");
	QASSERT(a.overload_Boolean_Int(3.1415926) == "int");
}

#define CASE metagenTest_MetagenMethodOverloadByFundamental_overload_Boolean_Int
#include "do_testcase.h"


void metagenTest_MetagenMethodOverloadByFundamental_overload_Boolean_Real(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenMethodOverloadByFundamental());
	if(context->isPython()) {
		QDO(t = True);
		QDO(f = False);
	}
	else {
		QDO(t = true);
		QDO(f = false);
	}
	QASSERT(a.overload_Boolean_Real(t) == "true");
	QASSERT(a.overload_Boolean_Real(f) == "false");
	QASSERT(a.overload_Boolean_Real(1) == "real");
	QASSERT(a.overload_Boolean_Real(123456) == "real");
	QASSERT(a.overload_Boolean_Real(0.5) == "real");
	QASSERT(a.overload_Boolean_Real(3.1415926) == "real");
}

#define CASE metagenTest_MetagenMethodOverloadByFundamental_overload_Boolean_Real
#include "do_testcase.h"


void metagenTest_MetagenMethodOverloadByFundamental_overload_Boolean_Int_Real(TestScriptContext * context)
{
	if(context->isLua()) {
		// Lua doesn't pass this test since Lua doesn't distinguish between integer and real number
		return;
	}

	QNEWOBJ(a, mtest.MetagenMethodOverloadByFundamental());
	if(context->isPython()) {
		QDO(t = True);
		QDO(f = False);
	}
	else {
		QDO(t = true);
		QDO(f = false);
	}
	QASSERT(a.overload_Boolean_Int_Real(t) == "true");
	QASSERT(a.overload_Boolean_Int_Real(f) == "false");
	QASSERT(a.overload_Boolean_Int_Real(1) == "int");
	QASSERT(a.overload_Boolean_Int_Real(123456) == "int");
	QASSERT(a.overload_Boolean_Int_Real(0.5) == "real");
	QASSERT(a.overload_Boolean_Int_Real(3.1415926) == "real");
}

#define CASE metagenTest_MetagenMethodOverloadByFundamental_overload_Boolean_Int_Real
#include "do_testcase.h"


}
