// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QPROXYSTYLE_H
#define CPGF_META_QTWIDGETS_QPROXYSTYLE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QProxyStyle(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QStyle *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("baseStyle", &D::ClassType::baseStyle);
    _d.CPGF_MD_TEMPLATE _method("setBaseStyle", &D::ClassType::setBaseStyle);
    _d.CPGF_MD_TEMPLATE _method("drawPrimitive", &D::ClassType::drawPrimitive)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawControl", &D::ClassType::drawControl)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawComplexControl", &D::ClassType::drawComplexControl)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawItemText", &D::ClassType::drawItemText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<3>, cpgf::GMetaRuleCopyConstReference<5> >())
        ._default(copyVariantFromCopyable(QPalette::NoRole))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawItemPixmap", &D::ClassType::drawItemPixmap);
    _d.CPGF_MD_TEMPLATE _method("sizeFromContents", &D::ClassType::sizeFromContents);
    _d.CPGF_MD_TEMPLATE _method("subElementRect", &D::ClassType::subElementRect);
    _d.CPGF_MD_TEMPLATE _method("subControlRect", &D::ClassType::subControlRect);
    _d.CPGF_MD_TEMPLATE _method("itemTextRect", &D::ClassType::itemTextRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<4> >());
    _d.CPGF_MD_TEMPLATE _method("itemPixmapRect", &D::ClassType::itemPixmapRect);
    _d.CPGF_MD_TEMPLATE _method("hitTestComplexControl", &D::ClassType::hitTestComplexControl)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("styleHint", &D::ClassType::styleHint)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("pixelMetric", &D::ClassType::pixelMetric)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("layoutSpacing", &D::ClassType::layoutSpacing)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("standardIcon", &D::ClassType::standardIcon)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("standardPixmap", &D::ClassType::standardPixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("generatedIconPixmap", &D::ClassType::generatedIconPixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("standardPalette", &D::ClassType::standardPalette);
    _d.CPGF_MD_TEMPLATE _method("polish", (void (D::ClassType::*) (QWidget *))&D::ClassType::polish);
    _d.CPGF_MD_TEMPLATE _method("polish", (void (D::ClassType::*) (QPalette &))&D::ClassType::polish);
    _d.CPGF_MD_TEMPLATE _method("polish", (void (D::ClassType::*) (QApplication *))&D::ClassType::polish);
    _d.CPGF_MD_TEMPLATE _method("unpolish", (void (D::ClassType::*) (QWidget *))&D::ClassType::unpolish);
    _d.CPGF_MD_TEMPLATE _method("unpolish", (void (D::ClassType::*) (QApplication *))&D::ClassType::unpolish);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QProxyStyleWrapper : public QProxyStyle, public cpgf::GScriptWrapper {
public:
    
    QProxyStyleWrapper(QStyle * style = 0)
        : QProxyStyle(style) {}
    
    QProxyStyleWrapper(const QString & key)
        : QProxyStyle(key) {}
    
    QPalette standardPalette() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("standardPalette"));
        if(func)
        {
            return cpgf::fromVariant<QPalette >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QProxyStyle::standardPalette();
    }
    QPalette super_standardPalette() const
    {
        return QProxyStyle::standardPalette();
    }
    
    QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap & pixmap, const QStyleOption * opt) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("generatedIconPixmap"));
        if(func)
        {
            return cpgf::fromVariant<QPixmap >(cpgf::invokeScriptFunctionOnObject(func.get(), this, iconMode, pixmap, opt).getValue());
        }
        return QProxyStyle::generatedIconPixmap(iconMode, pixmap, opt);
    }
    QPixmap super_generatedIconPixmap(QIcon::Mode iconMode, const QPixmap & pixmap, const QStyleOption * opt) const
    {
        return QProxyStyle::generatedIconPixmap(iconMode, pixmap, opt);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option = 0, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("layoutSpacing"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, control1, control2, orientation, option, widget).getValue());
        }
        return QProxyStyle::layoutSpacing(control1, control2, orientation, option, widget);
    }
    int super_layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option = 0, const QWidget * widget = 0) const
    {
        return QProxyStyle::layoutSpacing(control1, control2, orientation, option, widget);
    }
    
    void polish(QWidget * widget)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("polish"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, widget);
            return;
        }
        QProxyStyle::polish(widget);
    }
    void super_polish(QWidget * widget)
    {
        QProxyStyle::polish(widget);
    }
    
    QPixmap standardPixmap(QStyle::StandardPixmap standardPixmap, const QStyleOption * opt, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("standardPixmap"));
        if(func)
        {
            return cpgf::fromVariant<QPixmap >(cpgf::invokeScriptFunctionOnObject(func.get(), this, standardPixmap, opt, widget).getValue());
        }
        return QProxyStyle::standardPixmap(standardPixmap, opt, widget);
    }
    QPixmap super_standardPixmap(QStyle::StandardPixmap standardPixmap, const QStyleOption * opt, const QWidget * widget = 0) const
    {
        return QProxyStyle::standardPixmap(standardPixmap, opt, widget);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void drawComplexControl(QStyle::ComplexControl control, const QStyleOptionComplex * option, QPainter * painter, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawComplexControl"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, control, option, painter, widget);
            return;
        }
        QProxyStyle::drawComplexControl(control, option, painter, widget);
    }
    void super_drawComplexControl(QStyle::ComplexControl control, const QStyleOptionComplex * option, QPainter * painter, const QWidget * widget = 0) const
    {
        QProxyStyle::drawComplexControl(control, option, painter, widget);
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
    
    QRect itemTextRect(const QFontMetrics & fm, const QRect & r, int flags, bool enabled, const QString & text) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemTextRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this, fm, r, flags, enabled, text).getValue());
        }
        return QProxyStyle::itemTextRect(fm, r, flags, enabled, text);
    }
    QRect super_itemTextRect(const QFontMetrics & fm, const QRect & r, int flags, bool enabled, const QString & text) const
    {
        return QProxyStyle::itemTextRect(fm, r, flags, enabled, text);
    }
    
    void drawPrimitive(QStyle::PrimitiveElement element, const QStyleOption * option, QPainter * painter, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawPrimitive"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, element, option, painter, widget);
            return;
        }
        QProxyStyle::drawPrimitive(element, option, painter, widget);
    }
    void super_drawPrimitive(QStyle::PrimitiveElement element, const QStyleOption * option, QPainter * painter, const QWidget * widget = 0) const
    {
        QProxyStyle::drawPrimitive(element, option, painter, widget);
    }
    
    void polish(QApplication * app)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("polish"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, app);
            return;
        }
        QProxyStyle::polish(app);
    }
    void super_polish(QApplication * app)
    {
        QProxyStyle::polish(app);
    }
    
    int pixelMetric(QStyle::PixelMetric metric, const QStyleOption * option = 0, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("pixelMetric"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, metric, option, widget).getValue());
        }
        return QProxyStyle::pixelMetric(metric, option, widget);
    }
    int super_pixelMetric(QStyle::PixelMetric metric, const QStyleOption * option = 0, const QWidget * widget = 0) const
    {
        return QProxyStyle::pixelMetric(metric, option, widget);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void unpolish(QWidget * widget)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("unpolish"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, widget);
            return;
        }
        QProxyStyle::unpolish(widget);
    }
    void super_unpolish(QWidget * widget)
    {
        QProxyStyle::unpolish(widget);
    }
    
    void drawItemText(QPainter * painter, const QRect & rect, int flags, const QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole textRole = QPalette::NoRole) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawItemText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, rect, flags, pal, enabled, text, textRole);
            return;
        }
        QProxyStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
    }
    void super_drawItemText(QPainter * painter, const QRect & rect, int flags, const QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole textRole = QPalette::NoRole) const
    {
        QProxyStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
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
    
    int styleHint(QStyle::StyleHint hint, const QStyleOption * option = 0, const QWidget * widget = 0, QStyleHintReturn * returnData = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("styleHint"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, hint, option, widget, returnData).getValue());
        }
        return QProxyStyle::styleHint(hint, option, widget, returnData);
    }
    int super_styleHint(QStyle::StyleHint hint, const QStyleOption * option = 0, const QWidget * widget = 0, QStyleHintReturn * returnData = 0) const
    {
        return QProxyStyle::styleHint(hint, option, widget, returnData);
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
    
    void drawItemPixmap(QPainter * painter, const QRect & rect, int alignment, const QPixmap & pixmap) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawItemPixmap"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, rect, alignment, pixmap);
            return;
        }
        QProxyStyle::drawItemPixmap(painter, rect, alignment, pixmap);
    }
    void super_drawItemPixmap(QPainter * painter, const QRect & rect, int alignment, const QPixmap & pixmap) const
    {
        QProxyStyle::drawItemPixmap(painter, rect, alignment, pixmap);
    }
    
    QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl control, const QStyleOptionComplex * option, const QPoint & pos, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hitTestComplexControl"));
        if(func)
        {
            return cpgf::fromVariant<QStyle::SubControl >(cpgf::invokeScriptFunctionOnObject(func.get(), this, control, option, pos, widget).getValue());
        }
        return QProxyStyle::hitTestComplexControl(control, option, pos, widget);
    }
    QStyle::SubControl super_hitTestComplexControl(QStyle::ComplexControl control, const QStyleOptionComplex * option, const QPoint & pos, const QWidget * widget = 0) const
    {
        return QProxyStyle::hitTestComplexControl(control, option, pos, widget);
    }
    
    QRect subElementRect(QStyle::SubElement element, const QStyleOption * option, const QWidget * widget) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("subElementRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this, element, option, widget).getValue());
        }
        return QProxyStyle::subElementRect(element, option, widget);
    }
    QRect super_subElementRect(QStyle::SubElement element, const QStyleOption * option, const QWidget * widget) const
    {
        return QProxyStyle::subElementRect(element, option, widget);
    }
    
    QSize sizeFromContents(QStyle::ContentsType type, const QStyleOption * option, const QSize & size, const QWidget * widget) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeFromContents"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this, type, option, size, widget).getValue());
        }
        return QProxyStyle::sizeFromContents(type, option, size, widget);
    }
    QSize super_sizeFromContents(QStyle::ContentsType type, const QStyleOption * option, const QSize & size, const QWidget * widget) const
    {
        return QProxyStyle::sizeFromContents(type, option, size, widget);
    }
    
    QIcon standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption * option = 0, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("standardIcon"));
        if(func)
        {
            return cpgf::fromVariant<QIcon >(cpgf::invokeScriptFunctionOnObject(func.get(), this, standardIcon, option, widget).getValue());
        }
        return QProxyStyle::standardIcon(standardIcon, option, widget);
    }
    QIcon super_standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption * option = 0, const QWidget * widget = 0) const
    {
        return QProxyStyle::standardIcon(standardIcon, option, widget);
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
    
    QRect itemPixmapRect(const QRect & r, int flags, const QPixmap & pixmap) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemPixmapRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this, r, flags, pixmap).getValue());
        }
        return QProxyStyle::itemPixmapRect(r, flags, pixmap);
    }
    QRect super_itemPixmapRect(const QRect & r, int flags, const QPixmap & pixmap) const
    {
        return QProxyStyle::itemPixmapRect(r, flags, pixmap);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QProxyStyle::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QProxyStyle::qt_metacast(__arg0);
    }
    
    void drawControl(QStyle::ControlElement element, const QStyleOption * option, QPainter * painter, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawControl"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, element, option, painter, widget);
            return;
        }
        QProxyStyle::drawControl(element, option, painter, widget);
    }
    void super_drawControl(QStyle::ControlElement element, const QStyleOption * option, QPainter * painter, const QWidget * widget = 0) const
    {
        QProxyStyle::drawControl(element, option, painter, widget);
    }
    
    QRect subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * widget) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("subControlRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this, cc, opt, sc, widget).getValue());
        }
        return QProxyStyle::subControlRect(cc, opt, sc, widget);
    }
    QRect super_subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * widget) const
    {
        return QProxyStyle::subControlRect(cc, opt, sc, widget);
    }
    
    bool event(QEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, e).getValue());
        }
        return QProxyStyle::event(e);
    }
    bool super_event(QEvent * e)
    {
        return QProxyStyle::event(e);
    }
    
    void unpolish(QApplication * app)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("unpolish"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, app);
            return;
        }
        QProxyStyle::unpolish(app);
    }
    void super_unpolish(QApplication * app)
    {
        QProxyStyle::unpolish(app);
    }
    
    void polish(QPalette & pal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("polish"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, pal);
            return;
        }
        QProxyStyle::polish(pal);
    }
    void super_polish(QPalette & pal)
    {
        QProxyStyle::polish(pal);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QProxyStyle::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QProxyStyle::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QProxyStyle::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QProxyStyle::qt_metacall(__arg0, __arg1, __arg2);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::event);
        _d.CPGF_MD_TEMPLATE _method("super_standardPalette", (QPalette (D::ClassType::*) () const)&D::ClassType::super_standardPalette);
        _d.CPGF_MD_TEMPLATE _method("super_generatedIconPixmap", (QPixmap (D::ClassType::*) (QIcon::Mode, const QPixmap &, const QStyleOption *) const)&D::ClassType::super_generatedIconPixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
        _d.CPGF_MD_TEMPLATE _method("super_layoutSpacing", (int (D::ClassType::*) (QSizePolicy::ControlType, QSizePolicy::ControlType, Qt::Orientation, const QStyleOption *, const QWidget *) const)&D::ClassType::super_layoutSpacing)
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_polish", (void (D::ClassType::*) (QWidget *))&D::ClassType::super_polish);
        _d.CPGF_MD_TEMPLATE _method("super_standardPixmap", (QPixmap (D::ClassType::*) (QStyle::StandardPixmap, const QStyleOption *, const QWidget *) const)&D::ClassType::super_standardPixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_drawComplexControl", (void (D::ClassType::*) (QStyle::ComplexControl, const QStyleOptionComplex *, QPainter *, const QWidget *) const)&D::ClassType::super_drawComplexControl)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_itemTextRect", (QRect (D::ClassType::*) (const QFontMetrics &, const QRect &, int, bool, const QString &) const)&D::ClassType::super_itemTextRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<4> >());
        _d.CPGF_MD_TEMPLATE _method("super_drawPrimitive", (void (D::ClassType::*) (QStyle::PrimitiveElement, const QStyleOption *, QPainter *, const QWidget *) const)&D::ClassType::super_drawPrimitive)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_polish", (void (D::ClassType::*) (QApplication *))&D::ClassType::super_polish);
        _d.CPGF_MD_TEMPLATE _method("super_pixelMetric", (int (D::ClassType::*) (QStyle::PixelMetric, const QStyleOption *, const QWidget *) const)&D::ClassType::super_pixelMetric)
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_unpolish", (void (D::ClassType::*) (QWidget *))&D::ClassType::super_unpolish);
        _d.CPGF_MD_TEMPLATE _method("super_drawItemText", (void (D::ClassType::*) (QPainter *, const QRect &, int, const QPalette &, bool, const QString &, QPalette::ColorRole) const)&D::ClassType::super_drawItemText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<3>, cpgf::GMetaRuleCopyConstReference<5> >())
            ._default(copyVariantFromCopyable(QPalette::NoRole))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_styleHint", (int (D::ClassType::*) (QStyle::StyleHint, const QStyleOption *, const QWidget *, QStyleHintReturn *) const)&D::ClassType::super_styleHint)
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_drawItemPixmap", (void (D::ClassType::*) (QPainter *, const QRect &, int, const QPixmap &) const)&D::ClassType::super_drawItemPixmap);
        _d.CPGF_MD_TEMPLATE _method("super_hitTestComplexControl", (QStyle::SubControl (D::ClassType::*) (QStyle::ComplexControl, const QStyleOptionComplex *, const QPoint &, const QWidget *) const)&D::ClassType::super_hitTestComplexControl)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_subElementRect", (QRect (D::ClassType::*) (QStyle::SubElement, const QStyleOption *, const QWidget *) const)&D::ClassType::super_subElementRect);
        _d.CPGF_MD_TEMPLATE _method("super_sizeFromContents", (QSize (D::ClassType::*) (QStyle::ContentsType, const QStyleOption *, const QSize &, const QWidget *) const)&D::ClassType::super_sizeFromContents);
        _d.CPGF_MD_TEMPLATE _method("super_standardIcon", (QIcon (D::ClassType::*) (QStyle::StandardPixmap, const QStyleOption *, const QWidget *) const)&D::ClassType::super_standardIcon)
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_itemPixmapRect", (QRect (D::ClassType::*) (const QRect &, int, const QPixmap &) const)&D::ClassType::super_itemPixmapRect);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_drawControl", (void (D::ClassType::*) (QStyle::ControlElement, const QStyleOption *, QPainter *, const QWidget *) const)&D::ClassType::super_drawControl)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_subControlRect", (QRect (D::ClassType::*) (QStyle::ComplexControl, const QStyleOptionComplex *, QStyle::SubControl, const QWidget *) const)&D::ClassType::super_subControlRect);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_unpolish", (void (D::ClassType::*) (QApplication *))&D::ClassType::super_unpolish);
        _d.CPGF_MD_TEMPLATE _method("super_polish", (void (D::ClassType::*) (QPalette &))&D::ClassType::super_polish);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
    }
};


template <typename D>
void buildMetaClass_QProxyStyleWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QProxyStyleWrapper::cpgf__register(_d);
    
    buildMetaClass_QProxyStyle<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
