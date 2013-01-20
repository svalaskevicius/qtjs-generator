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


#ifndef __GMETACONVERTER_H
#define __GMETACONVERTER_H

#include "cpgf/gapiutil.h"


namespace cpgf {

struct GMetaTraitsParam;

const uint32_t metaConverterCanNothing = 0;
const uint32_t metaConverterCanRead = 1;
const uint32_t metaConverterCanWrite = 2;
const uint32_t metaConverterCanReadWrite = 3;

struct IMetaConverter : public IExtendObject
{
	virtual uint32_t G_API_CC capabilityForCString() = 0;
	virtual const char * G_API_CC readCString(const void * instance, gapi_bool * needFree, IMemoryAllocator * allocator) = 0;
	virtual void G_API_CC writeCString(void * instance, const char * str) = 0;

	virtual uint32_t G_API_CC capabilityForCWideString() = 0;
	virtual const wchar_t * G_API_CC readCWideString(const void * instance, gapi_bool * needFree, IMemoryAllocator * allocator) = 0;
	virtual void G_API_CC writeCWideString(void * instance, const wchar_t * str) = 0;
};

} // namespace cpgf


namespace cpgf {

inline bool isMetaConverterCanRead(uint32_t flag)
{
	return flag == metaConverterCanRead || flag == metaConverterCanReadWrite;
}

inline bool isMetaConverterCanWrite(uint32_t flag)
{
	return flag == metaConverterCanWrite || flag == metaConverterCanReadWrite;
}


template <typename T, typename Enabled = void>
struct GMetaTraitsCreateConverter
{
	static IMetaConverter * createConverter(const GMetaTraitsParam &) {
		return NULL;
	}
};

template <typename T>
IMetaConverter * createConverterFromMetaTraits(const GMetaTraitsParam & param, T *)
{
	return GMetaTraitsCreateConverter<T>::createConverter(param);
}

} // namespace cpgf


#endif
