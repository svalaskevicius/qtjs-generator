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


#ifndef __GMETAMODULE_H
#define __GMETAMODULE_H

#include "cpgf/gscopedptr.h"


namespace cpgf {

class GMetaItem;
class GMetaClass;
class GMetaEnum;
class GMetaTypedItem;
class GTypeInfo;

class GMetaModuleImplement;

class GMetaModule
{
public:
	GMetaModule();
	~GMetaModule();

	void registerMetaClass(const GMetaClass * metaClass);
	void unregisterMetaClass(const GMetaClass * metaClass);
	
	const GMetaTypedItem * findItemByType(const GTypeInfo & type) const;
	const GMetaTypedItem * findItemByName(const char * name) const;

	const GMetaClass * findClassByType(const GTypeInfo & type) const;
	const GMetaClass * findClassByName(const char * name) const;

	void initializeMetaClasses();

	bool hasInitializedMetaClasses() const {
		return this->initializedMetaClasses;
	}

private:
	void unregisterAll();

	void doRegisterMetaClass(const GMetaClass * metaClass);
	void doRegisterMetaEnum(const GMetaEnum * metaEnum);
	
	void doUnregisterMetaClass(const GMetaClass * metaClass);
	void doUnregisterMetaEnum(const GMetaEnum * metaEnum);
	
private:
	GScopedPointer<GMetaModuleImplement> implement;
	bool initializedMetaClasses;
};

GMetaModule * getItemModule(const GMetaItem * metaItem);


} // namespace cpgf



#endif
