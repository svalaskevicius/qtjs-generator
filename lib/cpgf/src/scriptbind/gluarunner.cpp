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


#include "cpgf/scriptbind/gluarunner.h"
#include "cpgf/private/gscriptrunner_p.h"
#include "cpgf/scriptbind/gscriptbind.h"
#include "cpgf/scriptbind/gluabind.h"
#include "cpgf/gmetaapi.h"

#include "lua.hpp"

#include <stdexcept>


namespace cpgf {


namespace {

class GLuaScriptRunnerImplement : public GScriptRunnerImplement
{
private:
	typedef GScriptRunnerImplement super;

public:
	GLuaScriptRunnerImplement(IMetaService * service);
	~GLuaScriptRunnerImplement();

	virtual void executeString(const char * code);

private:
	void checkError(int errorCode) const;

private:
	lua_State * luaState;
};


GLuaScriptRunnerImplement::GLuaScriptRunnerImplement(IMetaService * service)
	: super(service), luaState(luaL_newstate())
{
	luaL_openlibs(this->luaState);

	GScopedInterface<IScriptObject> scriptObject(createLuaScriptInterface(this->getService(), this->luaState, GScriptConfig()));
	this->setScripeObject(scriptObject.get());
}

GLuaScriptRunnerImplement::~GLuaScriptRunnerImplement()
{
	lua_close(this->luaState);
}

void GLuaScriptRunnerImplement::executeString(const char * code)
{
	luaL_loadstring(this->luaState, code);
	this->checkError(lua_pcall(this->luaState, 0, LUA_MULTRET, 0));
}

void GLuaScriptRunnerImplement::checkError(int errorCode) const
{
	if(errorCode != 0) {
		const char * message = lua_tostring(this->luaState, -1);
		throw std::runtime_error(message);
	}
}


} // unnamed namespace


GScriptRunner * createLuaScriptRunner(IMetaService * service)
{
	return GScriptRunnerImplement::createScriptRunner(new GLuaScriptRunnerImplement(service));
}



} // namespace cpgf
