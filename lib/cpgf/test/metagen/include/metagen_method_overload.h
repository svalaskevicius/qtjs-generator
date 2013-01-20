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


#ifndef __METAGEN_METHOD_OVERLOAD_H
#define __METAGEN_METHOD_OVERLOAD_H


class MetagenMethodOverload
{
public:
	MetagenMethodOverload() : value(0) {}

	const MetagenMethodOverload * makeConst() {
		return this;
	}

	int testOverloadByConst_ConstFirst() const {
		return 1;
	}

	int testOverloadByConst_ConstFirst() {
		return 2;
	}

	int testOverloadByConst_NonConstFirst() {
		return 3;
	}

	int testOverloadByConst_NonConstFirst() const {
		return 4;
	}

public:
	int value;
};



#endif
