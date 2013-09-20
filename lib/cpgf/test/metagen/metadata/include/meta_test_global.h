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

#ifndef __META_TEST_GLOBAL_H
#define __META_TEST_GLOBAL_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_test { 


template <typename D>
void buildMetaClass_Global_global(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("globalInt", &globalInt);
    _d.CPGF_MD_TEMPLATE _field("globalString", &globalString);
    _d.CPGF_MD_TEMPLATE _field("globalStdString", &globalStdString);
    _d.CPGF_MD_TEMPLATE _field("globalStdWideString", &globalStdWideString);
    _d.CPGF_MD_TEMPLATE _field("globalRaw", &globalRaw);
    _d.CPGF_MD_TEMPLATE _method("getCString", (const char * (*) (int))&getCString);
    _d.CPGF_MD_TEMPLATE _method("getStdString", (std::string (*) (const char *))&getStdString);
    _d.CPGF_MD_TEMPLATE _method("getCWideString", (const wchar_t * (*) (int))&getCWideString);
    _d.CPGF_MD_TEMPLATE _method("getStdWideString", (std::wstring (*) (const wchar_t *))&getStdWideString);
    _d.CPGF_MD_TEMPLATE _method("checkGlobalRaw", (bool (*) (const void ***))&checkGlobalRaw);
    _d.CPGF_MD_TEMPLATE _enum<GlobalEnum>("GlobalEnum")
        ._element("globalEnumA", globalEnumA)
        ._element("globalEnumB", globalEnumB)
    ;
}


} // namespace meta_test




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
