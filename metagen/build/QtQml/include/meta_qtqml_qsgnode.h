// Auto generated file, don't modify.

#ifndef __META_QTQML_QSGNODE_H
#define __META_QTQML_QSGNODE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtQml_cpgf_compat.h>

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
void buildMetaClass_Global_qsgnode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<Q_QUICK_EXPORT QDebug (*)(QDebug, const QSGNode *)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<Q_QUICK_EXPORT QDebug (*)(QDebug, const QSGGeometryNode *)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<Q_QUICK_EXPORT QDebug (*)(QDebug, const QSGTransformNode *)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<Q_QUICK_EXPORT QDebug (*)(QDebug, const QSGOpacityNode *)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<Q_QUICK_EXPORT QDebug (*)(QDebug, const QSGRootNode *)>(mopHolder << mopHolder);
}


template <typename D>
void buildMetaClass_QSGBasicGeometryNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("setGeometry", &D::ClassType::setGeometry);
    _d.CPGF_MD_TEMPLATE _method("geometry", (const QSGGeometry * (D::ClassType::*) () const)&D::ClassType::geometry);
    _d.CPGF_MD_TEMPLATE _method("geometry", (QSGGeometry * (D::ClassType::*) ())&D::ClassType::geometry);
    _d.CPGF_MD_TEMPLATE _method("matrix", &D::ClassType::matrix);
    _d.CPGF_MD_TEMPLATE _method("clipList", &D::ClassType::clipList);
}


class QSGBasicGeometryNodeWrapper : public QSGBasicGeometryNode, public cpgf::GScriptWrapper {
public:
    
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
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
    }
};


template <typename D>
void buildMetaClass_QSGBasicGeometryNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGBasicGeometryNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGBasicGeometryNode<D>(_d);
}


template <typename D>
void buildMetaClass_QSGClipNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("setIsRectangular", &D::ClassType::setIsRectangular);
    _d.CPGF_MD_TEMPLATE _method("isRectangular", &D::ClassType::isRectangular);
    _d.CPGF_MD_TEMPLATE _method("setClipRect", &D::ClassType::setClipRect);
    _d.CPGF_MD_TEMPLATE _method("clipRect", &D::ClassType::clipRect);
}


class QSGClipNodeWrapper : public QSGClipNode, public cpgf::GScriptWrapper {
public:
    
    QSGClipNodeWrapper()
        : QSGClipNode() {}
    
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
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
    }
};


template <typename D>
void buildMetaClass_QSGClipNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGClipNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGClipNode<D>(_d);
}


template <typename D>
void buildMetaClass_QSGGeometryNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("setMaterial", &D::ClassType::setMaterial);
    _d.CPGF_MD_TEMPLATE _method("material", &D::ClassType::material);
    _d.CPGF_MD_TEMPLATE _method("setOpaqueMaterial", &D::ClassType::setOpaqueMaterial);
    _d.CPGF_MD_TEMPLATE _method("opaqueMaterial", &D::ClassType::opaqueMaterial);
    _d.CPGF_MD_TEMPLATE _method("activeMaterial", &D::ClassType::activeMaterial);
    _d.CPGF_MD_TEMPLATE _method("setRenderOrder", &D::ClassType::setRenderOrder);
    _d.CPGF_MD_TEMPLATE _method("renderOrder", &D::ClassType::renderOrder);
    _d.CPGF_MD_TEMPLATE _method("setInheritedOpacity", &D::ClassType::setInheritedOpacity);
    _d.CPGF_MD_TEMPLATE _method("inheritedOpacity", &D::ClassType::inheritedOpacity);
}


class QSGGeometryNodeWrapper : public QSGGeometryNode, public cpgf::GScriptWrapper {
public:
    
    QSGGeometryNodeWrapper()
        : QSGGeometryNode() {}
    
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
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
    }
};


template <typename D>
void buildMetaClass_QSGGeometryNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGGeometryNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGGeometryNode<D>(_d);
}


