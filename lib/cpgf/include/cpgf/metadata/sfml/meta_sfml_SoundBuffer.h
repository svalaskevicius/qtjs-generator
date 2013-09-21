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

#ifndef __META_SFML_SOUNDBUFFER_H
#define __META_SFML_SOUNDBUFFER_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace sf;


namespace meta_sfml { 


inline SoundBuffer & opErAToRWrapper_SoundBuffer__opAssign(SoundBuffer * self, const SoundBuffer & Other) {
    return (*self) = Other;
}


template <typename D>
void buildMetaClass_SoundBuffer(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const SoundBuffer &)>();
    _d.CPGF_MD_TEMPLATE _method("LoadFromFile", &D::ClassType::LoadFromFile, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("LoadFromMemory", &D::ClassType::LoadFromMemory);
    _d.CPGF_MD_TEMPLATE _method("LoadFromSamples", &D::ClassType::LoadFromSamples);
    _d.CPGF_MD_TEMPLATE _method("SaveToFile", &D::ClassType::SaveToFile, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("GetSamples", &D::ClassType::GetSamples);
    _d.CPGF_MD_TEMPLATE _method("GetSamplesCount", &D::ClassType::GetSamplesCount);
    _d.CPGF_MD_TEMPLATE _method("GetSampleRate", &D::ClassType::GetSampleRate);
    _d.CPGF_MD_TEMPLATE _method("GetChannelsCount", &D::ClassType::GetChannelsCount);
    _d.CPGF_MD_TEMPLATE _method("GetDuration", &D::ClassType::GetDuration);
    _d.CPGF_MD_TEMPLATE _operator<SoundBuffer & (*)(cpgf::GMetaSelf, const SoundBuffer &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (SoundBuffer & (*) (SoundBuffer *, const SoundBuffer &))&opErAToRWrapper_SoundBuffer__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_sfml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
