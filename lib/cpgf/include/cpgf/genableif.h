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


#ifndef __GENABLEIF_H
#define __GENABLEIF_H

#include "cpgf/gcompiler.h"

namespace cpgf {


template <bool, typename T = void>
struct GEnableIf {
	typedef T Result;
};

template <typename T>
struct GEnableIf <false, T> {
};

template <typename C, typename T = void>
struct GEnableIfResult : public GEnableIf<C::Result, T> {
};


template <bool, typename T = void>
struct GDisableIf {
	typedef T Result;
};

template <typename T>
struct GDisableIf <true, T> {
};

template <typename C, typename T = void>
struct GDisableIfResult : public GDisableIf<C::Result, T> {
};

struct GTrueResult {
	G_STATIC_CONSTANT(bool, Result = true);
};

struct GFalseResult {
	G_STATIC_CONSTANT(bool, Result = false);
};

template <typename T>
struct GNotResult {
	G_STATIC_CONSTANT(bool, Result = ! T::Result);
};


template <typename T1, typename T2, typename T3 = GTrueResult, typename T4 = GTrueResult, typename T5 = GTrueResult, typename T6 = GTrueResult, typename T7 = GTrueResult, typename T8 = GTrueResult, typename T9 = GTrueResult, typename T10 = GTrueResult>
struct GAndResult {
	G_STATIC_CONSTANT(bool, Result = T1::Result && T2::Result && T3::Result && T4::Result && T5::Result && T6::Result && T7::Result && T8::Result && T9::Result && T10::Result);
};

template <typename T1, typename T2, typename T3 = GFalseResult, typename T4 = GFalseResult, typename T5 = GFalseResult, typename T6 = GFalseResult, typename T7 = GFalseResult, typename T8 = GFalseResult, typename T9 = GFalseResult, typename T10 = GFalseResult>
struct GOrResult {
	G_STATIC_CONSTANT(bool, Result = T1::Result || T2::Result || T3::Result || T4::Result || T5::Result || T6::Result || T7::Result || T8::Result || T9::Result || T10::Result);
};


template <bool B1, bool B2, bool B3 = true, bool B4 = true, bool B5 = true, bool B6 = true, bool B7 = true>
struct GBoolAnd;

template <bool B1, bool B2, bool B3, bool B4, bool B5, bool B6, bool B7>
struct GBoolAnd
{
	G_STATIC_CONSTANT(bool, Result = false);
};

template <>
struct GBoolAnd <true, true, true, true, true, true, true>
{
	G_STATIC_CONSTANT(bool, Result = true);
};

template <bool B1, bool B2, bool B3 = false, bool B4 = false, bool B5 = false, bool B6 = false, bool B7 = false>
struct GBoolOr;

template <bool B1, bool B2, bool B3, bool B4, bool B5, bool B6, bool B7>
struct GBoolOr
{
	G_STATIC_CONSTANT(bool, Result = true);
};

template <>
struct GBoolOr <false, false, false, false, false, false, false>
{
	G_STATIC_CONSTANT(bool, Result = false);
};


} // namespace cpgf


#endif
