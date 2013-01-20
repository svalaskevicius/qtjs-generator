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


#include "testscriptbindmetadata2.h"
#include "cpgf/gmetadefine.h"

using namespace cpgf;
using namespace std;

namespace testscript {

void TestScriptBindMetaData2()
{
	GDefineMetaClass<TestObject>
		::define(REG_NAME_TestObject)

		._constructor<void * (const TestObject &)>()
		._constructor<void * (int)>()
		._constructor<void * (int, const string &)>(GMetaPolicyCopyAllConstReference())
	
		._field("value", &TestObject::value)
	
		._method("self", &TestObject::self)
		._method("selfConst", &TestObject::selfConst)
		._method("selfVolatile", &TestObject::selfVolatile)
		._method("selfConstVolatile", &TestObject::selfConstVolatile)
	
		._method("methodConst", (int (TestObject::*)())&TestObject::methodConst)
		._method("methodConst", (int (TestObject::*)() const)&TestObject::methodConst)
	
		._method("methodVolatile", (int (TestObject::*)())&TestObject::methodVolatile)
		._method("methodVolatile", (int (TestObject::*)() volatile)&TestObject::methodVolatile)
	
		._method("methodConstVolatile", (int (TestObject::*)())&TestObject::methodConstVolatile)
		._method("methodConstVolatile", (int (TestObject::*)() const volatile)&TestObject::methodConstVolatile)

		._method("methodOverload", (int (TestObject::*)(const TestObject &, int) const)&TestObject::methodOverload, GMetaPolicyCopyAllConstReference())
		._method("methodOverload", (int (TestObject::*)(int, const TestObject &) const)&TestObject::methodOverload, GMetaPolicyCopyAllConstReference())
		._method("methodOverload", (int (TestObject::*)(int, int) const)&TestObject::methodOverload)
		._method("methodOverload", (int (TestObject::*)(const char *, int) const)&TestObject::methodOverload)
		._method("methodOverload", (int (TestObject::*)(int, const char *) const)&TestObject::methodOverload)
		._method("methodOverload", (int (TestObject::*)(const string &, int) const)&TestObject::methodOverload, GMetaPolicyCopyAllConstReference())
		._method("methodOverload", (int (TestObject::*)(int, const string &) const)&TestObject::methodOverload, GMetaPolicyCopyAllConstReference())

		._method("methodOverloadObject", (int (TestObject::*)(const TestBase *) const)&TestObject::methodOverloadObject)
		._method("methodOverloadObject", (int (TestObject::*)(const TestA *) const)&TestObject::methodOverloadObject)
		._method("methodOverloadObject", (int (TestObject::*)(const TestB *) const)&TestObject::methodOverloadObject)
		._method("methodOverloadObject", (int (TestObject::*)(const TestC *) const)&TestObject::methodOverloadObject)

		._method("add", &TestObject::add)
	
		._field("staticValue", &TestObject::staticValue)
		._method("incStaticValue", &TestObject::incStaticValue)

		._field("data", &TestObject::data)
	
		._field("raw", &TestObject::raw)
		._field("rawPointer", &TestObject::rawPointer)

		._method("pointerRaw", &TestObject::pointerRaw)
		._method("refRaw", &TestObject::refRaw)
		._method("isRawPointer", &TestObject::isRawPointer)
		._method("isRawRef", &TestObject::isRawRef)
		._method("setRaw", &TestObject::setRaw)
	
		._method("refData", &TestObject::refData)
		._method("pointerData", &TestObject::pointerData)
		._method("constRefData", &TestObject::constRefData)
		._method("constPointerData", &TestObject::constPointerData)
		
		._method("scriptObjectCallback", &TestObject::scriptObjectCallback)
		._method("getVariant", &TestObject::getVariant)
	;
}



}

