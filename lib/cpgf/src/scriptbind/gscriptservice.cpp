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


#include "cpgf/scriptbind/gscriptservice.h"
#include "cpgf/scriptbind/gscriptbind.h"
#include "cpgf/scriptbind/gscriptbindutil.h"

#include "cpgf/metadata/metautility/gmetadata_metabytearray.h"
#include "cpgf/metadata/metautility/gmetadata_metaobjectarray.h"
#include "cpgf/metautility/gmetabytearray.h"
#include "cpgf/metautility/gmetaobjectarray.h"

#include "cpgf/scriptbind/gscriptlibraryapi.h"

#include "cpgf/metadata/private/gmetadata_header.h"

#include "cpgf/gscopedinterface.h"


namespace cpgf {


IScriptLibraryLoader * createBuiltinLibraries(GScriptObject * scriptObject);

template <typename D>
void buildMetaClass_GScriptCoreService(D _d)
{
    _d.CPGF_MD_TEMPLATE _method("import", &D::ClassType::loadLibrary);
    _d.CPGF_MD_TEMPLATE _method("_import", &D::ClassType::loadLibrary);
}

GScriptCoreService * doBindScriptCoreService(GScriptObject * scriptObject, const char * bindName, IScriptLibraryLoader * libraryLoader)
{
	GScopedPointer<GScriptCoreService> coreService(new GScriptCoreService(scriptObject, bindName, libraryLoader));

	GDefineMetaClass<GScriptCoreService> define = GDefineMetaClass<GScriptCoreService>::Policy<GMetaPolicyNoDefaultAndCopyConstructor>::declare("GScriptCoreService");
	buildMetaClass_GScriptCoreService(define);

	injectObjectToScript(scriptObject, define.getMetaClass(), coreService.get(), bindName);

	GScopedInterface<IMetaItem> metaItem(metaItemToInterface(define.takeMetaClass(), true));
	scriptObject->holdObject(metaItem.get());

	return coreService.take();
}


GScriptCoreService::GScriptCoreService(GScriptObject * scriptObject, const char * bindName, IScriptLibraryLoader * libraryLoader)
	: scriptObject(scriptObject), bindName(bindName), libraryLoader(libraryLoader)
{
}

GScriptCoreService::~GScriptCoreService()
{
}

bool GScriptCoreService::loadLibrary(const char * namespaces, const GMetaVariadicParam * libraryNames)
{
	if(! this->libraryLoader) {
		GScopedInterface<IScriptLibraryLoader> loader(createBuiltinLibraries(this->scriptObject));
		this->libraryLoader.reset(loader.get());
	}

	if(namespaces == NULL) {
		namespaces = this->bindName.c_str();
	}

	GScopedInterface<IScriptObject> owner(scriptObjectToInterface(this->scriptObject, false));
	for(size_t i = 0; i < libraryNames->paramCount; ++i) {
		char * name = fromVariant<char *>(*(libraryNames->params[i]));
		if(! this->libraryLoader->loadScriptLibrary(owner.get(), namespaces, name)) {
			return false;
		}
	}
	
	return true;
}


} // namespace cpgf


#include "cpgf/metadata/private/gmetadata_footer.h"
