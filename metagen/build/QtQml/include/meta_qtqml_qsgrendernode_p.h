// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QSGRENDERNODE_P_H
#define CPGF_META_QTQML_QSGRENDERNODE_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"


using namespace QSGBatchRenderer;


namespace qt_metadata { 


template <typename D>
void buildMetaClass_QSGRenderNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("changedStates", &D::ClassType::changedStates);
    _d.CPGF_MD_TEMPLATE _method("render", &D::ClassType::render);
    _d.CPGF_MD_TEMPLATE _method("matrix", &D::ClassType::matrix);
    _d.CPGF_MD_TEMPLATE _method("clipList", &D::ClassType::clipList);
    _d.CPGF_MD_TEMPLATE _method("setInheritedOpacity", &D::ClassType::setInheritedOpacity);
    _d.CPGF_MD_TEMPLATE _method("inheritedOpacity", &D::ClassType::inheritedOpacity);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StateFlag>("StateFlag")
        ._element("DepthState", D::ClassType::DepthState)
        ._element("StencilState", D::ClassType::StencilState)
        ._element("ScissorState", D::ClassType::ScissorState)
        ._element("ColorState", D::ClassType::ColorState)
        ._element("BlendState", D::ClassType::BlendState)
        ._element("CullState", D::ClassType::CullState)
        ._element("ViewportState", D::ClassType::ViewportState)
    ;
    {
        GDefineMetaClass<QFlags<typename QSGRenderNode::StateFlag > > _t_d = GDefineMetaClass<QFlags<typename QSGRenderNode::StateFlag > >::lazyDeclare("StateFlags", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QSGRenderNode::StateFlag > >, typename QSGRenderNode::StateFlag >);
        _d._class(_t_d);
    }
    {
        GDefineMetaClass<QSGRenderNode::RenderState> _nd = GDefineMetaClass<QSGRenderNode::RenderState>::declare("RenderState");
        _nd.CPGF_MD_TEMPLATE _field("projectionMatrix", &QSGRenderNode::RenderState::projectionMatrix);
        _nd.CPGF_MD_TEMPLATE _field("scissorRect", &QSGRenderNode::RenderState::scissorRect);
        _nd.CPGF_MD_TEMPLATE _field("stencilValue", &QSGRenderNode::RenderState::stencilValue);
        _nd.CPGF_MD_TEMPLATE _field("stencilEnabled", &QSGRenderNode::RenderState::stencilEnabled);
        _nd.CPGF_MD_TEMPLATE _field("scissorEnabled", &QSGRenderNode::RenderState::scissorEnabled);
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


class QSGRenderNodeWrapper : public QSGRenderNode, public cpgf::GScriptWrapper {
public:
    
    QSGRenderNodeWrapper()
        : QSGRenderNode() {}
    
    void render(const QSGRenderNode::RenderState& state)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("render"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, state);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_render(const QSGRenderNode::RenderState& state)
    {
        throw std::runtime_error("Abstract method");
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
    
    QSGRenderNode::StateFlags changedStates()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("changedStates"));
        if(func)
        {
            return cpgf::fromVariant<QSGRenderNode::StateFlags >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QSGRenderNode::StateFlags super_changedStates()
    {
        throw std::runtime_error("Abstract method");
    }
    
    void preprocess()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("preprocess"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QSGNode::preprocess();
    }
    void super_preprocess()
    {
        QSGNode::preprocess();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_render", (void (D::ClassType::*) (const QSGRenderNode::RenderState&))&D::ClassType::super_render);
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
        _d.CPGF_MD_TEMPLATE _method("super_changedStates", (QSGRenderNode::StateFlags (D::ClassType::*) ())&D::ClassType::super_changedStates);
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
    }
};


template <typename D>
void buildMetaClass_QSGRenderNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    
    QSGRenderNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGRenderNode<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
