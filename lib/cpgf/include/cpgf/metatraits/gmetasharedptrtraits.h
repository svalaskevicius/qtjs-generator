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


#ifndef __GMETASHAREDPTRTRAITS_H
#define __GMETASHAREDPTRTRAITS_H

#include "cpgf/gapiutil.h"
#include "cpgf/gmetatype.h"


namespace cpgf {

struct GMetaTraitsParam;

struct IMetaSharedPointerTraits : public IExtendObject
{
	virtual void * G_API_CC getPointer(void * sharedPointer) = 0;
	virtual void G_API_CC getMetaType(GMetaTypeData * outType) = 0;
};


namespace gmetasharedptrtraits_internal {

template <typename T, typename SP>
class GMetaTraitsCreateSharedPointerTraitsGeneral : public IMetaSharedPointerTraits
{
private:
	G_INTERFACE_IMPL_OBJECT
	G_INTERFACE_IMPL_EXTENDOBJECT
	
protected:	
	virtual void * G_API_CC getPointer(void * sharedPointer) {
		return static_cast<SP *>(sharedPointer)->get();
	}
	
	virtual void G_API_CC getMetaType(GMetaTypeData * outType) {
		GMetaType type = createMetaType<T>();
		fixupMetaType(&type);
		*outType = type.refData();
	}
};


} // namespace gmetasharedptrtraits_internal


} // namespace cpgf


namespace cpgf {

template <typename T, typename Enabled = void>
struct GMetaTraitsCreateSharedPointerTraits
{
	static IMetaSharedPointerTraits * createSharedPointerTraits(const GMetaTraitsParam &) {
		return NULL;
	}
};

template <typename T>
IMetaSharedPointerTraits * createSharedPointerTraitsFromMetaTraits(const GMetaTraitsParam & param, T *)
{
	return GMetaTraitsCreateSharedPointerTraits<T>::createSharedPointerTraits(param);
}

} // namespace cpgf


#endif
