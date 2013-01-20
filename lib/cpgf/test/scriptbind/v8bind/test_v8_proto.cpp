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


#include "../testscriptbind.h"


namespace {

void test__Proto__(TestScriptContext * context)
{
	QNEWOBJ(a, TestObject(3))
	QDO(b = {})
	QDO(b.__proto__ = a)
	QASSERT(b.add(5) == 8)

	QDO(f = a.add)
	QERR(f(5))

	QNEWOBJ(a, DeriveE())
	QDO(b = {})
	QNOT(b instanceof DeriveE)
	QNOT(b instanceof DeriveD)
	QNOT(b instanceof DeriveB)
	QNOT(b instanceof DeriveA)
	QDO(b.__proto__ = a)
	QASSERT(b instanceof DeriveE)
	QASSERT(b instanceof DeriveD)
	QASSERT(b instanceof DeriveB)
	QASSERT(b instanceof DeriveA)
	QNOT(b instanceof DeriveC)
}

#define CASE test__Proto__
#include "../testcase_v8.h"



}
