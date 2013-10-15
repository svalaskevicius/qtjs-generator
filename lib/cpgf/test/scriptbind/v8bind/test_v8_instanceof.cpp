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

void testInstanceof(TestScriptContext * context)
{
	QNEWOBJ(a, DeriveE())
	QASSERT(a instanceof DeriveE)
	QASSERT(a instanceof DeriveD)
	QASSERT(a instanceof DeriveB)
	QASSERT(a instanceof DeriveA)
	QNOT(a instanceof DeriveC)

	QNEWOBJ(a, DeriveD())
	QASSERT(a instanceof DeriveB)
	QASSERT(a instanceof DeriveA)
	QASSERT(a instanceof DeriveD)
	QNOT(a instanceof DeriveE)
	QNOT(a instanceof DeriveC)

	QNEWOBJ(a, DeriveC())
	QASSERT(a instanceof DeriveA)
	QASSERT(a instanceof DeriveC)
	QNOT(a instanceof DeriveB)
	QNOT(a instanceof DeriveE)
	QNOT(a instanceof DeriveD)

	QNEWOBJ(a, DeriveB())
	QASSERT(a instanceof DeriveA)
	QASSERT(a instanceof DeriveB)
	QNOT(a instanceof DeriveE)
	QNOT(a instanceof DeriveD)
	QNOT(a instanceof DeriveC)

	QNEWOBJ(a, DeriveA())
	QASSERT(a instanceof DeriveA)
	QNOT(a instanceof DeriveB)
	QNOT(a instanceof DeriveE)
	QNOT(a instanceof DeriveD)
	QNOT(a instanceof DeriveC)
}

#define CASE testInstanceof
#include "../testcase_v8.h"



}
