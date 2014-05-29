// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QSGDEFAULTIMAGENODE_P_H
#define CPGF_META_QTQML_QSGDEFAULTIMAGENODE_P_H


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
void buildMetaClass_QSGDefaultImageNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("setTargetRect", &D::ClassType::setTargetRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setInnerTargetRect", &D::ClassType::setInnerTargetRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setInnerSourceRect", &D::ClassType::setInnerSourceRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setSubSourceRect", &D::ClassType::setSubSourceRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setTexture", &D::ClassType::setTexture);
    _d.CPGF_MD_TEMPLATE _method("setAntialiasing", &D::ClassType::setAntialiasing);
    _d.CPGF_MD_TEMPLATE _method("setMirror", &D::ClassType::setMirror);
    _d.CPGF_MD_TEMPLATE _method("update", &D::ClassType::update);
    _d.CPGF_MD_TEMPLATE _method("setMipmapFiltering", &D::ClassType::setMipmapFiltering);
    _d.CPGF_MD_TEMPLATE _method("setFiltering", &D::ClassType::setFiltering);
    _d.CPGF_MD_TEMPLATE _method("setHorizontalWrapMode", &D::ClassType::setHorizontalWrapMode);
    _d.CPGF_MD_TEMPLATE _method("setVerticalWrapMode", &D::ClassType::setVerticalWrapMode);
    _d.CPGF_MD_TEMPLATE _method("preprocess", &D::ClassType::preprocess);
}


class QSGDefaultImageNodeWrapper : public QSGDefaultImageNode, public cpgf::GScriptWrapper {
public:
    
    QSGDefaultImageNodeWrapper()
        : QSGDefaultImageNode() {}
    
    void setTargetRect(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setTargetRect"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rect);
            return;
        }
        QSGDefaultImageNode::setTargetRect(rect);
    }
    void super_setTargetRect(const QRectF & rect)
    {
        QSGDefaultImageNode::setTargetRect(rect);
    }
    
    void setMirror(bool mirror)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setMirror"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, mirror);
            return;
        }
        QSGDefaultImageNode::setMirror(mirror);
    }
    void super_setMirror(bool mirror)
    {
        QSGDefaultImageNode::setMirror(mirror);
    }
    
    void setFiltering(QSGTexture::Filtering filtering)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setFiltering"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, filtering);
            return;
        }
        QSGDefaultImageNode::setFiltering(filtering);
    }
    void super_setFiltering(QSGTexture::Filtering filtering)
    {
        QSGDefaultImageNode::setFiltering(filtering);
    }
    
    void setInnerTargetRect(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setInnerTargetRect"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rect);
            return;
        }
        QSGDefaultImageNode::setInnerTargetRect(rect);
    }
    void super_setInnerTargetRect(const QRectF & rect)
    {
        QSGDefaultImageNode::setInnerTargetRect(rect);
    }
    
    void setHorizontalWrapMode(QSGTexture::WrapMode wrapMode)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setHorizontalWrapMode"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, wrapMode);
            return;
        }
        QSGDefaultImageNode::setHorizontalWrapMode(wrapMode);
    }
    void super_setHorizontalWrapMode(QSGTexture::WrapMode wrapMode)
    {
        QSGDefaultImageNode::setHorizontalWrapMode(wrapMode);
    }
    
    void preprocess()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("preprocess"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QSGDefaultImageNode::preprocess();
    }
    void super_preprocess()
    {
        QSGDefaultImageNode::preprocess();
    }
    
    void setMipmapFiltering(QSGTexture::Filtering filtering)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setMipmapFiltering"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, filtering);
            return;
        }
        QSGDefaultImageNode::setMipmapFiltering(filtering);
    }
    void super_setMipmapFiltering(QSGTexture::Filtering filtering)
    {
        QSGDefaultImageNode::setMipmapFiltering(filtering);
    }
    
    void setTexture(QSGTexture * t)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setTexture"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, t);
            return;
        }
        QSGDefaultImageNode::setTexture(t);
    }
    void super_setTexture(QSGTexture * t)
    {
        QSGDefaultImageNode::setTexture(t);
    }
    
    void setAntialiasing(bool antialiasing)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setAntialiasing"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, antialiasing);
            return;
        }
        QSGDefaultImageNode::setAntialiasing(antialiasing);
    }
    void super_setAntialiasing(bool antialiasing)
    {
        QSGDefaultImageNode::setAntialiasing(antialiasing);
    }
    
    void setInnerSourceRect(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setInnerSourceRect"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rect);
            return;
        }
        QSGDefaultImageNode::setInnerSourceRect(rect);
    }
    void super_setInnerSourceRect(const QRectF & rect)
    {
        QSGDefaultImageNode::setInnerSourceRect(rect);
    }
    
    void setVerticalWrapMode(QSGTexture::WrapMode wrapMode)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setVerticalWrapMode"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, wrapMode);
            return;
        }
        QSGDefaultImageNode::setVerticalWrapMode(wrapMode);
    }
    void super_setVerticalWrapMode(QSGTexture::WrapMode wrapMode)
    {
        QSGDefaultImageNode::setVerticalWrapMode(wrapMode);
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
    
    void update()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("update"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QSGDefaultImageNode::update();
    }
    void super_update()
    {
        QSGDefaultImageNode::update();
    }
    
    void setSubSourceRect(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setSubSourceRect"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rect);
            return;
        }
        QSGDefaultImageNode::setSubSourceRect(rect);
    }
    void super_setSubSourceRect(const QRectF & rect)
    {
        QSGDefaultImageNode::setSubSourceRect(rect);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_setTargetRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setTargetRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setMirror", (void (D::ClassType::*) (bool))&D::ClassType::super_setMirror);
        _d.CPGF_MD_TEMPLATE _method("super_setFiltering", (void (D::ClassType::*) (QSGTexture::Filtering))&D::ClassType::super_setFiltering);
        _d.CPGF_MD_TEMPLATE _method("super_setInnerTargetRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setInnerTargetRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setHorizontalWrapMode", (void (D::ClassType::*) (QSGTexture::WrapMode))&D::ClassType::super_setHorizontalWrapMode);
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
        _d.CPGF_MD_TEMPLATE _method("super_setMipmapFiltering", (void (D::ClassType::*) (QSGTexture::Filtering))&D::ClassType::super_setMipmapFiltering);
        _d.CPGF_MD_TEMPLATE _method("super_setTexture", (void (D::ClassType::*) (QSGTexture *))&D::ClassType::super_setTexture);
        _d.CPGF_MD_TEMPLATE _method("super_setAntialiasing", (void (D::ClassType::*) (bool))&D::ClassType::super_setAntialiasing);
        _d.CPGF_MD_TEMPLATE _method("super_setInnerSourceRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setInnerSourceRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setVerticalWrapMode", (void (D::ClassType::*) (QSGTexture::WrapMode))&D::ClassType::super_setVerticalWrapMode);
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
        _d.CPGF_MD_TEMPLATE _method("super_update", (void (D::ClassType::*) ())&D::ClassType::super_update);
        _d.CPGF_MD_TEMPLATE _method("super_setSubSourceRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setSubSourceRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    }
};


template <typename D>
void buildMetaClass_QSGDefaultImageNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGDefaultImageNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGDefaultImageNode<D>(_d);
}


