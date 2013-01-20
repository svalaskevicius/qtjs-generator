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


#include "cpgf/metatraits/gmetaobjectlifemanager_iobject.h"

#include "cpgf/gapiutil.h"
#include "cpgf/gmetaapi.h"


namespace cpgf {

namespace {

class GMetaObjectLifeManagerIObject : public IMetaObjectLifeManager
{
	G_INTERFACE_IMPL_OBJECT

public:
	explicit GMetaObjectLifeManagerIObject(const GTypeConverterCallback & caster) : caster(caster) {}

protected:
	virtual void G_API_CC retainObject(void * object) {
		static_cast<IObject *>(this->caster(object))->addReference();
	}
	
	virtual void G_API_CC releaseObject(void * object) {
		static_cast<IObject *>(this->caster(object))->releaseReference();
	}
	
	virtual void G_API_CC freeObject(void * object, IMetaClass *) {
		releaseObject(object);
	}

	virtual void G_API_CC returnedFromMethod(void * object) {
		releaseObject(object);
	}

private:
	GTypeConverterCallback caster;
};


} // unnamed namespace

namespace metatraits_internal {

	IMetaObjectLifeManager * doCreateObjectLifeManagerForIObject(const GTypeConverterCallback & caster)
	{
		return new cpgf::GMetaObjectLifeManagerIObject(caster);
	}

} // namespace metatraits_internal


} // namespace cpgf

