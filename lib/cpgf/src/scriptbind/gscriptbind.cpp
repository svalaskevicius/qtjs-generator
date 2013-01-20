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


#include "cpgf/scriptbind/gscriptbind.h"
#include "cpgf/gglobal.h"

#include "../pinclude/gbindcommon.h"


namespace cpgf {


GScriptFunction::GScriptFunction()
{
}

GScriptFunction::~GScriptFunction()
{
}


GScriptObject::GScriptObject(const GScriptConfig & config)
	: config(config), owner(NULL)
{
}

GScriptObject::GScriptObject(const GScriptObject & other)
	: config(other.config), owner(NULL)
{
}

GScriptObject::~GScriptObject()
{
}

const GScriptConfig & GScriptObject::getConfig() const
{
	return this->config;
}

GScriptObject * GScriptObject::getOwner() const
{
	return this->owner;
}

void GScriptObject::setOwner(GScriptObject * newOwner)
{
	this->owner = newOwner;
}

bool GScriptObject::isGlobal() const
{
	return this->owner == NULL;
}

const char * GScriptObject::getName() const
{
	return this->name.c_str();
}

void GScriptObject::setName(const std::string & newName)
{
	this->name = newName;
}

GScriptObject * GScriptObject::createScriptObject(const char * name)
{
	const int delimiter = '.';
	if(strchr(name, delimiter) == NULL) {
		return this->doCreateScriptObject(name);
	}
	else {
		size_t len = strlen(name);
		GScopedArray<char> tempName(new char[len + 1]);
		memmove(tempName.get(), name, len + 1);
		char * next;
		char * head = tempName.get();
		GScopedPointer<GScriptObject> scriptObject;
		for(;;) {
			next = strchr(head, delimiter);
			if(next != NULL) {
				*next = '\0';
			}
			GScriptObject * obj = scriptObject.get();
			if(obj == NULL) {
				obj = this;
			}
			scriptObject.reset(obj->doCreateScriptObject(head));
			if(! scriptObject) {
				break;
			}
			if(next == NULL) {
				break;
			}
			++next;
			head = next;
		}
		return scriptObject.take();
	}
}

void GScriptObject::holdObject(IObject * object)
{
	this->objectHolder.push_back(GSharedInterface<IObject>(object));
}



} // namespace cpgf


