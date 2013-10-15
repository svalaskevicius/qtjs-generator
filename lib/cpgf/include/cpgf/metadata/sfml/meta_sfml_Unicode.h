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

#ifndef __META_SFML_UNICODE_H
#define __META_SFML_UNICODE_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace sf;


namespace meta_sfml { 


template <typename D>
void buildMetaClass_Unicode(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    {
        GDefineMetaClass<Unicode::Text> _nd = GDefineMetaClass<Unicode::Text>::declare("Text");
        _nd.CPGF_MD_TEMPLATE _constructor<void * ()>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const char *)>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const wchar_t *)>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const Uint8 *)>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const Uint16 *)>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const Uint32 *)>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const std::string &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const std::wstring &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const Unicode::UTF8String &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const Unicode::UTF16String &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const Unicode::UTF32String &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _operator< std::string (cpgf::GMetaSelf)>(mopHolder());
        _nd.CPGF_MD_TEMPLATE _operator< std::wstring (cpgf::GMetaSelf)>(mopHolder());
        _nd.CPGF_MD_TEMPLATE _operator< Unicode::UTF8String (cpgf::GMetaSelf)>(mopHolder());
        _nd.CPGF_MD_TEMPLATE _operator< Unicode::UTF16String (cpgf::GMetaSelf)>(mopHolder());
        _nd.CPGF_MD_TEMPLATE _operator< const Unicode::UTF32String & (cpgf::GMetaSelf)>(mopHolder(), cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


} // namespace meta_sfml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
