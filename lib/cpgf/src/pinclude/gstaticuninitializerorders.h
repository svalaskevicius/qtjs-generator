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


#ifndef __GSTATICUNINITIALIZERORDERS_H
#define __GSTATICUNINITIALIZERORDERS_H

#include "cpgf/glifecycle.h"

namespace cpgf {

const GStaticUninitializationOrderType suo_ScriptDataWrapperPool = 0x500000;
const GStaticUninitializationOrderType suo_GlobalMetaClass = 0x600000;
const GStaticUninitializationOrderType suo_MetaModuleForGlobalMetaclass = 0x600001;
const GStaticUninitializationOrderType suo_MemoryPool = 0x700000;

template <typename T>
class GUninitializerDeleter
{
public:
	explicit GUninitializerDeleter(T ** p) : p(p) {}

	void operator() () {
		if(*p != NULL) {
			delete *p;
			*p = NULL;
		}
	}

private:
	T ** p;
};

template <typename T>
GUninitializerDeleter<T> makeUninitializerDeleter(T ** p)
{
	return GUninitializerDeleter<T>(p);
}


} // namespace cpgf


#endif
