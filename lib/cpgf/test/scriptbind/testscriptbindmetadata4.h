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


#ifndef __TESTSCRIPTBINDMETADATA4_H
#define __TESTSCRIPTBINDMETADATA4_H

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

class BasicA
{
public:
	enum BasicEnum {
		a = 1, b = 2, c = 3
	};

public:
	class Inner {
	public:
		Inner() : x(5) {
		}
		
		int add() {
			++x;
			return x;
		}
		
	public:
		int x;

	};

public:
};

enum TestEnum {
	teCpp = 1, teLua = 2, teV8 = 3
};

int testAdd2(int a, int b);
int testAddN(const cpgf::GMetaVariadicParam * params);
int testAddCallback(cpgf::IScriptFunction * scriptFunction);
int testExecAddCallback();



}


#endif
