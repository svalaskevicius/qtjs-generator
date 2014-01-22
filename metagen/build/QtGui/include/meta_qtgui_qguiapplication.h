// Auto generated file, don't modify.

#ifndef __META_QTGUI_QGUIAPPLICATION_H
#define __META_QTGUI_QGUIAPPLICATION_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


template <typename D>
void buildMetaClass_Global_qguiapplication(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtGui_15")
        ._element("qApp", qApp)
        ._element("qGuiApp", qGuiApp)
    ;
}


template <typename D>
void buildMetaClass_QGuiApplication(D _d)
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
    _d.CPGF_MD_TEMPLATE _method("devicePixelRatio", &D::ClassType::devicePixelRatio);
    _d.CPGF_MD_TEMPLATE _method("notify", &D::ClassType::notify);
    _d.CPGF_MD_TEMPLATE _method("isSessionRestored", &D::ClassType::isSessionRestored);
    _d.CPGF_MD_TEMPLATE _method("sessionId", &D::ClassType::sessionId);
    _d.CPGF_MD_TEMPLATE _method("sessionKey", &D::ClassType::sessionKey);
    _d.CPGF_MD_TEMPLATE _method("isSavingSession", &D::ClassType::isSavingSession);
    _d.CPGF_MD_TEMPLATE _method("fontDatabaseChanged", &D::ClassType::fontDatabaseChanged);
    _d.CPGF_MD_TEMPLATE _method("screenAdded", &D::ClassType::screenAdded);
    _d.CPGF_MD_TEMPLATE _method("lastWindowClosed", &D::ClassType::lastWindowClosed);
    _d.CPGF_MD_TEMPLATE _method("focusObjectChanged", &D::ClassType::focusObjectChanged);
    _d.CPGF_MD_TEMPLATE _method("focusWindowChanged", &D::ClassType::focusWindowChanged);
    _d.CPGF_MD_TEMPLATE _method("applicationStateChanged", &D::ClassType::applicationStateChanged);
    _d.CPGF_MD_TEMPLATE _method("commitDataRequest", &D::ClassType::commitDataRequest, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("saveStateRequest", &D::ClassType::saveStateRequest, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setApplicationDisplayName", &D::ClassType::setApplicationDisplayName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("applicationDisplayName", &D::ClassType::applicationDisplayName);
    _d.CPGF_MD_TEMPLATE _method("allWindows", &D::ClassType::allWindows);
    _d.CPGF_MD_TEMPLATE _method("topLevelWindows", &D::ClassType::topLevelWindows);
    _d.CPGF_MD_TEMPLATE _method("topLevelAt", &D::ClassType::topLevelAt);
    _d.CPGF_MD_TEMPLATE _method("platformName", &D::ClassType::platformName);
    _d.CPGF_MD_TEMPLATE _method("modalWindow", &D::ClassType::modalWindow);
    _d.CPGF_MD_TEMPLATE _method("focusWindow", &D::ClassType::focusWindow);
    _d.CPGF_MD_TEMPLATE _method("focusObject", &D::ClassType::focusObject);
    _d.CPGF_MD_TEMPLATE _method("primaryScreen", &D::ClassType::primaryScreen);
    _d.CPGF_MD_TEMPLATE _method("screens", &D::ClassType::screens);
    _d.CPGF_MD_TEMPLATE _method("overrideCursor", &D::ClassType::overrideCursor);
    _d.CPGF_MD_TEMPLATE _method("setOverrideCursor", &D::ClassType::setOverrideCursor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("changeOverrideCursor", &D::ClassType::changeOverrideCursor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("restoreOverrideCursor", &D::ClassType::restoreOverrideCursor);
    _d.CPGF_MD_TEMPLATE _method("font", &D::ClassType::font);
    _d.CPGF_MD_TEMPLATE _method("setFont", &D::ClassType::setFont, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("clipboard", &D::ClassType::clipboard);
    _d.CPGF_MD_TEMPLATE _method("palette", &D::ClassType::palette);
    _d.CPGF_MD_TEMPLATE _method("setPalette", &D::ClassType::setPalette, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("keyboardModifiers", &D::ClassType::keyboardModifiers);
    _d.CPGF_MD_TEMPLATE _method("queryKeyboardModifiers", &D::ClassType::queryKeyboardModifiers);
    _d.CPGF_MD_TEMPLATE _method("mouseButtons", &D::ClassType::mouseButtons);
    _d.CPGF_MD_TEMPLATE _method("setLayoutDirection", &D::ClassType::setLayoutDirection);
    _d.CPGF_MD_TEMPLATE _method("layoutDirection", &D::ClassType::layoutDirection);
    _d.CPGF_MD_TEMPLATE _method("isRightToLeft", &D::ClassType::isRightToLeft);
    _d.CPGF_MD_TEMPLATE _method("isLeftToRight", &D::ClassType::isLeftToRight);
    _d.CPGF_MD_TEMPLATE _method("styleHints", &D::ClassType::styleHints);
    _d.CPGF_MD_TEMPLATE _method("setDesktopSettingsAware", &D::ClassType::setDesktopSettingsAware);
    _d.CPGF_MD_TEMPLATE _method("desktopSettingsAware", &D::ClassType::desktopSettingsAware);
    _d.CPGF_MD_TEMPLATE _method("inputMethod", &D::ClassType::inputMethod);
    _d.CPGF_MD_TEMPLATE _method("setQuitOnLastWindowClosed", &D::ClassType::setQuitOnLastWindowClosed);
    _d.CPGF_MD_TEMPLATE _method("quitOnLastWindowClosed", &D::ClassType::quitOnLastWindowClosed);
    _d.CPGF_MD_TEMPLATE _method("applicationState", &D::ClassType::applicationState);
    _d.CPGF_MD_TEMPLATE _method("exec", &D::ClassType::exec);
    _d.CPGF_MD_TEMPLATE _method("sync", &D::ClassType::sync);
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
