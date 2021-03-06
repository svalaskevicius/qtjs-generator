// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QOPENGLDEBUG_H
#define CPGF_META_QTGUI_QOPENGLDEBUG_H


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
void buildMetaClass_Global_qopengldebug(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QOpenGLDebugMessage &)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, QOpenGLDebugMessage::Source)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, QOpenGLDebugMessage::Type)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, QOpenGLDebugMessage::Severity)>(mopHolder << mopHolder);
}


template <typename D>
void buildMetaClass_QOpenGLDebugLogger(D _d)
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
    _d.CPGF_MD_TEMPLATE _method("initialize", &D::ClassType::initialize);
    _d.CPGF_MD_TEMPLATE _method("isLogging", &D::ClassType::isLogging);
    _d.CPGF_MD_TEMPLATE _method("loggingMode", &D::ClassType::loggingMode);
    _d.CPGF_MD_TEMPLATE _method("maximumMessageLength", &D::ClassType::maximumMessageLength);
    _d.CPGF_MD_TEMPLATE _method("pushGroup", &D::ClassType::pushGroup, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QOpenGLDebugMessage::ApplicationSource))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("popGroup", &D::ClassType::popGroup);
    _d.CPGF_MD_TEMPLATE _method("enableMessages", (void (D::ClassType::*) (QOpenGLDebugMessage::Sources, QOpenGLDebugMessage::Types, QOpenGLDebugMessage::Severities))&D::ClassType::enableMessages)
        ._default(copyVariantFromCopyable(QOpenGLDebugMessage::AnySeverity))
        ._default(copyVariantFromCopyable(QOpenGLDebugMessage::AnyType))
        ._default(copyVariantFromCopyable(QOpenGLDebugMessage::AnySource))
    ;
    _d.CPGF_MD_TEMPLATE _method("enableMessages", (void (D::ClassType::*) (const QVector< GLuint > &, QOpenGLDebugMessage::Sources, QOpenGLDebugMessage::Types))&D::ClassType::enableMessages, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QOpenGLDebugMessage::AnyType))
        ._default(copyVariantFromCopyable(QOpenGLDebugMessage::AnySource))
    ;
    _d.CPGF_MD_TEMPLATE _method("disableMessages", (void (D::ClassType::*) (QOpenGLDebugMessage::Sources, QOpenGLDebugMessage::Types, QOpenGLDebugMessage::Severities))&D::ClassType::disableMessages)
        ._default(copyVariantFromCopyable(QOpenGLDebugMessage::AnySeverity))
        ._default(copyVariantFromCopyable(QOpenGLDebugMessage::AnyType))
        ._default(copyVariantFromCopyable(QOpenGLDebugMessage::AnySource))
    ;
    _d.CPGF_MD_TEMPLATE _method("disableMessages", (void (D::ClassType::*) (const QVector< GLuint > &, QOpenGLDebugMessage::Sources, QOpenGLDebugMessage::Types))&D::ClassType::disableMessages, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QOpenGLDebugMessage::AnyType))
        ._default(copyVariantFromCopyable(QOpenGLDebugMessage::AnySource))
    ;
    _d.CPGF_MD_TEMPLATE _method("loggedMessages", &D::ClassType::loggedMessages);
    _d.CPGF_MD_TEMPLATE _method("logMessage", &D::ClassType::logMessage);
    _d.CPGF_MD_TEMPLATE _method("startLogging", &D::ClassType::startLogging)
        ._default(copyVariantFromCopyable(QOpenGLDebugLogger::AsynchronousLogging))
    ;
    _d.CPGF_MD_TEMPLATE _method("stopLogging", &D::ClassType::stopLogging);
    _d.CPGF_MD_TEMPLATE _method("messageLogged", &D::ClassType::messageLogged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::LoggingMode>("LoggingMode")
        ._element("AsynchronousLogging", D::ClassType::AsynchronousLogging)
        ._element("SynchronousLogging", D::ClassType::SynchronousLogging)
    ;
}


class QOpenGLDebugLoggerWrapper : public QOpenGLDebugLogger, public cpgf::GScriptWrapper {
public:
    
    QOpenGLDebugLoggerWrapper(QObject * parent = 0)
        : QOpenGLDebugLogger(parent) {}
    
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
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
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
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QOpenGLDebugLogger::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QOpenGLDebugLogger::qt_metacast(__arg0);
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
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QOpenGLDebugLogger::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QOpenGLDebugLogger::metaObject();
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
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QOpenGLDebugLogger::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QOpenGLDebugLogger::qt_metacall(__arg0, __arg1, __arg2);
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
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
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
void buildMetaClass_QOpenGLDebugLoggerWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QOpenGLDebugLoggerWrapper::cpgf__register(_d);
    
    buildMetaClass_QOpenGLDebugLogger<D>(_d);
}


