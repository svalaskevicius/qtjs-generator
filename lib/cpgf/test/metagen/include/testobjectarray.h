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


#ifndef __TESTOBJECTARRAY_H
#define __TESTOBJECTARRAY_H

#include "cpgf/gsharedptr.h"

#include <string>


class OAData
{
public:
	OAData()
		: n(0), s()
	{
	}
	
	OAData(int n, const std::string & s)
		: n(n), s(s)
	{
	}
	
	int n;
	std::string s;
};

typedef cpgf::GSharedPointer<OAData> OADataPointer;

class OAObject
{
public:
	OAObject()
		: data(new OAData)
	{
	}

	OAObject(int n, const std::string & s)
		: data(new OAData(n, s))
	{
	}

public:
	OADataPointer data;
};

inline int getOAObjectN(OAObject * obj) {
	return obj->data->n;
}

inline int getOAObjectN(OAObject * obj, int index) {
	return obj[index].data->n;
}

inline std::string getOAObjectS(const OAObject & obj) {
	return obj.data->s;
}


#endif
