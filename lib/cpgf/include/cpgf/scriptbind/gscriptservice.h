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


#ifndef __GSCRIPTSERVICE_H
#define __GSCRIPTSERVICE_H

#include "cpgf/gapi.h"
#include "cpgf/gsharedinterface.h"

#include <string>


namespace cpgf {

class GScriptObject;
struct IMetaClass;
struct IScriptLibraryLoader;
struct GMetaVariadicParam;

class GScriptCoreService
{
public:
	~GScriptCoreService();
	
private:
	GScriptCoreService(GScriptObject * scriptObject, const char * bindName, IScriptLibraryLoader * libraryLoader);

	bool loadLibrary(const char * namespaces, const GMetaVariadicParam * libraryNames);

private:
	GScriptObject * scriptObject;
	std::string bindName;
	GSharedInterface<IScriptLibraryLoader> libraryLoader;

private:
	friend GScriptCoreService * doBindScriptCoreService(GScriptObject * scriptObject, const char * bindName, IScriptLibraryLoader * libraryLoader);

	template <typename D>
	friend void buildMetaClass_GScriptCoreService(D _d);
};


class GScriptLibraryNamedLoaderHandler;

void initializeBuiltinLibraries(GScriptLibraryNamedLoaderHandler * libraryHandler);


} // namespace cpgf



#endif
