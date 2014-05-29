// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QLOGGING_H
#define CPGF_META_QTCORE_QLOGGING_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qlogging(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qt_message_output", (void (*) (QtMsgType, const QMessageLogContext &, const QString &))&qt_message_output, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("qInstallMessageHandler", (QtMessageHandler (*) (QtMessageHandler))&qInstallMessageHandler);
    _d.CPGF_MD_TEMPLATE _method("qSetMessagePattern", (void (*) (const QString &))&qSetMessagePattern, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _enum<QtMsgType>("QtMsgType")
        ._element("QtDebugMsg", QtDebugMsg)
        ._element("QtWarningMsg", QtWarningMsg)
        ._element("QtCriticalMsg", QtCriticalMsg)
        ._element("QtFatalMsg", QtFatalMsg)
        ._element("QtSystemMsg", QtSystemMsg)
    ;
}


template <typename D>
void buildMetaClass_QMessageLogger(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const char *, int, const char *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const char *, int, const char *, const char *)>();
    _d.CPGF_MD_TEMPLATE _method("debug", (QDebug (D::ClassType::*) () const)&D::ClassType::debug);
    _d.CPGF_MD_TEMPLATE _method("debug", (QDebug (D::ClassType::*) (const QLoggingCategory &) const)&D::ClassType::debug);
    _d.CPGF_MD_TEMPLATE _method("debug", (QDebug (D::ClassType::*) (QMessageLogger::CategoryFunction) const)&D::ClassType::debug);
    _d.CPGF_MD_TEMPLATE _method("warning", (QDebug (D::ClassType::*) () const)&D::ClassType::warning);
    _d.CPGF_MD_TEMPLATE _method("warning", (QDebug (D::ClassType::*) (const QLoggingCategory &) const)&D::ClassType::warning);
    _d.CPGF_MD_TEMPLATE _method("warning", (QDebug (D::ClassType::*) (QMessageLogger::CategoryFunction) const)&D::ClassType::warning);
    _d.CPGF_MD_TEMPLATE _method("critical", (QDebug (D::ClassType::*) () const)&D::ClassType::critical);
    _d.CPGF_MD_TEMPLATE _method("critical", (QDebug (D::ClassType::*) (const QLoggingCategory &) const)&D::ClassType::critical);
    _d.CPGF_MD_TEMPLATE _method("critical", (QDebug (D::ClassType::*) (QMessageLogger::CategoryFunction) const)&D::ClassType::critical);
    _d.CPGF_MD_TEMPLATE _method("noDebug", (QNoDebug (D::ClassType::*) () const)&D::ClassType::noDebug);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
