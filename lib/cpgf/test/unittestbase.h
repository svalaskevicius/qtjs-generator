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


#ifndef __UNITTESTBASE_H
#define __UNITTESTBASE_H


#include "UnitTest++.h"

#include "cpgf/gpp.h"
#include "cpgf/gtypetraits.h"
#include "cpgf/genableif.h"

#include <string>


#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4800) // forcing value to bool 'true' or 'false' (performance warning)
#endif


#define GTEST TEST

#define GCHECK(...) CHECK(bool(__VA_ARGS__))

#define GEQUAL(a, b) GCHECK(a == b)

#define GEQUAL_NOTNULL(a, b) GCHECK(a); GCHECK(a == b)

#define GDIFF(a, b) GCHECK(!(a == b))

#define GNEAR(a, b, t) CHECK_CLOSE(a, b, t)

#define GBEGIN_EXCEPTION try {
#define GEND_EXCEPTION(e) GCHECK(false); } catch(e) {}

#define FEQUAL(a, b) (fabs((a) - (b)) < 0.001)
#define GFEQUAL(a, b) GNEAR(a, b, 0.001)

namespace cpgf {


template <typename T, typename V>
void pointerAssign(T & p, const V & value, typename GEnableIf<IsPointer<T>::Result>::Result * = 0)
{
	p = value;
}

template <typename T, typename V>
void pointerAssign(T & p, const V & value, typename GDisableIf<IsPointer<T>::Result>::Result * = 0)
{
	p.reset(value);
}



} // namespace cpgf


#endif


