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

void testByteArrayInScript(TestScriptContext * context)
{
	QDO(cpgf._import("cpgf", "builtin.collections.bytearray"))
	
	QDO(a = cpgf.createByteArray())
	QDO(a.setLength(10))

	QDO(writeNumberToByteArray(38, a))
	QASSERT(a.getPosition() == 8)
	QDO(a.setPosition(0))
	QASSERT(a.readInt32() == 38)
	QASSERT(a.readInt32() == 38 * 2)

	QDO(writeNumberToByteArrayMemory(53, a.getPointer()))
	QDO(a.position = 0)
	QASSERT(a.readInt32() == 53)
	QASSERT(a.readInt32() == 53 * 2)
}

#define CASE testByteArrayInScript
#include "../bind_testcase.h"


void testByteArrayInScriptWriteVariadic(TestScriptContext * context)
{
	QDO(cpgf._import("cpgf", "builtin.collections.bytearray"))
	
	QDO(a = cpgf.createByteArray())
	QDO(a.writeInt32(38, 78, 98))
	QASSERT(a.getPosition() == 12)
	QDO(a.setPosition(0))
	QASSERT(a.readInt32() == 38)
	QASSERT(a.readInt32() == 78)
	QASSERT(a.readInt32() == 98)
}

#define CASE testByteArrayInScriptWriteVariadic
#include "../bind_testcase.h"



}
