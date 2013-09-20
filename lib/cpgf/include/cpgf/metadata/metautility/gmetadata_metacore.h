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


#ifndef __GMETADATA_METACORE_H
#define __GMETADATA_METACORE_H


#include "cpgf/gmetadefine.h"

#include "cpgf/metadata/gmetadataconfig.h"


#include "cpgf/metadata/private/gmetadata_header.h"

namespace cpgf {

namespace metadata_internal {


template <typename T, typename MetaDefine>
void doBuildMetaData_metaCore(const GMetaDataConfigFlags & /*config*/, MetaDefine define)
{
	M(T, cloneClass)
	define._method("cast", &T::cast)
		._default((void *)0);
}


} // namespace metadata_internal


template <typename MetaDefine>
void buildMetaData_metaCore(const GMetaDataConfigFlags & config, MetaDefine define)
{
	metadata_internal::doBuildMetaData_metaCore<typename MetaDefine::ClassType>(config, define);
}

template <typename MetaDefine>
void buildMetaData_metaCore(MetaDefine define)
{
	buildMetaData_metaCore(GMetaDataConfigFlags(), define);
}


} // namespace cpgf


#include "cpgf/metadata/private/gmetadata_footer.h"


#endif

