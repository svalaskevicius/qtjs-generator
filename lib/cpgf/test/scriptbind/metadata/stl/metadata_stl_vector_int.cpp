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


#include "metadata_stl_vector.h"

namespace {


template <typename Binding>
void test_stl_vector_int(Binding * binding, TestScriptContext * context)
{
	testStlVector_Helper<vector<int> >(binding, context, "vector_int", GTestValueProvider_Int(context));
}


#define CASE test_stl_vector_int
#include "metadata_stl_testcase.h"



}
