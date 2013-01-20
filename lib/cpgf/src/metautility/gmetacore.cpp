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


#include "cpgf/metautility/gmetacore.h"
#include "cpgf/gmetaapi.h"
#include "cpgf/scriptbind/gscriptbind.h"
#include "cpgf/gscopedinterface.h"

namespace cpgf {

GMetaCore::GMetaCore(GScriptObject * scriptObject)
	: scriptObject(scriptObject)
{
}

IMetaClass * GMetaCore::cloneClass(IMetaClass * metaClass)
{
	return this->scriptObject->cloneMetaClass(metaClass);
}

GVariant GMetaCore::cast(const GVariant & instance, IMetaClass * targetMetaClass)
{
	GVariant value = getVariantRealValue(instance);
	GMetaType type = getVariantRealMetaType(instance);
	
	if(canFromVariant<void *>(value) && type.getBaseName() != NULL) {
		GScopedInterface<IMetaService> metaService(this->scriptObject->getMetaService());
		GScopedInterface<IMetaClass> sourceClass(metaService->findClassByName(type.getBaseName()));
		if(sourceClass) {
			void * ptr = objectAddressFromVariant(instance);
			void * oldPtr = ptr;
			if(ptr != NULL) {
				GMetaType targetType;
				if(targetMetaClass != NULL) {
					ptr = metaCastToDerived(oldPtr, sourceClass.get(), targetMetaClass);
					if(ptr == NULL) {
						ptr = metaCastToBase(oldPtr, sourceClass.get(), targetMetaClass);
					}
					targetType = metaGetItemType(targetMetaClass);
				}
				else {
					GScopedInterface<IMetaClass> derivedClass(findAppropriateDerivedClass(oldPtr, sourceClass.get(), &ptr));
					if(derivedClass) {
						targetType = metaGetItemType(derivedClass.get());
					}
					else {
						ptr = NULL;
					}
				}

				if(ptr != NULL) {
					targetType.addPointer();
					return createTypedVariant(pointerToObjectVariant(ptr), targetType);
				}
			}
		}
	}

	return (void *)0;
}


} // namespace cpgf
