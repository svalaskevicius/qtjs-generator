// Auto generated file, don't modify.

#ifndef __META_QTQML_QJSVALUEITERATOR_H
#define __META_QTQML_QJSVALUEITERATOR_H


#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtqml { 


inline QJSValueIterator & opErAToRWrapper_QJSValueIterator__opAssign(QJSValueIterator * self, QJSValue & value) {
    return (*self) = value;
}


template <typename D>
void buildMetaClass_QJSValueIterator(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QJSValue &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("hasNext", &D::ClassType::hasNext);
    _d.CPGF_MD_TEMPLATE _method("next", &D::ClassType::next);
    _d.CPGF_MD_TEMPLATE _method("name", &D::ClassType::name);
    _d.CPGF_MD_TEMPLATE _method("value", &D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _operator<QJSValueIterator & (*)(cpgf::GMetaSelf, QJSValue &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QJSValueIterator & (*) (QJSValueIterator *, QJSValue &))&opErAToRWrapper_QJSValueIterator__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_qtqml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
