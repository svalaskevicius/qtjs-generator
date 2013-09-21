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


#ifndef __GMETAPROPERTY_H
#define __GMETAPROPERTY_H

#include "cpgf/private/gmetaproperty_p.h"


namespace cpgf {


GMAKE_FINAL(GMetaProperty)

class GMetaProperty : public GMetaAccessible, GFINAL_BASE(GMetaProperty)
{
private:
	typedef GMetaAccessible super;

public:
	template <typename Getter, typename Setter, typename Policy>
	GMetaProperty(const char * name, const Getter & getter, const Setter & setter, const Policy &)
		: super(name, meta_internal::createPropertyType<Getter, Setter, Policy>(), mcatProperty), baseData(new meta_internal::GMetaPropertyData<Getter, Setter, Policy>(getter, setter)) {
	}

	virtual bool canGet() const;
	virtual bool canSet() const;

	virtual GVariant get(const void * instance) const;
	virtual void set(void * instance, const GVariant & value) const;

	virtual void * getAddress(const void * instance) const;

	virtual size_t getSize() const;

	virtual const GMetaType & getItemType() const;

	virtual GMetaExtendType getItemExtendType(uint32_t flags) const;

private:
	GScopedPointer<meta_internal::GMetaPropertyDataBase,
		meta_internal::GScopedPointerDeleter_BaseMeta<meta_internal::GMetaPropertyDataBase> >
		baseData;
};


} // namespace cpgf


#endif
