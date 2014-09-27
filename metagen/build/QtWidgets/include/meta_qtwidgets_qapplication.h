// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QAPPLICATION_H
#define CPGF_META_QTWIDGETS_QAPPLICATION_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qapplication(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtWidgets_6")
        ._element("qApp", qApp)
    ;
}


template <typename D>
void buildMetaClass_QApplication(D _d)
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
    _d.CPGF_MD_TEMPLATE _method("focusChanged", &D::ClassType::focusChanged);
    _d.CPGF_MD_TEMPLATE _method("styleSheet", &D::ClassType::styleSheet);
    _d.CPGF_MD_TEMPLATE _method("setStyleSheet", &D::ClassType::setStyleSheet, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setAutoSipEnabled", &D::ClassType::setAutoSipEnabled);
    _d.CPGF_MD_TEMPLATE _method("autoSipEnabled", &D::ClassType::autoSipEnabled);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("style", &D::ClassType::style);
    _d.CPGF_MD_TEMPLATE _method("setStyle", (void (*) (QStyle *))&D::ClassType::setStyle);
    _d.CPGF_MD_TEMPLATE _method("setStyle", (QStyle * (*) (const QString &))&D::ClassType::setStyle, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("colorSpec", &D::ClassType::colorSpec);
    _d.CPGF_MD_TEMPLATE _method("setColorSpec", &D::ClassType::setColorSpec);
    _d.CPGF_MD_TEMPLATE _method("palette", (QPalette (*) ())&D::ClassType::palette);
    _d.CPGF_MD_TEMPLATE _method("palette", (QPalette (*) (const QWidget *))&D::ClassType::palette);
    _d.CPGF_MD_TEMPLATE _method("palette", (QPalette (*) (const char *))&D::ClassType::palette);
    _d.CPGF_MD_TEMPLATE _method("setPalette", &D::ClassType::setPalette, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("font", (QFont (*) ())&D::ClassType::font);
    _d.CPGF_MD_TEMPLATE _method("font", (QFont (*) (const QWidget *))&D::ClassType::font);
    _d.CPGF_MD_TEMPLATE _method("font", (QFont (*) (const char *))&D::ClassType::font);
    _d.CPGF_MD_TEMPLATE _method("setFont", &D::ClassType::setFont, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("fontMetrics", &D::ClassType::fontMetrics);
    _d.CPGF_MD_TEMPLATE _method("setWindowIcon", &D::ClassType::setWindowIcon, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("windowIcon", &D::ClassType::windowIcon);
    _d.CPGF_MD_TEMPLATE _method("allWidgets", &D::ClassType::allWidgets);
    _d.CPGF_MD_TEMPLATE _method("topLevelWidgets", &D::ClassType::topLevelWidgets);
    _d.CPGF_MD_TEMPLATE _method("desktop", &D::ClassType::desktop);
    _d.CPGF_MD_TEMPLATE _method("activePopupWidget", &D::ClassType::activePopupWidget);
    _d.CPGF_MD_TEMPLATE _method("activeModalWidget", &D::ClassType::activeModalWidget);
    _d.CPGF_MD_TEMPLATE _method("focusWidget", &D::ClassType::focusWidget);
    _d.CPGF_MD_TEMPLATE _method("activeWindow", &D::ClassType::activeWindow);
    _d.CPGF_MD_TEMPLATE _method("setActiveWindow", &D::ClassType::setActiveWindow);
    _d.CPGF_MD_TEMPLATE _method("widgetAt", (QWidget * (*) (const QPoint &))&D::ClassType::widgetAt);
    _d.CPGF_MD_TEMPLATE _method("widgetAt", (QWidget * (*) (int, int))&D::ClassType::widgetAt);
    _d.CPGF_MD_TEMPLATE _method("topLevelAt", (QWidget * (*) (const QPoint &))&D::ClassType::topLevelAt);
    _d.CPGF_MD_TEMPLATE _method("topLevelAt", (QWidget * (*) (int, int))&D::ClassType::topLevelAt);
    _d.CPGF_MD_TEMPLATE _method("beep", &D::ClassType::beep);
    _d.CPGF_MD_TEMPLATE _method("alert", &D::ClassType::alert)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setCursorFlashTime", &D::ClassType::setCursorFlashTime);
    _d.CPGF_MD_TEMPLATE _method("cursorFlashTime", &D::ClassType::cursorFlashTime);
    _d.CPGF_MD_TEMPLATE _method("setDoubleClickInterval", &D::ClassType::setDoubleClickInterval);
    _d.CPGF_MD_TEMPLATE _method("doubleClickInterval", &D::ClassType::doubleClickInterval);
    _d.CPGF_MD_TEMPLATE _method("setKeyboardInputInterval", &D::ClassType::setKeyboardInputInterval);
    _d.CPGF_MD_TEMPLATE _method("keyboardInputInterval", &D::ClassType::keyboardInputInterval);
    _d.CPGF_MD_TEMPLATE _method("setWheelScrollLines", &D::ClassType::setWheelScrollLines);
    _d.CPGF_MD_TEMPLATE _method("wheelScrollLines", &D::ClassType::wheelScrollLines);
    _d.CPGF_MD_TEMPLATE _method("setGlobalStrut", &D::ClassType::setGlobalStrut);
    _d.CPGF_MD_TEMPLATE _method("globalStrut", &D::ClassType::globalStrut);
    _d.CPGF_MD_TEMPLATE _method("setStartDragTime", &D::ClassType::setStartDragTime);
    _d.CPGF_MD_TEMPLATE _method("startDragTime", &D::ClassType::startDragTime);
    _d.CPGF_MD_TEMPLATE _method("setStartDragDistance", &D::ClassType::setStartDragDistance);
    _d.CPGF_MD_TEMPLATE _method("startDragDistance", &D::ClassType::startDragDistance);
    _d.CPGF_MD_TEMPLATE _method("isEffectEnabled", &D::ClassType::isEffectEnabled);
    _d.CPGF_MD_TEMPLATE _method("setEffectEnabled", &D::ClassType::setEffectEnabled)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("exec", &D::ClassType::exec);
    _d.CPGF_MD_TEMPLATE _method("closeAllWindows", &D::ClassType::closeAllWindows);
    _d.CPGF_MD_TEMPLATE _method("aboutQt", &D::ClassType::aboutQt);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ColorSpec>("ColorSpec")
        ._element("NormalColor", D::ClassType::NormalColor)
        ._element("CustomColor", D::ClassType::CustomColor)
        ._element("ManyColor", D::ClassType::ManyColor)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
