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


#ifndef __GMETAOBJECTLIFEMANAGER_H
#define __GMETAOBJECTLIFEMANAGER_H

#include "cpgf/gapi.h"

#include <cstddef>


namespace cpgf {

struct GMetaTraitsParam;
struct IMetaClass;

struct IMetaObjectLifeManager : public IObject
{
	virtual void G_API_CC retainObject(void * object) = 0;
	virtual void G_API_CC releaseObject(void * object) = 0;
	virtual void G_API_CC freeObject(void * object, IMetaClass * metaClass) = 0;
	virtual void G_API_CC returnedFromMethod(void * object) = 0;
};


namespace metatraits_internal {
	IMetaObjectLifeManager * createDefaultObjectLifeManagerFromMetaTraits();
} // namespace metatraits_internal


} // namespace cpgf


namespace cpgf {

template <typename T, typename Enabled = void>
struct GMetaTraitsCreateObjectLifeManager
{
	static IMetaObjectLifeManager * createObjectLifeManager(const GMetaTraitsParam &) {
		return NULL;
	}
};

template <typename T>
IMetaObjectLifeManager * createObjectLifeManagerFromMetaTraits(const GMetaTraitsParam & param, T *)
{
	IMetaObjectLifeManager * objectLifeManager = GMetaTraitsCreateObjectLifeManager<T>::createObjectLifeManager(param);
	if(objectLifeManager == NULL) {
		objectLifeManager = metatraits_internal::createDefaultObjectLifeManagerFromMetaTraits();
	}
	return objectLifeManager;
}

} // namespace cpgf


#endif
