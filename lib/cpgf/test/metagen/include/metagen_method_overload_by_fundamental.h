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


#ifndef __METAGEN_METHOD_OVERLOAD_BY_FUNDAMENTAL_H
#define __METAGEN_METHOD_OVERLOAD_BY_FUNDAMENTAL_H

#include <string>

class MetagenMethodOverloadByFundamental
{
public:
	std::string overload_Boolean_Int(bool value) {
		return value ? "true" : "false";
	}
	
	std::string overload_Boolean_Int(int) {
		return "int";
	}

	
	std::string overload_Boolean_Real(bool value) {
		return value ? "true" : "false";
	}
	
	std::string overload_Boolean_Real(double) {
		return "real";
	}

	
	std::string overload_Boolean_Int_Real(bool value) {
		return value ? "true" : "false";
	}
	
	std::string overload_Boolean_Int_Real(int) {
		return "int";
	}

	std::string overload_Boolean_Int_Real(double) {
		return "real";
	}

};

#endif
