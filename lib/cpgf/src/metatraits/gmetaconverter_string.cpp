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


#include "cpgf/metatraits/gmetaconverter_string.h"
#include "cpgf/gapiutil.h"

#include "../pinclude/gmetaconverter_default.h"

#include <string>


namespace cpgf {

namespace {

class GMetaConverterStdString : public GMetaConverterDefault
{
public:
	virtual ~GMetaConverterStdString() {}

	virtual uint32_t G_API_CC capabilityForCString() {
		return metaConverterCanReadWrite;
	}
	
	virtual const char * G_API_CC readCString(const void * instance, gapi_bool * needFree, IMemoryAllocator * /*allocator*/) {
		*needFree = false;
		
		return static_cast<const std::string *>(instance)->c_str();
	}

	virtual void G_API_CC writeCString(void * instance, const char * str) {
		*static_cast<std::string *>(instance) = str;
	}

};

} // unnamed namespace

namespace metatraits_internal {

	IMetaConverter * doCreateConverterForStdString()
	{
		return new GMetaConverterStdString();
	}

} // namespace metatraits_internal


} // namespace cpgf


