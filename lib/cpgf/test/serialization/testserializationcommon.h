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


#ifndef __TESTSERIALIZATIONCOMMON_H
#define __TESTSERIALIZATIONCOMMON_H

#include "../testmetatraits.h"

#include "cpgf/serialization/gmetaarchivereader.h"
#include "cpgf/serialization/gmetaarchivewriter.h"

#include "cpgf/serialization/gmetastorage_textstream.h"
#include "cpgf/serialization/gmetastorage_xml.h"
#include "cpgf/serialization/gmetastorage_json.h"

#include "../unittestbase.h"

#include <string>
#include <sstream>

#include <math.h>


#define FIELD(cls, n) ._field(# n, &cls::n)


template <typename T>
struct TestArchiveTraits
{
	static void rewind(const T &) {
	}
};

template <>
struct TestArchiveTraits <std::stringstream>
{
	static void rewind(const std::stringstream & stream) {
		const_cast<std::stringstream &>(stream).seekg(0);
	}
};


template <typename T>
void initTestValue(T & value, long long seed)
{
	value = (T)(seed);
}

void initTestValue(bool & value, long long seed);
void initTestValue(char & value, long long seed);
void initTestValue(wchar_t & value, long long seed);
void initTestValue(signed char & value, long long seed);
void initTestValue(unsigned char & value, long long seed);
void initTestValue(float & value, long long seed);
void initTestValue(double & value, long long seed);
void initTestValue(long double & value, long long seed);
void initTestValue(std::string & value, long long seed);

long long getTestSeed(int n);


#endif

