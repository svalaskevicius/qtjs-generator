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


#ifndef __GMETAOBJECTLIFEMANAGER_IRRLICHT_IREFERENCECOUNTED_H
#define __GMETAOBJECTLIFEMANAGER_IRRLICHT_IREFERENCECOUNTED_H


#include "IReferenceCounted.h"

#include "cpgf/metatraits/gmetaobjectlifemanager.h"
#include "cpgf/genableif.h"
#include "cpgf/gtypetraits.h"
#include "cpgf/gtypeutil.h"


namespace cpgf {

struct IMetaObjectLifeManager;
struct GMetaTraitsParam;

namespace irrlicht_internal {

IMetaObjectLifeManager * doCreateObjectLifeManagerForIrrReferenceCounted(const GTypeConverterCallback & caster);

} // namespace irrlicht_internal

template <typename T>
struct GMetaTraitsCreateObjectLifeManager <T, typename GEnableIfResult<IsConvertible<T *, irr::IReferenceCounted *> >::Result>
{
	static IMetaObjectLifeManager * createObjectLifeManager(const GMetaTraitsParam &) {
		return irrlicht_internal::doCreateObjectLifeManagerForIrrReferenceCounted(GTypeConverter<T *, irr::IReferenceCounted *>());
	}
};

} // namespace cpgf



#endif

