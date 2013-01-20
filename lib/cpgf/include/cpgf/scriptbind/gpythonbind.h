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


#ifndef __GPYTHONBIND_H
#define __GPYTHONBIND_H


#include "cpgf/scriptbind/gscriptbind.h"
#include "cpgf/gscopedptr.h"

#include "Python.h"


namespace cpgf {

GScriptObject * createPythonScriptObject(IMetaService * service, PyObject * object, const GScriptConfig & config);
IScriptObject * createPythonScriptInterface(IMetaService * service, PyObject * object, const GScriptConfig & config);


template <typename T>
struct GPythonScopedPointerDeleter
{
	static inline void Delete(T * p) {
		Py_XDECREF(p);
	}
};

typedef GScopedPointer<PyObject, GPythonScopedPointerDeleter<PyObject> > GPythonScopedPointer;



} // namespace cpgf




#endif
