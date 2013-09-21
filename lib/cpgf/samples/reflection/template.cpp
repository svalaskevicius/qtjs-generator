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


#include "reflect_common.h"



namespace {

template <typename T>
class TestBase
{
public:
	virtual ~TestBase() {
	}

	int getDouble() const {
		return sizeof(T) * 2;
	}

	int value;
};

template <typename T, typename P>
class TestObject : public TestBase<T>
{
public:
	int getSize() const {
		return sizeof(T);
	}

	int n;
};


template <typename ClassType>
void lazyDefineClass(cpgf::GDefineMetaClass<ClassType> define)
{
	define
		._method("getSize", &ClassType::getSize)
		._method("getDouble", &ClassType::getDouble)
	;
}

G_AUTO_RUN_BEFORE_MAIN()
{
	using namespace cpgf;

	GDefineMetaClass<TestObject<char, int> >::lazy("template::TestObject_char_int", &lazyDefineClass<TestObject<char, int> >);
}



void doTest()
{
	using namespace cpgf;

	const GMetaClass * metaClass;
	const GMetaMethod * method;

	metaClass = findMetaClass("template::TestObject_char_int");
	testCheckAssert(metaClass != NULL);
	std::cout << metaClass->getName() << std::endl;

	{
		void * obj = metaClass->createInstance();
		method = metaClass->getMethodInHierarchy("getSize", &obj); testCheckAssert(method != NULL);
		testCheckEqual(fromVariant<unsigned int>(method->invoke(obj)), sizeof(char));
		metaClass->destroyInstance(obj);
	}

	{
		void * obj = metaClass->createInstance();
		method = metaClass->getMethodInHierarchy("getDouble", &obj); testCheckAssert(method != NULL);
		testCheckEqual(fromVariant<unsigned int>(method->invoke(obj)), 2 * sizeof(char));
		metaClass->destroyInstance(obj);
	}

}


gTestCase(doTest);


}
