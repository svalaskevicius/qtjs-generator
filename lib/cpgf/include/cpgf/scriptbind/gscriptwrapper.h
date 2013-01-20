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


#ifndef __GSCRIPTWRAPPER_H
#define __GSCRIPTWRAPPER_H


#include "cpgf/metatraits/gmetascriptwrapper.h"
#include "cpgf/gapi.h"
#include "cpgf/gtypetraits.h"
#include "cpgf/gsharedinterface.h"


namespace cpgf {

struct IScriptFunction;

struct IScriptDataStorage : public IObject
{
	virtual IScriptFunction * G_API_CC getScriptFunction(const char * name) = 0;
};

class GScriptWrapper
{
public:
	GScriptWrapper();

	IScriptFunction * getScriptFunction(const char * name) const;

	void setScriptDataStorage(IScriptDataStorage * scriptDataStorage);

private:
	GSharedInterface<IScriptDataStorage> scriptDataStorage;
};

class GScriptWrapperReentryGuard
{
public:
	explicit GScriptWrapperReentryGuard(bool * sentinel) : sentinel(sentinel) {
		*sentinel = true;
	}

	~GScriptWrapperReentryGuard() {
		*sentinel = false;
	}

private:
	bool * sentinel;
};

namespace scriptbind_internal {

	typedef void * (*CasterType)(void *);

	template <typename From, typename To>
	struct InstanceCaster
	{
		static void * cast(void * instance) {
			return static_cast<To *>(static_cast<From *>(instance));
		}
	};

	IMetaScriptWrapper * doCreateScriptWrapper(CasterType caster);

} // namespace scriptbind_internal


template <typename T>
cpgf::IMetaScriptWrapper * metaTraitsCreateScriptWrapper(const cpgf::GMetaTraitsParam &, typename cpgf::GEnableIfResult<cpgf::IsConvertible<const T &, const cpgf::GScriptWrapper &>, cpgf::GScriptWrapper >::Result *)
{
	return cpgf::scriptbind_internal::doCreateScriptWrapper(&cpgf::scriptbind_internal::InstanceCaster<T, cpgf::GScriptWrapper>::cast);
}


} // namespace cpgf



#endif
