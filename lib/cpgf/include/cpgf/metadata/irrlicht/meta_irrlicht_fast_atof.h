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

#ifndef __META_IRRLICHT_FAST_ATOF_H
#define __META_IRRLICHT_FAST_ATOF_H


#include "gmetaobjectlifemanager_irrlicht_ireferencecounted.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace irr;
using namespace irr::core;


namespace meta_irrlicht { 


template <typename D>
void buildMetaClass_Global_fast_atof(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("LOCALE_DECIMAL_POINTS", &LOCALE_DECIMAL_POINTS);
    _d.CPGF_MD_TEMPLATE _field("fast_atof_table", &fast_atof_table);
    _d.CPGF_MD_TEMPLATE _method("strtoul10", (u32 (*) (const char *, const char **))&strtoul10)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("strtol10", (s32 (*) (const char *, const char **))&strtol10)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("ctoul16", (u32 (*) (char))&ctoul16);
    _d.CPGF_MD_TEMPLATE _method("strtoul16", (u32 (*) (const char *, const char **))&strtoul16)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("strtoul8", (u32 (*) (const char *, const char **))&strtoul8)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("strtoul_prefix", (u32 (*) (const char *, const char **))&strtoul_prefix)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("strtof10", (f32 (*) (const char *, const char **))&strtof10)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("fast_atof_move", (const char * (*) (const char *, f32 &))&fast_atof_move);
    _d.CPGF_MD_TEMPLATE _method("fast_atof", (float (*) (const char *, const char **))&fast_atof)
        ._default(copyVariantFromCopyable(0))
    ;
}


} // namespace meta_irrlicht




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
