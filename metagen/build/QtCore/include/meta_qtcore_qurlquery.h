// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QURLQUERY_H
#define CPGF_META_QTCORE_QURLQUERY_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


inline QUrlQuery & opErAToRWrapper_QUrlQuery__opAssign(QUrlQuery * self, const QUrlQuery & other) {
    return (*self) = other;
}
inline bool opErAToRWrapper_QUrlQuery__opEqual(const QUrlQuery * self, const QUrlQuery & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QUrlQuery__opNotEqual(const QUrlQuery * self, const QUrlQuery & other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QUrlQuery(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QUrl &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QUrlQuery &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("isDetached", &D::ClassType::isDetached);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("query", &D::ClassType::query)
        ._default(copyVariantFromCopyable(QUrl::PrettyDecoded))
    ;
    _d.CPGF_MD_TEMPLATE _method("setQuery", &D::ClassType::setQuery, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("toString", &D::ClassType::toString)
        ._default(copyVariantFromCopyable(QUrl::PrettyDecoded))
    ;
    _d.CPGF_MD_TEMPLATE _method("setQueryDelimiters", &D::ClassType::setQueryDelimiters);
    _d.CPGF_MD_TEMPLATE _method("queryValueDelimiter", &D::ClassType::queryValueDelimiter);
    _d.CPGF_MD_TEMPLATE _method("queryPairDelimiter", &D::ClassType::queryPairDelimiter);
    _d.CPGF_MD_TEMPLATE _method("setQueryItems", &D::ClassType::setQueryItems);
    _d.CPGF_MD_TEMPLATE _method("queryItems", &D::ClassType::queryItems)
        ._default(copyVariantFromCopyable(QUrl::PrettyDecoded))
    ;
    _d.CPGF_MD_TEMPLATE _method("hasQueryItem", &D::ClassType::hasQueryItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("addQueryItem", &D::ClassType::addQueryItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("removeQueryItem", &D::ClassType::removeQueryItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("queryItemValue", &D::ClassType::queryItemValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QUrl::PrettyDecoded))
    ;
    _d.CPGF_MD_TEMPLATE _method("allQueryItemValues", &D::ClassType::allQueryItemValues, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QUrl::PrettyDecoded))
    ;
    _d.CPGF_MD_TEMPLATE _method("removeAllQueryItems", &D::ClassType::removeAllQueryItems, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("defaultQueryValueDelimiter", &D::ClassType::defaultQueryValueDelimiter);
    _d.CPGF_MD_TEMPLATE _method("defaultQueryPairDelimiter", &D::ClassType::defaultQueryPairDelimiter);
    _d.CPGF_MD_TEMPLATE _operator<QUrlQuery & (*)(cpgf::GMetaSelf, const QUrlQuery &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QUrlQuery & (*) (QUrlQuery *, const QUrlQuery &))&opErAToRWrapper_QUrlQuery__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QUrlQuery &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QUrlQuery *, const QUrlQuery &))&opErAToRWrapper_QUrlQuery__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QUrlQuery &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QUrlQuery *, const QUrlQuery &))&opErAToRWrapper_QUrlQuery__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
