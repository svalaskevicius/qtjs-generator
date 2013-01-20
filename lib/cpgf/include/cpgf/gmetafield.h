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


#ifndef __GMETAFIELD_H
#define __GMETAFIELD_H

#include "cpgf/private/gmetafield_p.h"


namespace cpgf {


GMAKE_FINAL(GMetaField)

class GMetaField : public GMetaAccessible, GFINAL_BASE(GMetaField)
{
private:
	typedef GMetaAccessible super;

public:
	template <typename OT, typename FT, typename Policy>
	GMetaField(const char * name, FT OT::* field, const Policy &)
		: super(name, createMetaType<FT>(), mcatField), baseData(new meta_internal::GMetaFieldDataMember<OT, FT, Policy>(field)) {
	}

	template <typename FT, typename Policy>
	GMetaField(const char * name, FT * field, const Policy &)
		: super(name, createMetaType<FT>(), mcatField), baseData(new meta_internal::GMetaFieldDataGlobal<FT, Policy>(field)) {
		this->addModifier(metaModifierStatic);
	}

	virtual bool canGet() const;
	virtual bool canSet() const;

	virtual GVariant get(const void * instance) const;
	virtual void set(void * instance, const GVariant & v) const;

	virtual void * getAddress(const void * instance) const;

	virtual size_t getSize() const;

	virtual GMetaExtendType getItemExtendType(uint32_t flags) const;

private:
	GScopedPointer<meta_internal::GMetaFieldDataBase,
		meta_internal::GScopedPointerDeleter_BaseMeta<meta_internal::GMetaFieldDataBase> >
		baseData;
};



} // namespace cpgf



#endif
