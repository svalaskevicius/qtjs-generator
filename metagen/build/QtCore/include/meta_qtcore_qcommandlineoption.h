// Auto generated file, don't modify.

#ifndef __META_QTCORE_QCOMMANDLINEOPTION_H
#define __META_QTCORE_QCOMMANDLINEOPTION_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


inline QCommandLineOption & opErAToRWrapper_QCommandLineOption__opAssign(QCommandLineOption * self, const QCommandLineOption & other) {
    return (*self) = other;
}


template <typename D>
void buildMetaClass_QCommandLineOption(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, const QString &, const QString &, const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3> >())
        ._default(copyVariantFromCopyable(QString()))
        ._default(copyVariantFromCopyable(QString()))
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStringList &, const QString &, const QString &, const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3> >())
        ._default(copyVariantFromCopyable(QString()))
        ._default(copyVariantFromCopyable(QString()))
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QCommandLineOption &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("names", &D::ClassType::names);
    _d.CPGF_MD_TEMPLATE _method("setValueName", &D::ClassType::setValueName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("valueName", &D::ClassType::valueName);
    _d.CPGF_MD_TEMPLATE _method("setDescription", &D::ClassType::setDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("description", &D::ClassType::description);
    _d.CPGF_MD_TEMPLATE _method("setDefaultValue", &D::ClassType::setDefaultValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setDefaultValues", &D::ClassType::setDefaultValues, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("defaultValues", &D::ClassType::defaultValues);
    _d.CPGF_MD_TEMPLATE _operator<QCommandLineOption & (*)(cpgf::GMetaSelf, const QCommandLineOption &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QCommandLineOption & (*) (QCommandLineOption *, const QCommandLineOption &))&opErAToRWrapper_QCommandLineOption__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
