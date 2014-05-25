// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QJSVALUEITERATOR_H
#define CPGF_META_QTQML_QJSVALUEITERATOR_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


inline QJSValueIterator & opErAToRWrapper_QJSValueIterator__opAssign(QJSValueIterator * self, QJSValue & value) {
    return (*self) = value;
}


template <typename D>
void buildMetaClass_QJSValueIterator(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QJSValue &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("hasNext", &D::ClassType::hasNext);
    _d.CPGF_MD_TEMPLATE _method("next", &D::ClassType::next);
    _d.CPGF_MD_TEMPLATE _method("name", &D::ClassType::name);
    _d.CPGF_MD_TEMPLATE _method("value", &D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _operator<QJSValueIterator & (*)(cpgf::GMetaSelf, QJSValue &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QJSValueIterator & (*) (QJSValueIterator *, QJSValue &))&opErAToRWrapper_QJSValueIterator__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
