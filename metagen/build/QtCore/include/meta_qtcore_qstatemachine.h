// Auto generated file, don't modify.

#ifndef __META_QTCORE_QSTATEMACHINE_H
#define __META_QTCORE_QSTATEMACHINE_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_QStateMachine(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QState::ChildMode, QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("addState", &D::ClassType::addState);
    _d.CPGF_MD_TEMPLATE _method("removeState", &D::ClassType::removeState);
    _d.CPGF_MD_TEMPLATE _method("error", &D::ClassType::error);
    _d.CPGF_MD_TEMPLATE _method("errorString", &D::ClassType::errorString);
    _d.CPGF_MD_TEMPLATE _method("clearError", &D::ClassType::clearError);
    _d.CPGF_MD_TEMPLATE _method("isRunning", &D::ClassType::isRunning);
    _d.CPGF_MD_TEMPLATE _method("isAnimated", &D::ClassType::isAnimated);
    _d.CPGF_MD_TEMPLATE _method("setAnimated", &D::ClassType::setAnimated);
    _d.CPGF_MD_TEMPLATE _method("addDefaultAnimation", &D::ClassType::addDefaultAnimation);
    _d.CPGF_MD_TEMPLATE _method("defaultAnimations", &D::ClassType::defaultAnimations);
    _d.CPGF_MD_TEMPLATE _method("removeDefaultAnimation", &D::ClassType::removeDefaultAnimation);
    _d.CPGF_MD_TEMPLATE _method("globalRestorePolicy", &D::ClassType::globalRestorePolicy);
    _d.CPGF_MD_TEMPLATE _method("setGlobalRestorePolicy", &D::ClassType::setGlobalRestorePolicy);
    _d.CPGF_MD_TEMPLATE _method("postEvent", &D::ClassType::postEvent)
        ._default(copyVariantFromCopyable(QStateMachine::NormalPriority))
    ;
    _d.CPGF_MD_TEMPLATE _method("postDelayedEvent", &D::ClassType::postDelayedEvent);
    _d.CPGF_MD_TEMPLATE _method("cancelDelayedEvent", &D::ClassType::cancelDelayedEvent);
    _d.CPGF_MD_TEMPLATE _method("configuration", &D::ClassType::configuration);
    _d.CPGF_MD_TEMPLATE _method("eventFilter", &D::ClassType::eventFilter);
    _d.CPGF_MD_TEMPLATE _method("start", &D::ClassType::start);
    _d.CPGF_MD_TEMPLATE _method("stop", &D::ClassType::stop);
    _d.CPGF_MD_TEMPLATE _method("started", &D::ClassType::started);
    _d.CPGF_MD_TEMPLATE _method("stopped", &D::ClassType::stopped);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::EventPriority>("EventPriority")
        ._element("NormalPriority", D::ClassType::NormalPriority)
        ._element("HighPriority", D::ClassType::HighPriority)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Error>("Error")
        ._element("NoError", D::ClassType::NoError)
        ._element("NoInitialStateError", D::ClassType::NoInitialStateError)
        ._element("NoDefaultStateInHistoryStateError", D::ClassType::NoDefaultStateInHistoryStateError)
        ._element("NoCommonAncestorForTransitionError", D::ClassType::NoCommonAncestorForTransitionError)
    ;
    {
        GDefineMetaClass<QStateMachine::SignalEvent, QEvent> _nd = GDefineMetaClass<QStateMachine::SignalEvent, QEvent>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent> >::declare("SignalEvent");
        _nd.CPGF_MD_TEMPLATE _constructor<void * (QObject *, int, const QList< QVariant > &)>();
        _nd.CPGF_MD_TEMPLATE _method("sender", &QStateMachine::SignalEvent::sender);
        _nd.CPGF_MD_TEMPLATE _method("signalIndex", &QStateMachine::SignalEvent::signalIndex);
        _nd.CPGF_MD_TEMPLATE _method("arguments", &QStateMachine::SignalEvent::arguments);
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
    {
        GDefineMetaClass<QStateMachine::WrappedEvent, QEvent> _nd = GDefineMetaClass<QStateMachine::WrappedEvent, QEvent>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent> >::declare("WrappedEvent");
        _nd.CPGF_MD_TEMPLATE _constructor<void * (QObject *, QEvent *)>();
        _nd.CPGF_MD_TEMPLATE _method("object", &QStateMachine::WrappedEvent::object);
        _nd.CPGF_MD_TEMPLATE _method("event", &QStateMachine::WrappedEvent::event);
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


class QStateMachineWrapper : public QStateMachine, public cpgf::GScriptWrapper {
public:
    
    QStateMachineWrapper(QObject * parent = 0)
        : QStateMachine(parent) {}
    
    QStateMachineWrapper(QState::ChildMode childMode, QObject * parent = 0)
        : QStateMachine(childMode, parent) {}
    
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
    
    void beginMicrostep(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("beginMicrostep"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QStateMachine::beginMicrostep(event);
    }
    void super_beginMicrostep(QEvent * event)
    {
        QStateMachine::beginMicrostep(event);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
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
    
    void onExit(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("onExit"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QStateMachine::onExit(event);
    }
    void super_onExit(QEvent * event)
    {
        QStateMachine::onExit(event);
    }
    
    void endMicrostep(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("endMicrostep"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QStateMachine::endMicrostep(event);
    }
    void super_endMicrostep(QEvent * event)
    {
        QStateMachine::endMicrostep(event);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    void beginSelectTransitions(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("beginSelectTransitions"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QStateMachine::beginSelectTransitions(event);
    }
    void super_beginSelectTransitions(QEvent * event)
    {
        QStateMachine::beginSelectTransitions(event);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    void endSelectTransitions(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("endSelectTransitions"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QStateMachine::endSelectTransitions(event);
    }
    void super_endSelectTransitions(QEvent * event)
    {
        QStateMachine::endSelectTransitions(event);
    }
    
    void onEntry(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("onEntry"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QStateMachine::onEntry(event);
    }
    void super_onEntry(QEvent * event)
    {
        QStateMachine::onEntry(event);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QStateMachine::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QStateMachine::qt_metacast(__arg0);
    }
    
    bool eventFilter(QObject * watched, QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, watched, event));
        }
        return QStateMachine::eventFilter(watched, event);
    }
    bool super_eventFilter(QObject * watched, QEvent * event)
    {
        return QStateMachine::eventFilter(watched, event);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QStateMachine::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QStateMachine::metaObject();
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
    
    bool event(QEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, e));
        }
        return QStateMachine::event(e);
    }
    bool super_event(QEvent * e)
    {
        return QStateMachine::event(e);
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2));
        }
        return QStateMachine::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QStateMachine::qt_metacall(__arg0, __arg1, __arg2);
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
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("beginMicrostep", (void (D::ClassType::*) (QEvent *))&D::ClassType::beginMicrostep);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("onExit", (void (D::ClassType::*) (QEvent *))&D::ClassType::onExit);
        _d.CPGF_MD_TEMPLATE _method("endMicrostep", (void (D::ClassType::*) (QEvent *))&D::ClassType::endMicrostep);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("beginSelectTransitions", (void (D::ClassType::*) (QEvent *))&D::ClassType::beginSelectTransitions);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("endSelectTransitions", (void (D::ClassType::*) (QEvent *))&D::ClassType::endSelectTransitions);
        _d.CPGF_MD_TEMPLATE _method("onEntry", (void (D::ClassType::*) (QEvent *))&D::ClassType::onEntry);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::event);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_beginMicrostep", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_beginMicrostep);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_onExit", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_onExit);
        _d.CPGF_MD_TEMPLATE _method("super_endMicrostep", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_endMicrostep);
        _d.CPGF_MD_TEMPLATE _method("super_beginSelectTransitions", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_beginSelectTransitions);
        _d.CPGF_MD_TEMPLATE _method("super_endSelectTransitions", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_endSelectTransitions);
        _d.CPGF_MD_TEMPLATE _method("super_onEntry", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_onEntry);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
    }
};


template <typename D>
void buildMetaClass_QStateMachineWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QStateMachineWrapper::cpgf__register(_d);
    
    buildMetaClass_QStateMachine<D>(_d);
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
