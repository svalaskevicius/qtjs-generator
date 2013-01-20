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


#ifndef __METAGEN_OPERATOR_OTHER_H
#define __METAGEN_OPERATOR_OTHER_H

#include "cpgf/gmetacommon.h"

#include <string>

class MetagenOperatorOther
{
public:
	MetagenOperatorOther() : value(0) {}
	explicit MetagenOperatorOther(int value) : value(value), f((float)value) {}

	MetagenOperatorOther & operator = (const MetagenOperatorOther & other) { value = other.value; return *this; }
	
	MetagenOperatorOther operator , (int n) const { return MetagenOperatorOther(value + n); }
	
	int operator [] (int n) const { return value + n; }
	int operator [] (const std::string & s) const { return value + (int)s.length(); }
	
	float & operator [] (const MetagenOperatorOther & n) { (void)n; return f; }
	
	int operator & () { return value + 1; }
	int operator * () { return value - 1; }
	
	int operator () (const std::string & s, int n) const {
		return value + (int)s.length() + n;
	}

	int operator () (const cpgf::GMetaVariadicParam * params) const {
		int total = value;
		for(size_t i = 0; i < params->paramCount; ++i) {
			total += cpgf::fromVariant<int>(*(params->params[i]));
		}

		return total;
	}

public:
	int value;
	float f;
};



#endif
