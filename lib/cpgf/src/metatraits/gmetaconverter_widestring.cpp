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


#include "cpgf/metatraits/gmetaconverter_widestring.h"
#include "cpgf/gapiutil.h"

#include "../pinclude/gmetaconverter_default.h"

#include <string>


namespace cpgf {

namespace {

class GMetaConverterStdWideString : public GMetaConverterDefault
{
public:
	virtual ~GMetaConverterStdWideString() {}

	virtual uint32_t G_API_CC capabilityForCWideString() {
		return metaConverterCanReadWrite;
	}
	
	virtual const wchar_t * G_API_CC readCWideString(const void * instance, gapi_bool * needFree, IMemoryAllocator * /*allocator*/) {
		*needFree = false;
		
		return static_cast<const std::wstring *>(instance)->c_str();
	}

	virtual void G_API_CC writeCWideString(void * instance, const wchar_t * str) {
		*static_cast<std::wstring *>(instance) = str;
	}

};

} // unnamed namespace

namespace metatraits_internal {

	IMetaConverter * doCreateConverterForStdWideString()
	{
		return new GMetaConverterStdWideString();
	}

} // namespace metatraits_internal


} // namespace cpgf


