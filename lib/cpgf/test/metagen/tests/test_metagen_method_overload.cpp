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


void metagenTest_Method_Overload_ConstMethod_ConstFirst(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenMethodOverload());
	QASSERT(a.testOverloadByConst_ConstFirst() == 2);

	QDO(b = a.makeConst());
	QASSERT(b.testOverloadByConst_ConstFirst() == 1);
}

#define CASE metagenTest_Method_Overload_ConstMethod_ConstFirst
#include "do_testcase.h"


void metagenTest_Method_Overload_ConstMethod_NonConstFirst(TestScriptContext * context)
{
	QNEWOBJ(a, mtest.MetagenMethodOverload());
	QASSERT(a.testOverloadByConst_NonConstFirst() == 3);

	QDO(b = a.makeConst());
	QASSERT(b.testOverloadByConst_NonConstFirst() == 4);
}

#define CASE metagenTest_Method_Overload_ConstMethod_NonConstFirst
#include "do_testcase.h"


}
