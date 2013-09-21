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


#define MK2(a, b) a ## b
#define MK(a, b) MK2(a, b)


#ifndef TEST_BIND
#define TEST_BIND testscript::bindBasicData
#endif

#if ENABLE_LUA


GTEST(MK(CASE, _Python_Lib))
{
	GScopedPointer<TestScriptContext> context(createTestScriptContext(tslPython, tsaLib));

	TEST_BIND(context->getBindingLib(), context->getService());

	CASE(context.get());
}

GTEST(MK(CASE, _Python_Api))
{
	GScopedPointer<TestScriptContext> context(createTestScriptContext(tslPython, tsaApi));

	TEST_BIND(context->getBindingApi(), context->getService());

	CASE(context.get());
}


#endif


#undef CASE
#undef MK2
#undef MK
