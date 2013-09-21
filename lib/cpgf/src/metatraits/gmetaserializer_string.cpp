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


#include "cpgf/metatraits/gmetaserializer_string.h"
#include "cpgf/serialization/gmetaarchivecommon.h"
#include "cpgf/serialization/gmetaarchivereader.h"
#include "cpgf/serialization/gmetaarchivewriter.h"

#include <string>


namespace cpgf {

class GMetaSerializerString : public IMetaSerializer
{
	G_INTERFACE_IMPL_OBJECT
	G_INTERFACE_IMPL_EXTENDOBJECT
	
public:
	virtual ~GMetaSerializerString() {}

	virtual const char * G_API_CC getClassTypeName(IMetaArchiveWriter * /*archiveWriter*/, const void * /*instance*/, IMetaClass * /*metaClass*/) {
		return "meta_ser_std_string";
	}
	
	virtual void G_API_CC writeObject(IMetaArchiveWriter * archiveWriter, IMetaSerializerWriter * /*serializerWriter*/, GMetaArchiveWriterParam * param) {
		GScopedInterface<IMetaStorageWriter> metaWriter(archiveWriter->getStorageWriter());
		archiveWriter->trackPointer(param->archiveID, param->instance, param->metaClass, this, param->pointers);
		metaWriter->writeString(param->name, param->archiveID, static_cast<const std::string *>(param->instance)->c_str());
	}
	
	virtual void * G_API_CC allocateObject(IMetaArchiveReader * /*archiveReader*/, IMetaClass * /*metaClass*/) {
		return new std::string;
	}

	virtual void G_API_CC freeObject(IMetaArchiveReader * /*archiveReader*/, IMetaClass * /*metaClass*/, void * instance) {
		delete static_cast<std::string *>(instance);
	}

	virtual void G_API_CC readObject(IMetaArchiveReader * archiveReader, IMetaSerializerReader * /*serializerReader*/, GMetaArchiveReaderParam * param) {
		GScopedInterface<IMetaStorageReader> metaReader(archiveReader->getStorageReader());
		uint32_t archiveID;
		char * s = metaReader->readString(param->name, archiveReader->getAllocator(), &archiveID);
		*static_cast<std::string *>(param->instance) = s;
		archiveReader->getAllocator()->free(s);
		
		archiveReader->trackPointer(archiveID, param->instance);
	}
};

namespace metatraits_internal {
	IMetaSerializer * doCreateSerializerForStdString()
	{
		return new cpgf::GMetaSerializerString();
	}
} // namespace metatraits_internal


} // namespace cpgf


