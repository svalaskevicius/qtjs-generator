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


#include "test_variant_common.h"

#include "cpgf/gvariant.h"
#include "cpgf/gexception.h"
#include "cpgf/gmetaapi.h"

using namespace std;
using namespace cpgf;

namespace Test_Variant_Misc { namespace {

class CLASS
{
public:
	CLASS() {}
	CLASS(const CLASS &) {}
	CLASS(const string &) {}

	CLASS(int) {}
};

class ClassB
{
public:
	static ClassB * lastB;

public:
	ClassB() { lastB = this; }

	ClassB(const ClassB &) {
	}

	ClassB & operator = (const ClassB &) {
		return *this;
	}
};
ClassB * ClassB::lastB = NULL;

GTEST(TestVariant_ConstReference)
{
	const ClassB & a = fromVariant<const ClassB &, VarantCastCopyConstRef>(createVariant<false>(ClassB()));
	GDIFF(&a, ClassB::lastB);

	const ClassB & b = fromVariant<const ClassB &, VarantCastKeepConstRef>(createVariant<false>(ClassB()));
	GEQUAL(&b, ClassB::lastB);
}

GTEST(TestVariant_ObjectPointer)
{
	GEQUAL(vtGetBaseType(GVariant((CLASS *)0).refData().typeData), vtObject);
	GEQUAL(vtGetPointers(GVariant((CLASS *)0).refData().typeData), 1);

	GEQUAL(vtGetBaseType(GVariant((CLASS const *)0).refData().typeData), vtObject);
	GEQUAL(vtGetPointers(GVariant((CLASS const *)0).refData().typeData), 1);

	GEQUAL(vtGetBaseType(GVariant((CLASS volatile *)0).refData().typeData), vtObject);
	GEQUAL(vtGetPointers(GVariant((CLASS volatile *)0).refData().typeData), 1);

	GEQUAL(vtGetBaseType(GVariant((CLASS const volatile *)0).refData().typeData), vtObject);
	GEQUAL(vtGetPointers(GVariant((CLASS const volatile *)0).refData().typeData), 1);

	GEQUAL(vtGetBaseType(GVariant((CLASS **)0).refData().typeData), vtObject);
	GEQUAL(vtGetPointers(GVariant((CLASS **)0).refData().typeData), 2);

	GEQUAL(vtGetBaseType(GVariant((IMetaClass *)0).refData().typeData), vtInterface);
	GEQUAL(vtGetPointers(GVariant((IMetaClass *)0).refData().typeData), 1);

	GEQUAL(vtGetBaseType(GVariant((const IMetaClass *)0).refData().typeData), vtInterface);
	GEQUAL(vtGetPointers(GVariant((const IMetaClass *)0).refData().typeData), 1);

	GEQUAL(vtGetBaseType(GVariant((const volatile IMetaClass *)0).refData().typeData), vtInterface);
	GEQUAL(vtGetPointers(GVariant((const volatile IMetaClass *)0).refData().typeData), 1);
}



} }
