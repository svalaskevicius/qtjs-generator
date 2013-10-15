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


#include "cpgf/metatraits/gmetaobjectlifemanager.h"
#include "cpgf/gmetaapi.h"
#include "cpgf/gscopedinterface.h"

namespace cpgf {

namespace {

class GMetaObjectLifeManagerDefault : public IMetaObjectLifeManager
{
	G_INTERFACE_IMPL_OBJECT

public:
	virtual ~GMetaObjectLifeManagerDefault() {}

protected:
	virtual void G_API_CC retainObject(void *) {
	}
	
	virtual void G_API_CC releaseObject(void *) {
	}
	
	virtual void G_API_CC freeObject(void * object, IMetaClass * metaClass) {
		metaClass->destroyInstance(object);
	}

	virtual void G_API_CC returnedFromMethod(void *) {
	}
};

GScopedInterface<IMetaObjectLifeManager> defaultObjectLifeManager;

} // unnamed namespace



namespace metatraits_internal {

IMetaObjectLifeManager * createDefaultObjectLifeManagerFromMetaTraits()
{
	if(! defaultObjectLifeManager) {
		defaultObjectLifeManager.reset(new GMetaObjectLifeManagerDefault());
	}
	defaultObjectLifeManager->addReference();
	return defaultObjectLifeManager.get();
}

} // namespace metatraits_internal


} // namespace cpgf


