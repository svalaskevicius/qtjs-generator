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

#ifndef __META_SFML_SPRITE_H
#define __META_SFML_SPRITE_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace sf;


namespace meta_sfml { 


template <typename D>
void buildMetaClass_Sprite(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const Image &, const Vector2f &, const Vector2f &, float, const Color &)>()
        ._default(copyVariantFromCopyable(Color(255, 255, 255, 255)))
        ._default(copyVariantFromCopyable(0.f))
        ._default(copyVariantFromCopyable(Vector2f(1, 1)))
        ._default(copyVariantFromCopyable(Vector2f(0, 0)))
    ;
    _d.CPGF_MD_TEMPLATE _method("SetImage", &D::ClassType::SetImage);
    _d.CPGF_MD_TEMPLATE _method("SetSubRect", &D::ClassType::SetSubRect);
    _d.CPGF_MD_TEMPLATE _method("Resize", (void (D::ClassType::*) (float, float))&D::ClassType::Resize);
    _d.CPGF_MD_TEMPLATE _method("Resize", (void (D::ClassType::*) (const Vector2f &))&D::ClassType::Resize);
    _d.CPGF_MD_TEMPLATE _method("FlipX", &D::ClassType::FlipX);
    _d.CPGF_MD_TEMPLATE _method("FlipY", &D::ClassType::FlipY);
    _d.CPGF_MD_TEMPLATE _method("GetImage", &D::ClassType::GetImage);
    _d.CPGF_MD_TEMPLATE _method("GetSubRect", &D::ClassType::GetSubRect);
    _d.CPGF_MD_TEMPLATE _method("GetSize", &D::ClassType::GetSize);
    _d.CPGF_MD_TEMPLATE _method("GetPixel", &D::ClassType::GetPixel);
}


} // namespace meta_sfml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
