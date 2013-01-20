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


#ifndef __GMETAFUNDAMENTAL_H
#define __GMETAFUNDAMENTAL_H

#include "cpgf/private/gmetafundamental_p.h"
#include "cpgf/gmetatype.h"


namespace cpgf {


GMAKE_FINAL(GMetaFundamental)

class GMetaFundamental : public GMetaTypedItem, GFINAL_BASE(GMetaFundamental)
{
private:
	typedef GMetaTypedItem super;

public:
	template <typename T>
	GMetaFundamental(T *, const char * name)
		: super(name, createMetaType<T>(), mcatFundamental) {
		new (this->dataBuffer) meta_internal::GMetaFundamentalDataImplement<T>;
	}

	GVariantType getVariantType() const;
	GVariant getValue(const void * instance) const;

	virtual size_t getTypeSize() const;
	virtual void * createInstance() const;
	virtual void * createInplace(void * placement) const;
	virtual void * cloneInstance(const void * instance) const;
	virtual void * cloneInplace(const void * instance, void * placement) const;
	virtual void destroyInstance(void * instance) const;

	virtual GMetaExtendType getItemExtendType(uint32_t flags) const;

private:
	const meta_internal::GMetaFundamentalData * getData() const;

private:
	char dataBuffer[sizeof(meta_internal::GMetaFundamentalDataImplement<int>)];
};




} // namespace cpgf




#endif
