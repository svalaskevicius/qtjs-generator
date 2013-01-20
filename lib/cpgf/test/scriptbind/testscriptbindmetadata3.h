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


#ifndef __TESTSCRIPTBINDMETADATA3_H
#define __TESTSCRIPTBINDMETADATA3_H

#include "../testmetatraits.h"

#include "cpgf/gmetaclass.h"

#include "cpgf/scriptbind/gscriptbind.h"
#include "cpgf/scriptbind/gscriptbindapi.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"

#include "testscriptbind.h"
#include "testscriptbindmetadata2.h"

#include <string.h>

#include <string>


namespace testscript {

class TestOperator
{
public:
	TestOperator() : value(0) {
	}
	
	TestOperator(int value) : value(value) {
	}
	
	TestOperator(const TestOperator & other) : value(other.value) {
	}

#define M(OP, RET) \
	RET operator OP (int other) const {	return this->value OP other; } \
	RET operator OP (const TestOperator & other) const { return this->value OP other.value; } \
	RET operator OP (const TestObject & other) const { return this->value OP other.value; }
	
	M(+, TestOperator)
	M(-, TestOperator)
	M(*, TestOperator)
	M(/, TestOperator)
	M(%, TestOperator)

	M(==, bool)
	M(<, bool)
	M(<=, bool)

#undef M

	TestOperator operator - () const {
		return -this->value;
	}

	TestOperator operator () (const std::string & s, int n) const {
		return this->value + (int)s.length() + n * 2;
	}

	int operator () (const cpgf::GMetaVariadicParam * params) const {
		int total = this->value;
		for(size_t i = 0; i < params->paramCount; ++i) {
			total += cpgf::fromVariant<int>(*(params->params[i]));
		}

		return total;
	}

public:
	int value;
};




}


#endif
