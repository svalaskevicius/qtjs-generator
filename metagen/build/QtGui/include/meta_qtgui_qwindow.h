// Auto generated file, don't modify.

#ifndef __META_QTGUI_QWINDOW_H
#define __META_QTGUI_QWINDOW_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


template <typename D>
void buildMetaClass_QWindow(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QScreen *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWindow *)>();
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("setSurfaceType", &D::ClassType::setSurfaceType);
    _d.CPGF_MD_TEMPLATE _method("surfaceType", &D::ClassType::surfaceType);
    _d.CPGF_MD_TEMPLATE _method("isVisible", &D::ClassType::isVisible);
    _d.CPGF_MD_TEMPLATE _method("visibility", &D::ClassType::visibility);
    _d.CPGF_MD_TEMPLATE _method("setVisibility", &D::ClassType::setVisibility);
    _d.CPGF_MD_TEMPLATE _method("create", &D::ClassType::create);
    _d.CPGF_MD_TEMPLATE _method("winId", &D::ClassType::winId);
    _d.CPGF_MD_TEMPLATE _method("parent", &D::ClassType::parent);
    _d.CPGF_MD_TEMPLATE _method("setParent", &D::ClassType::setParent);
    _d.CPGF_MD_TEMPLATE _method("isTopLevel", &D::ClassType::isTopLevel);
    _d.CPGF_MD_TEMPLATE _method("isModal", &D::ClassType::isModal);
    _d.CPGF_MD_TEMPLATE _method("modality", &D::ClassType::modality);
    _d.CPGF_MD_TEMPLATE _method("setModality", &D::ClassType::setModality);
    _d.CPGF_MD_TEMPLATE _method("setFormat", &D::ClassType::setFormat, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("format", &D::ClassType::format);
    _d.CPGF_MD_TEMPLATE _method("requestedFormat", &D::ClassType::requestedFormat);
    _d.CPGF_MD_TEMPLATE _method("setFlags", &D::ClassType::setFlags);
    _d.CPGF_MD_TEMPLATE _method("flags", &D::ClassType::flags);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("title", &D::ClassType::title);
    _d.CPGF_MD_TEMPLATE _method("setOpacity", &D::ClassType::setOpacity);
    _d.CPGF_MD_TEMPLATE _method("opacity", &D::ClassType::opacity);
    _d.CPGF_MD_TEMPLATE _method("setMask", &D::ClassType::setMask, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mask", &D::ClassType::mask);
    _d.CPGF_MD_TEMPLATE _method("isActive", &D::ClassType::isActive);
    _d.CPGF_MD_TEMPLATE _method("reportContentOrientationChange", &D::ClassType::reportContentOrientationChange);
    _d.CPGF_MD_TEMPLATE _method("contentOrientation", &D::ClassType::contentOrientation);
    _d.CPGF_MD_TEMPLATE _method("devicePixelRatio", &D::ClassType::devicePixelRatio);
    _d.CPGF_MD_TEMPLATE _method("windowState", &D::ClassType::windowState);
    _d.CPGF_MD_TEMPLATE _method("setWindowState", &D::ClassType::setWindowState);
    _d.CPGF_MD_TEMPLATE _method("setTransientParent", &D::ClassType::setTransientParent);
    _d.CPGF_MD_TEMPLATE _method("transientParent", &D::ClassType::transientParent);
    _d.CPGF_MD_TEMPLATE _method("isAncestorOf", &D::ClassType::isAncestorOf)
        ._default(copyVariantFromCopyable(QWindow::IncludeTransients))
    ;
    _d.CPGF_MD_TEMPLATE _method("isExposed", &D::ClassType::isExposed);
    _d.CPGF_MD_TEMPLATE _method("minimumWidth", &D::ClassType::minimumWidth);
    _d.CPGF_MD_TEMPLATE _method("minimumHeight", &D::ClassType::minimumHeight);
    _d.CPGF_MD_TEMPLATE _method("maximumWidth", &D::ClassType::maximumWidth);
    _d.CPGF_MD_TEMPLATE _method("maximumHeight", &D::ClassType::maximumHeight);
    _d.CPGF_MD_TEMPLATE _method("minimumSize", &D::ClassType::minimumSize);
    _d.CPGF_MD_TEMPLATE _method("maximumSize", &D::ClassType::maximumSize);
    _d.CPGF_MD_TEMPLATE _method("baseSize", &D::ClassType::baseSize);
    _d.CPGF_MD_TEMPLATE _method("sizeIncrement", &D::ClassType::sizeIncrement);
    _d.CPGF_MD_TEMPLATE _method("setMinimumSize", &D::ClassType::setMinimumSize);
    _d.CPGF_MD_TEMPLATE _method("setMaximumSize", &D::ClassType::setMaximumSize);
    _d.CPGF_MD_TEMPLATE _method("setBaseSize", &D::ClassType::setBaseSize);
    _d.CPGF_MD_TEMPLATE _method("setSizeIncrement", &D::ClassType::setSizeIncrement);
    _d.CPGF_MD_TEMPLATE _method("setGeometry", (void (D::ClassType::*) (int, int, int, int))&D::ClassType::setGeometry);
    _d.CPGF_MD_TEMPLATE _method("setGeometry", (void (D::ClassType::*) (const QRect &))&D::ClassType::setGeometry);
    _d.CPGF_MD_TEMPLATE _method("geometry", &D::ClassType::geometry);
    _d.CPGF_MD_TEMPLATE _method("frameMargins", &D::ClassType::frameMargins);
    _d.CPGF_MD_TEMPLATE _method("frameGeometry", &D::ClassType::frameGeometry);
    _d.CPGF_MD_TEMPLATE _method("framePosition", &D::ClassType::framePosition);
    _d.CPGF_MD_TEMPLATE _method("setFramePosition", &D::ClassType::setFramePosition);
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("height", &D::ClassType::height);
    _d.CPGF_MD_TEMPLATE _method("x", &D::ClassType::x);
    _d.CPGF_MD_TEMPLATE _method("y", &D::ClassType::y);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("position", &D::ClassType::position);
    _d.CPGF_MD_TEMPLATE _method("setPosition", (void (D::ClassType::*) (const QPoint &))&D::ClassType::setPosition);
    _d.CPGF_MD_TEMPLATE _method("setPosition", (void (D::ClassType::*) (int, int))&D::ClassType::setPosition);
    _d.CPGF_MD_TEMPLATE _method("resize", (void (D::ClassType::*) (const QSize &))&D::ClassType::resize);
    _d.CPGF_MD_TEMPLATE _method("resize", (void (D::ClassType::*) (int, int))&D::ClassType::resize);
    _d.CPGF_MD_TEMPLATE _method("setFilePath", &D::ClassType::setFilePath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("filePath", &D::ClassType::filePath);
    _d.CPGF_MD_TEMPLATE _method("setIcon", &D::ClassType::setIcon, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("icon", &D::ClassType::icon);
    _d.CPGF_MD_TEMPLATE _method("destroy", &D::ClassType::destroy);
    _d.CPGF_MD_TEMPLATE _method("setKeyboardGrabEnabled", &D::ClassType::setKeyboardGrabEnabled);
    _d.CPGF_MD_TEMPLATE _method("setMouseGrabEnabled", &D::ClassType::setMouseGrabEnabled);
    _d.CPGF_MD_TEMPLATE _method("screen", &D::ClassType::screen);
    _d.CPGF_MD_TEMPLATE _method("setScreen", &D::ClassType::setScreen);
    _d.CPGF_MD_TEMPLATE _method("accessibleRoot", &D::ClassType::accessibleRoot);
    _d.CPGF_MD_TEMPLATE _method("focusObject", &D::ClassType::focusObject);
    _d.CPGF_MD_TEMPLATE _method("mapToGlobal", &D::ClassType::mapToGlobal);
    _d.CPGF_MD_TEMPLATE _method("mapFromGlobal", &D::ClassType::mapFromGlobal);
    _d.CPGF_MD_TEMPLATE _method("cursor", &D::ClassType::cursor);
    _d.CPGF_MD_TEMPLATE _method("setCursor", &D::ClassType::setCursor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("unsetCursor", &D::ClassType::unsetCursor);
    _d.CPGF_MD_TEMPLATE _method("requestActivate", &D::ClassType::requestActivate);
    _d.CPGF_MD_TEMPLATE _method("setVisible", &D::ClassType::setVisible);
    _d.CPGF_MD_TEMPLATE _method("show", &D::ClassType::show);
    _d.CPGF_MD_TEMPLATE _method("hide", &D::ClassType::hide);
    _d.CPGF_MD_TEMPLATE _method("showMinimized", &D::ClassType::showMinimized);
    _d.CPGF_MD_TEMPLATE _method("showMaximized", &D::ClassType::showMaximized);
    _d.CPGF_MD_TEMPLATE _method("showFullScreen", &D::ClassType::showFullScreen);
    _d.CPGF_MD_TEMPLATE _method("showNormal", &D::ClassType::showNormal);
    _d.CPGF_MD_TEMPLATE _method("close", &D::ClassType::close);
    _d.CPGF_MD_TEMPLATE _method("raise", &D::ClassType::raise);
    _d.CPGF_MD_TEMPLATE _method("lower", &D::ClassType::lower);
    _d.CPGF_MD_TEMPLATE _method("setTitle", &D::ClassType::setTitle, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setX", &D::ClassType::setX);
    _d.CPGF_MD_TEMPLATE _method("setY", &D::ClassType::setY);
    _d.CPGF_MD_TEMPLATE _method("setWidth", &D::ClassType::setWidth);
    _d.CPGF_MD_TEMPLATE _method("setHeight", &D::ClassType::setHeight);
    _d.CPGF_MD_TEMPLATE _method("setMinimumWidth", &D::ClassType::setMinimumWidth);
    _d.CPGF_MD_TEMPLATE _method("setMinimumHeight", &D::ClassType::setMinimumHeight);
    _d.CPGF_MD_TEMPLATE _method("setMaximumWidth", &D::ClassType::setMaximumWidth);
    _d.CPGF_MD_TEMPLATE _method("setMaximumHeight", &D::ClassType::setMaximumHeight);
    _d.CPGF_MD_TEMPLATE _method("alert", &D::ClassType::alert);
    _d.CPGF_MD_TEMPLATE _method("screenChanged", &D::ClassType::screenChanged);
    _d.CPGF_MD_TEMPLATE _method("modalityChanged", &D::ClassType::modalityChanged);
    _d.CPGF_MD_TEMPLATE _method("windowStateChanged", &D::ClassType::windowStateChanged);
    _d.CPGF_MD_TEMPLATE _method("xChanged", &D::ClassType::xChanged);
    _d.CPGF_MD_TEMPLATE _method("yChanged", &D::ClassType::yChanged);
    _d.CPGF_MD_TEMPLATE _method("widthChanged", &D::ClassType::widthChanged);
    _d.CPGF_MD_TEMPLATE _method("heightChanged", &D::ClassType::heightChanged);
    _d.CPGF_MD_TEMPLATE _method("minimumWidthChanged", &D::ClassType::minimumWidthChanged);
    _d.CPGF_MD_TEMPLATE _method("minimumHeightChanged", &D::ClassType::minimumHeightChanged);
    _d.CPGF_MD_TEMPLATE _method("maximumWidthChanged", &D::ClassType::maximumWidthChanged);
    _d.CPGF_MD_TEMPLATE _method("maximumHeightChanged", &D::ClassType::maximumHeightChanged);
    _d.CPGF_MD_TEMPLATE _method("visibleChanged", &D::ClassType::visibleChanged);
    _d.CPGF_MD_TEMPLATE _method("visibilityChanged", &D::ClassType::visibilityChanged);
    _d.CPGF_MD_TEMPLATE _method("activeChanged", &D::ClassType::activeChanged);
    _d.CPGF_MD_TEMPLATE _method("contentOrientationChanged", &D::ClassType::contentOrientationChanged);
    _d.CPGF_MD_TEMPLATE _method("focusObjectChanged", &D::ClassType::focusObjectChanged);
    _d.CPGF_MD_TEMPLATE _method("opacityChanged", &D::ClassType::opacityChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromWinId", &D::ClassType::fromWinId);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Visibility>("Visibility")
        ._element("Hidden", D::ClassType::Hidden)
        ._element("AutomaticVisibility", D::ClassType::AutomaticVisibility)
        ._element("Windowed", D::ClassType::Windowed)
        ._element("Minimized", D::ClassType::Minimized)
        ._element("Maximized", D::ClassType::Maximized)
        ._element("FullScreen", D::ClassType::FullScreen)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::AncestorMode>("AncestorMode")
        ._element("ExcludeTransients", D::ClassType::ExcludeTransients)
        ._element("IncludeTransients", D::ClassType::IncludeTransients)
    ;
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
