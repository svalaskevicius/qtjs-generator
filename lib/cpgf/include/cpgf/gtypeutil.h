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


#ifndef __GTYPEUTIL_H
#define __GTYPEUTIL_H

#include "cpgf/gcallback.h"


namespace cpgf {

typedef GCallback<void * (void *)> GTypeConverterCallback;

template <typename From, typename To>
struct GTypeConverter
{
	void * operator() (void * p) const {
		return static_cast<To>(static_cast<From>(p));
	}
};


typedef GCallback<void (void *)> GTypeDeleterCallback;

template <typename T>
struct GTypeDeleter_Delete
{
	void operator() (void * p) const {
		delete static_cast<T *>(p);
	}
};


} // namespace cpgf



#endif
