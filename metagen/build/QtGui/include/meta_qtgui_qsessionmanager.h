// Auto generated file, don't modify.

#ifndef __META_QTGUI_QSESSIONMANAGER_H
#define __META_QTGUI_QSESSIONMANAGER_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


template <typename D>
void buildMetaClass_QSessionManager(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("sessionId", &D::ClassType::sessionId);
    _d.CPGF_MD_TEMPLATE _method("sessionKey", &D::ClassType::sessionKey);
    _d.CPGF_MD_TEMPLATE _method("allowsInteraction", &D::ClassType::allowsInteraction);
    _d.CPGF_MD_TEMPLATE _method("allowsErrorInteraction", &D::ClassType::allowsErrorInteraction);
    _d.CPGF_MD_TEMPLATE _method("release", &D::ClassType::release);
    _d.CPGF_MD_TEMPLATE _method("cancel", &D::ClassType::cancel);
    _d.CPGF_MD_TEMPLATE _method("setRestartHint", &D::ClassType::setRestartHint);
    _d.CPGF_MD_TEMPLATE _method("restartHint", &D::ClassType::restartHint);
    _d.CPGF_MD_TEMPLATE _method("setRestartCommand", &D::ClassType::setRestartCommand, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("restartCommand", &D::ClassType::restartCommand);
    _d.CPGF_MD_TEMPLATE _method("setDiscardCommand", &D::ClassType::setDiscardCommand, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("discardCommand", &D::ClassType::discardCommand);
    _d.CPGF_MD_TEMPLATE _method("setManagerProperty", (void (D::ClassType::*) (const QString &, const QString &))&D::ClassType::setManagerProperty, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("setManagerProperty", (void (D::ClassType::*) (const QString &, const QStringList &))&D::ClassType::setManagerProperty, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("isPhase2", &D::ClassType::isPhase2);
    _d.CPGF_MD_TEMPLATE _method("requestPhase2", &D::ClassType::requestPhase2);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::RestartHint>("RestartHint")
        ._element("RestartIfRunning", D::ClassType::RestartIfRunning)
        ._element("RestartAnyway", D::ClassType::RestartAnyway)
        ._element("RestartImmediately", D::ClassType::RestartImmediately)
        ._element("RestartNever", D::ClassType::RestartNever)
    ;
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
