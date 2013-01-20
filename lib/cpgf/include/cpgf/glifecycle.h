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


#ifndef __GLIFECYCLE_H
#define __GLIFECYCLE_H

#include "cpgf/gcallback.h"


namespace cpgf {

void shutDownLibrary();
bool isLibraryLive();

struct LibraryLifeGuard
{
	~LibraryLifeGuard() {
		shutDownLibrary();
	}
};

#define G_GUARD_LIBRARY_LIFE namespace { LibraryLifeGuard _libraryGuard; }


typedef GCallback<void ()> GStaticUninitializerType;
typedef unsigned int GStaticUninitializationOrderType;

void addOrderedStaticUninitializer(GStaticUninitializationOrderType order, const GStaticUninitializerType & uninitializer);


} // namespace cpgf



#endif

