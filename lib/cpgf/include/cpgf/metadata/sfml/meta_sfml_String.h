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

#ifndef __META_SFML_STRING_H
#define __META_SFML_STRING_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace sf;


namespace meta_sfml { 


template <typename D>
void buildMetaClass_String(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const Unicode::Text &, const Font &, float)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
//        ._default(copyVariantFromCopyable(30.f))
//        ._default(copyVariantFromCopyable(Font::GetDefaultFont()))
    ;
    _d.CPGF_MD_TEMPLATE _method("SetText", &D::ClassType::SetText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("SetFont", &D::ClassType::SetFont);
    _d.CPGF_MD_TEMPLATE _method("SetSize", &D::ClassType::SetSize);
    _d.CPGF_MD_TEMPLATE _method("SetStyle", &D::ClassType::SetStyle);
    _d.CPGF_MD_TEMPLATE _method("GetText", &D::ClassType::GetText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("GetFont", &D::ClassType::GetFont);
    _d.CPGF_MD_TEMPLATE _method("GetSize", &D::ClassType::GetSize);
    _d.CPGF_MD_TEMPLATE _method("GetStyle", &D::ClassType::GetStyle);
    _d.CPGF_MD_TEMPLATE _method("GetCharacterPos", &D::ClassType::GetCharacterPos);
    _d.CPGF_MD_TEMPLATE _method("GetRect", &D::ClassType::GetRect);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Style>("Style")
        ._element("Regular", D::ClassType::Regular)
        ._element("Bold", D::ClassType::Bold)
        ._element("Italic", D::ClassType::Italic)
        ._element("Underlined", D::ClassType::Underlined)
    ;
}


} // namespace meta_sfml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
