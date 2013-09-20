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

#include "cpgf/gmemorypool.h"


using namespace cpgf;


namespace Test_MemoryPoool { namespace {


int counter = 0;

class TestMemoryPoolItem
{
public:
	TestMemoryPoolItem() : flag(1) {
		++counter;
	}
	
	~TestMemoryPoolItem() {
		GCHECK(this->flag);
		
		this->flag = 0;
		
		--counter;
	}
	
private:
	int flag;
};


GTEST(TestMemoryPool)
{
	const int ItemCount = 100;

	counter = 0;
	GObjectPool<TestMemoryPoolItem> pool;
	TestMemoryPoolItem * pointers[ItemCount];

	for(int i = 0; i < ItemCount; ++i) {
		pointers[i] = pool.allocate();
	}
	GEQUAL(ItemCount, counter);

	for(int i = 0; i < 50; ++i) {
		pool.free(pointers[i]);
	}
	GEQUAL(ItemCount - 50, counter);

	for(int i = 50; i < ItemCount; ++i) {
		pool.free(pointers[i]);
	}
	GEQUAL(0, counter);
}




} }

