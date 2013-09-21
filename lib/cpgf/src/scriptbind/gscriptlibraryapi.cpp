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


#include "cpgf/scriptbind/gscriptlibraryapi.h"

using namespace std;


namespace cpgf {


gapi_bool G_API_CC GScriptLibraryLoader::loadScriptLibrary(IScriptObject * owner, const char * namespaces, const char * libraryName)
{
	string libName(libraryName);
	
	if(this->nameMap.find(libName) == this->nameMap.end()) {
		bool success = this->doLoadScriptLibrary(owner, namespaces, libraryName);
		if(success) {
			this->loaded(libName);
		}
		return success;
	}
	else {
		return true;
	}
}

bool GScriptLibraryLoader::doLoadScriptLibrary(IScriptObject * owner, const char * namespaces, const char * libraryName)
{
	for(HandlerListType::iterator it = this->handlerList.begin(); it != this->handlerList.end(); ++it) {
		if((*it)->handleLoadingScriptLibrary(this, owner, namespaces, libraryName)) {
			return true;
		}
	}

	return false;
}

void GScriptLibraryLoader::loaded(const std::string & libraryName)
{
	this->nameMap[libraryName] = true;
}

void GScriptLibraryLoader::addHandler(IScriptLibraryLoaderHandler * handler)
{
	this->handlerList.push_back(GSharedInterface<IScriptLibraryLoaderHandler>(handler));
}


GScriptLibraryNamedLoaderHandler::GScriptLibraryNamedLoaderHandler(GScriptObject * scriptObject)
	: scriptObject(scriptObject)
{
}

void GScriptLibraryNamedLoaderHandler::addHandler(const char * libraryName, const GScriptLibraryLoaderCallback & callback)
{
	this->nameCallbackMap[libraryName] = callback;
}
	
bool GScriptLibraryNamedLoaderHandler::handleLoadingScriptLibrary(GScriptLibraryLoader * loader, IScriptObject * owner, const char * namespaces, const char * libraryName)
{
	size_t len = strlen(libraryName);
	if(len > 2) {
		if(libraryName[len - 1] == '*' && libraryName[len - 2] == '.') {
			string name = string(libraryName, len - 2);
			return this->doLoadPackage(loader, owner, namespaces, name);
		}
	}
	string name = libraryName;
	return this->doLoadPackageOrLibrary(loader, owner, namespaces, name);
}

bool GScriptLibraryNamedLoaderHandler::doLoadPackage(GScriptLibraryLoader * loader, IScriptObject * /*owner*/, const char * namespaces, const std::string & packageName)
{
	string name = packageName + ".";
	bool success = false;

	for(MapType::iterator it = this->nameCallbackMap.begin(); it != this->nameCallbackMap.end(); ++it) {
		if(it->first.find(name) == 0) {
			if(it->second(this->scriptObject, namespaces, it->first.c_str())) {
				loader->loaded(it->first.c_str());
				success = true;
			}
		}
	}

	return success;
}

bool GScriptLibraryNamedLoaderHandler::doLoadSingleLibrary(GScriptLibraryLoader * loader, IScriptObject * /*owner*/, const char * namespaces, const std::string & libraryName)
{
	MapType::iterator it = this->nameCallbackMap.find(libraryName);
	if(it != this->nameCallbackMap.end()) {
		if(it->second(this->scriptObject, namespaces, libraryName.c_str())) {
			loader->loaded(libraryName);
			return true;
		}
	}
	return false;
}

bool GScriptLibraryNamedLoaderHandler::doLoadPackageOrLibrary(GScriptLibraryLoader * loader, IScriptObject * owner, const char * namespaces, const std::string & packageOrLibraryName)
{
	bool success = this->doLoadSingleLibrary(loader, owner, namespaces, packageOrLibraryName);
	if(! success) {
		success = this->doLoadPackage(loader, owner, namespaces, packageOrLibraryName);
	}
	return success;
}


} // namespace cpgf

