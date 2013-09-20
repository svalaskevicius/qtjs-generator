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


#include "cpgf/gmetaproperty.h"
#include "cpgf/gexception.h"
#include "cpgf/gerrorcode.h"


namespace cpgf {


namespace meta_internal {


void GMetaPropertyDataBase::deleteSelf()
{
	this->virtualFunctions->deleteSelf(this);
}

bool GMetaPropertyDataBase::canGet() const
{
	return this->virtualFunctions->canGet();
}

bool GMetaPropertyDataBase::canSet() const
{
	return this->virtualFunctions->canSet();
}

GVariant GMetaPropertyDataBase::get(const void * instance) const
{
	return this->virtualFunctions->get(this, instance);
}

void GMetaPropertyDataBase::set(void * instance, const GVariant & v) const
{
	this->virtualFunctions->set(this, instance, v);
}

size_t GMetaPropertyDataBase::getPropertySize() const
{
	return this->virtualFunctions->getPropertySize();
}

void * GMetaPropertyDataBase::getPropertyAddress(const void * instance) const
{
	return this->virtualFunctions->getPropertyAddress(this, instance);
}


} // namespace meta_internal


bool GMetaProperty::canGet() const
{
	return this->baseData->canGet();
}

bool GMetaProperty::canSet() const
{
	return this->baseData->canSet();
}

GVariant GMetaProperty::get(const void * instance) const
{
	if(!this->baseData->canGet()) {
		raiseCoreException(Error_Meta_ReadDenied);
	}

	return this->baseData->get(instance);
}

void GMetaProperty::set(void * instance, const GVariant & value) const
{
	if(!this->baseData->canSet()) {
		raiseCoreException(Error_Meta_WriteDenied);
	}

	this->baseData->set(instance, value);
}

void * GMetaProperty::getAddress(const void * instance) const
{
	return this->baseData->getPropertyAddress(instance);
}

size_t GMetaProperty::getSize() const
{
	return this->baseData->getPropertySize();
}

const GMetaType & GMetaProperty::getItemType() const
{
	return super::getItemType();
}

GMetaExtendType GMetaProperty::getItemExtendType(uint32_t flags) const
{
	return this->baseData->getItemExtendType(flags, this);
}



} // namespace cpgf
