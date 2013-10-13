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


#include "cpgf/scriptbind/gscriptrunner.h"
#include "cpgf/private/gscriptrunner_p.h"
#include "cpgf/scriptbind/gscriptbind.h"
#include "cpgf/scriptbind/gv8bind.h"
#include "cpgf/gmetaapi.h"

#include <stdexcept>


using namespace v8;

namespace cpgf {


namespace {

class GV8ScriptRunnerImplement : public GScriptRunnerImplement
{
private:
	typedef GScriptRunnerImplement super;

public:
	GV8ScriptRunnerImplement(IMetaService * service);
	GV8ScriptRunnerImplement(IMetaService * service, Handle<Context> ctx);
	~GV8ScriptRunnerImplement();

	virtual void executeString(const char * code);

private:
	bool executeJsString(const char * source);
	void error(const char * message) const;
	void init();

private:
	HandleScope handleScope;
	Persistent<Context> context;
	Context::Scope * contextScope;
};


GV8ScriptRunnerImplement::GV8ScriptRunnerImplement(IMetaService * service)
	: super(service), handleScope(), context(Context::New())
{
    init();
}

GV8ScriptRunnerImplement::GV8ScriptRunnerImplement(IMetaService * service, Handle<Context> ctx)
	: super(service), handleScope(), context(ctx)
{
    init();
}

void GV8ScriptRunnerImplement::init()
{
	contextScope = new Context::Scope(context);
	Local<Object> global = context->Global();

	GScopedInterface<IMetaService> metaService(getService());
	GScopedInterface<IScriptObject> scriptObject(createV8ScriptInterface(metaService.get(), global, GScriptConfig()));
	setScripeObject(scriptObject.get());
}

GV8ScriptRunnerImplement::~GV8ScriptRunnerImplement()
{
	delete this->contextScope;

	this->context.Dispose();
	this->context.Clear();
}

bool GV8ScriptRunnerImplement::executeJsString(const char * source)
{
	using namespace v8;

    context->Enter();
	v8::HandleScope handle_scope;
	v8::TryCatch try_catch;
	v8::Handle<v8::Script> script = v8::Script::Compile(String::New(source), String::New("cpgf"));
	if(script.IsEmpty()) {
		v8::String::AsciiValue error(try_catch.Exception());
	    context->Exit();
		this->error(*error);
		return false;
	}
	else {
		v8::Handle<v8::Value> result = script->Run();
	    context->Exit();
		if(result.IsEmpty()) {
			v8::String::AsciiValue error(try_catch.Exception());
			this->error(*error);
			return false;
		}
		else {
			return true;
		}
	}
}

void GV8ScriptRunnerImplement::executeString(const char * code)
{
	this->executeJsString(code);
}

void GV8ScriptRunnerImplement::error(const char * message) const
{
	throw std::runtime_error(message);
}


} // unnamed namespace


GScriptRunner * createV8ScriptRunner(IMetaService * service)
{
	return GScriptRunnerImplement::createScriptRunner(new GV8ScriptRunnerImplement(service));
}

GScriptRunner * createV8ScriptRunner(IMetaService * service, Handle<Context> ctx)
{
	return GScriptRunnerImplement::createScriptRunner(new GV8ScriptRunnerImplement(service, ctx));
}


} // namespace cpgf
