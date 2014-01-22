// Auto generated file, don't modify.

#ifndef __META_QTCORE_QOBJECT_H
#define __META_QTCORE_QOBJECT_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"


using namespace QtPrivate;


namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qobject(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qt_qFindChildren_helper", (void (*) (const QObject *, const QString &, const QMetaObject &, QList< void * > *, Qt::FindChildOptions))&qt_qFindChildren_helper, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("qt_qFindChildren_helper", (void (*) (const QObject *, const QRegExp &, const QMetaObject &, QList< void * > *, Qt::FindChildOptions))&qt_qFindChildren_helper, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("qt_qFindChildren_helper", (void (*) (const QObject *, const QRegularExpression &, const QMetaObject &, QList< void * > *, Qt::FindChildOptions))&qt_qFindChildren_helper, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("qt_qFindChild_helper", (QObject* (*) (const QObject *, const QString &, const QMetaObject &, Qt::FindChildOptions))&qt_qFindChild_helper, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QObject *)>(mopHolder << mopHolder);
}


template <typename D>
void buildMetaClass_QObject(D _d)
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
    _d.CPGF_MD_TEMPLATE _method("event", &D::ClassType::event);
    _d.CPGF_MD_TEMPLATE _method("eventFilter", &D::ClassType::eventFilter);
    _d.CPGF_MD_TEMPLATE _method("objectName", &D::ClassType::objectName);
    _d.CPGF_MD_TEMPLATE _method("setObjectName", &D::ClassType::setObjectName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isWidgetType", &D::ClassType::isWidgetType);
    _d.CPGF_MD_TEMPLATE _method("isWindowType", &D::ClassType::isWindowType);
    _d.CPGF_MD_TEMPLATE _method("signalsBlocked", &D::ClassType::signalsBlocked);
    _d.CPGF_MD_TEMPLATE _method("blockSignals", &D::ClassType::blockSignals);
    _d.CPGF_MD_TEMPLATE _method("thread", &D::ClassType::thread);
    _d.CPGF_MD_TEMPLATE _method("moveToThread", &D::ClassType::moveToThread);
    _d.CPGF_MD_TEMPLATE _method("startTimer", &D::ClassType::startTimer)
        ._default(copyVariantFromCopyable(Qt::CoarseTimer))
    ;
    _d.CPGF_MD_TEMPLATE _method("killTimer", &D::ClassType::killTimer);
    _d.CPGF_MD_TEMPLATE _method("children", &D::ClassType::children);
    _d.CPGF_MD_TEMPLATE _method("setParent", &D::ClassType::setParent);
    _d.CPGF_MD_TEMPLATE _method("installEventFilter", &D::ClassType::installEventFilter);
    _d.CPGF_MD_TEMPLATE _method("removeEventFilter", &D::ClassType::removeEventFilter);
    _d.CPGF_MD_TEMPLATE _method("connect", (QMetaObject::Connection (D::ClassType::*) (const QObject *, const char *, const char *, Qt::ConnectionType) const)&D::ClassType::connect)
        ._default(copyVariantFromCopyable(Qt::AutoConnection))
    ;
    _d.CPGF_MD_TEMPLATE _method("disconnect", (bool (D::ClassType::*) (const char *, const QObject *, const char *) const)&D::ClassType::disconnect)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("disconnect", (bool (D::ClassType::*) (const QObject *, const char *) const)&D::ClassType::disconnect)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("dumpObjectTree", &D::ClassType::dumpObjectTree);
    _d.CPGF_MD_TEMPLATE _method("dumpObjectInfo", &D::ClassType::dumpObjectInfo);
    _d.CPGF_MD_TEMPLATE _method("setProperty", &D::ClassType::setProperty, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("property", &D::ClassType::property);
    _d.CPGF_MD_TEMPLATE _method("dynamicPropertyNames", &D::ClassType::dynamicPropertyNames);
    _d.CPGF_MD_TEMPLATE _method("setUserData", &D::ClassType::setUserData);
    _d.CPGF_MD_TEMPLATE _method("userData", &D::ClassType::userData);
    _d.CPGF_MD_TEMPLATE _method("destroyed", &D::ClassType::destroyed)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("objectNameChanged", &D::ClassType::objectNameChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("parent", &D::ClassType::parent);
    _d.CPGF_MD_TEMPLATE _method("inherits", &D::ClassType::inherits);
    _d.CPGF_MD_TEMPLATE _method("deleteLater", &D::ClassType::deleteLater);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("connect", (QMetaObject::Connection (*) (const QObject *, const char *, const QObject *, const char *, Qt::ConnectionType))&D::ClassType::connect)
        ._default(copyVariantFromCopyable(Qt::AutoConnection))
    ;
    _d.CPGF_MD_TEMPLATE _method("connect", (QMetaObject::Connection (*) (const QObject *, const QMetaMethod &, const QObject *, const QMetaMethod &, Qt::ConnectionType))&D::ClassType::connect)
        ._default(copyVariantFromCopyable(Qt::AutoConnection))
    ;
    _d.CPGF_MD_TEMPLATE _method("disconnect", (bool (*) (const QObject *, const char *, const QObject *, const char *))&D::ClassType::disconnect);
    _d.CPGF_MD_TEMPLATE _method("disconnect", (bool (*) (const QObject *, const QMetaMethod &, const QObject *, const QMetaMethod &))&D::ClassType::disconnect);
    _d.CPGF_MD_TEMPLATE _method("disconnect", (bool (*) (const QMetaObject::Connection &))&D::ClassType::disconnect);
    _d.CPGF_MD_TEMPLATE _method("registerUserData", &D::ClassType::registerUserData);
}


class QObjectWrapper : public QObject, public cpgf::GScriptWrapper {
public:
    
    QObjectWrapper(QObject * parent = 0)
        : QObject(parent) {}
    
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
        return QObject::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QObject::qt_metacall(__arg0, __arg1, __arg2);
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
        return QObject::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QObject::qt_metacast(__arg0);
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
        return QObject::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QObject::metaObject();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
    }
};


template <typename D>
void buildMetaClass_QObjectWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QObjectWrapper::cpgf__register(_d);
    
    buildMetaClass_QObject<D>(_d);
}


