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


#include "cpgf/accessor/gsetter.h"

#include "test_accessor_common.h"


using namespace cpgf;

namespace {

int globalA;
TestAccessorObject globalObject;


GTEST(Setter_Global_Variable_int)
{
	GInstanceSetter<int *> setter = createInstanceSetter(&globalA);
	GEQUAL(&globalA, setter.getAddress(NULL));

	globalA = 5;

	setter.set(NULL, 1);
	GEQUAL(1, globalA);

	setter.set(NULL, 38);
	GEQUAL(38, globalA);
}

GTEST(InstanceSetter_Global_Variable_int)
{
	GSetter<int *> setter = createSetter(NULL, &globalA);
	GEQUAL(&globalA, setter.getAddress());

	globalA = 5;

	setter.set(1);
	GEQUAL(1, globalA);

	setter(2);
	GEQUAL(2, globalA);

	setter = 3;
	GEQUAL(3, globalA);
}


GTEST(Setter_Global_Variable_object)
{
	GInstanceSetter<TestAccessorObject *> setter = createInstanceSetter(&globalObject);
	GEQUAL(&globalObject, setter.getAddress(NULL));

	globalObject.n = 5;
	
	setter.set(NULL, TestAccessorObject(1));
	GEQUAL(1, globalObject.n);

	setter.set(NULL, TestAccessorObject(38));
	GEQUAL(38, globalObject.n);
}

GTEST(InstanceSetter_Global_Variable_object)
{
	GSetter<TestAccessorObject *> setter = createSetter(NULL, &globalObject);
	GEQUAL(&globalObject, setter.getAddress());

	globalObject.n = 5;

	setter.set(TestAccessorObject(1));
	GEQUAL(1, globalObject.n);

	setter.set(TestAccessorObject(2));
	GEQUAL(2, globalObject.n);

	setter.set(TestAccessorObject(3));
	GEQUAL(3, globalObject.n);
}


GTEST(Setter_Member_Variable_object)
{
	TestAccessorObject a;
	GInstanceSetter<int TestAccessorObject::*> setter = createInstanceSetter(&TestAccessorObject::n);
	GEQUAL(&a.n, setter.getAddress(&a));

	a.n = 5;

	setter.set(&a, 1);
	GEQUAL(1, a.n);

	setter.set(&a, 38);
	GEQUAL(38, a.n);
}

GTEST(InstanceSetter_Member_Variable_object)
{
	TestAccessorObject a;
	GSetter<int TestAccessorObject::*> setter = createSetter(&a, &TestAccessorObject::n);
	GEQUAL(&a.n, setter.getAddress());

	a.n = 5;

	setter.set(1);
	GEQUAL(1, a.n);

	setter(2);
	GEQUAL(2, a.n);

	setter = 3;
	GEQUAL(3, a.n);
}



} // unnamed namespace

