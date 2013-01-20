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


#ifndef __TESTSCRIPTBINDMETADATA_H
#define __TESTSCRIPTBINDMETADATA_H


#include "../testmetatraits.h"

#include "cpgf/scriptbind/gscriptbind.h"
#include "cpgf/scriptbind/gscriptbindapi.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"


#include <string.h>

#include <string>


#define REG_NAME_TestObject "testscript::TestObject"
#define REG_NAME_TestData "testscript::TestData"
#define REG_NAME_TestEnum "testscript::TestEnum"
#define REG_NAME_BasicA "testscript::BasicA"


namespace testscript {

const int Magic1 = 0x1999;
const int Magic2 = 0xbeef38;
const int Magic3 = 0xf00d;

void bindBasicData(cpgf::GScriptObject * script, cpgf::IMetaService * service);
void bindBasicData(cpgf::IScriptObject * script, cpgf::IMetaService * service);

void scriptAssert(bool b);
void scriptNot(bool b);


const char * const testString = "TestingScript!";
const int testInt = 1978;
const int testObjValue = 2012;


}


#endif
