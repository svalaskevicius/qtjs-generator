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


#ifndef __SIMPLEOBJECT_H
#define __SIMPLEOBJECT_H

#include "cpgf/gsharedptr.h"

#if defined(_MSC_VER)
#else
#include "cpgf/metatraits/gmetasharedptrtraits_cpp11_shared_ptr.h"
#endif

#if ENABLE_BOOST
#include "cpgf/metatraits/gmetasharedptrtraits_boost_shared_ptr.h"
#endif

#include <string>
#include <memory>


struct SimpleAtom
{
	long value;
};

struct SimpleData
{
	SimpleData(int n = 0, const std::string & s = "");
	SimpleData(const SimpleData & other);

	int n;
	std::string s;
	std::wstring ws;
	SimpleAtom atom;
};

class SimpleObject
{
public:
	SimpleData & getData();
	SimpleData * getDataPtr();
	
	void setData(const SimpleData & data);
	void setDataPtr(const SimpleData * data);
	
	bool checkData(int n) const;
	bool checkData(const std::string & s) const;
	bool checkAtom(long value) const;
	
	SimpleData & operator() ();
	const SimpleData & operator() () const;

public:
	SimpleData data;
	SimpleObject * pobj;
};

namespace cpgf {
struct IMetaClass;
}

cpgf::IMetaClass * getSimpleObjectClass(cpgf::IMetaClass * metaClass);
bool metaClassIsSimpleObject(cpgf::IMetaClass * metaClass); 

cpgf::GSharedPointer<SimpleObject> createSharedSimpleObject();
SimpleObject * getSharedSimpleObject(cpgf::GSharedPointer<SimpleObject> sp);

#if defined(_MSC_VER)
typedef cpgf::GSharedPointer<SimpleObject> CPP11_SP;
#else
typedef std::shared_ptr<SimpleObject> CPP11_SP;
#endif
CPP11_SP createCpp11SharedSimpleObject();
SimpleObject * getCpp11SharedSimpleObject(CPP11_SP sp);

#if ENABLE_BOOST
typedef boost::shared_ptr<SimpleObject> BOOST_SP;
#else
typedef cpgf::GSharedPointer<SimpleObject> BOOST_SP;
#endif
BOOST_SP createBoostSharedSimpleObject();
SimpleObject * getBoostSharedSimpleObject(BOOST_SP sp);

int getSimpleObjectPointerN(SimpleObject * object);
int getSimpleObjectN(const SimpleObject & object);


#endif
