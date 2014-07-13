// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQMLENGINE_H
#define CPGF_META_QTQML_QQMLENGINE_H


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
void buildMetaClass_QQmlEngine(D _d)
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
    _d.CPGF_MD_TEMPLATE _method("rootContext", &D::ClassType::rootContext);
    _d.CPGF_MD_TEMPLATE _method("clearComponentCache", &D::ClassType::clearComponentCache);
    _d.CPGF_MD_TEMPLATE _method("trimComponentCache", &D::ClassType::trimComponentCache);
    _d.CPGF_MD_TEMPLATE _method("importPathList", &D::ClassType::importPathList);
    _d.CPGF_MD_TEMPLATE _method("setImportPathList", &D::ClassType::setImportPathList, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("addImportPath", &D::ClassType::addImportPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("pluginPathList", &D::ClassType::pluginPathList);
    _d.CPGF_MD_TEMPLATE _method("setPluginPathList", &D::ClassType::setPluginPathList, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("addPluginPath", &D::ClassType::addPluginPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("addNamedBundle", &D::ClassType::addNamedBundle, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("importPlugin", &D::ClassType::importPlugin, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("setNetworkAccessManagerFactory", &D::ClassType::setNetworkAccessManagerFactory);
    _d.CPGF_MD_TEMPLATE _method("networkAccessManagerFactory", &D::ClassType::networkAccessManagerFactory);
    _d.CPGF_MD_TEMPLATE _method("networkAccessManager", &D::ClassType::networkAccessManager);
    _d.CPGF_MD_TEMPLATE _method("addImageProvider", &D::ClassType::addImageProvider, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("imageProvider", &D::ClassType::imageProvider, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("removeImageProvider", &D::ClassType::removeImageProvider, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setIncubationController", &D::ClassType::setIncubationController);
    _d.CPGF_MD_TEMPLATE _method("incubationController", &D::ClassType::incubationController);
    _d.CPGF_MD_TEMPLATE _method("setOfflineStoragePath", &D::ClassType::setOfflineStoragePath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("offlineStoragePath", &D::ClassType::offlineStoragePath);
    _d.CPGF_MD_TEMPLATE _method("baseUrl", &D::ClassType::baseUrl);
    _d.CPGF_MD_TEMPLATE _method("setBaseUrl", &D::ClassType::setBaseUrl, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("outputWarningsToStandardError", &D::ClassType::outputWarningsToStandardError);
    _d.CPGF_MD_TEMPLATE _method("setOutputWarningsToStandardError", &D::ClassType::setOutputWarningsToStandardError);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("contextForObject", &D::ClassType::contextForObject);
    _d.CPGF_MD_TEMPLATE _method("setContextForObject", &D::ClassType::setContextForObject);
    _d.CPGF_MD_TEMPLATE _method("setObjectOwnership", &D::ClassType::setObjectOwnership);
    _d.CPGF_MD_TEMPLATE _method("objectOwnership", &D::ClassType::objectOwnership);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ObjectOwnership>("ObjectOwnership")
        ._element("CppOwnership", D::ClassType::CppOwnership)
        ._element("JavaScriptOwnership", D::ClassType::JavaScriptOwnership)
    ;
}


class QQmlEngineWrapper : public QQmlEngine, public cpgf::GScriptWrapper {
public:
    
    QQmlEngineWrapper(QObject * p = 0)
        : QQmlEngine(p) {}
    
    void quit()
    {
        QQmlEngine::quit();
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
        return QQmlEngine::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QQmlEngine::qt_metacast(__arg0);
    }
    
    void warnings(const QList< QQmlError > & warnings)
    {
        QQmlEngine::warnings(warnings);
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QQmlEngine::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QQmlEngine::event(__arg0);
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
        return QQmlEngine::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QQmlEngine::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QQmlEngine::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QQmlEngine::qt_metacall(__arg0, __arg1, __arg2);
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
        _d.CPGF_MD_TEMPLATE _method("quit", (void (D::ClassType::*) ())&D::ClassType::quit);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("warnings", (void (D::ClassType::*) (const QList< QQmlError > &))&D::ClassType::warnings);
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
void buildMetaClass_QQmlEngineWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QQmlEngineWrapper::cpgf__register(_d);
    
    buildMetaClass_QQmlEngine<D>(_d);
}


template <typename D>
void buildMetaClass_QQmlImageProviderBase(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("imageType", &D::ClassType::imageType);
    _d.CPGF_MD_TEMPLATE _method("flags", &D::ClassType::flags);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ImageType>("ImageType")
        ._element("Image", D::ClassType::Image)
        ._element("Pixmap", D::ClassType::Pixmap)
        ._element("Texture", D::ClassType::Texture)
        ._element("Invalid", D::ClassType::Invalid)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Flag>("Flag")
        ._element("ForceAsynchronousImageLoading", D::ClassType::ForceAsynchronousImageLoading)
    ;
    {
        GDefineMetaClass<QFlags<typename QQmlImageProviderBase::Flag > > _t_d = GDefineMetaClass<QFlags<typename QQmlImageProviderBase::Flag > >::lazyDeclare("Flags", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QQmlImageProviderBase::Flag > >, typename QQmlImageProviderBase::Flag >);
        _d._class(_t_d);
    }
}


class QQmlImageProviderBaseWrapper : public QQmlImageProviderBase, public cpgf::GScriptWrapper {
public:
    
    QQmlImageProviderBase::ImageType imageType() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("imageType"));
        if(func)
        {
            return cpgf::fromVariant<QQmlImageProviderBase::ImageType >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QQmlImageProviderBase::ImageType super_imageType() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QQmlImageProviderBase::Flags flags() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("flags"));
        if(func)
        {
            return cpgf::fromVariant<QQmlImageProviderBase::Flags >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QQmlImageProviderBase::Flags super_flags() const
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_imageType", (QQmlImageProviderBase::ImageType (D::ClassType::*) () const)&D::ClassType::super_imageType);
        _d.CPGF_MD_TEMPLATE _method("super_flags", (QQmlImageProviderBase::Flags (D::ClassType::*) () const)&D::ClassType::super_flags);
    }
};


template <typename D>
void buildMetaClass_QQmlImageProviderBaseWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QQmlImageProviderBaseWrapper::cpgf__register(_d);
    
    buildMetaClass_QQmlImageProviderBase<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
