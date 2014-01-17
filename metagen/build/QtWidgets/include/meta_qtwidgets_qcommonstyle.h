// Auto generated file, don't modify.

#ifndef __META_QTWIDGETS_QCOMMONSTYLE_H
#define __META_QTWIDGETS_QCOMMONSTYLE_H


#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace meta_qtwidgets { 


template <typename D>
void buildMetaClass_QCommonStyle(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("drawPrimitive", &D::ClassType::drawPrimitive)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawControl", &D::ClassType::drawControl)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("subElementRect", &D::ClassType::subElementRect)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawComplexControl", &D::ClassType::drawComplexControl)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("hitTestComplexControl", &D::ClassType::hitTestComplexControl)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("subControlRect", &D::ClassType::subControlRect)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("sizeFromContents", &D::ClassType::sizeFromContents)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("pixelMetric", &D::ClassType::pixelMetric)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("styleHint", &D::ClassType::styleHint)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("standardIcon", &D::ClassType::standardIcon)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("standardPixmap", &D::ClassType::standardPixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("generatedIconPixmap", &D::ClassType::generatedIconPixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("layoutSpacing", &D::ClassType::layoutSpacing)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("polish", (void (D::ClassType::*) (QPalette &))&D::ClassType::polish);
    _d.CPGF_MD_TEMPLATE _method("polish", (void (D::ClassType::*) (QApplication *))&D::ClassType::polish);
    _d.CPGF_MD_TEMPLATE _method("polish", (void (D::ClassType::*) (QWidget *))&D::ClassType::polish);
    _d.CPGF_MD_TEMPLATE _method("unpolish", (void (D::ClassType::*) (QWidget *))&D::ClassType::unpolish);
    _d.CPGF_MD_TEMPLATE _method("unpolish", (void (D::ClassType::*) (QApplication *))&D::ClassType::unpolish);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QCommonStyleWrapper : public QCommonStyle, public cpgf::GScriptWrapper {
public:
    
    QCommonStyleWrapper()
        : QCommonStyle() {}
    
    QRect subElementRect(QStyle::SubElement r, const QStyleOption * opt, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("subElementRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunction(func.get(), this, r, opt, widget));
        }
        return QCommonStyle::subElementRect(r, opt, widget);
    }
    QRect super_subElementRect(QStyle::SubElement r, const QStyleOption * opt, const QWidget * widget = 0) const
    {
        return QCommonStyle::subElementRect(r, opt, widget);
    }
    
    void polish(QApplication * app)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("polish"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, app);
            return;
        }
        QCommonStyle::polish(app);
    }
    void super_polish(QApplication * app)
    {
        QCommonStyle::polish(app);
    }
    
    void connectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("connectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::connectNotify(signal);
    }
    void super_connectNotify(const QMetaMethod & signal)
    {
        QObject::connectNotify(signal);
    }
    
    void childEvent(QChildEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::childEvent(__arg0);
    }
    void super_childEvent(QChildEvent * __arg0)
    {
        QObject::childEvent(__arg0);
    }
    
    void drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption * opt, QPainter * p, const QWidget * w = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawPrimitive"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, pe, opt, p, w);
            return;
        }
        QCommonStyle::drawPrimitive(pe, opt, p, w);
    }
    void super_drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption * opt, QPainter * p, const QWidget * w = 0) const
    {
        QCommonStyle::drawPrimitive(pe, opt, p, w);
    }
    
    QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap & pixmap, const QStyleOption * opt) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("generatedIconPixmap"));
        if(func)
        {
            return cpgf::fromVariant<QPixmap >(cpgf::invokeScriptFunction(func.get(), this, iconMode, pixmap, opt));
        }
        return QCommonStyle::generatedIconPixmap(iconMode, pixmap, opt);
    }
    QPixmap super_generatedIconPixmap(QIcon::Mode iconMode, const QPixmap & pixmap, const QStyleOption * opt) const
    {
        return QCommonStyle::generatedIconPixmap(iconMode, pixmap, opt);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QCommonStyle::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QCommonStyle::qt_metacast(__arg0);
    }
    
    void drawItemText(QPainter * painter, const QRect & rect, int flags, const QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole textRole = QPalette::NoRole) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawItemText"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, painter, rect, flags, pal, enabled, text, textRole);
            return;
        }
        QStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
    }
    void super_drawItemText(QPainter * painter, const QRect & rect, int flags, const QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole textRole = QPalette::NoRole) const
    {
        QStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
    }
    
    void polish(QWidget * widget)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("polish"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, widget);
            return;
        }
        QCommonStyle::polish(widget);
    }
    void super_polish(QWidget * widget)
    {
        QCommonStyle::polish(widget);
    }
    
    void drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QPainter * p, const QWidget * w = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawComplexControl"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, cc, opt, p, w);
            return;
        }
        QCommonStyle::drawComplexControl(cc, opt, p, w);
    }
    void super_drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QPainter * p, const QWidget * w = 0) const
    {
        QCommonStyle::drawComplexControl(cc, opt, p, w);
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QObject::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QObject::event(__arg0);
    }
    
    void timerEvent(QTimerEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::timerEvent(__arg0);
    }
    void super_timerEvent(QTimerEvent * __arg0)
    {
        QObject::timerEvent(__arg0);
    }
    
    QIcon standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption * opt = 0, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("standardIcon"));
        if(func)
        {
            return cpgf::fromVariant<QIcon >(cpgf::invokeScriptFunction(func.get(), this, standardIcon, opt, widget));
        }
        return QCommonStyle::standardIcon(standardIcon, opt, widget);
    }
    QIcon super_standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption * opt = 0, const QWidget * widget = 0) const
    {
        return QCommonStyle::standardIcon(standardIcon, opt, widget);
    }
    
    QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, const QPoint & pt, const QWidget * w = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hitTestComplexControl"));
        if(func)
        {
            return cpgf::fromVariant<QStyle::SubControl >(cpgf::invokeScriptFunction(func.get(), this, cc, opt, pt, w));
        }
        return QCommonStyle::hitTestComplexControl(cc, opt, pt, w);
    }
    QStyle::SubControl super_hitTestComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, const QPoint & pt, const QWidget * w = 0) const
    {
        return QCommonStyle::hitTestComplexControl(cc, opt, pt, w);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void unpolish(QApplication * application)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("unpolish"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, application);
            return;
        }
        QCommonStyle::unpolish(application);
    }
    void super_unpolish(QApplication * application)
    {
        QCommonStyle::unpolish(application);
    }
    
    void polish(QPalette & __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("polish"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QCommonStyle::polish(__arg0);
    }
    void super_polish(QPalette & __arg0)
    {
        QCommonStyle::polish(__arg0);
    }
    
    void unpolish(QWidget * widget)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("unpolish"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, widget);
            return;
        }
        QCommonStyle::unpolish(widget);
    }
    void super_unpolish(QWidget * widget)
    {
        QCommonStyle::unpolish(widget);
    }
    
    int pixelMetric(QStyle::PixelMetric m, const QStyleOption * opt = 0, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("pixelMetric"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, m, opt, widget));
        }
        return QCommonStyle::pixelMetric(m, opt, widget);
    }
    int super_pixelMetric(QStyle::PixelMetric m, const QStyleOption * opt = 0, const QWidget * widget = 0) const
    {
        return QCommonStyle::pixelMetric(m, opt, widget);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    int styleHint(QStyle::StyleHint sh, const QStyleOption * opt = 0, const QWidget * w = 0, QStyleHintReturn * shret = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("styleHint"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, sh, opt, w, shret));
        }
        return QCommonStyle::styleHint(sh, opt, w, shret);
    }
    int super_styleHint(QStyle::StyleHint sh, const QStyleOption * opt = 0, const QWidget * w = 0, QStyleHintReturn * shret = 0) const
    {
        return QCommonStyle::styleHint(sh, opt, w, shret);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    void drawItemPixmap(QPainter * painter, const QRect & rect, int alignment, const QPixmap & pixmap) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawItemPixmap"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, painter, rect, alignment, pixmap);
            return;
        }
        QStyle::drawItemPixmap(painter, rect, alignment, pixmap);
    }
    void super_drawItemPixmap(QPainter * painter, const QRect & rect, int alignment, const QPixmap & pixmap) const
    {
        QStyle::drawItemPixmap(painter, rect, alignment, pixmap);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    QRect itemPixmapRect(const QRect & r, int flags, const QPixmap & pixmap) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemPixmapRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunction(func.get(), this, r, flags, pixmap));
        }
        return QStyle::itemPixmapRect(r, flags, pixmap);
    }
    QRect super_itemPixmapRect(const QRect & r, int flags, const QPixmap & pixmap) const
    {
        return QStyle::itemPixmapRect(r, flags, pixmap);
    }
    
    void drawControl(QStyle::ControlElement element, const QStyleOption * opt, QPainter * p, const QWidget * w = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawControl"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, element, opt, p, w);
            return;
        }
        QCommonStyle::drawControl(element, opt, p, w);
    }
    void super_drawControl(QStyle::ControlElement element, const QStyleOption * opt, QPainter * p, const QWidget * w = 0) const
    {
        QCommonStyle::drawControl(element, opt, p, w);
    }
    
    int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option = 0, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("layoutSpacing"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, control1, control2, orientation, option, widget));
        }
        return QCommonStyle::layoutSpacing(control1, control2, orientation, option, widget);
    }
    int super_layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option = 0, const QWidget * widget = 0) const
    {
        return QCommonStyle::layoutSpacing(control1, control2, orientation, option, widget);
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1));
        }
        return QObject::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QObject::eventFilter(__arg0, __arg1);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QCommonStyle::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QCommonStyle::metaObject();
    }
    
    QPixmap standardPixmap(QStyle::StandardPixmap sp, const QStyleOption * opt = 0, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("standardPixmap"));
        if(func)
        {
            return cpgf::fromVariant<QPixmap >(cpgf::invokeScriptFunction(func.get(), this, sp, opt, widget));
        }
        return QCommonStyle::standardPixmap(sp, opt, widget);
    }
    QPixmap super_standardPixmap(QStyle::StandardPixmap sp, const QStyleOption * opt = 0, const QWidget * widget = 0) const
    {
        return QCommonStyle::standardPixmap(sp, opt, widget);
    }
    
    QRect itemTextRect(const QFontMetrics & fm, const QRect & r, int flags, bool enabled, const QString & text) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemTextRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunction(func.get(), this, fm, r, flags, enabled, text));
        }
        return QStyle::itemTextRect(fm, r, flags, enabled, text);
    }
    QRect super_itemTextRect(const QFontMetrics & fm, const QRect & r, int flags, bool enabled, const QString & text) const
    {
        return QStyle::itemTextRect(fm, r, flags, enabled, text);
    }
    
    void customEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("customEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::customEvent(__arg0);
    }
    void super_customEvent(QEvent * __arg0)
    {
        QObject::customEvent(__arg0);
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2));
        }
        return QCommonStyle::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QCommonStyle::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    void disconnectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("disconnectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::disconnectNotify(signal);
    }
    void super_disconnectNotify(const QMetaMethod & signal)
    {
        QObject::disconnectNotify(signal);
    }
    
    QSize sizeFromContents(QStyle::ContentsType ct, const QStyleOption * opt, const QSize & contentsSize, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeFromContents"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this, ct, opt, contentsSize, widget));
        }
        return QCommonStyle::sizeFromContents(ct, opt, contentsSize, widget);
    }
    QSize super_sizeFromContents(QStyle::ContentsType ct, const QStyleOption * opt, const QSize & contentsSize, const QWidget * widget = 0) const
    {
        return QCommonStyle::sizeFromContents(ct, opt, contentsSize, widget);
    }
    
    QRect subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * w = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("subControlRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunction(func.get(), this, cc, opt, sc, w));
        }
        return QCommonStyle::subControlRect(cc, opt, sc, w);
    }
    QRect super_subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * w = 0) const
    {
        return QCommonStyle::subControlRect(cc, opt, sc, w);
    }
    
    QPalette standardPalette() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("standardPalette"));
        if(func)
        {
            return cpgf::fromVariant<QPalette >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QStyle::standardPalette();
    }
    QPalette super_standardPalette() const
    {
        return QStyle::standardPalette();
    }
};


