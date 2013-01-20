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


#ifndef __TESTSCRIPTBINDMETADATA5_H
#define __TESTSCRIPTBINDMETADATA5_H

#include "../testmetatraits.h"

#include "cpgf/gmetaclass.h"

#include "cpgf/scriptbind/gscriptbind.h"
#include "cpgf/scriptbind/gscriptbindapi.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"

#include "testscriptbind.h"

#include <string.h>

#include <string>


namespace testscript {

class ScriptOverrideBase
{
public:
	ScriptOverrideBase() : n(1) {
	}

	explicit ScriptOverrideBase(int n) : n(n) {
	}

	virtual int getValue() {
		return this->n;
	}

	int n;
};

class ScriptOverride : public ScriptOverrideBase, public cpgf::GScriptWrapper
{
private:
	typedef ScriptOverrideBase super;

public:
	ScriptOverride() : super() {}
	explicit ScriptOverride(int n) : super(n) {}

	virtual int getValue();
};


}


#endif
