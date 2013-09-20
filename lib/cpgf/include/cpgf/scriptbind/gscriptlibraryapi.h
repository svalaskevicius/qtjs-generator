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


#ifndef __GSCRIPTLIBRARYAPI_H
#define __GSCRIPTLIBRARYAPI_H

#include "cpgf/gmetaapi.h"
#include "cpgf/gcallback.h"
#include "cpgf/gsharedinterface.h"

#include <map>
#include <vector>
#include <string>


namespace cpgf {

class GScriptObject;
struct IScriptObject;

struct IScriptLibraryLoader : public IExtendObject
{
public:
	virtual gapi_bool G_API_CC loadScriptLibrary(IScriptObject * owner, const char * namespaces, const char * libraryName) = 0;
};

class GScriptLibraryLoader;


struct IScriptLibraryLoaderHandler : public IObject
{
	virtual bool handleLoadingScriptLibrary(GScriptLibraryLoader * loader, IScriptObject * owner, const char * namespaces, const char * libraryName) = 0;
};


class GScriptLibraryLoader : public IScriptLibraryLoader
{
	G_INTERFACE_IMPL_OBJECT
	G_INTERFACE_IMPL_EXTENDOBJECT

private:
	typedef std::map<std::string, bool> MapType;
	typedef GSharedInterface<IScriptLibraryLoaderHandler> HandlerType;
	typedef std::vector<HandlerType> HandlerListType;

public:
	virtual ~GScriptLibraryLoader() {}

	void loaded(const std::string & libraryName);
	void addHandler(IScriptLibraryLoaderHandler * handler);

protected:
	virtual gapi_bool G_API_CC loadScriptLibrary(IScriptObject * owner, const char * namespaces, const char * libraryName);
	
protected:
	bool doLoadScriptLibrary(IScriptObject * owner, const char * namespaces, const char * libraryName);

private:
	MapType nameMap;
	HandlerListType handlerList;
};


typedef GCallback<bool (GScriptObject * scriptObject, const char * namespaces, const char * libraryName)> GScriptLibraryLoaderCallback;

class GScriptLibraryNamedLoaderHandler : public IScriptLibraryLoaderHandler
{
	G_INTERFACE_IMPL_OBJECT
	
private:
	typedef std::map<std::string, GScriptLibraryLoaderCallback> MapType;

public:
	explicit GScriptLibraryNamedLoaderHandler(GScriptObject * scriptObject);
	virtual ~GScriptLibraryNamedLoaderHandler() {}
	
	void addHandler(const char * libraryName, const GScriptLibraryLoaderCallback & callback);
	
protected:
	virtual bool handleLoadingScriptLibrary(GScriptLibraryLoader * loader, IScriptObject * owner, const char * namespaces, const char * libraryName);

private:
	bool doLoadPackage(GScriptLibraryLoader * loader, IScriptObject * owner, const char * namespaces, const std::string & packageName);
	bool doLoadSingleLibrary(GScriptLibraryLoader * loader, IScriptObject * owner, const char * namespaces, const std::string & libraryName);
	bool doLoadPackageOrLibrary(GScriptLibraryLoader * loader, IScriptObject * owner, const char * namespaces, const std::string & packageOrLibraryName);

private:
	GScriptObject * scriptObject;
	MapType nameCallbackMap;
};



} // namespace cpgf



#endif
