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


#include "cpgf/gmetaenum.h"


#include <vector>


namespace cpgf {

class GMetaEnumDataImplement
{
public:
	std::vector<GVariant> enumerators;
	std::vector<std::string> keyNameList;
};


GMetaEnum::GMetaEnum(const char * name, const GMetaType & itemType)
	: super(name, itemType, mcatEnum), implement(new GMetaEnumDataImplement)
{
	this->addModifier(metaModifierStatic);
}

GMetaEnum::~GMetaEnum()
{
}

size_t GMetaEnum::getTypeSize() const
{
	return sizeof(GVariant);
}

size_t GMetaEnum::getCount() const
{
	return this->implement->enumerators.size();
}

const char * GMetaEnum::getKey(size_t index) const
{
	if(index >= this->getCount()) {
		return NULL;
	}
	else {
		return this->implement->keyNameList[index].c_str();
	}
}

GVariant GMetaEnum::getValue(size_t index) const
{
	if(index >= this->getCount()) {
		return 0;
	}
	else {
		return this->implement->enumerators[index];
	}
}

int GMetaEnum::findKey(const char * key) const
{
	size_t count = this->getCount();

	for(size_t i = 0; i < count; ++i) {
		if(strcmp(this->getKey(i), key) == 0) {
			return static_cast<int>(i);
		}
	}

	return -1;
}

GMetaEnum & GMetaEnum::operator () (const char * key, const GVariant & value)
{
	this->addEnum(key, value);

	return *this;
}

void * GMetaEnum::createInstance() const
{
	return new GVariant;
}

void * GMetaEnum::createInplace(void * placement) const
{
	return new(placement) GVariant;
}

void * GMetaEnum::cloneInstance(const void * instance) const
{
	return new GVariant(*static_cast<const GVariant *>(instance));
}

void * GMetaEnum::cloneInplace(const void * instance, void * placement) const
{
	return new(placement) GVariant(*static_cast<const GVariant *>(instance));
}


void GMetaEnum::destroyInstance(void * instance) const
{
	delete static_cast<GVariant *>(instance);
}

void GMetaEnum::destroyInplace(void * /*instance*/) const
{
}

void GMetaEnum::addEnum(const char * key, const GVariant & value)
{
	this->implement->keyNameList.push_back(key);
	this->implement->enumerators.push_back(value);
}

GMetaExtendType GMetaEnum::getItemExtendType(uint32_t /*flags*/) const
{
	return createMetaExtendType<int>();
}


} // namespace cpgf
