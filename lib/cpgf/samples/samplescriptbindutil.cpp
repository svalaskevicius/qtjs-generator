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


#define ENABLE_V8 1

#include "samplescriptbindutil.h"
#if ENABLE_LUA
#include "cpgf/scriptbind/gluarunner.h"
#endif
#if ENABLE_V8
#include "cpgf/scriptbind/gv8runner.h"
#endif
#if ENABLE_PYTHON
#include "cpgf/scriptbind/gpythonrunner.h"
#include "Python.h"
#endif

#include "string.h"


using namespace cpgf;

ScriptLanguage getScriptLanguageFromFileName(const char * fileName)
{
	const char * ext = strrchr(fileName, '.');

	if(ext != NULL) {
		if(strcmp(ext, ".lua") == 0) {
			return slLua;
		}
		if(strcmp(ext, ".py") == 0) {
			return slPython;
		}
	}

	return slJavascript;
}

GScriptRunner * createScriptRunnerFromScriptLanguage(ScriptLanguage lang, IMetaService * service)
{
	switch(lang) {
		case slJavascript:
#if ENABLE_V8
			return createV8ScriptRunner(service);
#endif
			break;
		
		case slLua:
#if ENABLE_LUA
			return createLuaScriptRunner(service);
#endif
			break;

		case slPython:
#if ENABLE_PYTHON
			return createPythonScriptRunner(service);
#endif
			break;
	}

	return NULL;
}

const char * getLanguageText(ScriptLanguage lang)
{
	switch(lang) {
		case slJavascript:
			return "Javascript";
		
		case slLua:
			return "Lua";

		case slPython:
			return "Python";
	}

	return "Unknown";
}

void intializeScriptEngine(ScriptLanguage lang)
{
	switch(lang) {
		case slJavascript:
			break;
		
		case slLua:
			break;

		case slPython:
#if ENABLE_PYTHON
			Py_Initialize();
#endif
			break;
	}
}

void finalizeScriptEngine(ScriptLanguage lang)
{
	switch(lang) {
		case slJavascript:
			break;
		
		case slLua:
			break;

		case slPython:
#if ENABLE_PYTHON
			Py_Finalize();
#endif
			break;
	}
}
