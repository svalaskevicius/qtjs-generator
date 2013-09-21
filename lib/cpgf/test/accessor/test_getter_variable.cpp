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


#include "cpgf/accessor/ggetter.h"

#include "test_accessor_common.h"


using namespace cpgf;

namespace {

int globalA;
TestAccessorObject globalObject;
const TestAccessorObject globalConstObject;


GTEST(Getter_Global_Variable_int)
{
	GInstanceGetter<int *> getter = createInstanceGetter(&globalA);
	GEQUAL(&globalA, getter.getAddress(NULL));

	globalA = 1;
	GEQUAL(1, getter.get(NULL));

	globalA = 38;
	GEQUAL(38, getter.get(NULL));
}

GTEST(InstanceGetter_Global_Variable_int)
{
	GGetter<int *> getter = createGetter(NULL, &globalA);
	GEQUAL(&globalA, getter.getAddress());

	globalA = 1;
	GEQUAL(1, getter.get());
	GEQUAL(1, getter());
	GEQUAL(1, getter);

	globalA = 38;
	GEQUAL(38, getter.get());
	GEQUAL(38, getter());
	GEQUAL(38, getter);
}


GTEST(Getter_Global_Variable_object)
{
	GInstanceGetter<TestAccessorObject *> getter = createInstanceGetter(&globalObject);
	GEQUAL(&globalObject, getter.getAddress(NULL));

	globalObject.n = 1;
	GEQUAL(1, getter.get(NULL).n);

	globalObject.n = 38;
	GEQUAL(38, getter.get(NULL).n);
}

GTEST(InstanceGetter_Global_Variable_object)
{
	GGetter<TestAccessorObject *> getter = createGetter(NULL, &globalObject);
	GEQUAL(&globalObject, getter.getAddress());

	globalObject.n = 1;
	GEQUAL(1, getter.get().n);
	GEQUAL(1, getter().n);

	globalObject.n = 38;
	GEQUAL(38, getter.get().n);
	GEQUAL(38, getter().n);
}


GTEST(Getter_Global_Variable_const_object)
{
	GInstanceGetter<const TestAccessorObject *> getter = createInstanceGetter(&globalConstObject);
	GEQUAL(&globalConstObject, getter.getAddress(NULL));

	const_cast<TestAccessorObject *>(&globalConstObject)->n = 1;
	GEQUAL(1, getter.get(NULL).n);

	const_cast<TestAccessorObject *>(&globalConstObject)->n = 38;
	GEQUAL(38, getter.get(NULL).n);
}

GTEST(InstanceGetter_Global_Variable_const_object)
{
	GGetter<const TestAccessorObject *> getter = createGetter(NULL, &globalConstObject);
	GEQUAL(&globalConstObject, getter.getAddress());

	const_cast<TestAccessorObject *>(&globalConstObject)->n = 1;
	GEQUAL(1, getter.get().n);
	GEQUAL(1, getter().n);

	const_cast<TestAccessorObject *>(&globalConstObject)->n = 38;
	GEQUAL(38, getter.get().n);
	GEQUAL(38, getter().n);
}


GTEST(Getter_Member_Variable_object)
{
	TestAccessorObject a;
	GInstanceGetter<int TestAccessorObject::*> getter = createInstanceGetter(&TestAccessorObject::n);
	GEQUAL(&a.n, getter.getAddress(&a));

	a.n = 1;
	GEQUAL(1, getter.get(&a));

	a.n = 38;
	GEQUAL(38, getter.get(&a));
}

GTEST(InstanceGetter_Member_Variable_object)
{
	TestAccessorObject a;
	GGetter<int TestAccessorObject::*> getter = createGetter(&a, &TestAccessorObject::n);
	GEQUAL(&a.n, getter.getAddress());

	a.n = 1;
	GEQUAL(1, getter.get());
	GEQUAL(1, getter());
	GEQUAL(1, getter);

	a.n = 38;
	GEQUAL(38, getter.get());
	GEQUAL(38, getter());
	GEQUAL(38, getter);
}


GTEST(Getter_Member_Variable_const_object)
{
	const TestAccessorObject a;
	GInstanceGetter<int TestAccessorObject::*> getter = createInstanceGetter(&TestAccessorObject::n);
	GEQUAL(&a.n, getter.getAddress(&a));

	const_cast<TestAccessorObject *>(&a)->n = 1;
	GEQUAL(1, getter.get(&a));

	const_cast<TestAccessorObject *>(&a)->n = 38;
	GEQUAL(38, getter.get(&a));
}

GTEST(InstanceGetter_Member_Variable_const_object)
{
	const TestAccessorObject a;
	GGetter<int TestAccessorObject::*> getter = createGetter(&a, &TestAccessorObject::n);
	GEQUAL(&a.n, getter.getAddress());

	const_cast<TestAccessorObject *>(&a)->n = 1;
	GEQUAL(1, getter.get());
	GEQUAL(1, getter());
	GEQUAL(1, getter);

	const_cast<TestAccessorObject *>(&a)->n = 38;
	GEQUAL(38, getter.get());
	GEQUAL(38, getter());
	GEQUAL(38, getter);
}

GTEST(Getter_Constant_Getter)
{
	GConstantGetter<int> getter = createConstantGetter(1);
	GEQUAL(1, getter.get());
	
	getter = createConstantGetter(5);
	GEQUAL(5, getter.get());

	int x = 38;
	getter = createConstantGetter(x);
	GEQUAL(38, getter.get());
}


} // unnamed namespace