template <typename D>
void buildMetaClass_QSGNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("parent", &D::ClassType::parent);
    _d.CPGF_MD_TEMPLATE _method("removeChildNode", &D::ClassType::removeChildNode);
    _d.CPGF_MD_TEMPLATE _method("removeAllChildNodes", &D::ClassType::removeAllChildNodes);
    _d.CPGF_MD_TEMPLATE _method("prependChildNode", &D::ClassType::prependChildNode);
    _d.CPGF_MD_TEMPLATE _method("appendChildNode", &D::ClassType::appendChildNode);
    _d.CPGF_MD_TEMPLATE _method("insertChildNodeBefore", &D::ClassType::insertChildNodeBefore);
    _d.CPGF_MD_TEMPLATE _method("insertChildNodeAfter", &D::ClassType::insertChildNodeAfter);
    _d.CPGF_MD_TEMPLATE _method("childCount", &D::ClassType::childCount);
    _d.CPGF_MD_TEMPLATE _method("childAtIndex", &D::ClassType::childAtIndex);
    _d.CPGF_MD_TEMPLATE _method("firstChild", &D::ClassType::firstChild);
    _d.CPGF_MD_TEMPLATE _method("lastChild", &D::ClassType::lastChild);
    _d.CPGF_MD_TEMPLATE _method("nextSibling", &D::ClassType::nextSibling);
    _d.CPGF_MD_TEMPLATE _method("previousSibling", &D::ClassType::previousSibling);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("clearDirty", &D::ClassType::clearDirty);
    _d.CPGF_MD_TEMPLATE _method("markDirty", &D::ClassType::markDirty);
    _d.CPGF_MD_TEMPLATE _method("dirtyState", &D::ClassType::dirtyState);
    _d.CPGF_MD_TEMPLATE _method("isSubtreeBlocked", &D::ClassType::isSubtreeBlocked);
    _d.CPGF_MD_TEMPLATE _method("flags", &D::ClassType::flags);
    _d.CPGF_MD_TEMPLATE _method("setFlag", &D::ClassType::setFlag)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("setFlags", &D::ClassType::setFlags)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("preprocess", &D::ClassType::preprocess);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::NodeType>("NodeType")
        ._element("BasicNodeType", D::ClassType::BasicNodeType)
        ._element("GeometryNodeType", D::ClassType::GeometryNodeType)
        ._element("TransformNodeType", D::ClassType::TransformNodeType)
        ._element("ClipNodeType", D::ClassType::ClipNodeType)
        ._element("OpacityNodeType", D::ClassType::OpacityNodeType)
        ._element("RootNodeType", D::ClassType::RootNodeType)
        ._element("RenderNodeType", D::ClassType::RenderNodeType)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Flag>("Flag")
        ._element("OwnedByParent", D::ClassType::OwnedByParent)
        ._element("UsePreprocess", D::ClassType::UsePreprocess)
        ._element("OwnsGeometry", D::ClassType::OwnsGeometry)
        ._element("OwnsMaterial", D::ClassType::OwnsMaterial)
        ._element("OwnsOpaqueMaterial", D::ClassType::OwnsOpaqueMaterial)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::DirtyStateBit>("DirtyStateBit")
        ._element("DirtySubtreeBlocked", D::ClassType::DirtySubtreeBlocked)
        ._element("DirtyMatrix", D::ClassType::DirtyMatrix)
        ._element("DirtyNodeAdded", D::ClassType::DirtyNodeAdded)
        ._element("DirtyNodeRemoved", D::ClassType::DirtyNodeRemoved)
        ._element("DirtyGeometry", D::ClassType::DirtyGeometry)
        ._element("DirtyMaterial", D::ClassType::DirtyMaterial)
        ._element("DirtyOpacity", D::ClassType::DirtyOpacity)
        ._element("DirtyForceUpdate", D::ClassType::DirtyForceUpdate)
        ._element("DirtyUsePreprocess", D::ClassType::DirtyUsePreprocess)
        ._element("DirtyPropagationMask", D::ClassType::DirtyPropagationMask)
    ;
    {
        GDefineMetaClass<QFlags<typename D::ClassType::Flag > > _t_d = GDefineMetaClass<QFlags<typename D::ClassType::Flag > >::lazyDeclare("Flags", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename D::ClassType::Flag > >, typename D::ClassType::Flag >);
        _d._class(_t_d);
    }
    {
        GDefineMetaClass<QFlags<typename D::ClassType::DirtyStateBit > > _t_d = GDefineMetaClass<QFlags<typename D::ClassType::DirtyStateBit > >::lazyDeclare("DirtyState", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename D::ClassType::DirtyStateBit > >, typename D::ClassType::DirtyStateBit >);
        _d._class(_t_d);
    }
}


class QSGNodeWrapper : public QSGNode, public cpgf::GScriptWrapper {
public:
    
    QSGNodeWrapper()
        : QSGNode() {}
    
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
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
    }
};


template <typename D>
void buildMetaClass_QSGNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGNode<D>(_d);
}


