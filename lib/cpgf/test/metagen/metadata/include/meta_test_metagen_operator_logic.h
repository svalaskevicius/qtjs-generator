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

#ifndef __META_TEST_METAGEN_OPERATOR_LOGIC_H
#define __META_TEST_METAGEN_OPERATOR_LOGIC_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_test { 


inline bool opErAToRWrapper_MetagenOperatorLogic__opGreater(const MetagenOperatorLogic * self, unsigned int n) {
    return (*self) > n;
}
inline bool opErAToRWrapper_MetagenOperatorLogic__opGreater(const MetagenOperatorLogic * self, const MetagenOperatorLogic & other) {
    return (*self) > other;
}
inline bool opErAToRWrapper_MetagenOperatorLogic__opGreater(const MetagenOperatorLogic * self, const std::string & s) {
    return (*self) > s;
}
inline bool opErAToRWrapper_MetagenOperatorLogic__opGreaterEqual(const MetagenOperatorLogic * self, unsigned int n) {
    return (*self) >= n;
}
inline bool opErAToRWrapper_MetagenOperatorLogic__opGreaterEqual(const MetagenOperatorLogic * self, const MetagenOperatorLogic & other) {
    return (*self) >= other;
}
inline bool opErAToRWrapper_MetagenOperatorLogic__opGreaterEqual(const MetagenOperatorLogic * self, const std::string & s) {
    return (*self) >= s;
}
inline bool opErAToRWrapper_MetagenOperatorLogic__opLess(const MetagenOperatorLogic * self, unsigned int n) {
    return (*self) < n;
}
inline bool opErAToRWrapper_MetagenOperatorLogic__opLess(const MetagenOperatorLogic * self, const MetagenOperatorLogic & other) {
    return (*self) < other;
}
inline bool opErAToRWrapper_MetagenOperatorLogic__opLess(const MetagenOperatorLogic * self, const std::string & s) {
    return (*self) < s;
}
inline bool opErAToRWrapper_MetagenOperatorLogic__opLessEqual(const MetagenOperatorLogic * self, unsigned int n) {
    return (*self) <= n;
}
inline bool opErAToRWrapper_MetagenOperatorLogic__opLessEqual(const MetagenOperatorLogic * self, const MetagenOperatorLogic & other) {
    return (*self) <= other;
}
inline bool opErAToRWrapper_MetagenOperatorLogic__opLessEqual(const MetagenOperatorLogic * self, const std::string & s) {
    return (*self) <= s;
}
inline bool opErAToRWrapper_MetagenOperatorLogic__opAnd(const MetagenOperatorLogic * self, unsigned int n) {
    return (*self) && n;
}
inline bool opErAToRWrapper_MetagenOperatorLogic__opAnd(const MetagenOperatorLogic * self, const MetagenOperatorLogic & other) {
    return (*self) && other;
}
inline bool opErAToRWrapper_MetagenOperatorLogic__opAnd(const MetagenOperatorLogic * self, const std::string & s) {
    return (*self) && s;
}
inline bool opErAToRWrapper_MetagenOperatorLogic__opOr(const MetagenOperatorLogic * self, unsigned int n) {
    return (*self) || n;
}
inline bool opErAToRWrapper_MetagenOperatorLogic__opOr(const MetagenOperatorLogic * self, const MetagenOperatorLogic & other) {
    return (*self) || other;
}
inline bool opErAToRWrapper_MetagenOperatorLogic__opOr(const MetagenOperatorLogic * self, const std::string & s) {
    return (*self) || s;
}
inline bool opErAToRWrapper_MetagenOperatorLogic__opNot(const MetagenOperatorLogic * self) {
    return !(*self);
}


template <typename D>
void buildMetaClass_MetagenOperatorLogic(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (unsigned int)>();
    _d.CPGF_MD_TEMPLATE _field("value", &D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, unsigned int)>(mopHolder > mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const MetagenOperatorLogic *, unsigned int))&opErAToRWrapper_MetagenOperatorLogic__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const MetagenOperatorLogic &)>(mopHolder > mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const MetagenOperatorLogic *, const MetagenOperatorLogic &))&opErAToRWrapper_MetagenOperatorLogic__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const std::string &)>(mopHolder > mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const MetagenOperatorLogic *, const std::string &))&opErAToRWrapper_MetagenOperatorLogic__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, unsigned int)>(mopHolder >= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const MetagenOperatorLogic *, unsigned int))&opErAToRWrapper_MetagenOperatorLogic__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const MetagenOperatorLogic &)>(mopHolder >= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const MetagenOperatorLogic *, const MetagenOperatorLogic &))&opErAToRWrapper_MetagenOperatorLogic__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const std::string &)>(mopHolder >= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const MetagenOperatorLogic *, const std::string &))&opErAToRWrapper_MetagenOperatorLogic__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, unsigned int)>(mopHolder < mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const MetagenOperatorLogic *, unsigned int))&opErAToRWrapper_MetagenOperatorLogic__opLess, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const MetagenOperatorLogic &)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const MetagenOperatorLogic *, const MetagenOperatorLogic &))&opErAToRWrapper_MetagenOperatorLogic__opLess, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const std::string &)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const MetagenOperatorLogic *, const std::string &))&opErAToRWrapper_MetagenOperatorLogic__opLess, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, unsigned int)>(mopHolder <= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const MetagenOperatorLogic *, unsigned int))&opErAToRWrapper_MetagenOperatorLogic__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const MetagenOperatorLogic &)>(mopHolder <= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const MetagenOperatorLogic *, const MetagenOperatorLogic &))&opErAToRWrapper_MetagenOperatorLogic__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const std::string &)>(mopHolder <= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const MetagenOperatorLogic *, const std::string &))&opErAToRWrapper_MetagenOperatorLogic__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, unsigned int)>(mopHolder && mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAnd", (bool (*) (const MetagenOperatorLogic *, unsigned int))&opErAToRWrapper_MetagenOperatorLogic__opAnd, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const MetagenOperatorLogic &)>(mopHolder && mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAnd", (bool (*) (const MetagenOperatorLogic *, const MetagenOperatorLogic &))&opErAToRWrapper_MetagenOperatorLogic__opAnd, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const std::string &)>(mopHolder && mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAnd", (bool (*) (const MetagenOperatorLogic *, const std::string &))&opErAToRWrapper_MetagenOperatorLogic__opAnd, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, unsigned int)>(mopHolder || mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opOr", (bool (*) (const MetagenOperatorLogic *, unsigned int))&opErAToRWrapper_MetagenOperatorLogic__opOr, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const MetagenOperatorLogic &)>(mopHolder || mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opOr", (bool (*) (const MetagenOperatorLogic *, const MetagenOperatorLogic &))&opErAToRWrapper_MetagenOperatorLogic__opOr, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const std::string &)>(mopHolder || mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opOr", (bool (*) (const MetagenOperatorLogic *, const std::string &))&opErAToRWrapper_MetagenOperatorLogic__opOr, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &)>(!mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNot", (bool (*) (const MetagenOperatorLogic *))&opErAToRWrapper_MetagenOperatorLogic__opNot, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_test




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
