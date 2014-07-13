// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QSETTINGS_H
#define CPGF_META_QTCORE_QSETTINGS_H


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
void buildMetaClass_QSettings(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, const QString &, QObject *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QSettings::Scope, const QString &, const QString &, QObject *)>(cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QSettings::Format, QSettings::Scope, const QString &, const QString &, QObject *)>(cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, QSettings::Format, QObject *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("sync", &D::ClassType::sync);
    _d.CPGF_MD_TEMPLATE _method("status", &D::ClassType::status);
    _d.CPGF_MD_TEMPLATE _method("beginGroup", &D::ClassType::beginGroup, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("endGroup", &D::ClassType::endGroup);
    _d.CPGF_MD_TEMPLATE _method("group", &D::ClassType::group);
    _d.CPGF_MD_TEMPLATE _method("beginReadArray", &D::ClassType::beginReadArray, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("beginWriteArray", &D::ClassType::beginWriteArray, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("endArray", &D::ClassType::endArray);
    _d.CPGF_MD_TEMPLATE _method("setArrayIndex", &D::ClassType::setArrayIndex);
    _d.CPGF_MD_TEMPLATE _method("allKeys", &D::ClassType::allKeys);
    _d.CPGF_MD_TEMPLATE _method("childKeys", &D::ClassType::childKeys);
    _d.CPGF_MD_TEMPLATE _method("childGroups", &D::ClassType::childGroups);
    _d.CPGF_MD_TEMPLATE _method("isWritable", &D::ClassType::isWritable);
    _d.CPGF_MD_TEMPLATE _method("setValue", &D::ClassType::setValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("value", &D::ClassType::value, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QVariant()))
    ;
    _d.CPGF_MD_TEMPLATE _method("remove", &D::ClassType::remove, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setFallbacksEnabled", &D::ClassType::setFallbacksEnabled);
    _d.CPGF_MD_TEMPLATE _method("fallbacksEnabled", &D::ClassType::fallbacksEnabled);
    _d.CPGF_MD_TEMPLATE _method("fileName", &D::ClassType::fileName);
    _d.CPGF_MD_TEMPLATE _method("format", &D::ClassType::format);
    _d.CPGF_MD_TEMPLATE _method("scope", &D::ClassType::scope, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("organizationName", &D::ClassType::organizationName);
    _d.CPGF_MD_TEMPLATE _method("applicationName", &D::ClassType::applicationName);
    _d.CPGF_MD_TEMPLATE _method("setIniCodec", (void (D::ClassType::*) (QTextCodec *))&D::ClassType::setIniCodec);
    _d.CPGF_MD_TEMPLATE _method("setIniCodec", (void (D::ClassType::*) (const char *))&D::ClassType::setIniCodec);
    _d.CPGF_MD_TEMPLATE _method("iniCodec", &D::ClassType::iniCodec);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setDefaultFormat", &D::ClassType::setDefaultFormat);
    _d.CPGF_MD_TEMPLATE _method("defaultFormat", &D::ClassType::defaultFormat);
    _d.CPGF_MD_TEMPLATE _method("setSystemIniPath", &D::ClassType::setSystemIniPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setUserIniPath", &D::ClassType::setUserIniPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setPath", &D::ClassType::setPath, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<1>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("registerFormat", &D::ClassType::registerFormat, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Status>("Status")
        ._element("NoError", D::ClassType::NoError)
        ._element("AccessError", D::ClassType::AccessError)
        ._element("FormatError", D::ClassType::FormatError)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Format>("Format")
        ._element("NativeFormat", D::ClassType::NativeFormat)
        ._element("IniFormat", D::ClassType::IniFormat)
        ._element("InvalidFormat", D::ClassType::InvalidFormat)
        ._element("CustomFormat1", D::ClassType::CustomFormat1)
        ._element("CustomFormat2", D::ClassType::CustomFormat2)
        ._element("CustomFormat3", D::ClassType::CustomFormat3)
        ._element("CustomFormat4", D::ClassType::CustomFormat4)
        ._element("CustomFormat5", D::ClassType::CustomFormat5)
        ._element("CustomFormat6", D::ClassType::CustomFormat6)
        ._element("CustomFormat7", D::ClassType::CustomFormat7)
        ._element("CustomFormat8", D::ClassType::CustomFormat8)
        ._element("CustomFormat9", D::ClassType::CustomFormat9)
        ._element("CustomFormat10", D::ClassType::CustomFormat10)
        ._element("CustomFormat11", D::ClassType::CustomFormat11)
        ._element("CustomFormat12", D::ClassType::CustomFormat12)
        ._element("CustomFormat13", D::ClassType::CustomFormat13)
        ._element("CustomFormat14", D::ClassType::CustomFormat14)
        ._element("CustomFormat15", D::ClassType::CustomFormat15)
        ._element("CustomFormat16", D::ClassType::CustomFormat16)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Scope>("Scope")
        ._element("UserScope", D::ClassType::UserScope)
        ._element("SystemScope", D::ClassType::SystemScope)
    ;
}


class QSettingsWrapper : public QSettings, public cpgf::GScriptWrapper {
public:
    
    QSettingsWrapper(const QString & organization, const QString & application = QString(), QObject * parent = 0)
        : QSettings(organization, application, parent) {}
    
    QSettingsWrapper(QSettings::Scope scope, const QString & organization, const QString & application = QString(), QObject * parent = 0)
        : QSettings(scope, organization, application, parent) {}
    
    QSettingsWrapper(QSettings::Format format, QSettings::Scope scope, const QString & organization, const QString & application = QString(), QObject * parent = 0)
        : QSettings(format, scope, organization, application, parent) {}
    
    QSettingsWrapper(const QString & fileName, QSettings::Format format, QObject * parent = 0)
        : QSettings(fileName, format, parent) {}
    
    QSettingsWrapper(QObject * parent = 0)
        : QSettings(parent) {}
    
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
        return QSettings::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QSettings::qt_metacast(__arg0);
    }
    
    bool event(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event).getValue());
        }
        return QSettings::event(event);
    }
    bool super_event(QEvent * event)
    {
        return QSettings::event(event);
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
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSettings::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QSettings::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QSettings::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QSettings::qt_metacall(__arg0, __arg1, __arg2);
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
        _d.CPGF_MD_TEMPLATE _method("event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::event);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
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
void buildMetaClass_QSettingsWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSettingsWrapper::cpgf__register(_d);
    
    buildMetaClass_QSettings<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
