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


#ifndef __GINTERFACE_H
#define __GINTERFACE_H

#include "cpgf/gcompiler.h"
#include "cpgf/gstdint.h"


namespace cpgf {

typedef int32_t gapi_bool;

struct IObject
{
   virtual uint32_t G_API_CC unused_queryInterface(void *, void *) = 0;
   virtual uint32_t G_API_CC addReference() = 0;
   virtual uint32_t G_API_CC releaseReference() = 0;
};


} // namespace cpgf


#endif

