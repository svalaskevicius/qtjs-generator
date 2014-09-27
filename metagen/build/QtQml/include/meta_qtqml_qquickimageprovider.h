// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQUICKIMAGEPROVIDER_H
#define CPGF_META_QTQML_QQUICKIMAGEPROVIDER_H


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
void buildMetaClass_QQuickImageProvider(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQmlImageProviderBase::ImageType, QQmlImageProviderBase::Flags)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("imageType", &D::ClassType::imageType);
    _d.CPGF_MD_TEMPLATE _method("flags", &D::ClassType::flags);
    _d.CPGF_MD_TEMPLATE _method("requestImage", &D::ClassType::requestImage, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("requestPixmap", &D::ClassType::requestPixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("requestTexture", &D::ClassType::requestTexture, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


class QQuickImageProviderWrapper : public QQuickImageProvider, public cpgf::GScriptWrapper {
public:
    
    QQuickImageProviderWrapper(QQmlImageProviderBase::ImageType type, QQmlImageProviderBase::Flags flags = 0)
        : QQuickImageProvider(type, flags) {}
    
    QPixmap requestPixmap(const QString & id, QSize * size, const QSize & requestedSize)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("requestPixmap"));
        if(func)
        {
            return cpgf::fromVariant<QPixmap >(cpgf::invokeScriptFunctionOnObject(func.get(), this, id, size, requestedSize).getValue());
        }
        return QQuickImageProvider::requestPixmap(id, size, requestedSize);
    }
    QPixmap super_requestPixmap(const QString & id, QSize * size, const QSize & requestedSize)
    {
        return QQuickImageProvider::requestPixmap(id, size, requestedSize);
    }
    
    QQuickTextureFactory * requestTexture(const QString & id, QSize * size, const QSize & requestedSize)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("requestTexture"));
        if(func)
        {
            return cpgf::fromVariant<QQuickTextureFactory * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, id, size, requestedSize).getValue());
        }
        return QQuickImageProvider::requestTexture(id, size, requestedSize);
    }
    QQuickTextureFactory * super_requestTexture(const QString & id, QSize * size, const QSize & requestedSize)
    {
        return QQuickImageProvider::requestTexture(id, size, requestedSize);
    }
    
    QImage requestImage(const QString & id, QSize * size, const QSize & requestedSize)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("requestImage"));
        if(func)
        {
            return cpgf::fromVariant<QImage >(cpgf::invokeScriptFunctionOnObject(func.get(), this, id, size, requestedSize).getValue());
        }
        return QQuickImageProvider::requestImage(id, size, requestedSize);
    }
    QImage super_requestImage(const QString & id, QSize * size, const QSize & requestedSize)
    {
        return QQuickImageProvider::requestImage(id, size, requestedSize);
    }
    
    QQmlImageProviderBase::ImageType imageType() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("imageType"));
        if(func)
        {
            return cpgf::fromVariant<QQmlImageProviderBase::ImageType >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QQuickImageProvider::imageType();
    }
    QQmlImageProviderBase::ImageType super_imageType() const
    {
        return QQuickImageProvider::imageType();
    }
    
    QQmlImageProviderBase::Flags flags() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("flags"));
        if(func)
        {
            return cpgf::fromVariant<QQmlImageProviderBase::Flags >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QQuickImageProvider::flags();
    }
    QQmlImageProviderBase::Flags super_flags() const
    {
        return QQuickImageProvider::flags();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_requestPixmap", (QPixmap (D::ClassType::*) (const QString &, QSize *, const QSize &))&D::ClassType::super_requestPixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_requestTexture", (QQuickTextureFactory * (D::ClassType::*) (const QString &, QSize *, const QSize &))&D::ClassType::super_requestTexture, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_requestImage", (QImage (D::ClassType::*) (const QString &, QSize *, const QSize &))&D::ClassType::super_requestImage, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_imageType", (QQmlImageProviderBase::ImageType (D::ClassType::*) () const)&D::ClassType::super_imageType);
        _d.CPGF_MD_TEMPLATE _method("super_flags", (QQmlImageProviderBase::Flags (D::ClassType::*) () const)&D::ClassType::super_flags);
    }
};


template <typename D>
void buildMetaClass_QQuickImageProviderWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QQuickImageProviderWrapper::cpgf__register(_d);
    
    buildMetaClass_QQuickImageProvider<D>(_d);
}


template <typename D>
void buildMetaClass_QQuickTextureFactory(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("createTexture", &D::ClassType::createTexture);
    _d.CPGF_MD_TEMPLATE _method("textureSize", &D::ClassType::textureSize);
    _d.CPGF_MD_TEMPLATE _method("textureByteCount", &D::ClassType::textureByteCount);
    _d.CPGF_MD_TEMPLATE _method("image", &D::ClassType::image, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
}


class QQuickTextureFactoryWrapper : public QQuickTextureFactory, public cpgf::GScriptWrapper {
public:
    
    QQuickTextureFactoryWrapper()
        : QQuickTextureFactory() {}
    
    QSGTexture * createTexture(QQuickWindow * window) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createTexture"));
        if(func)
        {
            return cpgf::fromVariant<QSGTexture * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, window).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QSGTexture * super_createTexture(QQuickWindow * window) const
    {
        throw std::runtime_error("Abstract method");
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
        return QObject::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QObject::qt_metacast(__arg0);
    }
    
    QSize textureSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textureSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QSize super_textureSize() const
    {
        throw std::runtime_error("Abstract method");
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
    
    QImage image() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("image"));
        if(func)
        {
            return cpgf::fromVariant<QImage >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QQuickTextureFactory::image();
    }
    QImage super_image() const
    {
        return QQuickTextureFactory::image();
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QObject::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QObject::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QObject::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QObject::qt_metacall(__arg0, __arg1, __arg2);
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
    
    int textureByteCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textureByteCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_textureByteCount() const
    {
        throw std::runtime_error("Abstract method");
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
        _d.CPGF_MD_TEMPLATE _method("super_createTexture", (QSGTexture * (D::ClassType::*) (QQuickWindow *) const)&D::ClassType::super_createTexture);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_textureSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_textureSize);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_image", (QImage (D::ClassType::*) () const)&D::ClassType::super_image, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_textureByteCount", (int (D::ClassType::*) () const)&D::ClassType::super_textureByteCount);
    }
};


template <typename D>
void buildMetaClass_QQuickTextureFactoryWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    
    QQuickTextureFactoryWrapper::cpgf__register(_d);
    
    buildMetaClass_QQuickTextureFactory<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
