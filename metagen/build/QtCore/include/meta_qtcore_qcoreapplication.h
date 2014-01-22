// Auto generated file, don't modify.

#ifndef __META_QTCORE_QCOREAPPLICATION_H
#define __META_QTCORE_QCOREAPPLICATION_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qcoreapplication(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qAddPreRoutine", (void (*) (QtStartUpFunction))&qAddPreRoutine);
    _d.CPGF_MD_TEMPLATE _method("qAddPostRoutine", (void (*) (QtCleanUpFunction))&qAddPostRoutine);
    _d.CPGF_MD_TEMPLATE _method("qRemovePostRoutine", (void (*) (QtCleanUpFunction))&qRemovePostRoutine);
    _d.CPGF_MD_TEMPLATE _method("qAppName", (QString (*) ())&qAppName);
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtCore_22")
        ._element("qApp", qApp)
    ;
}


template <typename D>
void buildMetaClass_QCoreApplication(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (int &, char **, int)>()
        ._default(copyVariantFromCopyable(QCoreApplication::ApplicationFlags))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("notify", &D::ClassType::notify);
    _d.CPGF_MD_TEMPLATE _method("installNativeEventFilter", &D::ClassType::installNativeEventFilter);
    _d.CPGF_MD_TEMPLATE _method("removeNativeEventFilter", &D::ClassType::removeNativeEventFilter);
    _d.CPGF_MD_TEMPLATE _method("aboutToQuit", &D::ClassType::aboutToQuit);
    _d.CPGF_MD_TEMPLATE _method("organizationNameChanged", &D::ClassType::organizationNameChanged);
    _d.CPGF_MD_TEMPLATE _method("organizationDomainChanged", &D::ClassType::organizationDomainChanged);
    _d.CPGF_MD_TEMPLATE _method("applicationNameChanged", &D::ClassType::applicationNameChanged);
    _d.CPGF_MD_TEMPLATE _method("applicationVersionChanged", &D::ClassType::applicationVersionChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("arguments", &D::ClassType::arguments);
    _d.CPGF_MD_TEMPLATE _method("setAttribute", &D::ClassType::setAttribute)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("testAttribute", &D::ClassType::testAttribute);
    _d.CPGF_MD_TEMPLATE _method("setOrganizationDomain", &D::ClassType::setOrganizationDomain, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("organizationDomain", &D::ClassType::organizationDomain);
    _d.CPGF_MD_TEMPLATE _method("setOrganizationName", &D::ClassType::setOrganizationName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("organizationName", &D::ClassType::organizationName);
    _d.CPGF_MD_TEMPLATE _method("setApplicationName", &D::ClassType::setApplicationName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("applicationName", &D::ClassType::applicationName);
    _d.CPGF_MD_TEMPLATE _method("setApplicationVersion", &D::ClassType::setApplicationVersion, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("applicationVersion", &D::ClassType::applicationVersion);
    _d.CPGF_MD_TEMPLATE _method("instance", &D::ClassType::instance);
    _d.CPGF_MD_TEMPLATE _method("exec", &D::ClassType::exec);
    _d.CPGF_MD_TEMPLATE _method("processEvents", (void (*) (QEventLoop::ProcessEventsFlags))&D::ClassType::processEvents)
        ._default(copyVariantFromCopyable(QEventLoop::AllEvents))
    ;
    _d.CPGF_MD_TEMPLATE _method("processEvents", (void (*) (QEventLoop::ProcessEventsFlags, int))&D::ClassType::processEvents);
    _d.CPGF_MD_TEMPLATE _method("exit", &D::ClassType::exit)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("sendEvent", &D::ClassType::sendEvent);
    _d.CPGF_MD_TEMPLATE _method("postEvent", &D::ClassType::postEvent)
        ._default(copyVariantFromCopyable(Qt::NormalEventPriority))
    ;
    _d.CPGF_MD_TEMPLATE _method("sendPostedEvents", &D::ClassType::sendPostedEvents)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("removePostedEvents", &D::ClassType::removePostedEvents)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("hasPendingEvents", &D::ClassType::hasPendingEvents);
    _d.CPGF_MD_TEMPLATE _method("eventDispatcher", &D::ClassType::eventDispatcher);
    _d.CPGF_MD_TEMPLATE _method("setEventDispatcher", &D::ClassType::setEventDispatcher);
    _d.CPGF_MD_TEMPLATE _method("startingUp", &D::ClassType::startingUp);
    _d.CPGF_MD_TEMPLATE _method("closingDown", &D::ClassType::closingDown);
    _d.CPGF_MD_TEMPLATE _method("applicationDirPath", &D::ClassType::applicationDirPath);
    _d.CPGF_MD_TEMPLATE _method("applicationFilePath", &D::ClassType::applicationFilePath);
    _d.CPGF_MD_TEMPLATE _method("applicationPid", &D::ClassType::applicationPid);
    _d.CPGF_MD_TEMPLATE _method("setLibraryPaths", &D::ClassType::setLibraryPaths, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("libraryPaths", &D::ClassType::libraryPaths);
    _d.CPGF_MD_TEMPLATE _method("addLibraryPath", &D::ClassType::addLibraryPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("removeLibraryPath", &D::ClassType::removeLibraryPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("installTranslator", &D::ClassType::installTranslator);
    _d.CPGF_MD_TEMPLATE _method("removeTranslator", &D::ClassType::removeTranslator);
    _d.CPGF_MD_TEMPLATE _method("translate", &D::ClassType::translate)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("flush", &D::ClassType::flush);
    _d.CPGF_MD_TEMPLATE _method("isQuitLockEnabled", &D::ClassType::isQuitLockEnabled);
    _d.CPGF_MD_TEMPLATE _method("setQuitLockEnabled", &D::ClassType::setQuitLockEnabled);
    _d.CPGF_MD_TEMPLATE _method("quit", &D::ClassType::quit);
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtCore_1")
        ._element("ApplicationFlags", D::ClassType::ApplicationFlags)
    ;
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
