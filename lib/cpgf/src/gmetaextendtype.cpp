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


#include "cpgf/gmetaextendtype.h"


namespace cpgf {


namespace {
	void retainInterface(IObject * i)
	{
		if(i != NULL) {
			i->addReference();
		}
	}

	void releaseInterface(IObject * i)
	{
		if(i != NULL) {
			i->releaseReference();
		}
	}
	
	void initExtendTypeData(GMetaExtendTypeData * data)
	{
		data->arraySize = 0;
		data->converter = NULL;
		data->serializer = NULL;
		data->scriptWrapper = NULL;
		data->sharedPointerTraits = NULL;
		data->objectLifeManager = NULL;
	}
} // unnamed namespace


GMetaExtendType::GMetaExtendType()
{
	initExtendTypeData(&this->data);
}

GMetaExtendType::GMetaExtendType(const GMetaExtendTypeData & data)
	: data(data)
{
	retainExtendTypeData(&this->data);
}

GMetaExtendType::GMetaExtendType(const GMetaExtendType & other)
	: data(other.data)
{
	retainExtendTypeData(&this->data);
}

GMetaExtendType::~GMetaExtendType()
{
	releaseExtendTypeData(&this->data);
}

GMetaExtendType & GMetaExtendType::operator = (GMetaExtendType other)
{
	this->swap(other);

	return *this;
}

void GMetaExtendType::swap(GMetaExtendType & other)
{
	using std::swap;
	
	swap(this->data, other.data);
}

const GMetaExtendTypeData & GMetaExtendType::refData() const
{
	return this->data;
}

GMetaExtendTypeData & GMetaExtendType::refData()
{
	return this->data;
}

GMetaExtendTypeData GMetaExtendType::takeData()
{
	GMetaExtendTypeData retsultData = this->data;
	
	initExtendTypeData(&this->data);

	return retsultData;
}

uint32_t GMetaExtendType::getArraySize() const
{
	return this->data.arraySize;
}

IMetaConverter * GMetaExtendType::getConverter() const
{
	if(this->data.converter != NULL) {
		this->data.converter->addReference();
		return this->data.converter;
	}
	else {
		return NULL;
	}
}

IMetaSerializer * GMetaExtendType::getSerializer() const
{
	if(this->data.serializer != NULL) {
		this->data.serializer->addReference();
		return this->data.serializer;
	}
	else {
		return NULL;
	}
}

IMetaScriptWrapper * GMetaExtendType::getScriptWrapper() const
{
	if(this->data.scriptWrapper != NULL) {
		this->data.scriptWrapper->addReference();
		return this->data.scriptWrapper;
	}
	else {
		return NULL;
	}
}

IMetaSharedPointerTraits * GMetaExtendType::getSharedPointerTraits() const
{
	if(this->data.sharedPointerTraits != NULL) {
		this->data.sharedPointerTraits->addReference();
		return this->data.sharedPointerTraits;
	}
	else {
		return NULL;
	}
}

IMetaObjectLifeManager * GMetaExtendType::getObjectLifeManager() const
{
	if(this->data.objectLifeManager != NULL) {
		this->data.objectLifeManager->addReference();
		return this->data.objectLifeManager;
	}
	else {
		return NULL;
	}
}


void retainExtendTypeData(GMetaExtendTypeData * data)
{
	retainInterface(data->converter);
	retainInterface(data->serializer);
	retainInterface(data->scriptWrapper);
	retainInterface(data->sharedPointerTraits);
	retainInterface(data->objectLifeManager);
}

void releaseExtendTypeData(GMetaExtendTypeData * data)
{
	releaseInterface(data->converter);
	releaseInterface(data->serializer);
	releaseInterface(data->scriptWrapper);
	releaseInterface(data->sharedPointerTraits);
	releaseInterface(data->objectLifeManager);
}



} // namespace cpgf

