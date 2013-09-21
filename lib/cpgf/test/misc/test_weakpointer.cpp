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


#include "test_misc_common.h"

#include "cpgf/gsharedptr.h"
#include "cpgf/metautility/gmetabytearray.h"
#include "cpgf/gvariant.h"

#include <vector>


using namespace cpgf;
using namespace std;


namespace Test_WeakPointer { namespace {

class TestA;
class TestB;

typedef GSharedPointer<TestA> SharedA;
typedef GSharedPointer<TestB> SharedB;
typedef GWeakPointer<TestA> WeakA;
typedef GWeakPointer<TestB> WeakB;

class TestA
{
public:
	TestA(int * counter) : counter(counter) {
		++*counter;
	}

	~TestA() {
		--*counter;
	}

	void setB(SharedB pb) {
		this->pb = pb;
	}

private:
	int * counter;
	SharedB pb;
};

class TestB
{
public:
	TestB(int * counter, WeakA pa) : counter(counter), pa(pa) {
		++*counter;
	}

	~TestB() {
		--*counter;
	}

private:
	int * counter;
	WeakA pa;
};

GTEST(TestWeakPointer_Simple)
{
	int count = 0;

	{
		SharedA pa(new TestA(&count));
		GEQUAL(1, count);
		
		WeakA wa(pa);

		GEQUAL(pa, wa.get());

		SharedB pb(new TestB(&count, wa));
		GEQUAL(2, count);

		pa->setB(pb);
		GEQUAL(2, count);
	}
	GEQUAL(0, count);

}


GTEST(TestWeakPointer_NullWeakPointer)
{

	int count = 0;

	{
		SharedA pa(new TestA(&count));
		GEQUAL(1, count);
		
		WeakA wa(pa);

		GEQUAL(pa, wa.get());

		SharedB pb(new TestB(&count, wa));
		GEQUAL(2, count);

		pa->setB(pb);
		GEQUAL(2, count);

		pa.reset();
		pb.reset();

		GCHECK(! wa.get());
	}
	GEQUAL(0, count);

}


GTEST(TestWeakPointer_DataInVector)
{
	const int iteral = 100;

	int count = 0;

	{
		vector<SharedA> va;
		vector<SharedB> vb;

		for(int i = 0; i <iteral; ++i) {
			SharedA pa(new TestA(&count));
			va.push_back(pa);
		
			WeakA wa(pa);

			SharedB pb(new TestB(&count, wa));

			pa->setB(pb);
			vb.push_back(pb);
		}
		GEQUAL(iteral * 2, count);
    }
	GEQUAL(0, count);
}





} }

