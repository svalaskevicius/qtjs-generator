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


#ifndef __GMETASERIALIZER_ARRAY_H
#define __GMETASERIALIZER_ARRAY_H

#include "cpgf/metatraits/gmetaserializer.h"
#include "cpgf/metatraits/gmetaserializer_trapall.h"
#include "cpgf/gmetatype.h"

#include "cpgf/gscopedinterface.h"


namespace cpgf {


namespace metatraits_internal {

IMetaSerializer * createArraySerializer(IMetaSerializer * elementSerializer, const GMetaType & metaType, unsigned int elementSize, unsigned int elementCount);

template <typename T>
IMetaSerializer * metaTraitsCreateSerializerForArray(const GMetaTraitsParam & param, const T & a)
{
	IMetaSerializer * serializer = createSerializerFromMetaTraits(param, &a);
	
	if(serializer == NULL) {
		serializer = createTrapAllSerializer<T>(param);
	}

	return serializer;
}

template <typename T, int N>
IMetaSerializer * metaTraitsCreateSerializerForArray(const GMetaModule * module, const T (&)[N])
{
	T * p = 0;
	GScopedInterface<IMetaSerializer> elementSerializer(metaTraitsCreateSerializerForArray(module, *p));
	return createArraySerializer(elementSerializer.get(), createMetaType<T>(), sizeof(T), N);
}

} // namespace metatraits_internal


template <typename T, int N>
struct GMetaTraitsCreateSerializer <T[N], void>
{
	static cpgf::IMetaSerializer * createSerializer(const cpgf::GMetaTraitsParam & param) {
		T * p = 0;
		cpgf::GScopedInterface<cpgf::IMetaSerializer> elementSerializer(cpgf::metatraits_internal::metaTraitsCreateSerializerForArray(param, *p));
		return cpgf::metatraits_internal::createArraySerializer(elementSerializer.get(), cpgf::createMetaType<T>(), sizeof(T), N);
	}
};


} // namespace cpgf



#endif
