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


#include "cpgf/gmetadefine.h"
#include "cpgf/goutmain.h"

#include "testscriptbindmetadata.h"

#include <string>

namespace testscript {

void bindBasicData(cpgf::GScriptObject * script)
{
	script->bindFundamental("Magic1", Magic1);
	script->bindFundamental("Magic2", Magic2);
	script->bindFundamental("Magic3", Magic3);
}


G_AUTO_RUN_BEFORE_MAIN()
{
	using namespace cpgf;

	GDefineMetaClass<TestData>
		::define("testscript::TestData")
		
		._field("x", &TestData::x)
		._field("name", &TestData::name)
	;

	GDefineMetaClass<TestObject>
		::define("testscript::TestObject")

		._constructor<void * (const TestObject &)>()
		._field("value", &TestObject::value)
	;
}

}

