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


#include "cpgf/metatraits/gmetaserializer.h"
#include "cpgf/serialization/gmetaarchivecommon.h"
#include "cpgf/serialization/gmetaarchivereader.h"
#include "cpgf/serialization/gmetaarchivewriter.h"
#include "cpgf/gsharedinterface.h"

#include <string>
#include <stdio.h>

using namespace std;

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4996)
#endif

namespace cpgf {

namespace metatraits_internal {

const char * const elementName = "item";

class GMetaSerializerArray : public IMetaSerializer
{
	G_INTERFACE_IMPL_OBJECT
	G_INTERFACE_IMPL_EXTENDOBJECT

public:
	GMetaSerializerArray(IMetaSerializer * elementSerializer, const GMetaType & metaType, unsigned int elementSize, unsigned int elementCount)
		: elementSerializer(elementSerializer), metaType(metaType), elementSize(elementSize), elementCount(elementCount)
	{
	}
	
	virtual ~GMetaSerializerArray() {}
	
	virtual const char * G_API_CC getClassTypeName(IMetaArchiveWriter * archiveWriter, const void * instance, IMetaClass * metaClass) {
		if(this->classType == "") {
			const char * typeName = this->elementSerializer->getClassTypeName(archiveWriter, instance, metaClass);
			if(typeName != NULL) {
				char buffer[128];
				sprintf(buffer, "[%u]", this->elementCount);
				this->classType = string(typeName) + buffer;
			}
		}
		
		if(this->classType.size() == 0) {
			return NULL;
		}
		else {
			return this->classType.c_str();
		}
	}

	virtual void G_API_CC writeObject(IMetaArchiveWriter * archiveWriter, IMetaSerializerWriter * /*serializerWriter*/, GMetaArchiveWriterParam * param) {
		GScopedInterface<IMetaStorageWriter> metaWriter(archiveWriter->getStorageWriter());
		metaWriter->beginWriteArray(param->name, this->elementCount);

		GMetaTypeData typeData = this->metaType.refData();
		for(unsigned int i = 0; i < this->elementCount; ++i) {
			const void * ptr;
			if(this->metaType.isPointer() && ! this->metaType.baseIsArray()) {
				ptr = *(void **)(param->instance);
			}
			else {
				ptr = param->instance;
			}
			archiveWriter->writeData(elementName, ptr, &typeData, this->elementSerializer.get());
			param->instance = static_cast<const char *>(param->instance) + this->elementSize;
		}
		
		metaWriter->endWriteArray(param->name, this->elementCount);
	}
	
	virtual void * G_API_CC allocateObject(IMetaArchiveReader * /*archiveReader*/, IMetaClass * /*metaClass*/) {
		return NULL;
	}
	
	virtual void G_API_CC freeObject(IMetaArchiveReader * /*archiveReader*/, IMetaClass * /*metaClass*/, void * /*instance*/) {
	}

	virtual void G_API_CC readObject(IMetaArchiveReader * archiveReader, IMetaSerializerReader * /*serializerReader*/, GMetaArchiveReaderParam * param) {
		GScopedInterface<IMetaStorageReader> metaReader(archiveReader->getStorageReader());
		uint32_t length = metaReader->beginReadArray(param->name);
		
		if(length != this->elementCount) {
			GASSERT(false);
		}

		void * instance = param->instance;
		GMetaTypeData typeData = this->metaType.refData();
		for(unsigned int i = 0; i < this->elementCount; ++i) {
			archiveReader->readData(elementName, instance, &typeData, this->elementSerializer.get());
			instance = static_cast<char *>(instance) + this->elementSize;
		}

		metaReader->endReadArray(param->name);
	}
	
private:
	GSharedInterface<IMetaSerializer> elementSerializer;
	GMetaType metaType;
	unsigned int elementSize;
	unsigned int elementCount;
	string classType;
};


IMetaSerializer * createArraySerializer(IMetaSerializer * elementSerializer, const GMetaType & metaType, unsigned int elementSize, unsigned int elementCount)
{
	if(elementSerializer == NULL) {
		return NULL;
	}
	else {
		return new GMetaSerializerArray(elementSerializer, metaType, elementSize, elementCount);
	}
}

} // namespace metatraits_internal



} // namespace cpgf

