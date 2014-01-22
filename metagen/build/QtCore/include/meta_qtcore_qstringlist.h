// Auto generated file, don't modify.

#ifndef __META_QTCORE_QSTRINGLIST_H
#define __META_QTCORE_QSTRINGLIST_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace QtPrivate;


namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qstringlist(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QStringList &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QStringList &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
}


inline QStringList opErAToRWrapper_QStringList__opAdd(const QStringList * self, const QStringList & other) {
    return (*self) + other;
}
inline QStringList & opErAToRWrapper_QStringList__opLeftShift(QStringList * self, const QString & str) {
    return (*self) << str;
}
inline QStringList & opErAToRWrapper_QStringList__opLeftShift(QStringList * self, const QStringList & l) {
    return (*self) << l;
}


template <typename D>
void buildMetaClass_QStringList(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStringList &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QList< QString > &)>();
    _d.CPGF_MD_TEMPLATE _method("sort", &D::ClassType::sort)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("removeDuplicates", &D::ClassType::removeDuplicates);
    _d.CPGF_MD_TEMPLATE _method("join", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::join, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("join", (QString (D::ClassType::*) (QChar) const)&D::ClassType::join);
    _d.CPGF_MD_TEMPLATE _method("filter", (QStringList (D::ClassType::*) (const QString &, Qt::CaseSensitivity) const)&D::ClassType::filter, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("replaceInStrings", (QStringList & (D::ClassType::*) (const QString &, const QString &, Qt::CaseSensitivity))&D::ClassType::replaceInStrings, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("filter", (QStringList (D::ClassType::*) (const QRegExp &) const)&D::ClassType::filter, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("replaceInStrings", (QStringList & (D::ClassType::*) (const QRegExp &, const QString &))&D::ClassType::replaceInStrings, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("indexOf", (int (D::ClassType::*) (const QRegExp &, int) const)&D::ClassType::indexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", (int (D::ClassType::*) (const QRegExp &, int) const)&D::ClassType::lastIndexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("indexOf", (int (D::ClassType::*) (QRegExp &, int) const)&D::ClassType::indexOf)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", (int (D::ClassType::*) (QRegExp &, int) const)&D::ClassType::lastIndexOf)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("filter", (QStringList (D::ClassType::*) (const QRegularExpression &) const)&D::ClassType::filter, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("replaceInStrings", (QStringList & (D::ClassType::*) (const QRegularExpression &, const QString &))&D::ClassType::replaceInStrings, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("indexOf", (int (D::ClassType::*) (const QRegularExpression &, int) const)&D::ClassType::indexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", (int (D::ClassType::*) (const QRegularExpression &, int) const)&D::ClassType::lastIndexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("indexOf", (int (D::ClassType::*) (const QString &, int) const)&D::ClassType::indexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", (int (D::ClassType::*) (const QString &, int) const)&D::ClassType::lastIndexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _operator<QStringList (*)(const cpgf::GMetaSelf &, const QStringList &)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAdd", (QStringList (*) (const QStringList *, const QStringList &))&opErAToRWrapper_QStringList__opAdd, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QStringList & (*)(cpgf::GMetaSelf, const QString &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QStringList & (*) (QStringList *, const QString &))&opErAToRWrapper_QStringList__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QStringList & (*)(cpgf::GMetaSelf, const QStringList &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QStringList & (*) (QStringList *, const QStringList &))&opErAToRWrapper_QStringList__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
