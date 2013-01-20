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


#ifndef __GMETACOMMON_P_H
#define __GMETACOMMON_P_H

#include <string.h>


namespace cpgf {

namespace meta_internal {


void handleForbidAccessError(bool isRead);

void * newZeroBuffer(void * buffer, size_t size, void * copy);

class GMetaItemImplement;

struct CStringCompare
{
	bool operator () (const char * a, const char * b) const {
		return strcmp(a, b) < 0;
	}
};


template <typename T>
struct GScopedPointerDeleter_BaseMeta
{
	static inline void Delete(T * p) {
		p->deleteSelf();
	}
};

template <typename T>
void virtualBaseMetaDeleter(void * self)
{
	delete static_cast<T *>(self);
}

} // namespace meta_internal



} // namespace cpgf



#endif
