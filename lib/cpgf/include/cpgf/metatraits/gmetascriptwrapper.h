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


#ifndef __GMETASCRIPTWRAPPER_H
#define __GMETASCRIPTWRAPPER_H


#include "cpgf/gapiutil.h"


namespace cpgf {


struct IScriptDataStorage;
struct GMetaTraitsParam;

struct IMetaScriptWrapper : public IObject
{
	virtual void G_API_CC setScriptDataStorage(void * instance, IScriptDataStorage * scriptDataStorage) = 0;
};


template <typename T>
struct GMetaTraitsCreateScriptWrapper
{
	static IMetaScriptWrapper * createScriptWrapper(const GMetaTraitsParam &) {
		return NULL;
	}
};

template <typename T>
inline IMetaScriptWrapper * metaTraitsCreateScriptWrapper(const GMetaTraitsParam & param, ...)
{
	return GMetaTraitsCreateScriptWrapper<T>::createScriptWrapper(param);
}



} // namespace cpgf



#endif
