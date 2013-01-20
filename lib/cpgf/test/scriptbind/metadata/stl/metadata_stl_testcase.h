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


#define MK2(a, b) a ## b
#define MK(a, b) MK2(a, b)


#if ENABLE_LUA


GTEST(MK(CASE, _Lua_Lib))
{
	TestScriptContext * context = createTestScriptContext(tslLua, tsaLib);
	
	bindCommonData(context);
	testscript::bindBasicData(context->getBindingLib(), context->getService());
	
	CASE(context->getBindingLib(), context);
}

GTEST(MK(CASE, _Lua_Api))
{
	TestScriptContext * context = createTestScriptContext(tslLua, tsaApi);

	bindCommonData(context);
	testscript::bindBasicData(context->getBindingApi(), context->getService());
	
	CASE(context->getBindingApi(), context);
}


#endif


#if ENABLE_V8

GTEST(MK(CASE, _V8_Lib))
{
	TestScriptContext * context = createTestScriptContext(tslV8, tsaLib);

	bindCommonData(context);
	testscript::bindBasicData(context->getBindingLib(), context->getService());
	
	CASE(context->getBindingLib(), context);
}


GTEST(MK(CASE, _V8_Api))
{
	TestScriptContext * context = createTestScriptContext(tslV8, tsaApi);
	
	bindCommonData(context);
	testscript::bindBasicData(context->getBindingApi(), context->getService());
	
	CASE(context->getBindingApi(), context);
}


#endif


#if ENABLE_PYTHON

GTEST(MK(CASE, _Python_Lib))
{
	TestScriptContext * context = createTestScriptContext(tslPython, tsaLib);

	bindCommonData(context);
	testscript::bindBasicData(context->getBindingLib(), context->getService());
	
	CASE(context->getBindingLib(), context);
}


GTEST(MK(CASE, _Python_Api))
{
	TestScriptContext * context = createTestScriptContext(tslPython, tsaApi);
	
	bindCommonData(context);
	testscript::bindBasicData(context->getBindingApi(), context->getService());
	
	CASE(context->getBindingApi(), context);
}


#endif


#undef CASE
#undef MK2
#undef MK

