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


#ifndef __TEST_COMMON_H
#define __TEST_COMMON_H


#include "cpgf/metatraits/gmetaconverter_string.h"

#include "cpgf/gmetaapi.h"
#include "cpgf/scriptbind/gluabind.h"
#include "cpgf/gscopedinterface.h"

#include "../testscriptbind.h"

#define LINE(...) # __VA_ARGS__ "\n"


namespace testscript {

class TestLuaContext
{
public:
	TestLuaContext() {
		this->luaState = luaL_newstate();
		luaL_openlibs(this->luaState);
		this->service.reset(cpgf::createDefaultMetaService());
		this->binding.reset(createLuaScriptObject(this->service.get(), this->luaState, cpgf::GScriptConfig()));
		testscript::bindBasicData(this->binding.get());
	}

	~TestLuaContext() {
		lua_close(this->luaState);
	}

	cpgf::IMetaService * getService() const {
		return this->service.get();
	}

	lua_State * getLua() const {
		return this->luaState;
	}

	cpgf::GScriptObject * getBinding() const {
		return this->binding.get();
	}

	bool doString(const char * code) const {
		luaL_loadstring(this->luaState, code);
		lua_call(this->luaState, 0, LUA_MULTRET);

		return true;
	}

private:
	lua_State * luaState;
	cpgf::GScopedInterface<cpgf::IMetaService> service;
	cpgf::GScopedPointer<cpgf::GScriptObject> binding;
};

}



#endif
