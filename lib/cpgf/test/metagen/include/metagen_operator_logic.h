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


#ifndef __METAGEN_OPERATOR_LOGIC_H
#define __METAGEN_OPERATOR_LOGIC_H

#include <string>

class MetagenOperatorLogic
{
public:
	MetagenOperatorLogic() : value(0) {}
	explicit MetagenOperatorLogic(unsigned int value) : value(value) {}
	
	bool operator > (unsigned int n) const { return value > n; }
	bool operator > (const MetagenOperatorLogic & other) const { return value > other.value; }
	bool operator > (const std::string & s) const { return value > s.length(); }
	
	bool operator >= (unsigned int n) const { return value >= n; }
	bool operator >= (const MetagenOperatorLogic & other) const { return value >= other.value; }
	bool operator >= (const std::string & s) const { return value >= s.length(); }

	bool operator < (unsigned int n) const { return value < n; }
	bool operator < (const MetagenOperatorLogic & other) const { return value < other.value; }
	bool operator < (const std::string & s) const { return value < s.length(); }

	bool operator <= (unsigned int n) const { return value <= n; }
	bool operator <= (const MetagenOperatorLogic & other) const { return value <= other.value; }
	bool operator <= (const std::string & s) const { return value <= s.length(); }

	bool operator && (unsigned int n) const { return value && n; }
	bool operator && (const MetagenOperatorLogic & other) const { return value && other.value; }
	bool operator && (const std::string & s) const { return value && s.length(); }

	bool operator || (unsigned int n) const { return value || n; }
	bool operator || (const MetagenOperatorLogic & other) const { return value || other.value; }
	bool operator || (const std::string & s) const { return value || s.length(); }

	bool operator ! () const { return !value; }

public:
	unsigned int value;
};



#endif
