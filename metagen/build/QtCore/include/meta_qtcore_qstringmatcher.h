// Auto generated file, don't modify.

#ifndef __META_QTCORE_QSTRINGMATCHER_H
#define __META_QTCORE_QSTRINGMATCHER_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


inline QStringMatcher & opErAToRWrapper_QStringMatcher__opAssign(QStringMatcher * self, const QStringMatcher & other) {
    return (*self) = other;
}


template <typename D>
void buildMetaClass_QStringMatcher(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, Qt::CaseSensitivity)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QChar *, int, Qt::CaseSensitivity)>()
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStringMatcher &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setPattern", &D::ClassType::setPattern, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setCaseSensitivity", &D::ClassType::setCaseSensitivity);
    _d.CPGF_MD_TEMPLATE _method("indexIn", (int (D::ClassType::*) (const QString &, int) const)&D::ClassType::indexIn, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("indexIn", (int (D::ClassType::*) (const QChar *, int, int) const)&D::ClassType::indexIn)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("pattern", &D::ClassType::pattern);
    _d.CPGF_MD_TEMPLATE _method("caseSensitivity", &D::ClassType::caseSensitivity);
    _d.CPGF_MD_TEMPLATE _operator<QStringMatcher & (*)(cpgf::GMetaSelf, const QStringMatcher &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QStringMatcher & (*) (QStringMatcher *, const QStringMatcher &))&opErAToRWrapper_QStringMatcher__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
