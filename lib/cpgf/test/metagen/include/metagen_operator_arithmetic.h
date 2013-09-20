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


#ifndef __METAGEN_OPERATOR_ARITHMETIC_H
#define __METAGEN_OPERATOR_ARITHMETIC_H

#include <string>

class MetagenOperatorArithmetic
{
public:
	MetagenOperatorArithmetic() : value(0) {}
	explicit MetagenOperatorArithmetic(int value) : value(value) {}
	
	MetagenOperatorArithmetic operator + (int n) const { return MetagenOperatorArithmetic(value + n); }
	MetagenOperatorArithmetic operator + (const MetagenOperatorArithmetic & other) const { return MetagenOperatorArithmetic(value + other.value); }
	MetagenOperatorArithmetic operator + (const std::string & s) const { return MetagenOperatorArithmetic(value + s.length()); }
	
	MetagenOperatorArithmetic operator - (int n) { return MetagenOperatorArithmetic(value - n); }
	MetagenOperatorArithmetic operator - (const MetagenOperatorArithmetic & other) { return MetagenOperatorArithmetic(value - other.value); }
	MetagenOperatorArithmetic operator - (const std::string & s) { return MetagenOperatorArithmetic(value - s.length()); }
	
	MetagenOperatorArithmetic operator * (int n) { return MetagenOperatorArithmetic(value * n); }
	MetagenOperatorArithmetic operator * (const MetagenOperatorArithmetic & other) { return MetagenOperatorArithmetic(value * other.value); }
	MetagenOperatorArithmetic operator * (const std::string & s) { return MetagenOperatorArithmetic(value * s.length()); }
	
	MetagenOperatorArithmetic operator / (int n) { return MetagenOperatorArithmetic(value / n); }
	MetagenOperatorArithmetic operator / (const MetagenOperatorArithmetic & other) { return MetagenOperatorArithmetic(value / other.value); }
	MetagenOperatorArithmetic operator / (const std::string & s) { return MetagenOperatorArithmetic(value / s.length()); }
	
	MetagenOperatorArithmetic operator % (int n) { return MetagenOperatorArithmetic(value % n); }
	MetagenOperatorArithmetic operator % (const MetagenOperatorArithmetic & other) { return MetagenOperatorArithmetic(value % other.value); }
	MetagenOperatorArithmetic operator % (const std::string & s) { return MetagenOperatorArithmetic(value % s.length()); }
	
public:
	int value;
};



#endif
