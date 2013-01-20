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
#include "../include/testmetamethod.h"


using namespace std;

namespace {


void testMetaMethod(TestScriptContext * context)
{
	if(context->isPython()) {
		QDO(null = None);
	}
	
	QNEWOBJ(obj, mtest.TestMethodMethodClass());
	QASSERT(obj.func_null_38_abc(null, 38, "abc"));
	QASSERT(mtest.TestMethodMethodClass.sfunc_dEf_neg99("dEf", -99));
	QASSERT(obj.sfunc_dEf_neg99("dEf", -99));
	QASSERT(obj.func_return_What() == "What");
	QASSERT(obj.func_return_data().check());
}

#define CASE testMetaMethod
#include "do_testcase.h"



}
