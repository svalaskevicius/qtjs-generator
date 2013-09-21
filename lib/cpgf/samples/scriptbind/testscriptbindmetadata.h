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


#ifndef __TESTSCRIPTBINDMETADATA_H
#define __TESTSCRIPTBINDMETADATA_H


#include "cpgf/metatraits/gmetaconverter_string.h"
#include "cpgf/scriptbind/gscriptbind.h"


namespace testscript {

const int Magic1 = 0x1999;
const int Magic2 = 0xbeef38;
const int Magic3 = 0xf00d;

struct TestData
{
	int x;
	std::string name;
};

class TestObject
{
public:
	TestObject() : value(Magic1) {
	}
	
	TestObject(const TestObject & other) : value(Magic2) {
		(void)other;
	}
	
	TestObject & operator = (const TestObject & other) {
		(void)other;

		this->value = Magic3;

		return *this;
	}
	
public:
	int	value;
};


void bindBasicData(cpgf::GScriptObject * script);



}


#endif
