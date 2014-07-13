// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QTIMELINE_H
#define CPGF_META_QTCORE_QTIMELINE_H


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
void buildMetaClass_QTimeLine(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, QObject *)>()
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(1000))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("state", &D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _method("loopCount", &D::ClassType::loopCount);
    _d.CPGF_MD_TEMPLATE _method("setLoopCount", &D::ClassType::setLoopCount);
    _d.CPGF_MD_TEMPLATE _method("direction", &D::ClassType::direction);
    _d.CPGF_MD_TEMPLATE _method("setDirection", &D::ClassType::setDirection);
    _d.CPGF_MD_TEMPLATE _method("duration", &D::ClassType::duration);
    _d.CPGF_MD_TEMPLATE _method("setDuration", &D::ClassType::setDuration);
    _d.CPGF_MD_TEMPLATE _method("startFrame", &D::ClassType::startFrame);
    _d.CPGF_MD_TEMPLATE _method("setStartFrame", &D::ClassType::setStartFrame);
    _d.CPGF_MD_TEMPLATE _method("endFrame", &D::ClassType::endFrame);
    _d.CPGF_MD_TEMPLATE _method("setEndFrame", &D::ClassType::setEndFrame);
    _d.CPGF_MD_TEMPLATE _method("setFrameRange", &D::ClassType::setFrameRange);
    _d.CPGF_MD_TEMPLATE _method("updateInterval", &D::ClassType::updateInterval);
    _d.CPGF_MD_TEMPLATE _method("setUpdateInterval", &D::ClassType::setUpdateInterval);
    _d.CPGF_MD_TEMPLATE _method("curveShape", &D::ClassType::curveShape);
    _d.CPGF_MD_TEMPLATE _method("setCurveShape", &D::ClassType::setCurveShape);
    _d.CPGF_MD_TEMPLATE _method("easingCurve", &D::ClassType::easingCurve);
    _d.CPGF_MD_TEMPLATE _method("setEasingCurve", &D::ClassType::setEasingCurve);
    _d.CPGF_MD_TEMPLATE _method("currentTime", &D::ClassType::currentTime);
    _d.CPGF_MD_TEMPLATE _method("currentFrame", &D::ClassType::currentFrame);
    _d.CPGF_MD_TEMPLATE _method("currentValue", &D::ClassType::currentValue);
    _d.CPGF_MD_TEMPLATE _method("frameForTime", &D::ClassType::frameForTime);
    _d.CPGF_MD_TEMPLATE _method("valueForTime", &D::ClassType::valueForTime);
    _d.CPGF_MD_TEMPLATE _method("start", &D::ClassType::start);
    _d.CPGF_MD_TEMPLATE _method("resume", &D::ClassType::resume);
    _d.CPGF_MD_TEMPLATE _method("stop", &D::ClassType::stop);
    _d.CPGF_MD_TEMPLATE _method("setPaused", &D::ClassType::setPaused);
    _d.CPGF_MD_TEMPLATE _method("setCurrentTime", &D::ClassType::setCurrentTime);
    _d.CPGF_MD_TEMPLATE _method("toggleDirection", &D::ClassType::toggleDirection);
    _d.CPGF_MD_TEMPLATE _method("valueChanged", &D::ClassType::valueChanged);
    _d.CPGF_MD_TEMPLATE _method("frameChanged", &D::ClassType::frameChanged);
    _d.CPGF_MD_TEMPLATE _method("stateChanged", &D::ClassType::stateChanged);
    _d.CPGF_MD_TEMPLATE _method("finished", &D::ClassType::finished);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::State>("State")
        ._element("NotRunning", D::ClassType::NotRunning)
        ._element("Paused", D::ClassType::Paused)
        ._element("Running", D::ClassType::Running)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Direction>("Direction")
        ._element("Forward", D::ClassType::Forward)
        ._element("Backward", D::ClassType::Backward)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::CurveShape>("CurveShape")
        ._element("EaseInCurve", D::ClassType::EaseInCurve)
        ._element("EaseOutCurve", D::ClassType::EaseOutCurve)
        ._element("EaseInOutCurve", D::ClassType::EaseInOutCurve)
        ._element("LinearCurve", D::ClassType::LinearCurve)
        ._element("SineCurve", D::ClassType::SineCurve)
        ._element("CosineCurve", D::ClassType::CosineCurve)
    ;
}


class QTimeLineWrapper : public QTimeLine, public cpgf::GScriptWrapper {
public:
    
    QTimeLineWrapper(int duration = 1000, QObject * parent = 0)
        : QTimeLine(duration, parent) {}
    
    qreal valueForTime(int msec) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("valueForTime"));
        if(func)
        {
            return cpgf::fromVariant<qreal >(cpgf::invokeScriptFunctionOnObject(func.get(), this, msec).getValue());
        }
        return QTimeLine::valueForTime(msec);
    }
    qreal super_valueForTime(int msec) const
    {
        return QTimeLine::valueForTime(msec);
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
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QTimeLine::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QTimeLine::qt_metacast(__arg0);
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
    
    void timerEvent(QTimerEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QTimeLine::timerEvent(event);
    }
    void super_timerEvent(QTimerEvent * event)
    {
        QTimeLine::timerEvent(event);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QTimeLine::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QTimeLine::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QTimeLine::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QTimeLine::qt_metacall(__arg0, __arg1, __arg2);
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
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_valueForTime", (qreal (D::ClassType::*) (int) const)&D::ClassType::super_valueForTime);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
    }
};


template <typename D>
void buildMetaClass_QTimeLineWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QTimeLineWrapper::cpgf__register(_d);
    
    buildMetaClass_QTimeLine<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
