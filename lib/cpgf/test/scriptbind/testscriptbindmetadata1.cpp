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


#include "testscriptbindmetadata1.h"
#include "cpgf/gmetadefine.h"

using namespace cpgf;
using namespace std;

namespace testscript {

void TestScriptBindMetaData1()
{
	GDefineMetaClass<TestData>
		::define(REG_NAME_TestData)
		._field("x", &TestData::x)
		._field("name", &TestData::name)
	;


	GDefineMetaClass<TestBase>
		::define("testscript::TestBase")
		._method("getValue", &TestBase::getValue);
	;

	GDefineMetaClass<TestA, TestBase>
		::define("testscript::TestA")
	;

	GDefineMetaClass<TestB, TestBase>
		::define("testscript::TestB")
	;

	GDefineMetaClass<TestC, TestB>
		::define("testscript::TestC")
	;

	GDefineMetaClass<DeriveA>
		::define("testscript::DeriveA")
		._method("getA", &DeriveA::getA)
		._method("setData", &DeriveA::setData)
		._field("a", &DeriveA::a)
	;

	GDefineMetaClass<DeriveB, DeriveA>
		::define("testscript::DeriveB")
		._method("getB", &DeriveB::getB)
		._field("b", &DeriveB::b)
	;

	GDefineMetaClass<DeriveC, DeriveA>
		::define("testscript::DeriveC")
		._method("getC", &DeriveC::getC)
		._field("c", &DeriveC::c)
	;

	GDefineMetaClass<DeriveD, DeriveB, DeriveC>
		::define("testscript::DeriveD")
		._method("getD", &DeriveD::getD)
		._field("d", &DeriveD::d)
	;

	GDefineMetaClass<DeriveE, DeriveD>
		::define("testscript::DeriveE")
		._method("getE", &DeriveE::getE)
		._method("pretendA", &DeriveE::pretendA, GMetaPolicyTransferResultOwnership())
		._field("e", &DeriveE::e)
	;
}

}

