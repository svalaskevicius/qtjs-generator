// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QSGTEXTURE_H
#define CPGF_META_QTQML_QSGTEXTURE_H


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
void buildMetaClass_QSGDynamicTexture(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("updateTexture", &D::ClassType::updateTexture);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QSGDynamicTextureWrapper : public QSGDynamicTexture, public cpgf::GScriptWrapper {
public:
    
    int textureId() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textureId"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_textureId() const
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
    
    bool isAtlasTexture() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isAtlasTexture"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGTexture::isAtlasTexture();
    }
    bool super_isAtlasTexture() const
    {
        return QSGTexture::isAtlasTexture();
    }
    
    QRectF normalizedTextureSubRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("normalizedTextureSubRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGTexture::normalizedTextureSubRect();
    }
    QRectF super_normalizedTextureSubRect() const
    {
        return QSGTexture::normalizedTextureSubRect();
    }
    
    bool updateTexture()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updateTexture"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_updateTexture()
    {
        throw std::runtime_error("Abstract method");
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    bool hasMipmaps() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasMipmaps"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_hasMipmaps() const
    {
        throw std::runtime_error("Abstract method");
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
    
    bool hasAlphaChannel() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasAlphaChannel"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_hasAlphaChannel() const
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
        return QSGDynamicTexture::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QSGDynamicTexture::qt_metacast(__arg0);
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
    
    void bind()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("bind"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_bind()
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
    
    QSGTexture * removedFromAtlas() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("removedFromAtlas"));
        if(func)
        {
            return cpgf::fromVariant<QSGTexture * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGTexture::removedFromAtlas();
    }
    QSGTexture * super_removedFromAtlas() const
    {
        return QSGTexture::removedFromAtlas();
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGDynamicTexture::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QSGDynamicTexture::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QSGDynamicTexture::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QSGDynamicTexture::qt_metacall(__arg0, __arg1, __arg2);
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
        _d.CPGF_MD_TEMPLATE _method("super_textureId", (int (D::ClassType::*) () const)&D::ClassType::super_textureId);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_isAtlasTexture", (bool (D::ClassType::*) () const)&D::ClassType::super_isAtlasTexture);
        _d.CPGF_MD_TEMPLATE _method("super_normalizedTextureSubRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_normalizedTextureSubRect);
        _d.CPGF_MD_TEMPLATE _method("super_updateTexture", (bool (D::ClassType::*) ())&D::ClassType::super_updateTexture);
        _d.CPGF_MD_TEMPLATE _method("super_hasMipmaps", (bool (D::ClassType::*) () const)&D::ClassType::super_hasMipmaps);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_hasAlphaChannel", (bool (D::ClassType::*) () const)&D::ClassType::super_hasAlphaChannel);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_textureSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_textureSize);
        _d.CPGF_MD_TEMPLATE _method("super_bind", (void (D::ClassType::*) ())&D::ClassType::super_bind);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_removedFromAtlas", (QSGTexture * (D::ClassType::*) () const)&D::ClassType::super_removedFromAtlas);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
    }
};


template <typename D>
void buildMetaClass_QSGDynamicTextureWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGDynamicTextureWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGDynamicTexture<D>(_d);
}


template <typename D>
void buildMetaClass_QSGTexture(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("textureId", &D::ClassType::textureId);
    _d.CPGF_MD_TEMPLATE _method("textureSize", &D::ClassType::textureSize);
    _d.CPGF_MD_TEMPLATE _method("hasAlphaChannel", &D::ClassType::hasAlphaChannel);
    _d.CPGF_MD_TEMPLATE _method("hasMipmaps", &D::ClassType::hasMipmaps);
    _d.CPGF_MD_TEMPLATE _method("normalizedTextureSubRect", &D::ClassType::normalizedTextureSubRect);
    _d.CPGF_MD_TEMPLATE _method("isAtlasTexture", &D::ClassType::isAtlasTexture);
    _d.CPGF_MD_TEMPLATE _method("removedFromAtlas", &D::ClassType::removedFromAtlas);
    _d.CPGF_MD_TEMPLATE _method("bind", &D::ClassType::bind);
    _d.CPGF_MD_TEMPLATE _method("updateBindOptions", &D::ClassType::updateBindOptions)
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("setMipmapFiltering", &D::ClassType::setMipmapFiltering);
    _d.CPGF_MD_TEMPLATE _method("mipmapFiltering", &D::ClassType::mipmapFiltering);
    _d.CPGF_MD_TEMPLATE _method("setFiltering", &D::ClassType::setFiltering);
    _d.CPGF_MD_TEMPLATE _method("filtering", &D::ClassType::filtering);
    _d.CPGF_MD_TEMPLATE _method("setHorizontalWrapMode", &D::ClassType::setHorizontalWrapMode);
    _d.CPGF_MD_TEMPLATE _method("horizontalWrapMode", &D::ClassType::horizontalWrapMode);
    _d.CPGF_MD_TEMPLATE _method("setVerticalWrapMode", &D::ClassType::setVerticalWrapMode);
    _d.CPGF_MD_TEMPLATE _method("verticalWrapMode", &D::ClassType::verticalWrapMode);
    _d.CPGF_MD_TEMPLATE _method("convertToNormalizedSourceRect", &D::ClassType::convertToNormalizedSourceRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::WrapMode>("WrapMode")
        ._element("Repeat", D::ClassType::Repeat)
        ._element("ClampToEdge", D::ClassType::ClampToEdge)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Filtering>("Filtering")
        ._element("None", D::ClassType::None)
        ._element("Nearest", D::ClassType::Nearest)
        ._element("Linear", D::ClassType::Linear)
    ;
}


class QSGTextureWrapper : public QSGTexture, public cpgf::GScriptWrapper {
public:
    
    QSGTextureWrapper()
        : QSGTexture() {}
    
    int textureId() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textureId"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_textureId() const
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
    
    bool isAtlasTexture() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isAtlasTexture"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGTexture::isAtlasTexture();
    }
    bool super_isAtlasTexture() const
    {
        return QSGTexture::isAtlasTexture();
    }
    
    QRectF normalizedTextureSubRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("normalizedTextureSubRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGTexture::normalizedTextureSubRect();
    }
    QRectF super_normalizedTextureSubRect() const
    {
        return QSGTexture::normalizedTextureSubRect();
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    bool hasMipmaps() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasMipmaps"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_hasMipmaps() const
    {
        throw std::runtime_error("Abstract method");
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
    
    bool hasAlphaChannel() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasAlphaChannel"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_hasAlphaChannel() const
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
        return QSGTexture::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QSGTexture::qt_metacast(__arg0);
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
    
    void bind()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("bind"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_bind()
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
    
    QSGTexture * removedFromAtlas() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("removedFromAtlas"));
        if(func)
        {
            return cpgf::fromVariant<QSGTexture * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGTexture::removedFromAtlas();
    }
    QSGTexture * super_removedFromAtlas() const
    {
        return QSGTexture::removedFromAtlas();
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGTexture::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QSGTexture::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QSGTexture::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QSGTexture::qt_metacall(__arg0, __arg1, __arg2);
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
        _d.CPGF_MD_TEMPLATE _method("super_textureId", (int (D::ClassType::*) () const)&D::ClassType::super_textureId);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_isAtlasTexture", (bool (D::ClassType::*) () const)&D::ClassType::super_isAtlasTexture);
        _d.CPGF_MD_TEMPLATE _method("super_normalizedTextureSubRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_normalizedTextureSubRect);
        _d.CPGF_MD_TEMPLATE _method("super_hasMipmaps", (bool (D::ClassType::*) () const)&D::ClassType::super_hasMipmaps);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_hasAlphaChannel", (bool (D::ClassType::*) () const)&D::ClassType::super_hasAlphaChannel);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_textureSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_textureSize);
        _d.CPGF_MD_TEMPLATE _method("super_bind", (void (D::ClassType::*) ())&D::ClassType::super_bind);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_removedFromAtlas", (QSGTexture * (D::ClassType::*) () const)&D::ClassType::super_removedFromAtlas);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
    }
};


template <typename D>
void buildMetaClass_QSGTextureWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    
    QSGTextureWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGTexture<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
