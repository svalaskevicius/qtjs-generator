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


#ifndef __SAMPLESCRIPTBINDUTIL_H
#define __SAMPLESCRIPTBINDUTIL_H

#include "cpgf/scriptbind/gscriptrunner.h"

namespace cpgf {
	struct IMetaService;
} // namespace cpgf

enum ScriptLanguage {
	slJavascript, slLua, slPython
};

ScriptLanguage getScriptLanguageFromFileName(const char * fileName);
cpgf::GScriptRunner * createScriptRunnerFromScriptLanguage(ScriptLanguage lang, cpgf::IMetaService * service);
const char * getLanguageText(ScriptLanguage lang);

void intializeScriptEngine(ScriptLanguage lang);
void finalizeScriptEngine(ScriptLanguage lang);


#endif
