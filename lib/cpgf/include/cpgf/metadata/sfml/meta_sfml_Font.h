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

#ifndef __META_SFML_FONT_H
#define __META_SFML_FONT_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace sf;
using namespace sf::priv;


namespace meta_sfml { 


extern Uint32 cpgf_meta_ourDefaultCharset[];


template <typename D>
void buildMetaClass_Font(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("LoadFromFile", &D::ClassType::LoadFromFile, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(cpgf_meta_ourDefaultCharset))
        ._default(copyVariantFromCopyable(30))
    ;
    _d.CPGF_MD_TEMPLATE _method("LoadFromMemory", &D::ClassType::LoadFromMemory, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<3> >())
        ._default(copyVariantFromCopyable(cpgf_meta_ourDefaultCharset))
        ._default(copyVariantFromCopyable(30))
    ;
    _d.CPGF_MD_TEMPLATE _method("GetCharacterSize", &D::ClassType::GetCharacterSize);
    _d.CPGF_MD_TEMPLATE _method("GetGlyph", &D::ClassType::GetGlyph);
    _d.CPGF_MD_TEMPLATE _method("GetImage", &D::ClassType::GetImage);
    _d.CPGF_MD_TEMPLATE _method("GetDefaultFont", &D::ClassType::GetDefaultFont);
}


} // namespace meta_sfml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
