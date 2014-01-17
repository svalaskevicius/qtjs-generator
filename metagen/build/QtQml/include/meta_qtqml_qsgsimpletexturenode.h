// Auto generated file, don't modify.

#ifndef __META_QTQML_QSGSIMPLETEXTURENODE_H
#define __META_QTQML_QSGSIMPLETEXTURENODE_H


#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace meta_qtqml { 


template <typename D>
void buildMetaClass_QSGSimpleTextureNode(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("setRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::setRect);
    _d.CPGF_MD_TEMPLATE _method("setRect", (void (D::ClassType::*) (qreal, qreal, qreal, qreal))&D::ClassType::setRect);
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("setTexture", &D::ClassType::setTexture);
    _d.CPGF_MD_TEMPLATE _method("texture", &D::ClassType::texture);
    _d.CPGF_MD_TEMPLATE _method("setFiltering", &D::ClassType::setFiltering);
    _d.CPGF_MD_TEMPLATE _method("filtering", &D::ClassType::filtering);
    _d.CPGF_MD_TEMPLATE _method("setTextureCoordinatesTransform", &D::ClassType::setTextureCoordinatesTransform);
    _d.CPGF_MD_TEMPLATE _method("textureCoordinatesTransform", &D::ClassType::textureCoordinatesTransform);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::TextureCoordinatesTransformFlag>("TextureCoordinatesTransformFlag")
        ._element("NoTransform", D::ClassType::NoTransform)
        ._element("MirrorHorizontally", D::ClassType::MirrorHorizontally)
        ._element("MirrorVertically", D::ClassType::MirrorVertically)
    ;
}


class QSGSimpleTextureNodeWrapper : public QSGSimpleTextureNode, public cpgf::GScriptWrapper {
public:
    
    QSGSimpleTextureNodeWrapper()
        : QSGSimpleTextureNode() {}
    
    void preprocess()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("preprocess"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QSGNode::preprocess();
    }
    void super_preprocess()
    {
        QSGNode::preprocess();
    }
    
    bool isSubtreeBlocked() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isSubtreeBlocked"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QSGNode::isSubtreeBlocked();
    }
    bool super_isSubtreeBlocked() const
    {
        return QSGNode::isSubtreeBlocked();
    }
};


template <typename D>
void buildMetaClass_QSGSimpleTextureNodeWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    
    _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
    _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
    
    buildMetaClass_QSGSimpleTextureNode<D>(config, _d);
}


} // namespace meta_qtqml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
