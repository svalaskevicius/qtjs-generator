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


#include "cpgf/gmetafield.h"


namespace cpgf {

namespace meta_internal {


void GMetaFieldDataBase::deleteSelf()
{
	this->virtualFunctions->deleteSelf(this);
}

bool GMetaFieldDataBase::canGet() const
{
	return this->virtualFunctions->canGet();
}

bool GMetaFieldDataBase::canSet() const
{
	return this->virtualFunctions->canSet();
}

GVariant GMetaFieldDataBase::get(const void * instance) const
{
	return this->virtualFunctions->get(this, instance);
}

void GMetaFieldDataBase::set(void * instance, const GVariant & v) const
{
	this->virtualFunctions->set(this, instance, v);
}

size_t GMetaFieldDataBase::getFieldSize() const
{
	return this->virtualFunctions->getFieldSize();
}

void * GMetaFieldDataBase::getFieldAddress(const void * instance) const
{
	return this->virtualFunctions->getFieldAddress(this, instance);
}


	
} // namespace meta_internal


bool GMetaField::canGet() const
{
	return this->baseData->canGet();
}

bool GMetaField::canSet() const
{
	return this->baseData->canSet();
}

GVariant GMetaField::get(const void * instance) const
{
	if(this->isStatic()) {
		instance = NULL;
	}

	return this->baseData->get(instance);
}

void GMetaField::set(void * instance, const GVariant & v) const
{
	if(this->isStatic()) {
		instance = NULL;
	}

	this->baseData->set(instance, v);
}

void * GMetaField::getAddress(const void * instance) const
{
	return this->baseData->getFieldAddress(instance);
}

size_t GMetaField::getSize() const
{
	return this->baseData->getFieldSize();
}

GMetaExtendType GMetaField::getItemExtendType(uint32_t flags) const
{
	return this->baseData->getItemExtendType(flags, this);
}


} // namespace cpgf