template <typename D>
void buildMetaClass_QCommonStyleWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    
    _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
    _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
    _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
    _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
    _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
    _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
    _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
    _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
    _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
    _d.CPGF_MD_TEMPLATE _method("super_subElementRect", (QRect (D::ClassType::*) (QStyle::SubElement, const QStyleOption *, const QWidget *) const)&D::ClassType::super_subElementRect)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("super_polish", (void (D::ClassType::*) (QApplication *))&D::ClassType::super_polish);
    _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
    _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
    _d.CPGF_MD_TEMPLATE _method("super_drawPrimitive", (void (D::ClassType::*) (QStyle::PrimitiveElement, const QStyleOption *, QPainter *, const QWidget *) const)&D::ClassType::super_drawPrimitive)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("super_generatedIconPixmap", (QPixmap (D::ClassType::*) (QIcon::Mode, const QPixmap &, const QStyleOption *) const)&D::ClassType::super_generatedIconPixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("super_drawItemText", (void (D::ClassType::*) (QPainter *, const QRect &, int, const QPalette &, bool, const QString &, QPalette::ColorRole) const)&D::ClassType::super_drawItemText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<3>, cpgf::GMetaRuleCopyConstReference<5> >())
        ._default(copyVariantFromCopyable(QPalette::NoRole))
    ;
    _d.CPGF_MD_TEMPLATE _method("super_polish", (void (D::ClassType::*) (QWidget *))&D::ClassType::super_polish);
    _d.CPGF_MD_TEMPLATE _method("super_drawComplexControl", (void (D::ClassType::*) (QStyle::ComplexControl, const QStyleOptionComplex *, QPainter *, const QWidget *) const)&D::ClassType::super_drawComplexControl)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
    _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
    _d.CPGF_MD_TEMPLATE _method("super_standardIcon", (QIcon (D::ClassType::*) (QStyle::StandardPixmap, const QStyleOption *, const QWidget *) const)&D::ClassType::super_standardIcon)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("super_hitTestComplexControl", (QStyle::SubControl (D::ClassType::*) (QStyle::ComplexControl, const QStyleOptionComplex *, const QPoint &, const QWidget *) const)&D::ClassType::super_hitTestComplexControl)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("super_unpolish", (void (D::ClassType::*) (QApplication *))&D::ClassType::super_unpolish);
    _d.CPGF_MD_TEMPLATE _method("super_polish", (void (D::ClassType::*) (QPalette &))&D::ClassType::super_polish);
    _d.CPGF_MD_TEMPLATE _method("super_unpolish", (void (D::ClassType::*) (QWidget *))&D::ClassType::super_unpolish);
    _d.CPGF_MD_TEMPLATE _method("super_pixelMetric", (int (D::ClassType::*) (QStyle::PixelMetric, const QStyleOption *, const QWidget *) const)&D::ClassType::super_pixelMetric)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("super_styleHint", (int (D::ClassType::*) (QStyle::StyleHint, const QStyleOption *, const QWidget *, QStyleHintReturn *) const)&D::ClassType::super_styleHint)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("super_drawItemPixmap", (void (D::ClassType::*) (QPainter *, const QRect &, int, const QPixmap &) const)&D::ClassType::super_drawItemPixmap);
    _d.CPGF_MD_TEMPLATE _method("super_itemPixmapRect", (QRect (D::ClassType::*) (const QRect &, int, const QPixmap &) const)&D::ClassType::super_itemPixmapRect);
    _d.CPGF_MD_TEMPLATE _method("super_drawControl", (void (D::ClassType::*) (QStyle::ControlElement, const QStyleOption *, QPainter *, const QWidget *) const)&D::ClassType::super_drawControl)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("super_layoutSpacing", (int (D::ClassType::*) (QSizePolicy::ControlType, QSizePolicy::ControlType, Qt::Orientation, const QStyleOption *, const QWidget *) const)&D::ClassType::super_layoutSpacing)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
    _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
    _d.CPGF_MD_TEMPLATE _method("super_standardPixmap", (QPixmap (D::ClassType::*) (QStyle::StandardPixmap, const QStyleOption *, const QWidget *) const)&D::ClassType::super_standardPixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("super_itemTextRect", (QRect (D::ClassType::*) (const QFontMetrics &, const QRect &, int, bool, const QString &) const)&D::ClassType::super_itemTextRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<4> >());
    _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
    _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
    _d.CPGF_MD_TEMPLATE _method("super_sizeFromContents", (QSize (D::ClassType::*) (QStyle::ContentsType, const QStyleOption *, const QSize &, const QWidget *) const)&D::ClassType::super_sizeFromContents)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("super_subControlRect", (QRect (D::ClassType::*) (QStyle::ComplexControl, const QStyleOptionComplex *, QStyle::SubControl, const QWidget *) const)&D::ClassType::super_subControlRect)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("super_standardPalette", (QPalette (D::ClassType::*) () const)&D::ClassType::super_standardPalette);
    
    buildMetaClass_QCommonStyle<D>(config, _d);
}


} // namespace meta_qtwidgets




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
