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


#include "cpgf/metadata/irrlicht/gmetaobjectlifemanager_irrlicht_ireferencecounted.h"

#include "cpgf/gapiutil.h"
#include "cpgf/gmetaapi.h"

#include "cpgf/metatraits/gmetaobjectlifemanager.h"


namespace cpgf {

namespace irrlicht_internal {

class GMetaObjectLifeManagerIrrlichIReferenceCounted : public cpgf::IMetaObjectLifeManager
{
	G_INTERFACE_IMPL_OBJECT
	
public:
	explicit GMetaObjectLifeManagerIrrlichIReferenceCounted(const GTypeConverterCallback & caster) : caster(caster) {}

protected:
	virtual void G_API_CC retainObject(void * object) {
//		static_cast<irr::IReferenceCounted *>(this->caster(object))->grab();
	}
	
	virtual void G_API_CC releaseObject(void * object) {
//		static_cast<irr::IReferenceCounted *>(this->caster(object))->drop();
	}
	
	virtual void G_API_CC freeObject(void * object, cpgf::IMetaClass *) {
		static_cast<irr::IReferenceCounted *>(this->caster(object))->drop();
	}

	virtual void G_API_CC returnedFromMethod(void * object) {
	}
	
private:
	GTypeConverterCallback caster;
};


IMetaObjectLifeManager * doCreateObjectLifeManagerForIrrReferenceCounted(const GTypeConverterCallback & caster)
{
	return new irrlicht_internal::GMetaObjectLifeManagerIrrlichIReferenceCounted(caster);
}


} // namespace irrlicht_internal

} // namespace cpgf