inline QOpenGLDebugMessage & opErAToRWrapper_QOpenGLDebugMessage__opAssign(QOpenGLDebugMessage * self, const QOpenGLDebugMessage & debugMessage) {
    return (*self) = debugMessage;
}
inline bool opErAToRWrapper_QOpenGLDebugMessage__opEqual(const QOpenGLDebugMessage * self, const QOpenGLDebugMessage & debugMessage) {
    return (*self) == debugMessage;
}
inline bool opErAToRWrapper_QOpenGLDebugMessage__opNotEqual(const QOpenGLDebugMessage * self, const QOpenGLDebugMessage & debugMessage) {
    return (*self) != debugMessage;
}


template <typename D>
void buildMetaClass_QOpenGLDebugMessage(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QOpenGLDebugMessage &)>();
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("source", &D::ClassType::source);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("severity", &D::ClassType::severity);
    _d.CPGF_MD_TEMPLATE _method("id", &D::ClassType::id);
    _d.CPGF_MD_TEMPLATE _method("message", &D::ClassType::message);
    _d.CPGF_MD_TEMPLATE _method("createApplicationMessage", &D::ClassType::createApplicationMessage, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QOpenGLDebugMessage::OtherType))
        ._default(copyVariantFromCopyable(QOpenGLDebugMessage::NotificationSeverity))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("createThirdPartyMessage", &D::ClassType::createThirdPartyMessage, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QOpenGLDebugMessage::OtherType))
        ._default(copyVariantFromCopyable(QOpenGLDebugMessage::NotificationSeverity))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Source>("Source")
        ._element("InvalidSource", D::ClassType::InvalidSource)
        ._element("APISource", D::ClassType::APISource)
        ._element("WindowSystemSource", D::ClassType::WindowSystemSource)
        ._element("ShaderCompilerSource", D::ClassType::ShaderCompilerSource)
        ._element("ThirdPartySource", D::ClassType::ThirdPartySource)
        ._element("ApplicationSource", D::ClassType::ApplicationSource)
        ._element("OtherSource", D::ClassType::OtherSource)
        ._element("LastSource", D::ClassType::LastSource)
        ._element("AnySource", D::ClassType::AnySource)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Type>("Type")
        ._element("InvalidType", D::ClassType::InvalidType)
        ._element("ErrorType", D::ClassType::ErrorType)
        ._element("DeprecatedBehaviorType", D::ClassType::DeprecatedBehaviorType)
        ._element("UndefinedBehaviorType", D::ClassType::UndefinedBehaviorType)
        ._element("PortabilityType", D::ClassType::PortabilityType)
        ._element("PerformanceType", D::ClassType::PerformanceType)
        ._element("OtherType", D::ClassType::OtherType)
        ._element("MarkerType", D::ClassType::MarkerType)
        ._element("GroupPushType", D::ClassType::GroupPushType)
        ._element("GroupPopType", D::ClassType::GroupPopType)
        ._element("LastType", D::ClassType::LastType)
        ._element("AnyType", D::ClassType::AnyType)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Severity>("Severity")
        ._element("InvalidSeverity", D::ClassType::InvalidSeverity)
        ._element("HighSeverity", D::ClassType::HighSeverity)
        ._element("MediumSeverity", D::ClassType::MediumSeverity)
        ._element("LowSeverity", D::ClassType::LowSeverity)
        ._element("NotificationSeverity", D::ClassType::NotificationSeverity)
        ._element("LastSeverity", D::ClassType::LastSeverity)
        ._element("AnySeverity", D::ClassType::AnySeverity)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QOpenGLDebugMessage & (*)(cpgf::GMetaSelf, const QOpenGLDebugMessage &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QOpenGLDebugMessage & (*) (QOpenGLDebugMessage *, const QOpenGLDebugMessage &))&opErAToRWrapper_QOpenGLDebugMessage__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QOpenGLDebugMessage &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QOpenGLDebugMessage *, const QOpenGLDebugMessage &))&opErAToRWrapper_QOpenGLDebugMessage__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QOpenGLDebugMessage &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QOpenGLDebugMessage *, const QOpenGLDebugMessage &))&opErAToRWrapper_QOpenGLDebugMessage__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    {
        GDefineMetaClass<QFlags<typename QOpenGLDebugMessage::Source > > _t_d = GDefineMetaClass<QFlags<typename QOpenGLDebugMessage::Source > >::lazyDeclare("Sources", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QOpenGLDebugMessage::Source > >, typename QOpenGLDebugMessage::Source >);
        _d._class(_t_d);
    }
    {
        GDefineMetaClass<QFlags<typename QOpenGLDebugMessage::Type > > _t_d = GDefineMetaClass<QFlags<typename QOpenGLDebugMessage::Type > >::lazyDeclare("Types", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QOpenGLDebugMessage::Type > >, typename QOpenGLDebugMessage::Type >);
        _d._class(_t_d);
    }
    {
        GDefineMetaClass<QFlags<typename QOpenGLDebugMessage::Severity > > _t_d = GDefineMetaClass<QFlags<typename QOpenGLDebugMessage::Severity > >::lazyDeclare("Severities", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QOpenGLDebugMessage::Severity > >, typename QOpenGLDebugMessage::Severity >);
        _d._class(_t_d);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
