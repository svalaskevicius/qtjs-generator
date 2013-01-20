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


#ifndef __BIND_COMMON_H
#define __BIND_COMMON_H

#ifndef ENABLE_LUA
#define ENABLE_LUA 1
#endif
#ifndef ENABLE_V8
#define ENABLE_V8 1
#endif
#ifndef ENABLE_PYTHON
#define ENABLE_PYTHON 1
#endif


#include "cpgf/gmetaapi.h"
#include "cpgf/gmetaclass.h"

#include "testscriptbindmetadata.h"

#include <string>

#define QSTR(...) # __VA_ARGS__

#define DO(s) GCHECK(context->doString(s));
#define ERR(s) GCHECK(context->doError(s));
#define QDO(...) DO(# __VA_ARGS__)
#define QERR(...) ERR(# __VA_ARGS__)

#define DOASSERT(...) DO(std::string("scriptAssert(") + __VA_ARGS__ + ")")
#define DOASSERTNOT(...) DO(std::string("scriptNot(") + __VA_ARGS__ + ")")
#define QASSERT(...) QDO(scriptAssert(__VA_ARGS__))
#define QASSERTNOT(...) QDO(scriptNot(__VA_ARGS__))
#define QNOT(...) QDO(scriptAssert(!(__VA_ARGS__)))

#define NEWOBJ(lhs, ...) DO(context->getCoder()->newObject(lhs, __VA_ARGS__))
#define QNEWOBJ(lhs, ...) DO(context->getCoder()->newObject(# lhs, # __VA_ARGS__))
#define ERR_NEWOBJ(lhs, ...) ERR(context->getCoder()->newObject(lhs, __VA_ARGS__))
#define ERR_QNEWOBJ(lhs, ...) ERR(context->getCoder()->newObject(# lhs, # __VA_ARGS__))


namespace testscript {

enum TestScriptLang {
	tslLua, tslV8, tslPython
};

enum TestScriptApi {
	tsaLib, tsaApi
};


class TestScriptCoder
{
public:
	virtual ~TestScriptCoder();

	virtual std::string getNew() = 0;
	virtual std::string newObject(const std::string & lhs, const std::string & className);
};

class TestScriptContext
{
public:
	TestScriptContext(TestScriptCoder * coder);
	virtual ~TestScriptContext();

	void setBinding(cpgf::GScriptObject * binding);
	void setBinding(cpgf::IScriptObject * binding);

	cpgf::GScriptObject * getBindingLib() const {
		return this->bindingLib.get();
	}

	cpgf::IScriptObject * getBindingApi() const {
		return this->bindingApi.get();
	}

	cpgf::IMetaService * getService() const {
		return this->service.get();
	}

	TestScriptCoder * getCoder() const {
		return this->coder.get();
	}

	bool doString(const std::string & code) const;
	bool doError(const std::string & code) const;
	
	virtual bool isLua() const {
		return false;
	}

	virtual bool isV8() const {
		return false;
	}

	virtual bool isPython() const {
		return false;
	}

protected:
	virtual bool doLib(const char * code) const = 0;
	virtual bool doApi(const char * code) const = 0;

protected:
	bool canPrintError() const {
		return this->printError;
	}

private:
	cpgf::GScopedInterface<cpgf::IMetaService> service;
	cpgf::GScopedPointer<TestScriptCoder> coder;
	cpgf::GScopedPointer<cpgf::GScriptObject> bindingLib;
	cpgf::GScopedInterface<cpgf::IScriptObject> bindingApi;
	mutable bool printError;
};



TestScriptContext * createTestScriptContext(TestScriptLang lang, TestScriptApi api);


} // namespace testscript

using namespace cpgf;
using namespace testscript;
using namespace std;


#endif


