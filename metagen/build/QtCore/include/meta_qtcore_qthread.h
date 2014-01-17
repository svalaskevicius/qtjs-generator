// Auto generated file, don't modify.

#ifndef __META_QTCORE_QTHREAD_H
#define __META_QTCORE_QTHREAD_H


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
void buildMetaClass_QThread(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("setPriority", &D::ClassType::setPriority);
    _d.CPGF_MD_TEMPLATE _method("priority", &D::ClassType::priority);
    _d.CPGF_MD_TEMPLATE _method("isFinished", &D::ClassType::isFinished);
    _d.CPGF_MD_TEMPLATE _method("isRunning", &D::ClassType::isRunning);
    _d.CPGF_MD_TEMPLATE _method("requestInterruption", &D::ClassType::requestInterruption);
    _d.CPGF_MD_TEMPLATE _method("isInterruptionRequested", &D::ClassType::isInterruptionRequested);
    _d.CPGF_MD_TEMPLATE _method("setStackSize", &D::ClassType::setStackSize);
    _d.CPGF_MD_TEMPLATE _method("stackSize", &D::ClassType::stackSize);
    _d.CPGF_MD_TEMPLATE _method("exit", &D::ClassType::exit)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("eventDispatcher", &D::ClassType::eventDispatcher);
    _d.CPGF_MD_TEMPLATE _method("setEventDispatcher", &D::ClassType::setEventDispatcher);
    _d.CPGF_MD_TEMPLATE _method("event", &D::ClassType::event);
    _d.CPGF_MD_TEMPLATE _method("start", &D::ClassType::start)
        ._default(copyVariantFromCopyable(QThread::InheritPriority))
    ;
    _d.CPGF_MD_TEMPLATE _method("terminate", &D::ClassType::terminate);
    _d.CPGF_MD_TEMPLATE _method("quit", &D::ClassType::quit);
    _d.CPGF_MD_TEMPLATE _method("wait", &D::ClassType::wait)
        ._default(copyVariantFromCopyable(ULONG_MAX))
    ;
    _d.CPGF_MD_TEMPLATE _method("started", &D::ClassType::started);
    _d.CPGF_MD_TEMPLATE _method("finished", &D::ClassType::finished);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("currentThreadId", &D::ClassType::currentThreadId);
    _d.CPGF_MD_TEMPLATE _method("currentThread", &D::ClassType::currentThread);
    _d.CPGF_MD_TEMPLATE _method("idealThreadCount", &D::ClassType::idealThreadCount);
    _d.CPGF_MD_TEMPLATE _method("yieldCurrentThread", &D::ClassType::yieldCurrentThread);
    _d.CPGF_MD_TEMPLATE _method("sleep", &D::ClassType::sleep);
    _d.CPGF_MD_TEMPLATE _method("msleep", &D::ClassType::msleep);
    _d.CPGF_MD_TEMPLATE _method("usleep", &D::ClassType::usleep);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Priority>("Priority")
        ._element("IdlePriority", D::ClassType::IdlePriority)
        ._element("LowestPriority", D::ClassType::LowestPriority)
        ._element("LowPriority", D::ClassType::LowPriority)
        ._element("NormalPriority", D::ClassType::NormalPriority)
        ._element("HighPriority", D::ClassType::HighPriority)
        ._element("HighestPriority", D::ClassType::HighestPriority)
        ._element("TimeCriticalPriority", D::ClassType::TimeCriticalPriority)
        ._element("InheritPriority", D::ClassType::InheritPriority)
    ;
}


class QThreadWrapper : public QThread, public cpgf::GScriptWrapper {
public:
    
    QThreadWrapper(QObject * parent = 0)
        : QThread(parent) {}
    
    void setTerminationEnabled(bool enabled = true)
    {
        QThread::setTerminationEnabled(enabled);
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
    
    void run()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("run"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QThread::run();
    }
    void super_run()
    {
        QThread::run();
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
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    bool event(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, event));
        }
        return QThread::event(event);
    }
    bool super_event(QEvent * event)
    {
        return QThread::event(event);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2));
        }
        return QThread::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QThread::qt_metacall(__arg0, __arg1, __arg2);
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
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
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
    
    int exec()
    {
        return QThread::exec();
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
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QThread::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QThread::qt_metacast(__arg0);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QThread::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QThread::metaObject();
    }
};


template <typename D>
void buildMetaClass_QThreadWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    
    _d.CPGF_MD_TEMPLATE _method("setTerminationEnabled", (void (*) (bool))&D::ClassType::setTerminationEnabled)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
    _d.CPGF_MD_TEMPLATE _method("run", (void (D::ClassType::*) ())&D::ClassType::run);
    _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
    _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
    _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
    _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
    _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
    _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
    _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
    _d.CPGF_MD_TEMPLATE _method("exec", (int (D::ClassType::*) ())&D::ClassType::exec);
    _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
    _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
    _d.CPGF_MD_TEMPLATE _method("super_run", (void (D::ClassType::*) ())&D::ClassType::super_run);
    _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
    _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
    _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
    _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
    _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
    _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
    _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
    
    buildMetaClass_QThread<D>(config, _d);
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
