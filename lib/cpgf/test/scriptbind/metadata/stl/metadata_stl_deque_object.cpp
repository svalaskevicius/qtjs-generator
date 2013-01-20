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


#include "metadata_stl_deque.h"


namespace {


template <typename Binding>
void test_stl_deque_object(Binding * binding, TestScriptContext * context)
{
	testStlDeque_Helper<deque<StlTestData> >(binding, context, "deque_obj", GTestValueProvider_TestData(context));
}


#define CASE test_stl_deque_object
#include "metadata_stl_testcase.h"


}
