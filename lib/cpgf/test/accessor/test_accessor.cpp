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


#include "cpgf/accessor/gaccessor.h"

#include "test_accessor_common.h"


using namespace cpgf;

namespace {

int globalA;

GTEST(Accessor_Getter_Setter)
{
	globalA = 0;

	GInstanceAccessor<int *, int *> accessor = createInstanceAccessor(&globalA, &globalA);
	GEQUAL(&globalA, accessor.getAddress(NULL));
	GEQUAL(0, accessor.get(NULL));

	accessor.set(NULL, 5);
	GEQUAL(5, globalA);
	GEQUAL(5, accessor.get(NULL));
}

GTEST(InstanceAccessor_Getter_Setter)
{
	globalA = 0;

	GAccessor<int *, int *> accessor = createAccessor(NULL, &globalA, &globalA);
	GEQUAL(&globalA, accessor.getAddress());
	GEQUAL(0, accessor.get());

	accessor.set(5);
	GEQUAL(5, globalA);
	GEQUAL(5, accessor.get());
}


GTEST(Accessor_Getter_NoSetter)
{
	globalA = 0;

	GInstanceAccessor<int *, int> accessor = createInstanceAccessor(&globalA, 0);
	GEQUAL(&globalA, accessor.getAddress(NULL));
	GEQUAL(0, accessor.get(NULL));

	globalA = 5;
	GEQUAL(5, accessor.get(NULL));
}

GTEST(InstanceAccessor_Getter_NoSetter)
{
	globalA = 0;

	GAccessor<int *, int> accessor = createAccessor(NULL, &globalA, 0);
	GEQUAL(&globalA, accessor.getAddress());
	GEQUAL(0, accessor.get());

	globalA = 5;
	GEQUAL(5, accessor.get());
}


GTEST(Accessor_NoGetter_Setter)
{
	globalA = 0;

	GInstanceAccessor<int, int *> accessor = createInstanceAccessor(0, &globalA);
	GEQUAL(&globalA, accessor.getAddress(NULL));

	accessor.set(NULL, 5);
	GEQUAL(5, globalA);
}

GTEST(InstanceAccessor_NoGetter_Setter)
{
	globalA = 0;

	GAccessor<int, int *> accessor = createAccessor(NULL, 0, &globalA);
	GEQUAL(&globalA, accessor.getAddress());

	accessor.set(5);
	GEQUAL(5, globalA);
}



} // unnamed namespace

