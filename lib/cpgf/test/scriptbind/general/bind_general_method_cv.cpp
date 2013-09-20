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


#include "../testscriptbind.h"


namespace {


void testMethodCV(TestScriptContext * context)
{
	QNEWOBJ(a, TestObject())
	QASSERT(a.methodConst() == 0)
			
	QDO(a = a.selfConst())
	QASSERT(a.methodConst() == 1)

	QNEWOBJ(a, TestObject())
	QASSERT(a.methodVolatile() == 0)
			
	QDO(a = a.selfVolatile())
	QASSERT(a.methodVolatile() == 1)
			
	QNEWOBJ(a, TestObject())
	QASSERT(a.methodConstVolatile() == 0)
			
	QDO(a = a.selfConstVolatile())
	QASSERT(a.methodConstVolatile() == 1)
			
	QNEWOBJ(a, TestObject())
	QDO(a = a.self())
	QASSERT(a.methodConst() == 0)
	QASSERT(a.methodVolatile() == 0)
	QASSERT(a.methodConstVolatile() == 0)

	QNEWOBJ(a, TestObject())
	QASSERT(a.methodConst() == 0)
			
	QDO(a = a.selfConst())
	QERR(a.value = 1) // a is const object
}


#define CASE testMethodCV
#include "../bind_testcase.h"


}
