// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQUICKSHADEREFFECTSOURCE_P_H
#define CPGF_META_QTQML_QQUICKSHADEREFFECTSOURCE_P_H


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
void buildMetaClass_Global_qquickshadereffectsource_p(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtQml_33")
    ;
}


template <typename D>
void buildMetaClass_QQuickShaderEffectSource(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQuickItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("wrapMode", &D::ClassType::wrapMode);
    _d.CPGF_MD_TEMPLATE _method("setWrapMode", &D::ClassType::setWrapMode);
    _d.CPGF_MD_TEMPLATE _method("sourceItem", &D::ClassType::sourceItem);
    _d.CPGF_MD_TEMPLATE _method("setSourceItem", &D::ClassType::setSourceItem);
    _d.CPGF_MD_TEMPLATE _method("sourceRect", &D::ClassType::sourceRect);
    _d.CPGF_MD_TEMPLATE _method("setSourceRect", &D::ClassType::setSourceRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("textureSize", &D::ClassType::textureSize);
    _d.CPGF_MD_TEMPLATE _method("setTextureSize", &D::ClassType::setTextureSize);
    _d.CPGF_MD_TEMPLATE _method("format", &D::ClassType::format);
    _d.CPGF_MD_TEMPLATE _method("setFormat", &D::ClassType::setFormat);
    _d.CPGF_MD_TEMPLATE _method("live", &D::ClassType::live);
    _d.CPGF_MD_TEMPLATE _method("setLive", &D::ClassType::setLive);
    _d.CPGF_MD_TEMPLATE _method("hideSource", &D::ClassType::hideSource);
    _d.CPGF_MD_TEMPLATE _method("setHideSource", &D::ClassType::setHideSource);
    _d.CPGF_MD_TEMPLATE _method("mipmap", &D::ClassType::mipmap);
    _d.CPGF_MD_TEMPLATE _method("setMipmap", &D::ClassType::setMipmap);
    _d.CPGF_MD_TEMPLATE _method("recursive", &D::ClassType::recursive);
    _d.CPGF_MD_TEMPLATE _method("setRecursive", &D::ClassType::setRecursive);
    _d.CPGF_MD_TEMPLATE _method("isTextureProvider", &D::ClassType::isTextureProvider);
    _d.CPGF_MD_TEMPLATE _method("textureProvider", &D::ClassType::textureProvider);
    _d.CPGF_MD_TEMPLATE _method("scheduleUpdate", &D::ClassType::scheduleUpdate);
    _d.CPGF_MD_TEMPLATE _method("wrapModeChanged", &D::ClassType::wrapModeChanged);
    _d.CPGF_MD_TEMPLATE _method("sourceItemChanged", &D::ClassType::sourceItemChanged);
    _d.CPGF_MD_TEMPLATE _method("sourceRectChanged", &D::ClassType::sourceRectChanged);
    _d.CPGF_MD_TEMPLATE _method("textureSizeChanged", &D::ClassType::textureSizeChanged);
    _d.CPGF_MD_TEMPLATE _method("formatChanged", &D::ClassType::formatChanged);
    _d.CPGF_MD_TEMPLATE _method("liveChanged", &D::ClassType::liveChanged);
    _d.CPGF_MD_TEMPLATE _method("hideSourceChanged", &D::ClassType::hideSourceChanged);
    _d.CPGF_MD_TEMPLATE _method("mipmapChanged", &D::ClassType::mipmapChanged);
    _d.CPGF_MD_TEMPLATE _method("recursiveChanged", &D::ClassType::recursiveChanged);
    _d.CPGF_MD_TEMPLATE _method("scheduledUpdateCompleted", &D::ClassType::scheduledUpdateCompleted);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::WrapMode>("WrapMode")
        ._element("ClampToEdge", D::ClassType::ClampToEdge)
        ._element("RepeatHorizontally", D::ClassType::RepeatHorizontally)
        ._element("RepeatVertically", D::ClassType::RepeatVertically)
        ._element("Repeat", D::ClassType::Repeat)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Format>("Format")
        ._element("Alpha", D::ClassType::Alpha)
        ._element("RGB", D::ClassType::RGB)
        ._element("RGBA", D::ClassType::RGBA)
    ;
}


template <typename D>
void buildMetaClass_QQuickShaderEffectTexture(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQuickItem *)>();
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("updateTexture", &D::ClassType::updateTexture);
    _d.CPGF_MD_TEMPLATE _method("item", &D::ClassType::item);
    _d.CPGF_MD_TEMPLATE _method("setItem", &D::ClassType::setItem);
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("setRect", &D::ClassType::setRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("setSize", &D::ClassType::setSize);
    _d.CPGF_MD_TEMPLATE _method("setHasMipmaps", &D::ClassType::setHasMipmaps);
    _d.CPGF_MD_TEMPLATE _method("bind", &D::ClassType::bind);
    _d.CPGF_MD_TEMPLATE _method("hasAlphaChannel", &D::ClassType::hasAlphaChannel);
    _d.CPGF_MD_TEMPLATE _method("hasMipmaps", &D::ClassType::hasMipmaps);
    _d.CPGF_MD_TEMPLATE _method("textureId", &D::ClassType::textureId);
    _d.CPGF_MD_TEMPLATE _method("textureSize", &D::ClassType::textureSize);
    _d.CPGF_MD_TEMPLATE _method("format", &D::ClassType::format);
    _d.CPGF_MD_TEMPLATE _method("setFormat", &D::ClassType::setFormat);
    _d.CPGF_MD_TEMPLATE _method("live", &D::ClassType::live);
    _d.CPGF_MD_TEMPLATE _method("setLive", &D::ClassType::setLive);
    _d.CPGF_MD_TEMPLATE _method("recursive", &D::ClassType::recursive);
    _d.CPGF_MD_TEMPLATE _method("setRecursive", &D::ClassType::setRecursive);
    _d.CPGF_MD_TEMPLATE _method("setDevicePixelRatio", &D::ClassType::setDevicePixelRatio);
    _d.CPGF_MD_TEMPLATE _method("scheduleUpdate", &D::ClassType::scheduleUpdate);
    _d.CPGF_MD_TEMPLATE _method("toImage", &D::ClassType::toImage, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("updateRequested", &D::ClassType::updateRequested);
    _d.CPGF_MD_TEMPLATE _method("scheduledUpdateCompleted", &D::ClassType::scheduledUpdateCompleted);
    _d.CPGF_MD_TEMPLATE _method("markDirtyTexture", &D::ClassType::markDirtyTexture);
    _d.CPGF_MD_TEMPLATE _method("invalidated", &D::ClassType::invalidated);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QQuickShaderEffectTextureWrapper : public QQuickShaderEffectTexture, public cpgf::GScriptWrapper {
public:
    
    QQuickShaderEffectTextureWrapper(QQuickItem * shaderSource)
        : QQuickShaderEffectTexture(shaderSource) {}
    
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
    
    QSize textureSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textureSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QQuickShaderEffectTexture::textureSize();
    }
    QSize super_textureSize() const
    {
        return QQuickShaderEffectTexture::textureSize();
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
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
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QQuickShaderEffectTexture::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QQuickShaderEffectTexture::qt_metacast(__arg0);
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
        return QQuickShaderEffectTexture::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QQuickShaderEffectTexture::metaObject();
    }
    
    bool updateTexture()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updateTexture"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QQuickShaderEffectTexture::updateTexture();
    }
    bool super_updateTexture()
    {
        return QQuickShaderEffectTexture::updateTexture();
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
        return QQuickShaderEffectTexture::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QQuickShaderEffectTexture::qt_metacall(__arg0, __arg1, __arg2);
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
    
    bool hasAlphaChannel() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasAlphaChannel"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QQuickShaderEffectTexture::hasAlphaChannel();
    }
    bool super_hasAlphaChannel() const
    {
        return QQuickShaderEffectTexture::hasAlphaChannel();
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
    
    void bind()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("bind"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QQuickShaderEffectTexture::bind();
    }
    void super_bind()
    {
        QQuickShaderEffectTexture::bind();
    }
    
    bool hasMipmaps() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasMipmaps"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QQuickShaderEffectTexture::hasMipmaps();
    }
    bool super_hasMipmaps() const
    {
        return QQuickShaderEffectTexture::hasMipmaps();
    }
    
    int textureId() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textureId"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QQuickShaderEffectTexture::textureId();
    }
    int super_textureId() const
    {
        return QQuickShaderEffectTexture::textureId();
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
        _d.CPGF_MD_TEMPLATE _method("super_isAtlasTexture", (bool (D::ClassType::*) () const)&D::ClassType::super_isAtlasTexture);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_textureSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_textureSize);
        _d.CPGF_MD_TEMPLATE _method("super_removedFromAtlas", (QSGTexture * (D::ClassType::*) () const)&D::ClassType::super_removedFromAtlas);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_updateTexture", (bool (D::ClassType::*) ())&D::ClassType::super_updateTexture);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_normalizedTextureSubRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_normalizedTextureSubRect);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hasAlphaChannel", (bool (D::ClassType::*) () const)&D::ClassType::super_hasAlphaChannel);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_bind", (void (D::ClassType::*) ())&D::ClassType::super_bind);
        _d.CPGF_MD_TEMPLATE _method("super_hasMipmaps", (bool (D::ClassType::*) () const)&D::ClassType::super_hasMipmaps);
        _d.CPGF_MD_TEMPLATE _method("super_textureId", (int (D::ClassType::*) () const)&D::ClassType::super_textureId);
    }
};


template <typename D>
void buildMetaClass_QQuickShaderEffectTextureWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QQuickShaderEffectTextureWrapper::cpgf__register(_d);
    
    buildMetaClass_QQuickShaderEffectTexture<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
