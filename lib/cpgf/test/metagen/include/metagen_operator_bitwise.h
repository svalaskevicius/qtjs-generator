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


#ifndef __METAGEN_OPERATOR_BITWISE_H
#define __METAGEN_OPERATOR_BITWISE_H

#include <string>

class MetagenOperatorBitwise
{
public:
	MetagenOperatorBitwise() : value(0) {}
	explicit MetagenOperatorBitwise(int value) : value(value) {}
	
	MetagenOperatorBitwise operator & (int n) const { return MetagenOperatorBitwise(value & n); }
	MetagenOperatorBitwise operator & (const MetagenOperatorBitwise & other) const { return MetagenOperatorBitwise(value & other.value); }
	MetagenOperatorBitwise operator & (const std::string & s) const { return MetagenOperatorBitwise(value & s.length()); }
	
	MetagenOperatorBitwise operator | (int n) { return MetagenOperatorBitwise(value | n); }
	MetagenOperatorBitwise operator | (const MetagenOperatorBitwise & other) { return MetagenOperatorBitwise(value | other.value); }
	MetagenOperatorBitwise operator | (const std::string & s) { return MetagenOperatorBitwise(value | s.length()); }
	
	MetagenOperatorBitwise operator ^ (int n) { return MetagenOperatorBitwise(value ^ n); }
	MetagenOperatorBitwise operator ^ (const MetagenOperatorBitwise & other) { return MetagenOperatorBitwise(value ^ other.value); }
	MetagenOperatorBitwise operator ^ (const std::string & s) { return MetagenOperatorBitwise(value ^ s.length()); }
	
	MetagenOperatorBitwise operator << (int n) { return MetagenOperatorBitwise(value << n); }
	MetagenOperatorBitwise operator << (const MetagenOperatorBitwise & other) { return MetagenOperatorBitwise(value << other.value); }
	MetagenOperatorBitwise operator << (const std::string & s) { return MetagenOperatorBitwise(value << s.length()); }
	
	MetagenOperatorBitwise operator >> (int n) { return MetagenOperatorBitwise(value >> n); }
	MetagenOperatorBitwise operator >> (const MetagenOperatorBitwise & other) { return MetagenOperatorBitwise(value >> other.value); }
	MetagenOperatorBitwise operator >> (const std::string & s) { return MetagenOperatorBitwise(value >> s.length()); }
	
	MetagenOperatorBitwise operator ~ () { return MetagenOperatorBitwise(~value); }
	
public:
	int value;
};



#endif
