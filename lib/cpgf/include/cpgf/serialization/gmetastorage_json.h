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


#ifndef __GMETASTORAGE_JSON_H
#define __GMETASTORAGE_JSON_H

#include "cpgf/gscopedptr.h"

#include <ostream>

namespace cpgf {

struct IMetaStorageWriter;
struct IMetaStorageReader;
struct IMetaService;

class GMetaJsonStorage;


class GMetaJsonStorageImplement;

class GMetaJsonStorage
{
public:
	GMetaJsonStorage();
	~GMetaJsonStorage();

	void load(const char * jsonContent) const;
	void saveToStream(std::ostream & outputStream) const;

	// internal use
	GMetaJsonStorageImplement * getImplement() const;

private:
	mutable GScopedPointer<GMetaJsonStorageImplement> implement;
};


IMetaStorageWriter * createJsonStorageWriter(const GMetaJsonStorage & jsonStorage);
IMetaStorageReader * createJsonStorageReader(const GMetaJsonStorage & jsonStorage);


} // namespace cpgf



#endif