template <typename D>
void buildMetaClass_QSGSmoothTextureMaterial(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("setTexture", &D::ClassType::setTexture);
}


class QSGSmoothTextureMaterialWrapper : public QSGSmoothTextureMaterial, public cpgf::GScriptWrapper {
public:
    
    QSGSmoothTextureMaterialWrapper()
        : QSGSmoothTextureMaterial() {}
    
    int compare(const QSGMaterial * other) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("compare"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, other).getValue());
        }
        return QSGOpaqueTextureMaterial::compare(other);
    }
    int super_compare(const QSGMaterial * other) const
    {
        return QSGOpaqueTextureMaterial::compare(other);
    }
    
    QSGMaterialType * type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialType * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGSmoothTextureMaterial::type();
    }
    QSGMaterialType * super_type() const
    {
        return QSGSmoothTextureMaterial::type();
    }
    
    QSGMaterialShader * createShader() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createShader"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialShader * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGSmoothTextureMaterial::createShader();
    }
    QSGMaterialShader * super_createShader() const
    {
        return QSGSmoothTextureMaterial::createShader();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("type", (QSGMaterialType * (D::ClassType::*) () const)&D::ClassType::type);
        _d.CPGF_MD_TEMPLATE _method("createShader", (QSGMaterialShader * (D::ClassType::*) () const)&D::ClassType::createShader);
        _d.CPGF_MD_TEMPLATE _method("super_compare", (int (D::ClassType::*) (const QSGMaterial *) const)&D::ClassType::super_compare);
        _d.CPGF_MD_TEMPLATE _method("super_type", (QSGMaterialType * (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_createShader", (QSGMaterialShader * (D::ClassType::*) () const)&D::ClassType::super_createShader);
    }
};


template <typename D>
void buildMetaClass_QSGSmoothTextureMaterialWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGSmoothTextureMaterialWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGSmoothTextureMaterial<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
