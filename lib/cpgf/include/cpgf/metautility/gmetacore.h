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


#ifndef __GMETACORE_H
#define __GMETACORE_H

#include "cpgf/gvariant.h"


namespace cpgf {

class GScriptObject;
struct IMetaClass;

class GMetaCore
{
public:
	explicit GMetaCore(GScriptObject * scriptObject);
	IMetaClass * cloneClass(IMetaClass * metaClass);
	GVariant cast(const GVariant & instance, IMetaClass * targetMetaClass = NULL);

private:
	GScriptObject * scriptObject;
};


} // namespace cpgf



#endif
