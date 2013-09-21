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


#include "testserializationcommon.h"
#include "testserializationcommonclasses.h"
#include "cpgf/gmetadefine.h"

#include <sstream>

#include <iostream>

using namespace std;
using namespace cpgf;


namespace {

template <typename AR>
void doTestSimpleObject(IMetaStorageWriter * writer, IMetaStorageReader * reader, const AR & ar)
{
	const char * const serializeObjectName = "simpleObject";
	
	GDefineMetaNamespace define = GDefineMetaNamespace::declare("global");
	register_TestSerializeClass(define);

	GMetaModule module;
	GScopedInterface<IMetaModule> moduleInterface(createMetaModule(&module, define.getMetaClass()));
	GScopedInterface<IMetaService> service(createMetaService(moduleInterface.get()));

	GScopedInterface<IMetaArchiveWriter> archiveWriter(createMetaArchiveWriter(service.get(), writer));

	GScopedInterface<IMetaClass> metaClass(service->findClassByName("TestSerializeClass"));

	TestSerializeClass instance;
	instance.set(38);

	serializeWriteObject(archiveWriter.get(), serializeObjectName, &instance, metaClass.get());

	TestArchiveTraits<AR>::rewind(ar);
	
	GScopedInterface<IMetaArchiveReader> archiveReader(createMetaArchiveReader(service.get(), reader));
	
	TestSerializeClass readInstance;
	
	GCHECK(instance != readInstance);

	readInstance.pself = NULL;
	readInstance.pnull = (string *)0xbeef;
	serializeReadObject(archiveReader.get(), serializeObjectName, &readInstance, metaClass.get());

	GEQUAL(instance, readInstance);
}

GTEST(TestSimpleObject_TextStream)
{
	stringstream stream;

	GScopedInterface<IMetaStorageWriter> writer(createTextStreamStorageWriter(stream));
	GScopedInterface<IMetaStorageReader> reader(createTextStreamStorageReader(stream));
	
	doTestSimpleObject(writer.get(), reader.get(), stream);
	
//	cout << stream.str().c_str() << endl;
}

GTEST(TestSimpleObject_Xml)
{
	GMetaXmlStorage storage;

	GScopedInterface<IMetaStorageWriter> writer(createXmlStorageWriter(storage));
	GScopedInterface<IMetaStorageReader> reader(createXmlStorageReader(storage));
	
	doTestSimpleObject(writer.get(), reader.get(), storage);
	
//	storage.saveToStream(cout);
}


GTEST(TestSimpleObject_Json)
{
	GMetaJsonStorage storage;

	GScopedInterface<IMetaStorageWriter> writer(createJsonStorageWriter(storage));
	GScopedInterface<IMetaStorageReader> reader(createJsonStorageReader(storage));
	
	doTestSimpleObject(writer.get(), reader.get(), storage);
	
//	storage.saveToStream(cout);
}


} // unnamed namespace
