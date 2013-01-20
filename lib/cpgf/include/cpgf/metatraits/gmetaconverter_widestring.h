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


#ifndef __GMETACONVERTER_WIDESTRING_H
#define __GMETACONVERTER_WIDESTRING_H

#include "cpgf/metatraits/gmetaconverter.h"

#include <string>


namespace cpgf {

namespace metatraits_internal {

	IMetaConverter * doCreateConverterForStdWideString();

} // namespace metatraits_internal


template <>
struct GMetaTraitsCreateConverter <std::wstring, void>
{
	static IMetaConverter * createConverter(const GMetaTraitsParam &) {
		return metatraits_internal::doCreateConverterForStdWideString();
	}
};

inline IMetaConverter * createConverterFromMetaTraits(const GMetaTraitsParam &, std::wstring *)
{
	return metatraits_internal::doCreateConverterForStdWideString();
}


} // namespace cpgf



#endif
