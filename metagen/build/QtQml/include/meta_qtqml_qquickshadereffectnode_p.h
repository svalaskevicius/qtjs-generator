// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQUICKSHADEREFFECTNODE_P_H
#define CPGF_META_QTQML_QQUICKSHADEREFFECTNODE_P_H


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
void buildMetaClass_Global_qquickshadereffectnode_p(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


template <typename D>
void buildMetaClass_QQuickShaderEffectMaterial(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQuickShaderEffectNode *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("attributes", &D::ClassType::attributes);
    _d.CPGF_MD_TEMPLATE _field("uniforms", &D::ClassType::uniforms);
    _d.CPGF_MD_TEMPLATE _field("textureProviders", &D::ClassType::textureProviders);
    _d.CPGF_MD_TEMPLATE _field("cullMode", &D::ClassType::cullMode);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("createShader", &D::ClassType::createShader);
    _d.CPGF_MD_TEMPLATE _method("compare", &D::ClassType::compare);
    _d.CPGF_MD_TEMPLATE _method("setProgramSource", &D::ClassType::setProgramSource);
    _d.CPGF_MD_TEMPLATE _method("updateTextures", &D::ClassType::updateTextures);
    _d.CPGF_MD_TEMPLATE _method("invalidateTextureProvider", &D::ClassType::invalidateTextureProvider);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::CullMode>("CullMode")
        ._element("NoCulling", D::ClassType::NoCulling)
        ._element("BackFaceCulling", D::ClassType::BackFaceCulling)
        ._element("FrontFaceCulling", D::ClassType::FrontFaceCulling)
    ;
    {
        GDefineMetaClass<QQuickShaderEffectMaterial::UniformData> _nd = GDefineMetaClass<QQuickShaderEffectMaterial::UniformData>::declare("UniformData");
        _nd.CPGF_MD_TEMPLATE _field("name", &QQuickShaderEffectMaterial::UniformData::name);
        _nd.CPGF_MD_TEMPLATE _field("value", &QQuickShaderEffectMaterial::UniformData::value);
        _nd.CPGF_MD_TEMPLATE _field("specialType", &QQuickShaderEffectMaterial::UniformData::specialType);
        _nd.CPGF_MD_TEMPLATE _enum<typename QQuickShaderEffectMaterial::UniformData::SpecialType>("SpecialType")
            ._element("None", QQuickShaderEffectMaterial::UniformData::None)
            ._element("Sampler", QQuickShaderEffectMaterial::UniformData::Sampler)
            ._element("SubRect", QQuickShaderEffectMaterial::UniformData::SubRect)
            ._element("Opacity", QQuickShaderEffectMaterial::UniformData::Opacity)
            ._element("Matrix", QQuickShaderEffectMaterial::UniformData::Matrix)
        ;
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


class QQuickShaderEffectMaterialWrapper : public QQuickShaderEffectMaterial, public cpgf::GScriptWrapper {
public:
    
    QQuickShaderEffectMaterialWrapper(QQuickShaderEffectNode * node = 0)
        : QQuickShaderEffectMaterial(node) {}
    
    int compare(const QSGMaterial * other) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("compare"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, other).getValue());
        }
        return QQuickShaderEffectMaterial::compare(other);
    }
    int super_compare(const QSGMaterial * other) const
    {
        return QQuickShaderEffectMaterial::compare(other);
    }
    
    QSGMaterialType * type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialType * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QQuickShaderEffectMaterial::type();
    }
    QSGMaterialType * super_type() const
    {
        return QQuickShaderEffectMaterial::type();
    }
    
    QSGMaterialShader * createShader() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createShader"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialShader * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QQuickShaderEffectMaterial::createShader();
    }
    QSGMaterialShader * super_createShader() const
    {
        return QQuickShaderEffectMaterial::createShader();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_compare", (int (D::ClassType::*) (const QSGMaterial *) const)&D::ClassType::super_compare);
        _d.CPGF_MD_TEMPLATE _method("super_type", (QSGMaterialType * (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_createShader", (QSGMaterialShader * (D::ClassType::*) () const)&D::ClassType::super_createShader);
    }
};


template <typename D>
void buildMetaClass_QQuickShaderEffectMaterialWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QQuickShaderEffectMaterialWrapper::cpgf__register(_d);
    
    buildMetaClass_QQuickShaderEffectMaterial<D>(_d);
}


template <typename D>
void buildMetaClass_QQuickShaderEffectNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("preprocess", &D::ClassType::preprocess);
    _d.CPGF_MD_TEMPLATE _method("logAndStatusChanged", &D::ClassType::logAndStatusChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QQuickShaderEffectNodeWrapper : public QQuickShaderEffectNode, public cpgf::GScriptWrapper {
public:
    
    QQuickShaderEffectNodeWrapper()
        : QQuickShaderEffectNode() {}
    
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
    
    void preprocess()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("preprocess"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QQuickShaderEffectNode::preprocess();
    }
    void super_preprocess()
    {
        QQuickShaderEffectNode::preprocess();
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QQuickShaderEffectNode::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QQuickShaderEffectNode::qt_metacast(__arg0);
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
        return QQuickShaderEffectNode::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QQuickShaderEffectNode::metaObject();
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
        return QQuickShaderEffectNode::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QQuickShaderEffectNode::qt_metacall(__arg0, __arg1, __arg2);
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
    
    bool isSubtreeBlocked() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isSubtreeBlocked"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGNode::isSubtreeBlocked();
    }
    bool super_isSubtreeBlocked() const
    {
        return QSGNode::isSubtreeBlocked();
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
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
    }
};


template <typename D>
void buildMetaClass_QQuickShaderEffectNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QQuickShaderEffectNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QQuickShaderEffectNode<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
