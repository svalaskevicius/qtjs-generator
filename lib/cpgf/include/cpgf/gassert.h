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


#ifndef __GASSERT_H
#define __GASSERT_H

#include "cpgf/gpp.h"

#include <stdexcept>

#ifndef NDEBUG
#define GASSERT_ENABLED
#endif


namespace cpgf {

template <bool expr>
struct GStaticAssertCheck;

template<>
struct GStaticAssertCheck <true> { enum { a = 1 }; };

#define GASSERT_STATIC(expr)  enum GPP_CONCAT(gassert_static_, __LINE__) { GPP_CONCAT(gassert_static_v_, __LINE__) = sizeof(cpgf::GStaticAssertCheck<(bool)(expr)>) }

#ifdef GASSERT_ENABLED
	#define GASSERT(expr) gassert((bool)(expr), "assert failure", __FILE__, __LINE__);
	#define GASSERT_MSG(expr, msg) gassert((bool)(expr), msg, __FILE__, __LINE__);

	inline void gassert(bool expr, const char * msg, const char * /*file*/, int /*line*/) {
		if(!expr) {
			throw std::runtime_error(msg);
		}
	}
#else
	#define GASSERT(expr)
	#define GASSERT_MSG(expr, msg)
#endif


} // namespace cpgf


#endif
