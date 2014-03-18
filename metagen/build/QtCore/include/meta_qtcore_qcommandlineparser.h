// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QCOMMANDLINEPARSER_H
#define CPGF_META_QTCORE_QCOMMANDLINEPARSER_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QCommandLineParser(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("setSingleDashWordOptionMode", &D::ClassType::setSingleDashWordOptionMode);
    _d.CPGF_MD_TEMPLATE _method("addOption", &D::ClassType::addOption, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("addVersionOption", &D::ClassType::addVersionOption);
    _d.CPGF_MD_TEMPLATE _method("addHelpOption", &D::ClassType::addHelpOption);
    _d.CPGF_MD_TEMPLATE _method("setApplicationDescription", &D::ClassType::setApplicationDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("applicationDescription", &D::ClassType::applicationDescription);
    _d.CPGF_MD_TEMPLATE _method("addPositionalArgument", &D::ClassType::addPositionalArgument, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _method("clearPositionalArguments", &D::ClassType::clearPositionalArguments);
    _d.CPGF_MD_TEMPLATE _method("process", (void (D::ClassType::*) (const QStringList &))&D::ClassType::process, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("process", (void (D::ClassType::*) (const QCoreApplication &))&D::ClassType::process);
    _d.CPGF_MD_TEMPLATE _method("parse", &D::ClassType::parse, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("errorText", &D::ClassType::errorText);
    _d.CPGF_MD_TEMPLATE _method("isSet", (bool (D::ClassType::*) (const QString &) const)&D::ClassType::isSet, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("value", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::value, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("values", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::values, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isSet", (bool (D::ClassType::*) (const QCommandLineOption &) const)&D::ClassType::isSet, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("value", (QString (D::ClassType::*) (const QCommandLineOption &) const)&D::ClassType::value, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("values", (QStringList (D::ClassType::*) (const QCommandLineOption &) const)&D::ClassType::values, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("positionalArguments", &D::ClassType::positionalArguments);
    _d.CPGF_MD_TEMPLATE _method("optionNames", &D::ClassType::optionNames);
    _d.CPGF_MD_TEMPLATE _method("unknownOptionNames", &D::ClassType::unknownOptionNames);
    _d.CPGF_MD_TEMPLATE _method("showHelp", &D::ClassType::showHelp)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("helpText", &D::ClassType::helpText);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SingleDashWordOptionMode>("SingleDashWordOptionMode")
        ._element("ParseAsCompactedShortOptions", D::ClassType::ParseAsCompactedShortOptions)
        ._element("ParseAsLongOptions", D::ClassType::ParseAsLongOptions)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
