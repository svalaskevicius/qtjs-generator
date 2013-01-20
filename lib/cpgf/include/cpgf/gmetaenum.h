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


#ifndef __GMETAENUM_H
#define __GMETAENUM_H

#include "cpgf/gmetacommon.h"
#include "cpgf/gmetatype.h"


namespace cpgf {

class GMetaEnum;

class GMetaEnumDataImplement;

GMAKE_FINAL(GMetaEnum)

class GMetaEnum : public GMetaTypedItem, GFINAL_BASE(GMetaEnum)
{
private:
	typedef GMetaTypedItem super;

public:
	GMetaEnum(const char * name, const GMetaType & itemType);
	virtual ~GMetaEnum();

	virtual size_t getTypeSize() const;
	size_t getCount() const;
	const char * getKey(size_t index) const;
	GVariant getValue(size_t index) const;
	int findKey(const char * key) const;

	GMetaEnum & operator () (const char * key, const GVariant & value);

	virtual void * createInstance() const;
	virtual void * createInplace(void * placement) const;
	virtual void * cloneInstance(const void * instance) const;
	virtual void * cloneInplace(const void * instance, void * placement) const;
	virtual void destroyInstance(void * instance) const;
	virtual void destroyInplace(void * instance) const;
	
	virtual GMetaExtendType getItemExtendType(uint32_t flags) const;

private:
	void addEnum(const char * key, const GVariant & value);

private:
	GScopedPointer<GMetaEnumDataImplement> implement;
};


} // namespace cpgf


#endif
