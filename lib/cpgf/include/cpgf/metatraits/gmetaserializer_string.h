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


#ifndef __GMETASERIALIZER_STRING_H
#define __GMETASERIALIZER_STRING_H

#include "cpgf/metatraits/gmetaserializer.h"

#include <string>


namespace cpgf {

namespace metatraits_internal {

	IMetaSerializer * doCreateSerializerForStdString();

} // namespace metatraits_internal

template <>
struct GMetaTraitsCreateSerializer <std::string, void>
{
	static IMetaSerializer * createSerializer(const GMetaTraitsParam &) {
		return metatraits_internal::doCreateSerializerForStdString();
	}
};

} // namespace cpgf


#endif
