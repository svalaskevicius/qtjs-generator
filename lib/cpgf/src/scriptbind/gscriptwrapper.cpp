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


#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/scriptbind/gscriptbindapi.h"
#include "cpgf/gclassutil.h"
#include "cpgf/gapiutil.h"


namespace cpgf {


GScriptWrapper::GScriptWrapper()
	: scriptDataStorage(NULL)
{
}

IScriptFunction * GScriptWrapper::getScriptFunction(const char * name) const
{
	if(this->scriptDataStorage) {
		return const_cast<IScriptDataStorage *>(this->scriptDataStorage.get())->getScriptFunction(name);
	}
	else {
		return NULL;
	}
}

void GScriptWrapper::setScriptDataStorage(IScriptDataStorage * scriptDataStorage)
{
	// Only set if it doesn't exist. Thus we keep the storage universal.
	if(! this->scriptDataStorage) {
		this->scriptDataStorage.reset(scriptDataStorage);
	}
}


namespace scriptbind_internal {

class GMetaScriptWrapper : public IMetaScriptWrapper
{
	G_INTERFACE_IMPL_OBJECT

public:
	explicit GMetaScriptWrapper(CasterType caster) : caster(caster) {
	}
	
	virtual ~GMetaScriptWrapper() {
	}

	virtual void G_API_CC setScriptDataStorage(void * instance, IScriptDataStorage * scriptDataStorage) {
		static_cast<GScriptWrapper *>(this->caster(instance))->setScriptDataStorage(scriptDataStorage);
	}

private:
	CasterType caster;

	GMAKE_NONCOPYABLE(GMetaScriptWrapper);
};


IMetaScriptWrapper * doCreateScriptWrapper(CasterType caster)
{
	return new GMetaScriptWrapper(caster);
}

} // namespace scriptbind_internal



} // namespace cpgf


