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


#ifndef __GMETACONVERTER_DEFAULT_H
#define __GMETACONVERTER_DEFAULT_H


#include "cpgf/metatraits/gmetaconverter.h"


namespace cpgf {

class GMetaConverterDefault : public IMetaConverter
{
	G_INTERFACE_IMPL_OBJECT
	G_INTERFACE_IMPL_EXTENDOBJECT
	
public:
	virtual ~GMetaConverterDefault() {}

	virtual uint32_t G_API_CC capabilityForCString() {
		return metaConverterCanNothing;
	}
	
	virtual const char * G_API_CC readCString(const void * /*instance*/, gapi_bool * /*needFree*/, IMemoryAllocator * /*allocator*/) {
		return NULL;
	}
	
	virtual void G_API_CC writeCString(void * /*instance*/, const char * /*str*/) {
	}

	virtual uint32_t G_API_CC capabilityForCWideString() {
		return metaConverterCanNothing;
	}
	
	virtual const wchar_t * G_API_CC readCWideString(const void * /*instance*/, gapi_bool * /*needFree*/, IMemoryAllocator * /*allocator*/) {
		return NULL;
	}
	
	virtual void G_API_CC writeCWideString(void * /*instance*/, const wchar_t * /*str*/) {
	}
};


} // namespace cpgf



#endif
