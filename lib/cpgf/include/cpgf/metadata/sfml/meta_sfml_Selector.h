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


// Auto generated file, don't modify.

#ifndef __META_SFML_SELECTOR_H
#define __META_SFML_SELECTOR_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace sf;


namespace meta_sfml { 


template <typename D, typename Type>
void buildMetaClass_Selector(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("Add", &D::ClassType::Add);
    _d.CPGF_MD_TEMPLATE _method("Remove", &D::ClassType::Remove);
    _d.CPGF_MD_TEMPLATE _method("Clear", &D::ClassType::Clear);
    _d.CPGF_MD_TEMPLATE _method("Wait", &D::ClassType::Wait)
        ._default(copyVariantFromCopyable(0.f))
    ;
    _d.CPGF_MD_TEMPLATE _method("GetSocketReady", &D::ClassType::GetSocketReady);
}


} // namespace meta_sfml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
