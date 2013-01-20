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


#ifndef __GSCRIPTBINDUTIL_H
#define __GSCRIPTBINDUTIL_H


#include "cpgf/scriptbind/gscriptbind.h"
#include "cpgf/scriptbind/gscriptbindapi.h"

namespace cpgf {


#define DECLARE_CALL_HELPER(N, unused) \
	GVariant invokeScriptFunction(GScriptObject * scriptObject, const char * functionName GPP_COMMA_IF(N) GPP_REPEAT_PARAMS(N, const GTypedVariant & p)); \
	GVariant invokeScriptFunction(IScriptObject * scriptObject, const char * functionName GPP_COMMA_IF(N) GPP_REPEAT_PARAMS(N, const GTypedVariant & p)); \
	GVariant invokeScriptFunction(GScriptFunction * scriptFunction GPP_COMMA_IF(N) GPP_REPEAT_PARAMS(N, const GTypedVariant & p)); \
	GVariant invokeScriptFunction(IScriptFunction * scriptFunction GPP_COMMA_IF(N) GPP_REPEAT_PARAMS(N, const GTypedVariant & p));

GPP_REPEAT_2(REF_MAX_ARITY, DECLARE_CALL_HELPER, GPP_EMPTY())

#undef DECLARE_CALL_HELPER

GVariant scriptGetFundamental(GScriptObject * scriptObject, const char * name);
GVariant scriptGetFundamental(IScriptObject * scriptObject, const char * name);

IScriptObject * scriptObjectToInterface(GScriptObject * scriptObject, bool freeObject);
IScriptObject * scriptObjectToInterface(GScriptObject * scriptObject);

void injectObjectToScript(IScriptObject * scriptObject, IMetaClass * metaClass, void * instance, const char * namespaceName = NULL);
void injectObjectToScript(GScriptObject * scriptObject, IMetaClass * metaClass, void * instance, const char * namespaceName = NULL);
void injectObjectToScript(IScriptObject * scriptObject, GMetaClass * metaClass, void * instance, const char * namespaceName = NULL);
void injectObjectToScript(GScriptObject * scriptObject, GMetaClass * metaClass, void * instance, const char * namespaceName = NULL);

// We can't do this for GScriptObject because if namespaces is NULL, we can't return owner of GScriptObject (we can't share the ownership)
IScriptObject * createScriptObject(IScriptObject * owner, const char * namespaces);


} // namespace cpgf



#endif

