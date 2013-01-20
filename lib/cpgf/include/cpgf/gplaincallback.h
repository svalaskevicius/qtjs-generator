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


#ifndef __GPLAINCALLBACK_H
#define __GPLAINCALLBACK_H

#include "cpgf/gcallback.h"


#define CB_FUNC_TRAITS_ARGS(N, P) GPP_COMMA_IF(N) typename FunctionTraits::ArgList::Arg ## N p ## N

#define CB_DEF_AGENT_N(N, P) \
	template<typename Signature, typename Functor, const Functor & func > \
	class GPlainCallbackAgent { \
	private: \
		typedef GFunctionTraits<Signature> FunctionTraits; \
	public: \
		static typename FunctionTraits::ResultType invoke(GPP_REPEAT(N, CB_FUNC_TRAITS_ARGS, GPP_EMPTY)) { return func(GPP_REPEAT_PARAMS(N, p)); } \
		static typename FunctionTraits::ResultType __stdcall stdcallInvoke(GPP_REPEAT(N, CB_FUNC_TRAITS_ARGS, GPP_EMPTY)) { return func(GPP_REPEAT_PARAMS(N, p)); } \
		static typename FunctionTraits::ResultType __fastcall fastcallInvoke(GPP_REPEAT(N, CB_FUNC_TRAITS_ARGS, GPP_EMPTY)) { return func(GPP_REPEAT_PARAMS(N, p)); } \
	};

#define CB_DEF_FUNC_TRAITS(N, P) \
	template <> \
	struct GPlainCallbackFunctionTraits <N> { \
		CB_DEF_AGENT_N(N, GPP_EMPTY) \
	};


namespace cpgf {

namespace callback_internal {

template <int arity>
class GPlainCallbackFunctionTraits;

GPP_REPEAT_2(CB_MAX_ARITY, CB_DEF_FUNC_TRAITS, GPP_EMPTY)

} // namespace callback_internal


template <typename Signature, typename Functor, const Functor & func>
class GPlainFunction : public callback_internal::GPlainCallbackFunctionTraits<GFunctionTraits<Signature>::Arity>::template GPlainCallbackAgent<Signature, Functor, func>
{
};

template <typename Signature, const GCallback<Signature> & cb>
class GPlainCallback : public GPlainFunction<Signature, GCallback<Signature>, cb>
{
};


} // namespace cpgf


#undef CB_DEF_FUNC_TRAITS
#undef CB_DEF_AGENT_N
#undef CB_FUNC_TRAITS_ARGS



#endif
