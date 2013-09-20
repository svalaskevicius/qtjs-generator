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


// Auto generated file, don't modify.

#ifndef __META_SFML_RENDERTARGET_H
#define __META_SFML_RENDERTARGET_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace sf;


namespace meta_sfml { 


template <typename D>
void buildMetaClass_RenderTarget(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("Clear", &D::ClassType::Clear)
        ._default(copyVariantFromCopyable(Color(0, 0, 0)))
    ;
    _d.CPGF_MD_TEMPLATE _method("Draw", &D::ClassType::Draw);
    _d.CPGF_MD_TEMPLATE _method("GetWidth", &D::ClassType::GetWidth);
    _d.CPGF_MD_TEMPLATE _method("GetHeight", &D::ClassType::GetHeight);
    _d.CPGF_MD_TEMPLATE _method("SetView", &D::ClassType::SetView);
    _d.CPGF_MD_TEMPLATE _method("GetView", &D::ClassType::GetView);
    _d.CPGF_MD_TEMPLATE _method("GetDefaultView", &D::ClassType::GetDefaultView);
    _d.CPGF_MD_TEMPLATE _method("PreserveOpenGLStates", &D::ClassType::PreserveOpenGLStates);
}


} // namespace meta_sfml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
