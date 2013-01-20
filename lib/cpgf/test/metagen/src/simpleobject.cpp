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


#include "../include/simpleobject.h"
#include "cpgf/gmetaapi.h"

using namespace std;
using namespace cpgf;


SimpleData::SimpleData(int n, const std::string & s)
	: n(n), s(s), ws(L"")
{
}

SimpleData::SimpleData(const SimpleData & other)
	: n(other.n), s(other.s), ws(other.ws), atom(other.atom)
{
}



SimpleData & SimpleObject::getData()
{
	return this->data;
}

SimpleData * SimpleObject::getDataPtr()
{
	return &this->data;
}

void SimpleObject::setData(const SimpleData & data)
{
	this->data = data;
}

void SimpleObject::setDataPtr(const SimpleData * data)
{
	this->data = *data;
}

bool SimpleObject::checkData(int n) const
{
	return this->data.n == n;
}

bool SimpleObject::checkData(const std::string & s) const
{
	return this->data.s == s;
}

bool SimpleObject::checkAtom(long value) const
{
	return this->data.atom.value == value;
}

SimpleData & SimpleObject::operator() ()
{
	return this->data;
}

const SimpleData & SimpleObject::operator() () const
{
	return this->data;
}


cpgf::IMetaClass * getSimpleObjectClass(cpgf::IMetaClass * metaClass)
{
	metaClass->addReference();

	return metaClass;
}

bool metaClassIsSimpleObject(IMetaClass * metaClass)
{
	return string(metaClass->getName()) == "SimpleObject";
}

cpgf::GSharedPointer<SimpleObject> createSharedSimpleObject()
{
	return cpgf::GSharedPointer<SimpleObject>(new SimpleObject);
}

SimpleObject * getSharedSimpleObject(cpgf::GSharedPointer<SimpleObject> sp)
{
	return sp.get();
}

CPP11_SP createCpp11SharedSimpleObject()
{
	return CPP11_SP(new SimpleObject);
}

SimpleObject * getCpp11SharedSimpleObject(CPP11_SP sp)
{
	return sp.get();
}

BOOST_SP createBoostSharedSimpleObject()
{
	return BOOST_SP(new SimpleObject);
}

SimpleObject * getBoostSharedSimpleObject(BOOST_SP sp)
{
	return sp.get();
}

int getSimpleObjectPointerN(SimpleObject * object)
{
	return object->data.n;
}

int getSimpleObjectN(const SimpleObject & object)
{
	return object.data.n;
}
