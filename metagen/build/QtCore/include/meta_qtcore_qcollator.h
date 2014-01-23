// Auto generated file, don't modify.

#ifndef __META_QTCORE_QCOLLATOR_H
#define __META_QTCORE_QCOLLATOR_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qcollator(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QCollatorSortKey &, const QCollatorSortKey &)>(mopHolder < mopHolder);
}


inline QCollator & opErAToRWrapper_QCollator__opAssign(QCollator * self, const QCollator & __arg0) {
    return (*self) = __arg0;
}
inline bool opErAToRWrapper_QCollator__opFunction(const QCollator * self, const QString & s1, const QString & s2) {
    return (*self)(s1, s2);
}


template <typename D>
void buildMetaClass_QCollator(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QLocale &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QLocale()))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QCollator &)>();
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("setLocale", &D::ClassType::setLocale, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("locale", &D::ClassType::locale);
    _d.CPGF_MD_TEMPLATE _method("caseSensitivity", &D::ClassType::caseSensitivity);
    _d.CPGF_MD_TEMPLATE _method("setCaseSensitivity", &D::ClassType::setCaseSensitivity);
    _d.CPGF_MD_TEMPLATE _method("setNumericMode", &D::ClassType::setNumericMode);
    _d.CPGF_MD_TEMPLATE _method("numericMode", &D::ClassType::numericMode);
    _d.CPGF_MD_TEMPLATE _method("setIgnorePunctuation", &D::ClassType::setIgnorePunctuation);
    _d.CPGF_MD_TEMPLATE _method("ignorePunctuation", &D::ClassType::ignorePunctuation);
    _d.CPGF_MD_TEMPLATE _method("compare", (int (D::ClassType::*) (const QString &, const QString &) const)&D::ClassType::compare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("compare", (int (D::ClassType::*) (const QStringRef &, const QStringRef &) const)&D::ClassType::compare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("compare", (int (D::ClassType::*) (const QChar *, int, const QChar *, int) const)&D::ClassType::compare);
    _d.CPGF_MD_TEMPLATE _method("sortKey", &D::ClassType::sortKey, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QCollator & (*)(cpgf::GMetaSelf, const QCollator &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QCollator & (*) (QCollator *, const QCollator &))&opErAToRWrapper_QCollator__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QString &, const QString &)>(mopHolder(mopHolder), cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opFunction", (bool (*) (const QCollator *, const QString &, const QString &))&opErAToRWrapper_QCollator__opFunction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleExplicitThis >());
}


inline QCollatorSortKey & opErAToRWrapper_QCollatorSortKey__opAssign(QCollatorSortKey * self, const QCollatorSortKey & other) {
    return (*self) = other;
}


template <typename D>
void buildMetaClass_QCollatorSortKey(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QCollatorSortKey &)>();
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("compare", &D::ClassType::compare);
    _d.CPGF_MD_TEMPLATE _operator<QCollatorSortKey & (*)(cpgf::GMetaSelf, const QCollatorSortKey &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QCollatorSortKey & (*) (QCollatorSortKey *, const QCollatorSortKey &))&opErAToRWrapper_QCollatorSortKey__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
