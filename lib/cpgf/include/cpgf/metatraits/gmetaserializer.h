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


#ifndef __GMETASERIALIZER_H
#define __GMETASERIALIZER_H


#include "cpgf/gapiutil.h"


namespace cpgf {

struct IMetaArchiveWriter;
struct IMetaArchiveReader;
struct IMetaClass;
struct GMetaArchiveWriterParam;
struct GMetaArchiveReaderParam;
struct IMetaSerializerWriter;
struct IMetaSerializerReader;
struct GMetaTraitsParam;


struct IMetaSerializer : public IObject
{
	virtual const char * G_API_CC getClassTypeName(IMetaArchiveWriter * archiveWriter, const void * instance, IMetaClass * metaClass) = 0;
	virtual void G_API_CC writeObject(IMetaArchiveWriter * archiveWriter, IMetaSerializerWriter * serializerWriter, GMetaArchiveWriterParam * param) = 0;
	
	virtual void * G_API_CC allocateObject(IMetaArchiveReader * archiveReader, IMetaClass * metaClass) = 0;
	virtual void G_API_CC freeObject(IMetaArchiveReader * archiveReader, IMetaClass * metaClass, void * instance) = 0;
	virtual void G_API_CC readObject(IMetaArchiveReader * archiveReader, IMetaSerializerReader * serializerReader, GMetaArchiveReaderParam * param) = 0;
};

} // namespace cpgf


namespace cpgf {

template <typename T, typename Enabled = void>
struct GMetaTraitsCreateSerializer
{
	static IMetaSerializer * createSerializer(const GMetaTraitsParam &) {
		return NULL;
	}
};

template <typename T>
IMetaSerializer * createSerializerFromMetaTraits(const GMetaTraitsParam & param, T *)
{
	return GMetaTraitsCreateSerializer<T>::createSerializer(param);
}

} // namespace cpgf


#endif
