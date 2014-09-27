// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QGRAPHICSEFFECT_H
#define CPGF_META_QTWIDGETS_QGRAPHICSEFFECT_H


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
void buildMetaClass_QGraphicsBlurEffect(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("boundingRectFor", &D::ClassType::boundingRectFor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("blurRadius", &D::ClassType::blurRadius);
    _d.CPGF_MD_TEMPLATE _method("blurHints", &D::ClassType::blurHints);
    _d.CPGF_MD_TEMPLATE _method("setBlurRadius", &D::ClassType::setBlurRadius);
    _d.CPGF_MD_TEMPLATE _method("setBlurHints", &D::ClassType::setBlurHints);
    _d.CPGF_MD_TEMPLATE _method("blurRadiusChanged", &D::ClassType::blurRadiusChanged);
    _d.CPGF_MD_TEMPLATE _method("blurHintsChanged", &D::ClassType::blurHintsChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::BlurHint>("BlurHint")
        ._element("PerformanceHint", D::ClassType::PerformanceHint)
        ._element("QualityHint", D::ClassType::QualityHint)
        ._element("AnimationHint", D::ClassType::AnimationHint)
    ;
    {
        GDefineMetaClass<QFlags<typename QGraphicsBlurEffect::BlurHint > > _t_d = GDefineMetaClass<QFlags<typename QGraphicsBlurEffect::BlurHint > >::lazyDeclare("BlurHints", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QGraphicsBlurEffect::BlurHint > >, typename QGraphicsBlurEffect::BlurHint >);
        _d._class(_t_d);
    }
}


class QGraphicsBlurEffectWrapper : public QGraphicsBlurEffect, public cpgf::GScriptWrapper {
public:
    
    QGraphicsBlurEffectWrapper(QObject * parent = 0)
        : QGraphicsBlurEffect(parent) {}
    
    QPixmap sourcePixmap(Qt::CoordinateSystem system = Qt::LogicalCoordinates, QPoint * offset = 0, QGraphicsEffect::PixmapPadMode mode = QGraphicsEffect::PadToEffectiveBoundingRect) const
    {
        return QGraphicsEffect::sourcePixmap(system, offset, mode);
    }
    
    void sourceChanged(QGraphicsEffect::ChangeFlags flags)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sourceChanged"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, flags);
            return;
        }
        QGraphicsEffect::sourceChanged(flags);
    }
    void super_sourceChanged(QGraphicsEffect::ChangeFlags flags)
    {
        QGraphicsEffect::sourceChanged(flags);
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
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    QObject * sender() const
    {
        return QObject::sender();
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
    
    void draw(QPainter * painter)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("draw"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter);
            return;
        }
        QGraphicsBlurEffect::draw(painter);
    }
    void super_draw(QPainter * painter)
    {
        QGraphicsBlurEffect::draw(painter);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QGraphicsBlurEffect::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QGraphicsBlurEffect::qt_metacast(__arg0);
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QObject::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QObject::event(__arg0);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void drawSource(QPainter * painter)
    {
        QGraphicsEffect::drawSource(painter);
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
    
    QRectF boundingRectFor(const QRectF & rect) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRectFor"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this, rect).getValue());
        }
        return QGraphicsBlurEffect::boundingRectFor(rect);
    }
    QRectF super_boundingRectFor(const QRectF & rect) const
    {
        return QGraphicsBlurEffect::boundingRectFor(rect);
    }
    
    bool sourceIsPixmap() const
    {
        return QGraphicsEffect::sourceIsPixmap();
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
    
    void updateBoundingRect()
    {
        QGraphicsEffect::updateBoundingRect();
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsBlurEffect::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QGraphicsBlurEffect::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QGraphicsBlurEffect::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QGraphicsBlurEffect::qt_metacall(__arg0, __arg1, __arg2);
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
    
    QRectF sourceBoundingRect(Qt::CoordinateSystem system = Qt::LogicalCoordinates) const
    {
        return QGraphicsEffect::sourceBoundingRect(system);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("sourcePixmap", (QPixmap (D::ClassType::*) (Qt::CoordinateSystem, QPoint *, QGraphicsEffect::PixmapPadMode) const)&D::ClassType::sourcePixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
            ._default(copyVariantFromCopyable(QGraphicsEffect::PadToEffectiveBoundingRect))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(Qt::LogicalCoordinates))
        ;
        _d.CPGF_MD_TEMPLATE _method("sourceChanged", (void (D::ClassType::*) (QGraphicsEffect::ChangeFlags))&D::ClassType::sourceChanged);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("draw", (void (D::ClassType::*) (QPainter *))&D::ClassType::draw);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("drawSource", (void (D::ClassType::*) (QPainter *))&D::ClassType::drawSource);
        _d.CPGF_MD_TEMPLATE _method("sourceIsPixmap", (bool (D::ClassType::*) () const)&D::ClassType::sourceIsPixmap);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("updateBoundingRect", (void (D::ClassType::*) ())&D::ClassType::updateBoundingRect);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("sourceBoundingRect", (QRectF (D::ClassType::*) (Qt::CoordinateSystem) const)&D::ClassType::sourceBoundingRect)
            ._default(copyVariantFromCopyable(Qt::LogicalCoordinates))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_sourceChanged", (void (D::ClassType::*) (QGraphicsEffect::ChangeFlags))&D::ClassType::super_sourceChanged);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_draw", (void (D::ClassType::*) (QPainter *))&D::ClassType::super_draw);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_boundingRectFor", (QRectF (D::ClassType::*) (const QRectF &) const)&D::ClassType::super_boundingRectFor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
    }
};


template <typename D>
void buildMetaClass_QGraphicsBlurEffectWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGraphicsBlurEffectWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsBlurEffect<D>(_d);
}


