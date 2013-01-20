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

#ifndef __META_TEST_METAGEN_OPERATOR_UNARY_H
#define __META_TEST_METAGEN_OPERATOR_UNARY_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_test { 


inline MetagenOperatorUnary opErAToRWrapper_MetagenOperatorUnary__opPlus(const MetagenOperatorUnary * self) {
    return +(*self);
}
inline MetagenOperatorUnary opErAToRWrapper_MetagenOperatorUnary__opMinus(const MetagenOperatorUnary * self) {
    return -(*self);
}
inline MetagenOperatorUnary opErAToRWrapper_MetagenOperatorUnary__opInc(MetagenOperatorUnary * self) {
    return ++(*self);
}
inline MetagenOperatorUnary opErAToRWrapper_MetagenOperatorUnary__opIncSuffix(MetagenOperatorUnary * self) {
    return (*self)++;
}
inline MetagenOperatorUnary opErAToRWrapper_MetagenOperatorUnary__opDec(MetagenOperatorUnary * self) {
    return --(*self);
}
inline MetagenOperatorUnary opErAToRWrapper_MetagenOperatorUnary__opDecSuffix(MetagenOperatorUnary * self) {
    return (*self)--;
}


template <typename D>
void buildMetaClass_MetagenOperatorUnary(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int)>();
    _d.CPGF_MD_TEMPLATE _field("value", &D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _operator<MetagenOperatorUnary (*)(const cpgf::GMetaSelf &)>(+mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opPlus", (MetagenOperatorUnary (*) (const MetagenOperatorUnary *))&opErAToRWrapper_MetagenOperatorUnary__opPlus, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<MetagenOperatorUnary (*)(const cpgf::GMetaSelf &)>(-mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMinus", (MetagenOperatorUnary (*) (const MetagenOperatorUnary *))&opErAToRWrapper_MetagenOperatorUnary__opMinus, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<MetagenOperatorUnary (*)(cpgf::GMetaSelf)>(++mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opInc", (MetagenOperatorUnary (*) (MetagenOperatorUnary *))&opErAToRWrapper_MetagenOperatorUnary__opInc, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<MetagenOperatorUnary (*)(cpgf::GMetaSelf)>(mopHolder++);
    _d.CPGF_MD_TEMPLATE _method("_opIncSuffix", (MetagenOperatorUnary (*) (MetagenOperatorUnary *))&opErAToRWrapper_MetagenOperatorUnary__opIncSuffix, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<MetagenOperatorUnary (*)(cpgf::GMetaSelf)>(--mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDec", (MetagenOperatorUnary (*) (MetagenOperatorUnary *))&opErAToRWrapper_MetagenOperatorUnary__opDec, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<MetagenOperatorUnary (*)(cpgf::GMetaSelf)>(mopHolder--);
    _d.CPGF_MD_TEMPLATE _method("_opDecSuffix", (MetagenOperatorUnary (*) (MetagenOperatorUnary *))&opErAToRWrapper_MetagenOperatorUnary__opDecSuffix, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_test




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
