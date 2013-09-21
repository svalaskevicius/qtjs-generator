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


#ifndef __GMETASTORAGE_XML_H
#define __GMETASTORAGE_XML_H

#include "cpgf/serialization/gmetastreamfundamental.h"
#include "cpgf/gscopedptr.h"


namespace cpgf {

struct IMetaStorageWriter;
struct IMetaStorageReader;
struct IMetaService;

class GMetaXmlStorage;
class GMetaXmlStorageImplement;

class GMetaXmlStorage
{
public:
	GMetaXmlStorage();
	~GMetaXmlStorage();

	void load(const char * xmlContent) const;
	void saveToStream(std::ostream & outputStream) const;
	
	// xmlContent must be valid during the GMetaXmlStorage
	// and xmlContent will be destroyed.
	// This is an optimization vesion of load();
	void loadIntrusive(char * xmlContent) const;

	// internal use
	GMetaXmlStorageImplement * getImplement() const;

private:
	mutable GScopedPointer<GMetaXmlStorageImplement> implement;
};


IMetaStorageWriter * createXmlStorageWriter(const GMetaXmlStorage & xmlStorage);
IMetaStorageReader * createXmlStorageReader(const GMetaXmlStorage & xmlStorage);


} // namespace cpgf



#endif

