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


#include "cpgf/scriptbind/gscriptrunner.h"
#include "cpgf/private/gscriptrunner_p.h"
#include "cpgf/scriptbind/gscriptbindapi.h"

#include "cpgf/gmetaapi.h"

#include <fstream>


using namespace std;


namespace cpgf {


GScriptRunnerImplement::GScriptRunnerImplement(IMetaService * service)
	: service(service)
{
	this->service->addReference();
}

GScriptRunnerImplement::~GScriptRunnerImplement()
{
    this->service->releaseReference();
}

GScriptRunner * GScriptRunnerImplement::createScriptRunner(GScriptRunnerImplement * implement)
{
	return new GScriptRunner(implement);
}


IMetaService * GScriptRunnerImplement::getService()
{
	this->service->addReference();
	return this->service.get();
}

IScriptObject * GScriptRunnerImplement::getScripeObject()
{
	this->scriptObject->addReference();
	return this->scriptObject.get();
}

void GScriptRunnerImplement::setScripeObject(IScriptObject * scriptObject)
{
	this->scriptObject.reset(scriptObject);
	this->scriptObject->addReference();
}


GScriptRunner::GScriptRunner(GScriptRunnerImplement * implement)
	: implement(implement)
{
}

GScriptRunner::~GScriptRunner()
{
}

void GScriptRunner::executeString(const char * code)
{
	this->implement->executeString(code);
}

bool GScriptRunner::executeFile(const char * fileName)
{
	ifstream stream;

	stream.open(fileName, ios::binary);
	if(! stream.good()) {
		return false;
	}
	stream.seekg(0, ios::end);
	long len = static_cast<long>(stream.tellg());
	stream.clear();
	stream.seekg(0, ios::beg);
	stream.clear();
	GScopedArray<char> buffer(new char[len + 1]);
	stream.read(buffer.get(), len);
	stream.close();
	buffer[len] = 0;

	this->implement->executeString(buffer.get());
	
	return true;
}

IScriptObject * GScriptRunner::getScripeObject()
{
	return this->implement->getScripeObject();
}

IMetaService * GScriptRunner::getService()
{
	return this->implement->getService();
}


} // namespace cpgf
