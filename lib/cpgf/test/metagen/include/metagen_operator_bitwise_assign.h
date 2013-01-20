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


#ifndef __METAGEN_OPERATOR_BITWISE_ASSIGN_H
#define __METAGEN_OPERATOR_BITWISE_ASSIGN_H

#include <string>

class MetagenOperatorBitwiseAssign
{
public:
	MetagenOperatorBitwiseAssign() : value(0) {}
	explicit MetagenOperatorBitwiseAssign(int value) : value(value) {}

	MetagenOperatorBitwiseAssign & operator &= (int n) { value &= n; return *this; }
	MetagenOperatorBitwiseAssign & operator &= (const MetagenOperatorBitwiseAssign & other) { value &= other.value; return *this; }
	MetagenOperatorBitwiseAssign & operator &= (const std::string & s) { value &= s.length(); return *this; }
	
	MetagenOperatorBitwiseAssign & operator |= (int n) { value |= n; return *this; }
	MetagenOperatorBitwiseAssign & operator |= (const MetagenOperatorBitwiseAssign & other) { value |= other.value; return *this; }
	MetagenOperatorBitwiseAssign & operator |= (const std::string & s) { value |= s.length(); return *this; }
	
	MetagenOperatorBitwiseAssign & operator ^= (int n) { value ^= n; return *this; }
	MetagenOperatorBitwiseAssign & operator ^= (const MetagenOperatorBitwiseAssign & other) { value ^= other.value; return *this; }
	MetagenOperatorBitwiseAssign & operator ^= (const std::string & s) { value ^= s.length(); return *this; }
	
	MetagenOperatorBitwiseAssign & operator <<= (int n) { value <<= n; return *this; }
	MetagenOperatorBitwiseAssign & operator <<= (const MetagenOperatorBitwiseAssign & other) { value <<= other.value; return *this; }
	MetagenOperatorBitwiseAssign & operator <<= (const std::string & s) { value <<= s.length(); return *this; }
	
	MetagenOperatorBitwiseAssign & operator >>= (int n) { value >>= n; return *this; }
	MetagenOperatorBitwiseAssign & operator >>= (const MetagenOperatorBitwiseAssign & other) { value >>= other.value; return *this; }
	MetagenOperatorBitwiseAssign & operator >>= (const std::string & s) { value >>= s.length(); return *this; }
	
public:
	int value;
};



#endif
