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


#include "luabind_common.h"


namespace {


void doTest()
{
	using namespace cpgf;
	using namespace testscript;

	TestLuaContext context;
	context.doString("print(\"Global\")");

	GScopedInterface<IMetaClass> metaClass(context.getService()->findClassByName("testscript::TestData"));
	testCheckAssert(metaClass);
	
	context.getBinding()->bindClass("TestData", metaClass.get());

	GScopedPointer<TestData> data(new TestData);
	data->x = 10;
	data->name = "abc";

	context.getBinding()->bindObject("data", data.get(), metaClass.get(), false);
	context.doString("assert(data.x == 10)");
	context.doString("assert(data.name == \"abc\")");

	context.doString("data.x = data.x + 1");
	testCheckAssert(data->x == 11);
	
	context.getBinding()->nullifyValue("data");
	context.doString("assert(data == nil)");
}


gTestCase(doTest);



}