template <typename D>
void buildMetaClass_QSGNodeVisitor(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


class QSGNodeVisitorWrapper : public QSGNodeVisitor, public cpgf::GScriptWrapper {
public:
    
    void leaveTransformNode(QSGTransformNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("leaveTransformNode"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QSGNodeVisitor::leaveTransformNode(__arg0);
    }
    void super_leaveTransformNode(QSGTransformNode * __arg0)
    {
        QSGNodeVisitor::leaveTransformNode(__arg0);
    }
    
    void visitNode(QSGNode * n)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("visitNode"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, n);
            return;
        }
        QSGNodeVisitor::visitNode(n);
    }
    void super_visitNode(QSGNode * n)
    {
        QSGNodeVisitor::visitNode(n);
    }
    
    void leaveGeometryNode(QSGGeometryNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("leaveGeometryNode"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QSGNodeVisitor::leaveGeometryNode(__arg0);
    }
    void super_leaveGeometryNode(QSGGeometryNode * __arg0)
    {
        QSGNodeVisitor::leaveGeometryNode(__arg0);
    }
    
    void enterGeometryNode(QSGGeometryNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("enterGeometryNode"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QSGNodeVisitor::enterGeometryNode(__arg0);
    }
    void super_enterGeometryNode(QSGGeometryNode * __arg0)
    {
        QSGNodeVisitor::enterGeometryNode(__arg0);
    }
    
    void leaveOpacityNode(QSGOpacityNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("leaveOpacityNode"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QSGNodeVisitor::leaveOpacityNode(__arg0);
    }
    void super_leaveOpacityNode(QSGOpacityNode * __arg0)
    {
        QSGNodeVisitor::leaveOpacityNode(__arg0);
    }
    
    void enterOpacityNode(QSGOpacityNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("enterOpacityNode"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QSGNodeVisitor::enterOpacityNode(__arg0);
    }
    void super_enterOpacityNode(QSGOpacityNode * __arg0)
    {
        QSGNodeVisitor::enterOpacityNode(__arg0);
    }
    
    void visitChildren(QSGNode * n)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("visitChildren"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, n);
            return;
        }
        QSGNodeVisitor::visitChildren(n);
    }
    void super_visitChildren(QSGNode * n)
    {
        QSGNodeVisitor::visitChildren(n);
    }
    
    void leaveClipNode(QSGClipNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("leaveClipNode"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QSGNodeVisitor::leaveClipNode(__arg0);
    }
    void super_leaveClipNode(QSGClipNode * __arg0)
    {
        QSGNodeVisitor::leaveClipNode(__arg0);
    }
    
    void enterClipNode(QSGClipNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("enterClipNode"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QSGNodeVisitor::enterClipNode(__arg0);
    }
    void super_enterClipNode(QSGClipNode * __arg0)
    {
        QSGNodeVisitor::enterClipNode(__arg0);
    }
    
    void enterTransformNode(QSGTransformNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("enterTransformNode"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QSGNodeVisitor::enterTransformNode(__arg0);
    }
    void super_enterTransformNode(QSGTransformNode * __arg0)
    {
        QSGNodeVisitor::enterTransformNode(__arg0);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("leaveTransformNode", (void (D::ClassType::*) (QSGTransformNode *))&D::ClassType::leaveTransformNode);
        _d.CPGF_MD_TEMPLATE _method("visitNode", (void (D::ClassType::*) (QSGNode *))&D::ClassType::visitNode);
        _d.CPGF_MD_TEMPLATE _method("leaveGeometryNode", (void (D::ClassType::*) (QSGGeometryNode *))&D::ClassType::leaveGeometryNode);
        _d.CPGF_MD_TEMPLATE _method("enterGeometryNode", (void (D::ClassType::*) (QSGGeometryNode *))&D::ClassType::enterGeometryNode);
        _d.CPGF_MD_TEMPLATE _method("leaveOpacityNode", (void (D::ClassType::*) (QSGOpacityNode *))&D::ClassType::leaveOpacityNode);
        _d.CPGF_MD_TEMPLATE _method("enterOpacityNode", (void (D::ClassType::*) (QSGOpacityNode *))&D::ClassType::enterOpacityNode);
        _d.CPGF_MD_TEMPLATE _method("visitChildren", (void (D::ClassType::*) (QSGNode *))&D::ClassType::visitChildren);
        _d.CPGF_MD_TEMPLATE _method("leaveClipNode", (void (D::ClassType::*) (QSGClipNode *))&D::ClassType::leaveClipNode);
        _d.CPGF_MD_TEMPLATE _method("enterClipNode", (void (D::ClassType::*) (QSGClipNode *))&D::ClassType::enterClipNode);
        _d.CPGF_MD_TEMPLATE _method("enterTransformNode", (void (D::ClassType::*) (QSGTransformNode *))&D::ClassType::enterTransformNode);
        _d.CPGF_MD_TEMPLATE _method("super_leaveTransformNode", (void (D::ClassType::*) (QSGTransformNode *))&D::ClassType::super_leaveTransformNode);
        _d.CPGF_MD_TEMPLATE _method("super_visitNode", (void (D::ClassType::*) (QSGNode *))&D::ClassType::super_visitNode);
        _d.CPGF_MD_TEMPLATE _method("super_leaveGeometryNode", (void (D::ClassType::*) (QSGGeometryNode *))&D::ClassType::super_leaveGeometryNode);
        _d.CPGF_MD_TEMPLATE _method("super_enterGeometryNode", (void (D::ClassType::*) (QSGGeometryNode *))&D::ClassType::super_enterGeometryNode);
        _d.CPGF_MD_TEMPLATE _method("super_leaveOpacityNode", (void (D::ClassType::*) (QSGOpacityNode *))&D::ClassType::super_leaveOpacityNode);
        _d.CPGF_MD_TEMPLATE _method("super_enterOpacityNode", (void (D::ClassType::*) (QSGOpacityNode *))&D::ClassType::super_enterOpacityNode);
        _d.CPGF_MD_TEMPLATE _method("super_visitChildren", (void (D::ClassType::*) (QSGNode *))&D::ClassType::super_visitChildren);
        _d.CPGF_MD_TEMPLATE _method("super_leaveClipNode", (void (D::ClassType::*) (QSGClipNode *))&D::ClassType::super_leaveClipNode);
        _d.CPGF_MD_TEMPLATE _method("super_enterClipNode", (void (D::ClassType::*) (QSGClipNode *))&D::ClassType::super_enterClipNode);
        _d.CPGF_MD_TEMPLATE _method("super_enterTransformNode", (void (D::ClassType::*) (QSGTransformNode *))&D::ClassType::super_enterTransformNode);
    }
};


template <typename D>
void buildMetaClass_QSGNodeVisitorWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGNodeVisitorWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGNodeVisitor<D>(_d);
}


template <typename D>
void buildMetaClass_QSGOpacityNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("setOpacity", &D::ClassType::setOpacity);
    _d.CPGF_MD_TEMPLATE _method("opacity", &D::ClassType::opacity);
    _d.CPGF_MD_TEMPLATE _method("setCombinedOpacity", &D::ClassType::setCombinedOpacity);
    _d.CPGF_MD_TEMPLATE _method("combinedOpacity", &D::ClassType::combinedOpacity);
    _d.CPGF_MD_TEMPLATE _method("isSubtreeBlocked", &D::ClassType::isSubtreeBlocked);
}


class QSGOpacityNodeWrapper : public QSGOpacityNode, public cpgf::GScriptWrapper {
public:
    
    QSGOpacityNodeWrapper()
        : QSGOpacityNode() {}
    
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
        return QSGOpacityNode::isSubtreeBlocked();
    }
    bool super_isSubtreeBlocked() const
    {
        return QSGOpacityNode::isSubtreeBlocked();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
    }
};


template <typename D>
void buildMetaClass_QSGOpacityNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGOpacityNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGOpacityNode<D>(_d);
}


template <typename D>
void buildMetaClass_QSGRootNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
}


class QSGRootNodeWrapper : public QSGRootNode, public cpgf::GScriptWrapper {
public:
    
    QSGRootNodeWrapper()
        : QSGRootNode() {}
    
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
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
    }
};


template <typename D>
void buildMetaClass_QSGRootNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGRootNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGRootNode<D>(_d);
}


template <typename D>
void buildMetaClass_QSGTransformNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("setMatrix", &D::ClassType::setMatrix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("matrix", &D::ClassType::matrix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("setCombinedMatrix", &D::ClassType::setCombinedMatrix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("combinedMatrix", &D::ClassType::combinedMatrix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
}


class QSGTransformNodeWrapper : public QSGTransformNode, public cpgf::GScriptWrapper {
public:
    
    QSGTransformNodeWrapper()
        : QSGTransformNode() {}
    
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
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
    }
};


template <typename D>
void buildMetaClass_QSGTransformNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGTransformNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGTransformNode<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