inline uint bItFiEldWrapper_QObjectData_isWidget_getter(QObjectData * self) {
    return self->isWidget;
}

inline void bItFiEldWrapper_QObjectData_isWidget_setter(QObjectData * self, uint value) {
    self->isWidget = value;
}
inline uint bItFiEldWrapper_QObjectData_blockSig_getter(QObjectData * self) {
    return self->blockSig;
}

inline void bItFiEldWrapper_QObjectData_blockSig_setter(QObjectData * self, uint value) {
    self->blockSig = value;
}
inline uint bItFiEldWrapper_QObjectData_wasDeleted_getter(QObjectData * self) {
    return self->wasDeleted;
}

inline void bItFiEldWrapper_QObjectData_wasDeleted_setter(QObjectData * self, uint value) {
    self->wasDeleted = value;
}
inline uint bItFiEldWrapper_QObjectData_isDeletingChildren_getter(QObjectData * self) {
    return self->isDeletingChildren;
}

inline void bItFiEldWrapper_QObjectData_isDeletingChildren_setter(QObjectData * self, uint value) {
    self->isDeletingChildren = value;
}
inline uint bItFiEldWrapper_QObjectData_sendChildEvents_getter(QObjectData * self) {
    return self->sendChildEvents;
}

inline void bItFiEldWrapper_QObjectData_sendChildEvents_setter(QObjectData * self, uint value) {
    self->sendChildEvents = value;
}
inline uint bItFiEldWrapper_QObjectData_receiveChildEvents_getter(QObjectData * self) {
    return self->receiveChildEvents;
}

inline void bItFiEldWrapper_QObjectData_receiveChildEvents_setter(QObjectData * self, uint value) {
    self->receiveChildEvents = value;
}
inline uint bItFiEldWrapper_QObjectData_isWindow_getter(QObjectData * self) {
    return self->isWindow;
}

inline void bItFiEldWrapper_QObjectData_isWindow_setter(QObjectData * self, uint value) {
    self->isWindow = value;
}
inline uint bItFiEldWrapper_QObjectData_unused_getter(QObjectData * self) {
    return self->unused;
}

inline void bItFiEldWrapper_QObjectData_unused_setter(QObjectData * self, uint value) {
    self->unused = value;
}


template <typename D>
void buildMetaClass_QObjectData(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("q_ptr", &D::ClassType::q_ptr);
    _d.CPGF_MD_TEMPLATE _field("parent", &D::ClassType::parent);
    _d.CPGF_MD_TEMPLATE _field("children", &D::ClassType::children);
    _d.CPGF_MD_TEMPLATE _property("isWidget", &bItFiEldWrapper_QObjectData_isWidget_getter, &bItFiEldWrapper_QObjectData_isWidget_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("blockSig", &bItFiEldWrapper_QObjectData_blockSig_getter, &bItFiEldWrapper_QObjectData_blockSig_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("wasDeleted", &bItFiEldWrapper_QObjectData_wasDeleted_getter, &bItFiEldWrapper_QObjectData_wasDeleted_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("isDeletingChildren", &bItFiEldWrapper_QObjectData_isDeletingChildren_getter, &bItFiEldWrapper_QObjectData_isDeletingChildren_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("sendChildEvents", &bItFiEldWrapper_QObjectData_sendChildEvents_getter, &bItFiEldWrapper_QObjectData_sendChildEvents_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("receiveChildEvents", &bItFiEldWrapper_QObjectData_receiveChildEvents_getter, &bItFiEldWrapper_QObjectData_receiveChildEvents_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("isWindow", &bItFiEldWrapper_QObjectData_isWindow_getter, &bItFiEldWrapper_QObjectData_isWindow_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("unused", &bItFiEldWrapper_QObjectData_unused_getter, &bItFiEldWrapper_QObjectData_unused_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _field("postedEvents", &D::ClassType::postedEvents);
}


template <typename D>
void buildMetaClass_QObjectUserData(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
