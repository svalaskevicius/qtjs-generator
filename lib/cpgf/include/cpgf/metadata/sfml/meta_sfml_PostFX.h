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

#ifndef __META_SFML_POSTFX_H
#define __META_SFML_POSTFX_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace sf;


namespace meta_sfml { 


inline PostFX & opErAToRWrapper_PostFX__opAssign(PostFX * self, const PostFX & Other) {
    return (*self) = Other;
}


template <typename D>
void buildMetaClass_PostFX(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const PostFX &)>();
    _d.CPGF_MD_TEMPLATE _method("LoadFromFile", &D::ClassType::LoadFromFile, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("LoadFromMemory", &D::ClassType::LoadFromMemory, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("SetParameter", (void (D::ClassType::*) (const std::string &, float))&D::ClassType::SetParameter, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("SetParameter", (void (D::ClassType::*) (const std::string &, float, float))&D::ClassType::SetParameter, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("SetParameter", (void (D::ClassType::*) (const std::string &, float, float, float))&D::ClassType::SetParameter, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("SetParameter", (void (D::ClassType::*) (const std::string &, float, float, float, float))&D::ClassType::SetParameter, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("SetTexture", &D::ClassType::SetTexture, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("CanUsePostFX", &D::ClassType::CanUsePostFX);
    _d.CPGF_MD_TEMPLATE _operator<PostFX & (*)(cpgf::GMetaSelf, const PostFX &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (PostFX & (*) (PostFX *, const PostFX &))&opErAToRWrapper_PostFX__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_sfml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
