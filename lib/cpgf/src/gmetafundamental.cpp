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


#include "cpgf/gmetafundamental.h"



namespace cpgf {


namespace meta_internal {


size_t GMetaFundamentalData::getTypeSize() const
{
	return this->virtualFunctions->getTypeSize();
}

GVariantType GMetaFundamentalData::getVariantType() const
{
	return this->virtualFunctions->getVariantType();
}

GVariant GMetaFundamentalData::getValue(const void * instance) const
{
	return this->virtualFunctions->getValue(instance);
}

void * GMetaFundamentalData::createInstance() const
{
	return this->virtualFunctions->createInstance();
}

void * GMetaFundamentalData::createInplace(void * placement) const
{
	return this->virtualFunctions->createInplace(placement);
}

void * GMetaFundamentalData::cloneInstance(const void * instance) const
{
	return this->virtualFunctions->cloneInstance(instance);
}

void * GMetaFundamentalData::cloneInplace(const void * instance, void * placement) const
{
	return this->virtualFunctions->cloneInplace(instance, placement);
}

void GMetaFundamentalData::destroyInstance(void * o) const
{
	this->virtualFunctions->destroyInstance(o);
}


} // namespace meta_internal


GVariantType GMetaFundamental::getVariantType() const
{
	return this->getData()->getVariantType();
}

GVariant GMetaFundamental::getValue(const void * instance) const
{
	return this->getData()->getValue(instance);
}

size_t GMetaFundamental::getTypeSize() const
{
	return this->getData()->getTypeSize();
}

void * GMetaFundamental::createInstance() const
{
	return this->getData()->createInstance();
}

void * GMetaFundamental::createInplace(void * placement) const
{
	return this->getData()->createInplace(placement);
}

void * GMetaFundamental::cloneInstance(const void * instance) const
{
	return this->getData()->cloneInstance(instance);
}

void * GMetaFundamental::cloneInplace(const void * instance, void * placement) const
{
	return this->getData()->cloneInplace(instance, placement);
}


void GMetaFundamental::destroyInstance(void * instance) const
{
	this->getData()->destroyInstance(instance);
}


GMetaExtendType GMetaFundamental::getItemExtendType(uint32_t flags) const
{
	return this->getData()->getItemExtendType(flags);
}

const meta_internal::GMetaFundamentalData * GMetaFundamental::getData() const
{
	return static_cast<const meta_internal::GMetaFundamentalData *>(static_cast<const void *>(this->dataBuffer));
}



} // namespace cpgf
