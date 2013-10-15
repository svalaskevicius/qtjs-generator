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


#ifndef __GMETASERIALIZER_TRAPALL_H
#define __GMETASERIALIZER_TRAPALL_H

#include "cpgf/gmetatype.h"
#include "cpgf/gmetaextendtype.h"
#include "cpgf/gscopedinterface.h"


namespace cpgf {

struct IMetaSerializer;
class GMetaType;

namespace metatraits_internal {

cpgf::IMetaSerializer * doCreateTrapAllSerializer(const cpgf::GMetaType & metaType, cpgf::IMetaSerializer * serializer);

} // namespace metatraits_internal

template <typename T>
cpgf::IMetaSerializer * createTrapAllSerializer(const cpgf::GMetaTraitsParam & param)
{
	cpgf::GScopedInterface<cpgf::IMetaSerializer> serializer(cpgf::createMetaExtendType<T>(cpgf::GExtendTypeCreateFlag_Serializer).getSerializer());
	cpgf::GMetaType metaType(cpgf::createMetaType<T>());
	cpgf::fixupMetaType(&metaType, param.module);
	return cpgf::metatraits_internal::doCreateTrapAllSerializer(metaType, serializer.get());
}



} // namespace cpgf


#endif
