// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QWIDGET_H
#define CPGF_META_QTWIDGETS_QWIDGET_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qwidget(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtWidgets_9")
        ._element("QWIDGETSIZE_MAX", QWIDGETSIZE_MAX)
    ;
}


template <typename D>
void buildMetaClass_QWidget(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *, Qt::WindowFlags)>()
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("devType", &D::ClassType::devType);
    _d.CPGF_MD_TEMPLATE _method("winId", &D::ClassType::winId);
    _d.CPGF_MD_TEMPLATE _method("createWinId", &D::ClassType::createWinId);
    _d.CPGF_MD_TEMPLATE _method("internalWinId", &D::ClassType::internalWinId);
    _d.CPGF_MD_TEMPLATE _method("effectiveWinId", &D::ClassType::effectiveWinId);
    _d.CPGF_MD_TEMPLATE _method("style", &D::ClassType::style);
    _d.CPGF_MD_TEMPLATE _method("setStyle", &D::ClassType::setStyle);
    _d.CPGF_MD_TEMPLATE _method("isTopLevel", &D::ClassType::isTopLevel);
    _d.CPGF_MD_TEMPLATE _method("isWindow", &D::ClassType::isWindow);
    _d.CPGF_MD_TEMPLATE _method("isModal", &D::ClassType::isModal);
    _d.CPGF_MD_TEMPLATE _method("windowModality", &D::ClassType::windowModality);
    _d.CPGF_MD_TEMPLATE _method("setWindowModality", &D::ClassType::setWindowModality);
    _d.CPGF_MD_TEMPLATE _method("isEnabled", &D::ClassType::isEnabled);
    _d.CPGF_MD_TEMPLATE _method("isEnabledTo", &D::ClassType::isEnabledTo);
    _d.CPGF_MD_TEMPLATE _method("isEnabledToTLW", &D::ClassType::isEnabledToTLW);
    _d.CPGF_MD_TEMPLATE _method("setEnabled", &D::ClassType::setEnabled);
    _d.CPGF_MD_TEMPLATE _method("setDisabled", &D::ClassType::setDisabled);
    _d.CPGF_MD_TEMPLATE _method("setWindowModified", &D::ClassType::setWindowModified);
    _d.CPGF_MD_TEMPLATE _method("frameGeometry", &D::ClassType::frameGeometry);
    _d.CPGF_MD_TEMPLATE _method("geometry", &D::ClassType::geometry);
    _d.CPGF_MD_TEMPLATE _method("normalGeometry", &D::ClassType::normalGeometry);
    _d.CPGF_MD_TEMPLATE _method("x", &D::ClassType::x);
    _d.CPGF_MD_TEMPLATE _method("y", &D::ClassType::y);
    _d.CPGF_MD_TEMPLATE _method("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("frameSize", &D::ClassType::frameSize);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("height", &D::ClassType::height);
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("childrenRect", &D::ClassType::childrenRect);
    _d.CPGF_MD_TEMPLATE _method("childrenRegion", &D::ClassType::childrenRegion);
    _d.CPGF_MD_TEMPLATE _method("minimumSize", &D::ClassType::minimumSize);
    _d.CPGF_MD_TEMPLATE _method("maximumSize", &D::ClassType::maximumSize);
    _d.CPGF_MD_TEMPLATE _method("minimumWidth", &D::ClassType::minimumWidth);
    _d.CPGF_MD_TEMPLATE _method("minimumHeight", &D::ClassType::minimumHeight);
    _d.CPGF_MD_TEMPLATE _method("maximumWidth", &D::ClassType::maximumWidth);
    _d.CPGF_MD_TEMPLATE _method("maximumHeight", &D::ClassType::maximumHeight);
    _d.CPGF_MD_TEMPLATE _method("setMinimumSize", (void (D::ClassType::*) (const QSize &))&D::ClassType::setMinimumSize);
    _d.CPGF_MD_TEMPLATE _method("setMinimumSize", (void (D::ClassType::*) (int, int))&D::ClassType::setMinimumSize);
    _d.CPGF_MD_TEMPLATE _method("setMaximumSize", (void (D::ClassType::*) (const QSize &))&D::ClassType::setMaximumSize);
    _d.CPGF_MD_TEMPLATE _method("setMaximumSize", (void (D::ClassType::*) (int, int))&D::ClassType::setMaximumSize);
    _d.CPGF_MD_TEMPLATE _method("setMinimumWidth", &D::ClassType::setMinimumWidth);
    _d.CPGF_MD_TEMPLATE _method("setMinimumHeight", &D::ClassType::setMinimumHeight);
    _d.CPGF_MD_TEMPLATE _method("setMaximumWidth", &D::ClassType::setMaximumWidth);
    _d.CPGF_MD_TEMPLATE _method("setMaximumHeight", &D::ClassType::setMaximumHeight);
    _d.CPGF_MD_TEMPLATE _method("sizeIncrement", &D::ClassType::sizeIncrement);
    _d.CPGF_MD_TEMPLATE _method("setSizeIncrement", (void (D::ClassType::*) (const QSize &))&D::ClassType::setSizeIncrement);
    _d.CPGF_MD_TEMPLATE _method("setSizeIncrement", (void (D::ClassType::*) (int, int))&D::ClassType::setSizeIncrement);
    _d.CPGF_MD_TEMPLATE _method("baseSize", &D::ClassType::baseSize);
    _d.CPGF_MD_TEMPLATE _method("setBaseSize", (void (D::ClassType::*) (const QSize &))&D::ClassType::setBaseSize);
    _d.CPGF_MD_TEMPLATE _method("setBaseSize", (void (D::ClassType::*) (int, int))&D::ClassType::setBaseSize);
    _d.CPGF_MD_TEMPLATE _method("setFixedSize", (void (D::ClassType::*) (const QSize &))&D::ClassType::setFixedSize);
    _d.CPGF_MD_TEMPLATE _method("setFixedSize", (void (D::ClassType::*) (int, int))&D::ClassType::setFixedSize);
    _d.CPGF_MD_TEMPLATE _method("setFixedWidth", &D::ClassType::setFixedWidth);
    _d.CPGF_MD_TEMPLATE _method("setFixedHeight", &D::ClassType::setFixedHeight);
    _d.CPGF_MD_TEMPLATE _method("mapToGlobal", &D::ClassType::mapToGlobal);
    _d.CPGF_MD_TEMPLATE _method("mapFromGlobal", &D::ClassType::mapFromGlobal);
    _d.CPGF_MD_TEMPLATE _method("mapToParent", &D::ClassType::mapToParent);
    _d.CPGF_MD_TEMPLATE _method("mapFromParent", &D::ClassType::mapFromParent);
    _d.CPGF_MD_TEMPLATE _method("mapTo", &D::ClassType::mapTo);
    _d.CPGF_MD_TEMPLATE _method("mapFrom", &D::ClassType::mapFrom);
    _d.CPGF_MD_TEMPLATE _method("window", &D::ClassType::window);
    _d.CPGF_MD_TEMPLATE _method("nativeParentWidget", &D::ClassType::nativeParentWidget);
    _d.CPGF_MD_TEMPLATE _method("topLevelWidget", &D::ClassType::topLevelWidget);
    _d.CPGF_MD_TEMPLATE _method("palette", &D::ClassType::palette, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("setPalette", &D::ClassType::setPalette, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setBackgroundRole", &D::ClassType::setBackgroundRole);
    _d.CPGF_MD_TEMPLATE _method("backgroundRole", &D::ClassType::backgroundRole);
    _d.CPGF_MD_TEMPLATE _method("setForegroundRole", &D::ClassType::setForegroundRole);
    _d.CPGF_MD_TEMPLATE _method("foregroundRole", &D::ClassType::foregroundRole);
    _d.CPGF_MD_TEMPLATE _method("font", &D::ClassType::font, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("setFont", &D::ClassType::setFont, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fontMetrics", &D::ClassType::fontMetrics);
    _d.CPGF_MD_TEMPLATE _method("fontInfo", &D::ClassType::fontInfo);
    _d.CPGF_MD_TEMPLATE _method("cursor", &D::ClassType::cursor);
    _d.CPGF_MD_TEMPLATE _method("setCursor", &D::ClassType::setCursor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("unsetCursor", &D::ClassType::unsetCursor);
    _d.CPGF_MD_TEMPLATE _method("setMouseTracking", &D::ClassType::setMouseTracking);
    _d.CPGF_MD_TEMPLATE _method("hasMouseTracking", &D::ClassType::hasMouseTracking);
    _d.CPGF_MD_TEMPLATE _method("underMouse", &D::ClassType::underMouse);
    _d.CPGF_MD_TEMPLATE _method("setMask", (void (D::ClassType::*) (const QBitmap &))&D::ClassType::setMask);
    _d.CPGF_MD_TEMPLATE _method("setMask", (void (D::ClassType::*) (const QRegion &))&D::ClassType::setMask, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mask", &D::ClassType::mask);
    _d.CPGF_MD_TEMPLATE _method("clearMask", &D::ClassType::clearMask);
    _d.CPGF_MD_TEMPLATE _method("render", (void (D::ClassType::*) (QPaintDevice *, const QPoint &, const QRegion &, QWidget::RenderFlags))&D::ClassType::render, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QWidget::RenderFlags(QWidget::DrawWindowBackground|QWidget::DrawChildren)))
        ._default(copyVariantFromCopyable(QRegion()))
        ._default(copyVariantFromCopyable(QPoint()))
    ;
    _d.CPGF_MD_TEMPLATE _method("render", (void (D::ClassType::*) (QPainter *, const QPoint &, const QRegion &, QWidget::RenderFlags))&D::ClassType::render, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QWidget::RenderFlags(QWidget::DrawWindowBackground|QWidget::DrawChildren)))
        ._default(copyVariantFromCopyable(QRegion()))
        ._default(copyVariantFromCopyable(QPoint()))
    ;
    _d.CPGF_MD_TEMPLATE _method("grab", &D::ClassType::grab, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(QRect(QPoint(0, 0), QSize(-1,-1))))
    ;
    _d.CPGF_MD_TEMPLATE _method("graphicsEffect", &D::ClassType::graphicsEffect);
    _d.CPGF_MD_TEMPLATE _method("setGraphicsEffect", &D::ClassType::setGraphicsEffect);
    _d.CPGF_MD_TEMPLATE _method("grabGesture", &D::ClassType::grabGesture)
        ._default(copyVariantFromCopyable(Qt::GestureFlags()))
    ;
    _d.CPGF_MD_TEMPLATE _method("ungrabGesture", &D::ClassType::ungrabGesture);
    _d.CPGF_MD_TEMPLATE _method("setWindowTitle", &D::ClassType::setWindowTitle, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setStyleSheet", &D::ClassType::setStyleSheet, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("styleSheet", &D::ClassType::styleSheet);
    _d.CPGF_MD_TEMPLATE _method("windowTitle", &D::ClassType::windowTitle);
    _d.CPGF_MD_TEMPLATE _method("setWindowIcon", &D::ClassType::setWindowIcon, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("windowIcon", &D::ClassType::windowIcon);
    _d.CPGF_MD_TEMPLATE _method("setWindowIconText", &D::ClassType::setWindowIconText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("windowIconText", &D::ClassType::windowIconText);
    _d.CPGF_MD_TEMPLATE _method("setWindowRole", &D::ClassType::setWindowRole, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("windowRole", &D::ClassType::windowRole);
    _d.CPGF_MD_TEMPLATE _method("setWindowFilePath", &D::ClassType::setWindowFilePath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("windowFilePath", &D::ClassType::windowFilePath);
    _d.CPGF_MD_TEMPLATE _method("setWindowOpacity", &D::ClassType::setWindowOpacity);
    _d.CPGF_MD_TEMPLATE _method("windowOpacity", &D::ClassType::windowOpacity);
    _d.CPGF_MD_TEMPLATE _method("isWindowModified", &D::ClassType::isWindowModified);
    _d.CPGF_MD_TEMPLATE _method("setToolTip", &D::ClassType::setToolTip, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("toolTip", &D::ClassType::toolTip);
    _d.CPGF_MD_TEMPLATE _method("setToolTipDuration", &D::ClassType::setToolTipDuration);
    _d.CPGF_MD_TEMPLATE _method("toolTipDuration", &D::ClassType::toolTipDuration);
    _d.CPGF_MD_TEMPLATE _method("setStatusTip", &D::ClassType::setStatusTip, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("statusTip", &D::ClassType::statusTip);
    _d.CPGF_MD_TEMPLATE _method("setWhatsThis", &D::ClassType::setWhatsThis, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("whatsThis", &D::ClassType::whatsThis);
    _d.CPGF_MD_TEMPLATE _method("accessibleName", &D::ClassType::accessibleName);
    _d.CPGF_MD_TEMPLATE _method("setAccessibleName", &D::ClassType::setAccessibleName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("accessibleDescription", &D::ClassType::accessibleDescription);
    _d.CPGF_MD_TEMPLATE _method("setAccessibleDescription", &D::ClassType::setAccessibleDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setLayoutDirection", &D::ClassType::setLayoutDirection);
    _d.CPGF_MD_TEMPLATE _method("layoutDirection", &D::ClassType::layoutDirection);
    _d.CPGF_MD_TEMPLATE _method("unsetLayoutDirection", &D::ClassType::unsetLayoutDirection);
    _d.CPGF_MD_TEMPLATE _method("setLocale", &D::ClassType::setLocale, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("locale", &D::ClassType::locale);
    _d.CPGF_MD_TEMPLATE _method("unsetLocale", &D::ClassType::unsetLocale);
    _d.CPGF_MD_TEMPLATE _method("isRightToLeft", &D::ClassType::isRightToLeft);
    _d.CPGF_MD_TEMPLATE _method("isLeftToRight", &D::ClassType::isLeftToRight);
    _d.CPGF_MD_TEMPLATE _method("isActiveWindow", &D::ClassType::isActiveWindow);
    _d.CPGF_MD_TEMPLATE _method("activateWindow", &D::ClassType::activateWindow);
    _d.CPGF_MD_TEMPLATE _method("clearFocus", &D::ClassType::clearFocus);
    _d.CPGF_MD_TEMPLATE _method("focusPolicy", &D::ClassType::focusPolicy);
    _d.CPGF_MD_TEMPLATE _method("setFocusPolicy", &D::ClassType::setFocusPolicy);
    _d.CPGF_MD_TEMPLATE _method("hasFocus", &D::ClassType::hasFocus);
    _d.CPGF_MD_TEMPLATE _method("setFocusProxy", &D::ClassType::setFocusProxy);
    _d.CPGF_MD_TEMPLATE _method("focusProxy", &D::ClassType::focusProxy);
    _d.CPGF_MD_TEMPLATE _method("contextMenuPolicy", &D::ClassType::contextMenuPolicy);
    _d.CPGF_MD_TEMPLATE _method("setContextMenuPolicy", &D::ClassType::setContextMenuPolicy);
    _d.CPGF_MD_TEMPLATE _method("grabMouse", (void (D::ClassType::*) ())&D::ClassType::grabMouse);
    _d.CPGF_MD_TEMPLATE _method("grabMouse", (void (D::ClassType::*) (const QCursor &))&D::ClassType::grabMouse, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("releaseMouse", &D::ClassType::releaseMouse);
    _d.CPGF_MD_TEMPLATE _method("grabKeyboard", &D::ClassType::grabKeyboard);
    _d.CPGF_MD_TEMPLATE _method("releaseKeyboard", &D::ClassType::releaseKeyboard);
    _d.CPGF_MD_TEMPLATE _method("grabShortcut", &D::ClassType::grabShortcut, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::WindowShortcut))
    ;
    _d.CPGF_MD_TEMPLATE _method("releaseShortcut", &D::ClassType::releaseShortcut);
    _d.CPGF_MD_TEMPLATE _method("setShortcutEnabled", &D::ClassType::setShortcutEnabled)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("setShortcutAutoRepeat", &D::ClassType::setShortcutAutoRepeat)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("updatesEnabled", &D::ClassType::updatesEnabled);
    _d.CPGF_MD_TEMPLATE _method("setUpdatesEnabled", &D::ClassType::setUpdatesEnabled);
    _d.CPGF_MD_TEMPLATE _method("graphicsProxyWidget", &D::ClassType::graphicsProxyWidget);
    _d.CPGF_MD_TEMPLATE _method("update", (void (D::ClassType::*) ())&D::ClassType::update);
    _d.CPGF_MD_TEMPLATE _method("repaint", (void (D::ClassType::*) ())&D::ClassType::repaint);
    _d.CPGF_MD_TEMPLATE _method("update", (void (D::ClassType::*) (int, int, int, int))&D::ClassType::update);
    _d.CPGF_MD_TEMPLATE _method("update", (void (D::ClassType::*) (const QRect &))&D::ClassType::update);
    _d.CPGF_MD_TEMPLATE _method("update", (void (D::ClassType::*) (const QRegion &))&D::ClassType::update, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("repaint", (void (D::ClassType::*) (int, int, int, int))&D::ClassType::repaint);
    _d.CPGF_MD_TEMPLATE _method("repaint", (void (D::ClassType::*) (const QRect &))&D::ClassType::repaint);
    _d.CPGF_MD_TEMPLATE _method("repaint", (void (D::ClassType::*) (const QRegion &))&D::ClassType::repaint, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setVisible", &D::ClassType::setVisible);
    _d.CPGF_MD_TEMPLATE _method("setHidden", &D::ClassType::setHidden);
    _d.CPGF_MD_TEMPLATE _method("show", &D::ClassType::show);
    _d.CPGF_MD_TEMPLATE _method("hide", &D::ClassType::hide);
    _d.CPGF_MD_TEMPLATE _method("showMinimized", &D::ClassType::showMinimized);
    _d.CPGF_MD_TEMPLATE _method("showMaximized", &D::ClassType::showMaximized);
    _d.CPGF_MD_TEMPLATE _method("showFullScreen", &D::ClassType::showFullScreen);
    _d.CPGF_MD_TEMPLATE _method("showNormal", &D::ClassType::showNormal);
    _d.CPGF_MD_TEMPLATE _method("close", &D::ClassType::close);
    _d.CPGF_MD_TEMPLATE _method("raise", &D::ClassType::raise);
    _d.CPGF_MD_TEMPLATE _method("lower", &D::ClassType::lower);
    _d.CPGF_MD_TEMPLATE _method("stackUnder", &D::ClassType::stackUnder);
    _d.CPGF_MD_TEMPLATE _method("move", (void (D::ClassType::*) (int, int))&D::ClassType::move);
    _d.CPGF_MD_TEMPLATE _method("move", (void (D::ClassType::*) (const QPoint &))&D::ClassType::move);
    _d.CPGF_MD_TEMPLATE _method("resize", (void (D::ClassType::*) (int, int))&D::ClassType::resize);
    _d.CPGF_MD_TEMPLATE _method("resize", (void (D::ClassType::*) (const QSize &))&D::ClassType::resize);
    _d.CPGF_MD_TEMPLATE _method("setGeometry", (void (D::ClassType::*) (int, int, int, int))&D::ClassType::setGeometry);
    _d.CPGF_MD_TEMPLATE _method("setGeometry", (void (D::ClassType::*) (const QRect &))&D::ClassType::setGeometry);
    _d.CPGF_MD_TEMPLATE _method("saveGeometry", &D::ClassType::saveGeometry);
    _d.CPGF_MD_TEMPLATE _method("restoreGeometry", &D::ClassType::restoreGeometry, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("adjustSize", &D::ClassType::adjustSize);
    _d.CPGF_MD_TEMPLATE _method("isVisible", &D::ClassType::isVisible);
    _d.CPGF_MD_TEMPLATE _method("isVisibleTo", &D::ClassType::isVisibleTo);
    _d.CPGF_MD_TEMPLATE _method("isHidden", &D::ClassType::isHidden);
    _d.CPGF_MD_TEMPLATE _method("isMinimized", &D::ClassType::isMinimized);
    _d.CPGF_MD_TEMPLATE _method("isMaximized", &D::ClassType::isMaximized);
    _d.CPGF_MD_TEMPLATE _method("isFullScreen", &D::ClassType::isFullScreen);
    _d.CPGF_MD_TEMPLATE _method("windowState", &D::ClassType::windowState);
    _d.CPGF_MD_TEMPLATE _method("setWindowState", &D::ClassType::setWindowState);
    _d.CPGF_MD_TEMPLATE _method("overrideWindowState", &D::ClassType::overrideWindowState);
    _d.CPGF_MD_TEMPLATE _method("sizeHint", &D::ClassType::sizeHint);
    _d.CPGF_MD_TEMPLATE _method("minimumSizeHint", &D::ClassType::minimumSizeHint);
    _d.CPGF_MD_TEMPLATE _method("sizePolicy", &D::ClassType::sizePolicy);
    _d.CPGF_MD_TEMPLATE _method("setSizePolicy", (void (D::ClassType::*) (QSizePolicy))&D::ClassType::setSizePolicy);
    _d.CPGF_MD_TEMPLATE _method("setSizePolicy", (void (D::ClassType::*) (QSizePolicy::Policy, QSizePolicy::Policy))&D::ClassType::setSizePolicy);
    _d.CPGF_MD_TEMPLATE _method("heightForWidth", &D::ClassType::heightForWidth);
    _d.CPGF_MD_TEMPLATE _method("hasHeightForWidth", &D::ClassType::hasHeightForWidth);
    _d.CPGF_MD_TEMPLATE _method("visibleRegion", &D::ClassType::visibleRegion);
    _d.CPGF_MD_TEMPLATE _method("setContentsMargins", (void (D::ClassType::*) (int, int, int, int))&D::ClassType::setContentsMargins);
    _d.CPGF_MD_TEMPLATE _method("setContentsMargins", (void (D::ClassType::*) (const QMargins &))&D::ClassType::setContentsMargins);
    _d.CPGF_MD_TEMPLATE _method("getContentsMargins", &D::ClassType::getContentsMargins);
    _d.CPGF_MD_TEMPLATE _method("contentsMargins", &D::ClassType::contentsMargins);
    _d.CPGF_MD_TEMPLATE _method("contentsRect", &D::ClassType::contentsRect);
    _d.CPGF_MD_TEMPLATE _method("layout", &D::ClassType::layout);
    _d.CPGF_MD_TEMPLATE _method("setLayout", &D::ClassType::setLayout);
    _d.CPGF_MD_TEMPLATE _method("updateGeometry", &D::ClassType::updateGeometry);
    _d.CPGF_MD_TEMPLATE _method("setParent", (void (D::ClassType::*) (QWidget *))&D::ClassType::setParent);
    _d.CPGF_MD_TEMPLATE _method("setParent", (void (D::ClassType::*) (QWidget *, Qt::WindowFlags))&D::ClassType::setParent);
    _d.CPGF_MD_TEMPLATE _method("scroll", (void (D::ClassType::*) (int, int))&D::ClassType::scroll);
    _d.CPGF_MD_TEMPLATE _method("scroll", (void (D::ClassType::*) (int, int, const QRect &))&D::ClassType::scroll);
    _d.CPGF_MD_TEMPLATE _method("focusWidget", &D::ClassType::focusWidget);
    _d.CPGF_MD_TEMPLATE _method("nextInFocusChain", &D::ClassType::nextInFocusChain);
    _d.CPGF_MD_TEMPLATE _method("previousInFocusChain", &D::ClassType::previousInFocusChain);
    _d.CPGF_MD_TEMPLATE _method("acceptDrops", &D::ClassType::acceptDrops);
    _d.CPGF_MD_TEMPLATE _method("setAcceptDrops", &D::ClassType::setAcceptDrops);
    _d.CPGF_MD_TEMPLATE _method("addAction", &D::ClassType::addAction);
    _d.CPGF_MD_TEMPLATE _method("addActions", &D::ClassType::addActions);
    _d.CPGF_MD_TEMPLATE _method("insertAction", &D::ClassType::insertAction);
    _d.CPGF_MD_TEMPLATE _method("insertActions", &D::ClassType::insertActions);
    _d.CPGF_MD_TEMPLATE _method("removeAction", &D::ClassType::removeAction);
    _d.CPGF_MD_TEMPLATE _method("actions", &D::ClassType::actions);
    _d.CPGF_MD_TEMPLATE _method("parentWidget", &D::ClassType::parentWidget);
    _d.CPGF_MD_TEMPLATE _method("setWindowFlags", &D::ClassType::setWindowFlags);
    _d.CPGF_MD_TEMPLATE _method("windowFlags", &D::ClassType::windowFlags);
    _d.CPGF_MD_TEMPLATE _method("overrideWindowFlags", &D::ClassType::overrideWindowFlags);
    _d.CPGF_MD_TEMPLATE _method("windowType", &D::ClassType::windowType);
    _d.CPGF_MD_TEMPLATE _method("childAt", (QWidget * (D::ClassType::*) (int, int) const)&D::ClassType::childAt);
    _d.CPGF_MD_TEMPLATE _method("childAt", (QWidget * (D::ClassType::*) (const QPoint &) const)&D::ClassType::childAt);
    _d.CPGF_MD_TEMPLATE _method("setAttribute", &D::ClassType::setAttribute)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("testAttribute", &D::ClassType::testAttribute);
    _d.CPGF_MD_TEMPLATE _method("paintEngine", &D::ClassType::paintEngine);
    _d.CPGF_MD_TEMPLATE _method("ensurePolished", &D::ClassType::ensurePolished);
    _d.CPGF_MD_TEMPLATE _method("isAncestorOf", &D::ClassType::isAncestorOf);
    _d.CPGF_MD_TEMPLATE _method("autoFillBackground", &D::ClassType::autoFillBackground);
    _d.CPGF_MD_TEMPLATE _method("setAutoFillBackground", &D::ClassType::setAutoFillBackground);
    _d.CPGF_MD_TEMPLATE _method("backingStore", &D::ClassType::backingStore);
    _d.CPGF_MD_TEMPLATE _method("windowHandle", &D::ClassType::windowHandle);
    _d.CPGF_MD_TEMPLATE _method("windowTitleChanged", &D::ClassType::windowTitleChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("windowIconChanged", &D::ClassType::windowIconChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("windowIconTextChanged", &D::ClassType::windowIconTextChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("customContextMenuRequested", &D::ClassType::customContextMenuRequested);
    _d.CPGF_MD_TEMPLATE _method("inputMethodQuery", &D::ClassType::inputMethodQuery);
    _d.CPGF_MD_TEMPLATE _method("inputMethodHints", &D::ClassType::inputMethodHints);
    _d.CPGF_MD_TEMPLATE _method("setInputMethodHints", &D::ClassType::setInputMethodHints);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setTabOrder", &D::ClassType::setTabOrder);
    _d.CPGF_MD_TEMPLATE _method("mouseGrabber", &D::ClassType::mouseGrabber);
    _d.CPGF_MD_TEMPLATE _method("keyboardGrabber", &D::ClassType::keyboardGrabber);
    _d.CPGF_MD_TEMPLATE _method("find", &D::ClassType::find);
    _d.CPGF_MD_TEMPLATE _method("createWindowContainer", &D::ClassType::createWindowContainer)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::RenderFlag>("RenderFlag")
        ._element("DrawWindowBackground", D::ClassType::DrawWindowBackground)
        ._element("DrawChildren", D::ClassType::DrawChildren)
        ._element("IgnoreMask", D::ClassType::IgnoreMask)
    ;
    {
        GDefineMetaClass<QFlags<typename QWidget::RenderFlag > > _t_d = GDefineMetaClass<QFlags<typename QWidget::RenderFlag > >::lazyDeclare("RenderFlags", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QWidget::RenderFlag > >, typename QWidget::RenderFlag >);
        _d._class(_t_d);
    }
}


class QWidgetWrapper : public QWidget, public cpgf::GScriptWrapper {
public:
    
    QWidgetWrapper(QWidget * parent = 0, Qt::WindowFlags f = 0)
        : QWidget(parent, f) {}
    
    void wheelEvent(QWheelEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::wheelEvent(__arg0);
    }
    void super_wheelEvent(QWheelEvent * __arg0)
    {
        QWidget::wheelEvent(__arg0);
    }
    
    void showEvent(QShowEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("showEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::showEvent(__arg0);
    }
    void super_showEvent(QShowEvent * __arg0)
    {
        QWidget::showEvent(__arg0);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QWidget::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QWidget::qt_metacast(__arg0);
    }
    
    void tabletEvent(QTabletEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("tabletEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::tabletEvent(__arg0);
    }
    void super_tabletEvent(QTabletEvent * __arg0)
    {
        QWidget::tabletEvent(__arg0);
    }
    
    void resizeEvent(QResizeEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("resizeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::resizeEvent(__arg0);
    }
    void super_resizeEvent(QResizeEvent * __arg0)
    {
        QWidget::resizeEvent(__arg0);
    }
    
    void hideEvent(QHideEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hideEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::hideEvent(__arg0);
    }
    void super_hideEvent(QHideEvent * __arg0)
    {
        QWidget::hideEvent(__arg0);
    }
    
    int metric(QPaintDevice::PaintDeviceMetric __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metric"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QWidget::metric(__arg0);
    }
    int super_metric(QPaintDevice::PaintDeviceMetric __arg0) const
    {
        return QWidget::metric(__arg0);
    }
    
    void focusInEvent(QFocusEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::focusInEvent(__arg0);
    }
    void super_focusInEvent(QFocusEvent * __arg0)
    {
        QWidget::focusInEvent(__arg0);
    }
    
    void contextMenuEvent(QContextMenuEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::contextMenuEvent(__arg0);
    }
    void super_contextMenuEvent(QContextMenuEvent * __arg0)
    {
        QWidget::contextMenuEvent(__arg0);
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QWidget::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QWidget::event(__arg0);
    }
    
    void leaveEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("leaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::leaveEvent(__arg0);
    }
    void super_leaveEvent(QEvent * __arg0)
    {
        QWidget::leaveEvent(__arg0);
    }
    
    void dropEvent(QDropEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::dropEvent(__arg0);
    }
    void super_dropEvent(QDropEvent * __arg0)
    {
        QWidget::dropEvent(__arg0);
    }
    
    bool focusNextChild()
    {
        return QWidget::focusNextChild();
    }
    
    void timerEvent(QTimerEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QObject::timerEvent(__arg0);
    }
    void super_timerEvent(QTimerEvent * __arg0)
    {
        QObject::timerEvent(__arg0);
    }
    
    void paintEvent(QPaintEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::paintEvent(__arg0);
    }
    void super_paintEvent(QPaintEvent * __arg0)
    {
        QWidget::paintEvent(__arg0);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void destroy(bool destroyWindow = true, bool destroySubWindows = true)
    {
        QWidget::destroy(destroyWindow, destroySubWindows);
    }
    
    void mouseDoubleClickEvent(QMouseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::mouseDoubleClickEvent(__arg0);
    }
    void super_mouseDoubleClickEvent(QMouseEvent * __arg0)
    {
        QWidget::mouseDoubleClickEvent(__arg0);
    }
    
    void focusOutEvent(QFocusEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::focusOutEvent(__arg0);
    }
    void super_focusOutEvent(QFocusEvent * __arg0)
    {
        QWidget::focusOutEvent(__arg0);
    }
    
    void create(WId __arg0 = 0, bool initializeWindow = true, bool destroyOldWindow = true)
    {
        QWidget::create(__arg0, initializeWindow, destroyOldWindow);
    }
    
    void moveEvent(QMoveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("moveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::moveEvent(__arg0);
    }
    void super_moveEvent(QMoveEvent * __arg0)
    {
        QWidget::moveEvent(__arg0);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    void updateMicroFocus()
    {
        QWidget::updateMicroFocus();
    }
    
    void changeEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("changeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::changeEvent(__arg0);
    }
    void super_changeEvent(QEvent * __arg0)
    {
        QWidget::changeEvent(__arg0);
    }
    
    bool hasHeightForWidth() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::hasHeightForWidth();
    }
    bool super_hasHeightForWidth() const
    {
        return QWidget::hasHeightForWidth();
    }
    
    QPainter * sharedPainter() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sharedPainter"));
        if(func)
        {
            return cpgf::fromVariant<QPainter * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::sharedPainter();
    }
    QPainter * super_sharedPainter() const
    {
        return QWidget::sharedPainter();
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1).getValue());
        }
        return QObject::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QObject::eventFilter(__arg0, __arg1);
    }
    
    QPaintDevice * redirected(QPoint * offset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("redirected"));
        if(func)
        {
            return cpgf::fromVariant<QPaintDevice * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset).getValue());
        }
        return QWidget::redirected(offset);
    }
    QPaintDevice * super_redirected(QPoint * offset) const
    {
        return QWidget::redirected(offset);
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QWidget::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QWidget::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    void disconnectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("disconnectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, signal);
            return;
        }
        QObject::disconnectNotify(signal);
    }
    void super_disconnectNotify(const QMetaMethod & signal)
    {
        QObject::disconnectNotify(signal);
    }
    
    int heightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("heightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QWidget::heightForWidth(__arg0);
    }
    int super_heightForWidth(int __arg0) const
    {
        return QWidget::heightForWidth(__arg0);
    }
    
    void enterEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("enterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::enterEvent(__arg0);
    }
    void super_enterEvent(QEvent * __arg0)
    {
        QWidget::enterEvent(__arg0);
    }
    
    void dragMoveEvent(QDragMoveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::dragMoveEvent(__arg0);
    }
    void super_dragMoveEvent(QDragMoveEvent * __arg0)
    {
        QWidget::dragMoveEvent(__arg0);
    }
    
    void connectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("connectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, signal);
            return;
        }
        QObject::connectNotify(signal);
    }
    void super_connectNotify(const QMetaMethod & signal)
    {
        QObject::connectNotify(signal);
    }
    
    bool focusNextPrevChild(bool next)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusNextPrevChild"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, next).getValue());
        }
        return QWidget::focusNextPrevChild(next);
    }
    bool super_focusNextPrevChild(bool next)
    {
        return QWidget::focusNextPrevChild(next);
    }
    
    QSize sizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::sizeHint();
    }
    QSize super_sizeHint() const
    {
        return QWidget::sizeHint();
    }
    
    void childEvent(QChildEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QObject::childEvent(__arg0);
    }
    void super_childEvent(QChildEvent * __arg0)
    {
        QObject::childEvent(__arg0);
    }
    
    void initPainter(QPainter * painter) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("initPainter"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter);
            return;
        }
        QWidget::initPainter(painter);
    }
    void super_initPainter(QPainter * painter) const
    {
        QWidget::initPainter(painter);
    }
    
    bool focusPreviousChild()
    {
        return QWidget::focusPreviousChild();
    }
    
    void mouseMoveEvent(QMouseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::mouseMoveEvent(__arg0);
    }
    void super_mouseMoveEvent(QMouseEvent * __arg0)
    {
        QWidget::mouseMoveEvent(__arg0);
    }
    
    void keyPressEvent(QKeyEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::keyPressEvent(__arg0);
    }
    void super_keyPressEvent(QKeyEvent * __arg0)
    {
        QWidget::keyPressEvent(__arg0);
    }
    
    void actionEvent(QActionEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("actionEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::actionEvent(__arg0);
    }
    void super_actionEvent(QActionEvent * __arg0)
    {
        QWidget::actionEvent(__arg0);
    }
    
    void setVisible(bool visible)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setVisible"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, visible);
            return;
        }
        QWidget::setVisible(visible);
    }
    void super_setVisible(bool visible)
    {
        QWidget::setVisible(visible);
    }
    
    void inputMethodEvent(QInputMethodEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::inputMethodEvent(__arg0);
    }
    void super_inputMethodEvent(QInputMethodEvent * __arg0)
    {
        QWidget::inputMethodEvent(__arg0);
    }
    
    void dragEnterEvent(QDragEnterEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::dragEnterEvent(__arg0);
    }
    void super_dragEnterEvent(QDragEnterEvent * __arg0)
    {
        QWidget::dragEnterEvent(__arg0);
    }
    
    void mousePressEvent(QMouseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::mousePressEvent(__arg0);
    }
    void super_mousePressEvent(QMouseEvent * __arg0)
    {
        QWidget::mousePressEvent(__arg0);
    }
    
    QVariant inputMethodQuery(Qt::InputMethodQuery __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodQuery"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QWidget::inputMethodQuery(__arg0);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery __arg0) const
    {
        return QWidget::inputMethodQuery(__arg0);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void dragLeaveEvent(QDragLeaveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::dragLeaveEvent(__arg0);
    }
    void super_dragLeaveEvent(QDragLeaveEvent * __arg0)
    {
        QWidget::dragLeaveEvent(__arg0);
    }
    
    bool nativeEvent(const QByteArray & eventType, void * message, long * result)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("nativeEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, eventType, message, result).getValue());
        }
        return QWidget::nativeEvent(eventType, message, result);
    }
    bool super_nativeEvent(const QByteArray & eventType, void * message, long * result)
    {
        return QWidget::nativeEvent(eventType, message, result);
    }
    
    QSize minimumSizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumSizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::minimumSizeHint();
    }
    QSize super_minimumSizeHint() const
    {
        return QWidget::minimumSizeHint();
    }
    
    int devType() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("devType"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::devType();
    }
    int super_devType() const
    {
        return QWidget::devType();
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    QPaintEngine * paintEngine() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintEngine"));
        if(func)
        {
            return cpgf::fromVariant<QPaintEngine * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::paintEngine();
    }
    QPaintEngine * super_paintEngine() const
    {
        return QWidget::paintEngine();
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QWidget::metaObject();
    }
    
    void keyReleaseEvent(QKeyEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::keyReleaseEvent(__arg0);
    }
    void super_keyReleaseEvent(QKeyEvent * __arg0)
    {
        QWidget::keyReleaseEvent(__arg0);
    }
    
    void customEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("customEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QObject::customEvent(__arg0);
    }
    void super_customEvent(QEvent * __arg0)
    {
        QObject::customEvent(__arg0);
    }
    
    void mouseReleaseEvent(QMouseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::mouseReleaseEvent(__arg0);
    }
    void super_mouseReleaseEvent(QMouseEvent * __arg0)
    {
        QWidget::mouseReleaseEvent(__arg0);
    }
    
    void closeEvent(QCloseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("closeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::closeEvent(__arg0);
    }
    void super_closeEvent(QCloseEvent * __arg0)
    {
        QWidget::closeEvent(__arg0);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("showEvent", (void (D::ClassType::*) (QShowEvent *))&D::ClassType::showEvent);
        _d.CPGF_MD_TEMPLATE _method("tabletEvent", (void (D::ClassType::*) (QTabletEvent *))&D::ClassType::tabletEvent);
        _d.CPGF_MD_TEMPLATE _method("resizeEvent", (void (D::ClassType::*) (QResizeEvent *))&D::ClassType::resizeEvent);
        _d.CPGF_MD_TEMPLATE _method("hideEvent", (void (D::ClassType::*) (QHideEvent *))&D::ClassType::hideEvent);
        _d.CPGF_MD_TEMPLATE _method("metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::metric);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::event);
        _d.CPGF_MD_TEMPLATE _method("leaveEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::leaveEvent);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("focusNextChild", (bool (D::ClassType::*) ())&D::ClassType::focusNextChild);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("paintEvent", (void (D::ClassType::*) (QPaintEvent *))&D::ClassType::paintEvent);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("destroy", (void (D::ClassType::*) (bool, bool))&D::ClassType::destroy)
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(true))
        ;
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("create", (void (D::ClassType::*) (WId, bool, bool))&D::ClassType::create)
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("moveEvent", (void (D::ClassType::*) (QMoveEvent *))&D::ClassType::moveEvent);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("changeEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::changeEvent);
        _d.CPGF_MD_TEMPLATE _method("sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::sharedPainter);
        _d.CPGF_MD_TEMPLATE _method("redirected", (QPaintDevice * (D::ClassType::*) (QPoint *) const)&D::ClassType::redirected);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("enterEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::enterEvent);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QDragMoveEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("initPainter", (void (D::ClassType::*) (QPainter *) const)&D::ClassType::initPainter);
        _d.CPGF_MD_TEMPLATE _method("focusPreviousChild", (bool (D::ClassType::*) ())&D::ClassType::focusPreviousChild);
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("actionEvent", (void (D::ClassType::*) (QActionEvent *))&D::ClassType::actionEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("nativeEvent", (bool (D::ClassType::*) (const QByteArray &, void *, long *))&D::ClassType::nativeEvent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::closeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_showEvent", (void (D::ClassType::*) (QShowEvent *))&D::ClassType::super_showEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_tabletEvent", (void (D::ClassType::*) (QTabletEvent *))&D::ClassType::super_tabletEvent);
        _d.CPGF_MD_TEMPLATE _method("super_resizeEvent", (void (D::ClassType::*) (QResizeEvent *))&D::ClassType::super_resizeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hideEvent", (void (D::ClassType::*) (QHideEvent *))&D::ClassType::super_hideEvent);
        _d.CPGF_MD_TEMPLATE _method("super_metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::super_metric);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_leaveEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_leaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paintEvent", (void (D::ClassType::*) (QPaintEvent *))&D::ClassType::super_paintEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_moveEvent", (void (D::ClassType::*) (QMoveEvent *))&D::ClassType::super_moveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_changeEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_changeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hasHeightForWidth", (bool (D::ClassType::*) () const)&D::ClassType::super_hasHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::super_sharedPainter);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_redirected", (QPaintDevice * (D::ClassType::*) (QPoint *) const)&D::ClassType::super_redirected);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_heightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_heightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_enterEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_enterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QDragMoveEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::super_focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_sizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_initPainter", (void (D::ClassType::*) (QPainter *) const)&D::ClassType::super_initPainter);
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_actionEvent", (void (D::ClassType::*) (QActionEvent *))&D::ClassType::super_actionEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setVisible", (void (D::ClassType::*) (bool))&D::ClassType::super_setVisible);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_nativeEvent", (bool (D::ClassType::*) (const QByteArray &, void *, long *))&D::ClassType::super_nativeEvent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_minimumSizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_minimumSizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_devType", (int (D::ClassType::*) () const)&D::ClassType::super_devType);
        _d.CPGF_MD_TEMPLATE _method("super_paintEngine", (QPaintEngine * (D::ClassType::*) () const)&D::ClassType::super_paintEngine);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::super_closeEvent);
    }
};


template <typename D>
void buildMetaClass_QWidgetWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QWidgetWrapper::cpgf__register(_d);
    
    buildMetaClass_QWidget<D>(_d);
}


inline uint bItFiEldWrapper_QWidgetData_window_state_getter(QWidgetData * self) {
    return self->window_state;
}

inline void bItFiEldWrapper_QWidgetData_window_state_setter(QWidgetData * self, uint value) {
    self->window_state = value;
}
inline uint bItFiEldWrapper_QWidgetData_focus_policy_getter(QWidgetData * self) {
    return self->focus_policy;
}

inline void bItFiEldWrapper_QWidgetData_focus_policy_setter(QWidgetData * self, uint value) {
    self->focus_policy = value;
}
inline uint bItFiEldWrapper_QWidgetData_sizehint_forced_getter(QWidgetData * self) {
    return self->sizehint_forced;
}

inline void bItFiEldWrapper_QWidgetData_sizehint_forced_setter(QWidgetData * self, uint value) {
    self->sizehint_forced = value;
}
inline uint bItFiEldWrapper_QWidgetData_is_closing_getter(QWidgetData * self) {
    return self->is_closing;
}

inline void bItFiEldWrapper_QWidgetData_is_closing_setter(QWidgetData * self, uint value) {
    self->is_closing = value;
}
inline uint bItFiEldWrapper_QWidgetData_in_show_getter(QWidgetData * self) {
    return self->in_show;
}

inline void bItFiEldWrapper_QWidgetData_in_show_setter(QWidgetData * self, uint value) {
    self->in_show = value;
}
inline uint bItFiEldWrapper_QWidgetData_in_set_window_state_getter(QWidgetData * self) {
    return self->in_set_window_state;
}

inline void bItFiEldWrapper_QWidgetData_in_set_window_state_setter(QWidgetData * self, uint value) {
    self->in_set_window_state = value;
}
inline uint bItFiEldWrapper_QWidgetData_fstrut_dirty_getter(QWidgetData * self) {
    return self->fstrut_dirty;
}

inline void bItFiEldWrapper_QWidgetData_fstrut_dirty_setter(QWidgetData * self, uint value) {
    self->fstrut_dirty = value;
}
inline uint bItFiEldWrapper_QWidgetData_context_menu_policy_getter(QWidgetData * self) {
    return self->context_menu_policy;
}

inline void bItFiEldWrapper_QWidgetData_context_menu_policy_setter(QWidgetData * self, uint value) {
    self->context_menu_policy = value;
}
inline uint bItFiEldWrapper_QWidgetData_window_modality_getter(QWidgetData * self) {
    return self->window_modality;
}

inline void bItFiEldWrapper_QWidgetData_window_modality_setter(QWidgetData * self, uint value) {
    self->window_modality = value;
}
inline uint bItFiEldWrapper_QWidgetData_in_destructor_getter(QWidgetData * self) {
    return self->in_destructor;
}

inline void bItFiEldWrapper_QWidgetData_in_destructor_setter(QWidgetData * self, uint value) {
    self->in_destructor = value;
}
inline uint bItFiEldWrapper_QWidgetData_unused_getter(QWidgetData * self) {
    return self->unused;
}

inline void bItFiEldWrapper_QWidgetData_unused_setter(QWidgetData * self, uint value) {
    self->unused = value;
}


template <typename D>
void buildMetaClass_QWidgetData(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("winid", &D::ClassType::winid);
    _d.CPGF_MD_TEMPLATE _field("widget_attributes", &D::ClassType::widget_attributes);
    _d.CPGF_MD_TEMPLATE _field("window_flags", &D::ClassType::window_flags);
    _d.CPGF_MD_TEMPLATE _property("window_state", &bItFiEldWrapper_QWidgetData_window_state_getter, &bItFiEldWrapper_QWidgetData_window_state_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("focus_policy", &bItFiEldWrapper_QWidgetData_focus_policy_getter, &bItFiEldWrapper_QWidgetData_focus_policy_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("sizehint_forced", &bItFiEldWrapper_QWidgetData_sizehint_forced_getter, &bItFiEldWrapper_QWidgetData_sizehint_forced_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("is_closing", &bItFiEldWrapper_QWidgetData_is_closing_getter, &bItFiEldWrapper_QWidgetData_is_closing_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("in_show", &bItFiEldWrapper_QWidgetData_in_show_getter, &bItFiEldWrapper_QWidgetData_in_show_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("in_set_window_state", &bItFiEldWrapper_QWidgetData_in_set_window_state_getter, &bItFiEldWrapper_QWidgetData_in_set_window_state_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("fstrut_dirty", &bItFiEldWrapper_QWidgetData_fstrut_dirty_getter, &bItFiEldWrapper_QWidgetData_fstrut_dirty_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("context_menu_policy", &bItFiEldWrapper_QWidgetData_context_menu_policy_getter, &bItFiEldWrapper_QWidgetData_context_menu_policy_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("window_modality", &bItFiEldWrapper_QWidgetData_window_modality_getter, &bItFiEldWrapper_QWidgetData_window_modality_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("in_destructor", &bItFiEldWrapper_QWidgetData_in_destructor_getter, &bItFiEldWrapper_QWidgetData_in_destructor_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("unused", &bItFiEldWrapper_QWidgetData_unused_getter, &bItFiEldWrapper_QWidgetData_unused_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _field("crect", &D::ClassType::crect);
    _d.CPGF_MD_TEMPLATE _field("pal", &D::ClassType::pal);
    _d.CPGF_MD_TEMPLATE _field("fnt", &D::ClassType::fnt);
    _d.CPGF_MD_TEMPLATE _field("wrect", &D::ClassType::wrect);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
