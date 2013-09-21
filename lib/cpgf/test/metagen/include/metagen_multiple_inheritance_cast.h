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


#ifndef __METAGEN_MULTIPLE_INHERITANCE_CAST_H
#define __METAGEN_MULTIPLE_INHERITANCE_CAST_H

#include "cpgf/gsharedptr.h"

#include <typeinfo>

// R->A
// A->B
// A->C
// D->(B, C)

class MultipleInheritanceCastR
{
public:
	virtual ~MultipleInheritanceCastR() {}
	virtual bool isR() const { return true; }
	virtual bool isA() const { return false; }
	virtual bool isB() const { return false; }
	virtual bool isC() const { return false; }
	virtual bool isD() const { return false; }

	int r[20];
};

class MultipleInheritanceCastA : public MultipleInheritanceCastR
{
public:
	virtual ~MultipleInheritanceCastA() {}
	virtual bool isR() const { return false; }
	virtual bool isA() const { return true; }
	virtual bool isB() const { return false; }
	virtual bool isC() const { return false; }
	virtual bool isD() const { return false; }

	int a;
};

class MultipleInheritanceCastB : virtual public MultipleInheritanceCastA
{
public:
	virtual ~MultipleInheritanceCastB() {}
	virtual void c1() {}
	virtual bool isR() const { return false; }
	virtual bool isA() const { return false; }
	virtual bool isB() const { return true; }
	virtual bool isC() const { return false; }
	virtual bool isD() const { return false; }

	double c;
};

class MultipleInheritanceCastC : virtual public MultipleInheritanceCastA
{
public:
	virtual ~MultipleInheritanceCastC() {}
	virtual bool isR() const { return false; }
	virtual bool isA() const { return false; }
	virtual bool isB() const { return false; }
	virtual bool isC() const { return true; }
	virtual bool isD() const { return false; }

	long long d[20];
};

class MultipleInheritanceCastD : virtual public MultipleInheritanceCastB, virtual public MultipleInheritanceCastC
{
public:
	virtual ~MultipleInheritanceCastD() {}
	virtual bool isR() const { return false; }
	virtual bool isA() const { return false; }
	virtual bool isB() const { return false; }
	virtual bool isC() const { return false; }
	virtual bool isD() const { return true; }

	bool iAmD() const { return true; }

	int e[10];
};

struct MultipleInheritanceCastFieldData
{
	MultipleInheritanceCastFieldData() : rawD(NULL), rawR(NULL) {}

	bool checkD() const {
		return this->rawD->isD() && typeid(*(this->rawD)) == typeid(MultipleInheritanceCastD);
	}

	bool checkR() const {
		return this->rawR->isD() && typeid(*(this->rawR)) == typeid(MultipleInheritanceCastD);
	}

	MultipleInheritanceCastD * rawD;
	MultipleInheritanceCastR * rawR;
};

inline MultipleInheritanceCastD * getMultipleInheritanceCastD()
{
	static MultipleInheritanceCastD d;
	MultipleInheritanceCastD * pd = &d;
	return pd;
}

inline cpgf::GSharedPointer<MultipleInheritanceCastD> getMultipleInheritanceCastDSharedPointer()
{
	return cpgf::GSharedPointer<MultipleInheritanceCastD>(new MultipleInheritanceCastD());
}

inline bool checkMultipleInheritanceCastDAsR(MultipleInheritanceCastR * r)
{
	return r->isD() && typeid(*r) == typeid(MultipleInheritanceCastD);
}


inline MultipleInheritanceCastR * getMultipleInheritanceCastDAsR()
{
	return getMultipleInheritanceCastD();
}

inline cpgf::GSharedPointer<MultipleInheritanceCastR> getMultipleInheritanceCastDAsRSharedPointer()
{
	return cpgf::GSharedPointer<MultipleInheritanceCastR>(new MultipleInheritanceCastD());
}

inline bool checkMultipleInheritanceCastRAsD(MultipleInheritanceCastD * d)
{
	return d->isD() && typeid(*d) == typeid(MultipleInheritanceCastD);
}




#endif