template <typename D>
void buildMetaClass_QGraphicsColorizeEffect(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("color", &D::ClassType::color);
    _d.CPGF_MD_TEMPLATE _method("strength", &D::ClassType::strength);
    _d.CPGF_MD_TEMPLATE _method("setColor", &D::ClassType::setColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setStrength", &D::ClassType::setStrength);
    _d.CPGF_MD_TEMPLATE _method("colorChanged", &D::ClassType::colorChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("strengthChanged", &D::ClassType::strengthChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QGraphicsColorizeEffectWrapper : public QGraphicsColorizeEffect, public cpgf::GScriptWrapper {
public:
    
    QGraphicsColorizeEffectWrapper(QObject * parent = 0)
        : QGraphicsColorizeEffect(parent) {}
    
    QPixmap sourcePixmap(Qt::CoordinateSystem system = Qt::LogicalCoordinates, QPoint * offset = 0, QGraphicsEffect::PixmapPadMode mode = QGraphicsEffect::PadToEffectiveBoundingRect) const
    {
        return QGraphicsEffect::sourcePixmap(system, offset, mode);
    }
    
    void sourceChanged(QGraphicsEffect::ChangeFlags flags)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sourceChanged"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, flags);
            return;
        }
        QGraphicsEffect::sourceChanged(flags);
    }
    void super_sourceChanged(QGraphicsEffect::ChangeFlags flags)
    {
        QGraphicsEffect::sourceChanged(flags);
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
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    QObject * sender() const
    {
        return QObject::sender();
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
    
    void draw(QPainter * painter)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("draw"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter);
            return;
        }
        QGraphicsColorizeEffect::draw(painter);
    }
    void super_draw(QPainter * painter)
    {
        QGraphicsColorizeEffect::draw(painter);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QGraphicsColorizeEffect::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QGraphicsColorizeEffect::qt_metacast(__arg0);
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QObject::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QObject::event(__arg0);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void drawSource(QPainter * painter)
    {
        QGraphicsEffect::drawSource(painter);
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
    
    QRectF boundingRectFor(const QRectF & sourceRect) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRectFor"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this, sourceRect).getValue());
        }
        return QGraphicsEffect::boundingRectFor(sourceRect);
    }
    QRectF super_boundingRectFor(const QRectF & sourceRect) const
    {
        return QGraphicsEffect::boundingRectFor(sourceRect);
    }
    
    bool sourceIsPixmap() const
    {
        return QGraphicsEffect::sourceIsPixmap();
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
    
    void updateBoundingRect()
    {
        QGraphicsEffect::updateBoundingRect();
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsColorizeEffect::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QGraphicsColorizeEffect::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QGraphicsColorizeEffect::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QGraphicsColorizeEffect::qt_metacall(__arg0, __arg1, __arg2);
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
    
    QRectF sourceBoundingRect(Qt::CoordinateSystem system = Qt::LogicalCoordinates) const
    {
        return QGraphicsEffect::sourceBoundingRect(system);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("sourcePixmap", (QPixmap (D::ClassType::*) (Qt::CoordinateSystem, QPoint *, QGraphicsEffect::PixmapPadMode) const)&D::ClassType::sourcePixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
            ._default(copyVariantFromCopyable(QGraphicsEffect::PadToEffectiveBoundingRect))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(Qt::LogicalCoordinates))
        ;
        _d.CPGF_MD_TEMPLATE _method("sourceChanged", (void (D::ClassType::*) (QGraphicsEffect::ChangeFlags))&D::ClassType::sourceChanged);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("draw", (void (D::ClassType::*) (QPainter *))&D::ClassType::draw);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("drawSource", (void (D::ClassType::*) (QPainter *))&D::ClassType::drawSource);
        _d.CPGF_MD_TEMPLATE _method("sourceIsPixmap", (bool (D::ClassType::*) () const)&D::ClassType::sourceIsPixmap);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("updateBoundingRect", (void (D::ClassType::*) ())&D::ClassType::updateBoundingRect);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("sourceBoundingRect", (QRectF (D::ClassType::*) (Qt::CoordinateSystem) const)&D::ClassType::sourceBoundingRect)
            ._default(copyVariantFromCopyable(Qt::LogicalCoordinates))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_sourceChanged", (void (D::ClassType::*) (QGraphicsEffect::ChangeFlags))&D::ClassType::super_sourceChanged);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_draw", (void (D::ClassType::*) (QPainter *))&D::ClassType::super_draw);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_boundingRectFor", (QRectF (D::ClassType::*) (const QRectF &) const)&D::ClassType::super_boundingRectFor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
    }
};


template <typename D>
void buildMetaClass_QGraphicsColorizeEffectWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGraphicsColorizeEffectWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsColorizeEffect<D>(_d);
}


template <typename D>
void buildMetaClass_QGraphicsDropShadowEffect(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("boundingRectFor", &D::ClassType::boundingRectFor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("offset", &D::ClassType::offset);
    _d.CPGF_MD_TEMPLATE _method("xOffset", &D::ClassType::xOffset);
    _d.CPGF_MD_TEMPLATE _method("yOffset", &D::ClassType::yOffset);
    _d.CPGF_MD_TEMPLATE _method("blurRadius", &D::ClassType::blurRadius);
    _d.CPGF_MD_TEMPLATE _method("color", &D::ClassType::color);
    _d.CPGF_MD_TEMPLATE _method("setOffset", (void (D::ClassType::*) (const QPointF &))&D::ClassType::setOffset, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setOffset", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::setOffset);
    _d.CPGF_MD_TEMPLATE _method("setOffset", (void (D::ClassType::*) (qreal))&D::ClassType::setOffset);
    _d.CPGF_MD_TEMPLATE _method("setXOffset", &D::ClassType::setXOffset);
    _d.CPGF_MD_TEMPLATE _method("setYOffset", &D::ClassType::setYOffset);
    _d.CPGF_MD_TEMPLATE _method("setBlurRadius", &D::ClassType::setBlurRadius);
    _d.CPGF_MD_TEMPLATE _method("setColor", &D::ClassType::setColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("offsetChanged", &D::ClassType::offsetChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("blurRadiusChanged", &D::ClassType::blurRadiusChanged);
    _d.CPGF_MD_TEMPLATE _method("colorChanged", &D::ClassType::colorChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QGraphicsDropShadowEffectWrapper : public QGraphicsDropShadowEffect, public cpgf::GScriptWrapper {
public:
    
    QGraphicsDropShadowEffectWrapper(QObject * parent = 0)
        : QGraphicsDropShadowEffect(parent) {}
    
    QPixmap sourcePixmap(Qt::CoordinateSystem system = Qt::LogicalCoordinates, QPoint * offset = 0, QGraphicsEffect::PixmapPadMode mode = QGraphicsEffect::PadToEffectiveBoundingRect) const
    {
        return QGraphicsEffect::sourcePixmap(system, offset, mode);
    }
    
    void sourceChanged(QGraphicsEffect::ChangeFlags flags)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sourceChanged"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, flags);
            return;
        }
        QGraphicsEffect::sourceChanged(flags);
    }
    void super_sourceChanged(QGraphicsEffect::ChangeFlags flags)
    {
        QGraphicsEffect::sourceChanged(flags);
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
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    QObject * sender() const
    {
        return QObject::sender();
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
    
    void draw(QPainter * painter)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("draw"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter);
            return;
        }
        QGraphicsDropShadowEffect::draw(painter);
    }
    void super_draw(QPainter * painter)
    {
        QGraphicsDropShadowEffect::draw(painter);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QGraphicsDropShadowEffect::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QGraphicsDropShadowEffect::qt_metacast(__arg0);
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QObject::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QObject::event(__arg0);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void drawSource(QPainter * painter)
    {
        QGraphicsEffect::drawSource(painter);
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
    
    QRectF boundingRectFor(const QRectF & rect) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRectFor"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this, rect).getValue());
        }
        return QGraphicsDropShadowEffect::boundingRectFor(rect);
    }
    QRectF super_boundingRectFor(const QRectF & rect) const
    {
        return QGraphicsDropShadowEffect::boundingRectFor(rect);
    }
    
    bool sourceIsPixmap() const
    {
        return QGraphicsEffect::sourceIsPixmap();
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
    
    void updateBoundingRect()
    {
        QGraphicsEffect::updateBoundingRect();
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsDropShadowEffect::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QGraphicsDropShadowEffect::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QGraphicsDropShadowEffect::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QGraphicsDropShadowEffect::qt_metacall(__arg0, __arg1, __arg2);
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
    
    QRectF sourceBoundingRect(Qt::CoordinateSystem system = Qt::LogicalCoordinates) const
    {
        return QGraphicsEffect::sourceBoundingRect(system);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("sourcePixmap", (QPixmap (D::ClassType::*) (Qt::CoordinateSystem, QPoint *, QGraphicsEffect::PixmapPadMode) const)&D::ClassType::sourcePixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
            ._default(copyVariantFromCopyable(QGraphicsEffect::PadToEffectiveBoundingRect))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(Qt::LogicalCoordinates))
        ;
        _d.CPGF_MD_TEMPLATE _method("sourceChanged", (void (D::ClassType::*) (QGraphicsEffect::ChangeFlags))&D::ClassType::sourceChanged);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("draw", (void (D::ClassType::*) (QPainter *))&D::ClassType::draw);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("drawSource", (void (D::ClassType::*) (QPainter *))&D::ClassType::drawSource);
        _d.CPGF_MD_TEMPLATE _method("sourceIsPixmap", (bool (D::ClassType::*) () const)&D::ClassType::sourceIsPixmap);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("updateBoundingRect", (void (D::ClassType::*) ())&D::ClassType::updateBoundingRect);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("sourceBoundingRect", (QRectF (D::ClassType::*) (Qt::CoordinateSystem) const)&D::ClassType::sourceBoundingRect)
            ._default(copyVariantFromCopyable(Qt::LogicalCoordinates))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_sourceChanged", (void (D::ClassType::*) (QGraphicsEffect::ChangeFlags))&D::ClassType::super_sourceChanged);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_draw", (void (D::ClassType::*) (QPainter *))&D::ClassType::super_draw);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_boundingRectFor", (QRectF (D::ClassType::*) (const QRectF &) const)&D::ClassType::super_boundingRectFor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
    }
};


template <typename D>
void buildMetaClass_QGraphicsDropShadowEffectWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGraphicsDropShadowEffectWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsDropShadowEffect<D>(_d);
}


template <typename D>
void buildMetaClass_QGraphicsEffect(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("boundingRectFor", &D::ClassType::boundingRectFor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("isEnabled", &D::ClassType::isEnabled);
    _d.CPGF_MD_TEMPLATE _method("setEnabled", &D::ClassType::setEnabled);
    _d.CPGF_MD_TEMPLATE _method("update", &D::ClassType::update);
    _d.CPGF_MD_TEMPLATE _method("enabledChanged", &D::ClassType::enabledChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ChangeFlag>("ChangeFlag")
        ._element("SourceAttached", D::ClassType::SourceAttached)
        ._element("SourceDetached", D::ClassType::SourceDetached)
        ._element("SourceBoundingRectChanged", D::ClassType::SourceBoundingRectChanged)
        ._element("SourceInvalidated", D::ClassType::SourceInvalidated)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::PixmapPadMode>("PixmapPadMode")
        ._element("NoPad", D::ClassType::NoPad)
        ._element("PadToTransparentBorder", D::ClassType::PadToTransparentBorder)
        ._element("PadToEffectiveBoundingRect", D::ClassType::PadToEffectiveBoundingRect)
    ;
    {
        GDefineMetaClass<QFlags<typename QGraphicsEffect::ChangeFlag > > _t_d = GDefineMetaClass<QFlags<typename QGraphicsEffect::ChangeFlag > >::lazyDeclare("ChangeFlags", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QGraphicsEffect::ChangeFlag > >, typename QGraphicsEffect::ChangeFlag >);
        _d._class(_t_d);
    }
}


class QGraphicsEffectWrapper : public QGraphicsEffect, public cpgf::GScriptWrapper {
public:
    
    QGraphicsEffectWrapper(QObject * parent = 0)
        : QGraphicsEffect(parent) {}
    
    QPixmap sourcePixmap(Qt::CoordinateSystem system = Qt::LogicalCoordinates, QPoint * offset = 0, QGraphicsEffect::PixmapPadMode mode = QGraphicsEffect::PadToEffectiveBoundingRect) const
    {
        return QGraphicsEffect::sourcePixmap(system, offset, mode);
    }
    
    void sourceChanged(QGraphicsEffect::ChangeFlags flags)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sourceChanged"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, flags);
            return;
        }
        QGraphicsEffect::sourceChanged(flags);
    }
    void super_sourceChanged(QGraphicsEffect::ChangeFlags flags)
    {
        QGraphicsEffect::sourceChanged(flags);
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
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    QObject * sender() const
    {
        return QObject::sender();
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
    
    void draw(QPainter * painter)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("draw"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_draw(QPainter * painter)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QGraphicsEffect::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QGraphicsEffect::qt_metacast(__arg0);
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QObject::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QObject::event(__arg0);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void drawSource(QPainter * painter)
    {
        QGraphicsEffect::drawSource(painter);
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
    
    QRectF boundingRectFor(const QRectF & sourceRect) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRectFor"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this, sourceRect).getValue());
        }
        return QGraphicsEffect::boundingRectFor(sourceRect);
    }
    QRectF super_boundingRectFor(const QRectF & sourceRect) const
    {
        return QGraphicsEffect::boundingRectFor(sourceRect);
    }
    
    bool sourceIsPixmap() const
    {
        return QGraphicsEffect::sourceIsPixmap();
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
    
    void updateBoundingRect()
    {
        QGraphicsEffect::updateBoundingRect();
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsEffect::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QGraphicsEffect::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QGraphicsEffect::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QGraphicsEffect::qt_metacall(__arg0, __arg1, __arg2);
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
    
    QRectF sourceBoundingRect(Qt::CoordinateSystem system = Qt::LogicalCoordinates) const
    {
        return QGraphicsEffect::sourceBoundingRect(system);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("sourcePixmap", (QPixmap (D::ClassType::*) (Qt::CoordinateSystem, QPoint *, QGraphicsEffect::PixmapPadMode) const)&D::ClassType::sourcePixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
            ._default(copyVariantFromCopyable(QGraphicsEffect::PadToEffectiveBoundingRect))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(Qt::LogicalCoordinates))
        ;
        _d.CPGF_MD_TEMPLATE _method("sourceChanged", (void (D::ClassType::*) (QGraphicsEffect::ChangeFlags))&D::ClassType::sourceChanged);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("draw", (void (D::ClassType::*) (QPainter *))&D::ClassType::draw);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("drawSource", (void (D::ClassType::*) (QPainter *))&D::ClassType::drawSource);
        _d.CPGF_MD_TEMPLATE _method("sourceIsPixmap", (bool (D::ClassType::*) () const)&D::ClassType::sourceIsPixmap);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("updateBoundingRect", (void (D::ClassType::*) ())&D::ClassType::updateBoundingRect);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("sourceBoundingRect", (QRectF (D::ClassType::*) (Qt::CoordinateSystem) const)&D::ClassType::sourceBoundingRect)
            ._default(copyVariantFromCopyable(Qt::LogicalCoordinates))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_sourceChanged", (void (D::ClassType::*) (QGraphicsEffect::ChangeFlags))&D::ClassType::super_sourceChanged);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_draw", (void (D::ClassType::*) (QPainter *))&D::ClassType::super_draw);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_boundingRectFor", (QRectF (D::ClassType::*) (const QRectF &) const)&D::ClassType::super_boundingRectFor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
    }
};


template <typename D>
void buildMetaClass_QGraphicsEffectWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    
    QGraphicsEffectWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsEffect<D>(_d);
}


template <typename D>
void buildMetaClass_QGraphicsOpacityEffect(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("opacity", &D::ClassType::opacity);
    _d.CPGF_MD_TEMPLATE _method("opacityMask", &D::ClassType::opacityMask);
    _d.CPGF_MD_TEMPLATE _method("setOpacity", &D::ClassType::setOpacity);
    _d.CPGF_MD_TEMPLATE _method("setOpacityMask", &D::ClassType::setOpacityMask, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("opacityChanged", &D::ClassType::opacityChanged);
    _d.CPGF_MD_TEMPLATE _method("opacityMaskChanged", &D::ClassType::opacityMaskChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QGraphicsOpacityEffectWrapper : public QGraphicsOpacityEffect, public cpgf::GScriptWrapper {
public:
    
    QGraphicsOpacityEffectWrapper(QObject * parent = 0)
        : QGraphicsOpacityEffect(parent) {}
    
    QPixmap sourcePixmap(Qt::CoordinateSystem system = Qt::LogicalCoordinates, QPoint * offset = 0, QGraphicsEffect::PixmapPadMode mode = QGraphicsEffect::PadToEffectiveBoundingRect) const
    {
        return QGraphicsEffect::sourcePixmap(system, offset, mode);
    }
    
    void sourceChanged(QGraphicsEffect::ChangeFlags flags)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sourceChanged"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, flags);
            return;
        }
        QGraphicsEffect::sourceChanged(flags);
    }
    void super_sourceChanged(QGraphicsEffect::ChangeFlags flags)
    {
        QGraphicsEffect::sourceChanged(flags);
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
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    QObject * sender() const
    {
        return QObject::sender();
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
    
    void draw(QPainter * painter)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("draw"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter);
            return;
        }
        QGraphicsOpacityEffect::draw(painter);
    }
    void super_draw(QPainter * painter)
    {
        QGraphicsOpacityEffect::draw(painter);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QGraphicsOpacityEffect::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QGraphicsOpacityEffect::qt_metacast(__arg0);
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QObject::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QObject::event(__arg0);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void drawSource(QPainter * painter)
    {
        QGraphicsEffect::drawSource(painter);
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
    
    QRectF boundingRectFor(const QRectF & sourceRect) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRectFor"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this, sourceRect).getValue());
        }
        return QGraphicsEffect::boundingRectFor(sourceRect);
    }
    QRectF super_boundingRectFor(const QRectF & sourceRect) const
    {
        return QGraphicsEffect::boundingRectFor(sourceRect);
    }
    
    bool sourceIsPixmap() const
    {
        return QGraphicsEffect::sourceIsPixmap();
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
    
    void updateBoundingRect()
    {
        QGraphicsEffect::updateBoundingRect();
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsOpacityEffect::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QGraphicsOpacityEffect::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QGraphicsOpacityEffect::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QGraphicsOpacityEffect::qt_metacall(__arg0, __arg1, __arg2);
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
    
    QRectF sourceBoundingRect(Qt::CoordinateSystem system = Qt::LogicalCoordinates) const
    {
        return QGraphicsEffect::sourceBoundingRect(system);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("sourcePixmap", (QPixmap (D::ClassType::*) (Qt::CoordinateSystem, QPoint *, QGraphicsEffect::PixmapPadMode) const)&D::ClassType::sourcePixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
            ._default(copyVariantFromCopyable(QGraphicsEffect::PadToEffectiveBoundingRect))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(Qt::LogicalCoordinates))
        ;
        _d.CPGF_MD_TEMPLATE _method("sourceChanged", (void (D::ClassType::*) (QGraphicsEffect::ChangeFlags))&D::ClassType::sourceChanged);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("draw", (void (D::ClassType::*) (QPainter *))&D::ClassType::draw);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("drawSource", (void (D::ClassType::*) (QPainter *))&D::ClassType::drawSource);
        _d.CPGF_MD_TEMPLATE _method("sourceIsPixmap", (bool (D::ClassType::*) () const)&D::ClassType::sourceIsPixmap);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("updateBoundingRect", (void (D::ClassType::*) ())&D::ClassType::updateBoundingRect);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("sourceBoundingRect", (QRectF (D::ClassType::*) (Qt::CoordinateSystem) const)&D::ClassType::sourceBoundingRect)
            ._default(copyVariantFromCopyable(Qt::LogicalCoordinates))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_sourceChanged", (void (D::ClassType::*) (QGraphicsEffect::ChangeFlags))&D::ClassType::super_sourceChanged);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_draw", (void (D::ClassType::*) (QPainter *))&D::ClassType::super_draw);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_boundingRectFor", (QRectF (D::ClassType::*) (const QRectF &) const)&D::ClassType::super_boundingRectFor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
    }
};


template <typename D>
void buildMetaClass_QGraphicsOpacityEffectWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGraphicsOpacityEffectWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsOpacityEffect<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
