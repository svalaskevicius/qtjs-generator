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


#ifndef __TESTMETAMETHOD_H
#define __TESTMETAMETHOD_H

#include "cpgf/gcompiler.h"
#include "cpgf/gsharedptr.h"

#include <string>

#include <string.h>

class TestMethodMethodData
{
public:
	TestMethodMethodData() : magic(0x10e85f2a) {}

	bool check() const {
		return this->magic == 0x10e85f2a;
	}

private:
	int magic;
};

class TestMethodMethodClass
{
public:
	bool func_null_38_abc(void * a, int b, const char * c) {
		return a == NULL && b == 38 && strcmp(c, "abc") == 0;
	}

	static bool G_API_CC sfunc_dEf_neg99(const std::string & a, int b) {
		return a == "dEf" && b == -99;
	}

	std::string func_return_What() const {
		return "What";
	}

	cpgf::GSharedPointer<TestMethodMethodData> func_return_data() const {
		return cpgf::GSharedPointer<TestMethodMethodData>(new TestMethodMethodData());
	}
};



#endif
