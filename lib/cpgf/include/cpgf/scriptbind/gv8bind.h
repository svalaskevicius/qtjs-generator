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


#ifndef __GV8BIND_H
#define __GV8BIND_H


#include "cpgf/scriptbind/gscriptbind.h"

#include "v8.h"


namespace cpgf {

GScriptObject * createV8ScriptObject(IMetaService * service, v8::Local<v8::Object> object, const GScriptConfig & config);
IScriptObject * createV8ScriptInterface(IMetaService * service, v8::Local<v8::Object> object, const GScriptConfig & config);

void clearV8DataPool();

} // namespace cpgf




#endif


