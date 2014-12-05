// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QSGRENDERER_P_H
#define CPGF_META_QTQML_QSGRENDERER_P_H


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
void buildMetaClass_QSGBindable(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("bind", &D::ClassType::bind);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("reactivate", &D::ClassType::reactivate);
}


class QSGBindableWrapper : public QSGBindable, public cpgf::GScriptWrapper {
public:
    
    void clear(QSGRenderer::ClearMode mode) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("clear"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, mode);
            return;
        }
        QSGBindable::clear(mode);
    }
    void super_clear(QSGRenderer::ClearMode mode) const
    {
        QSGBindable::clear(mode);
    }
    
    void bind() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("bind"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_bind() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void reactivate() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("reactivate"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QSGBindable::reactivate();
    }
    void super_reactivate() const
    {
        QSGBindable::reactivate();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_clear", (void (D::ClassType::*) (QSGRenderer::ClearMode) const)&D::ClassType::super_clear);
        _d.CPGF_MD_TEMPLATE _method("super_bind", (void (D::ClassType::*) () const)&D::ClassType::super_bind);
        _d.CPGF_MD_TEMPLATE _method("super_reactivate", (void (D::ClassType::*) () const)&D::ClassType::super_reactivate);
    }
};


template <typename D>
void buildMetaClass_QSGBindableWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGBindableWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGBindable<D>(_d);
}


template <typename D>
void buildMetaClass_QSGNodeDumper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("dump", &D::ClassType::dump);
    _d.CPGF_MD_TEMPLATE _method("visitNode", &D::ClassType::visitNode);
    _d.CPGF_MD_TEMPLATE _method("visitChildren", &D::ClassType::visitChildren);
}


class QSGNodeDumperWrapper : public QSGNodeDumper, public cpgf::GScriptWrapper {
public:
    
    QSGNodeDumperWrapper()
        : QSGNodeDumper() {}
    
    void leaveTransformNode(QSGTransformNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("leaveTransformNode"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, n);
            return;
        }
        QSGNodeDumper::visitNode(n);
    }
    void super_visitNode(QSGNode * n)
    {
        QSGNodeDumper::visitNode(n);
    }
    
    void leaveGeometryNode(QSGGeometryNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("leaveGeometryNode"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, n);
            return;
        }
        QSGNodeDumper::visitChildren(n);
    }
    void super_visitChildren(QSGNode * n)
    {
        QSGNodeDumper::visitChildren(n);
    }
    
    void leaveClipNode(QSGClipNode * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("leaveClipNode"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
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
        _d.CPGF_MD_TEMPLATE _method("leaveGeometryNode", (void (D::ClassType::*) (QSGGeometryNode *))&D::ClassType::leaveGeometryNode);
        _d.CPGF_MD_TEMPLATE _method("enterGeometryNode", (void (D::ClassType::*) (QSGGeometryNode *))&D::ClassType::enterGeometryNode);
        _d.CPGF_MD_TEMPLATE _method("leaveOpacityNode", (void (D::ClassType::*) (QSGOpacityNode *))&D::ClassType::leaveOpacityNode);
        _d.CPGF_MD_TEMPLATE _method("enterOpacityNode", (void (D::ClassType::*) (QSGOpacityNode *))&D::ClassType::enterOpacityNode);
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
void buildMetaClass_QSGNodeDumperWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGNodeDumperWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGNodeDumper<D>(_d);
}


template <typename D>
void buildMetaClass_QSGRenderer(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("setRootNode", &D::ClassType::setRootNode);
    _d.CPGF_MD_TEMPLATE _method("rootNode", &D::ClassType::rootNode);
    _d.CPGF_MD_TEMPLATE _method("setDeviceRect", (void (D::ClassType::*) (const QRect &))&D::ClassType::setDeviceRect);
    _d.CPGF_MD_TEMPLATE _method("setDeviceRect", (void (D::ClassType::*) (const QSize &))&D::ClassType::setDeviceRect);
    _d.CPGF_MD_TEMPLATE _method("deviceRect", &D::ClassType::deviceRect);
    _d.CPGF_MD_TEMPLATE _method("setViewportRect", (void (D::ClassType::*) (const QRect &))&D::ClassType::setViewportRect);
    _d.CPGF_MD_TEMPLATE _method("setViewportRect", (void (D::ClassType::*) (const QSize &))&D::ClassType::setViewportRect);
    _d.CPGF_MD_TEMPLATE _method("viewportRect", &D::ClassType::viewportRect);
    _d.CPGF_MD_TEMPLATE _method("currentProjectionMatrix", &D::ClassType::currentProjectionMatrix);
    _d.CPGF_MD_TEMPLATE _method("currentModelViewMatrix", &D::ClassType::currentModelViewMatrix);
    _d.CPGF_MD_TEMPLATE _method("currentCombinedMatrix", &D::ClassType::currentCombinedMatrix);
    _d.CPGF_MD_TEMPLATE _method("currentOpacity", &D::ClassType::currentOpacity);
    _d.CPGF_MD_TEMPLATE _method("determinant", &D::ClassType::determinant);
    _d.CPGF_MD_TEMPLATE _method("setDevicePixelRatio", &D::ClassType::setDevicePixelRatio);
    _d.CPGF_MD_TEMPLATE _method("devicePixelRatio", &D::ClassType::devicePixelRatio);
    _d.CPGF_MD_TEMPLATE _method("setProjectionMatrixToDeviceRect", &D::ClassType::setProjectionMatrixToDeviceRect);
    _d.CPGF_MD_TEMPLATE _method("setProjectionMatrixToRect", &D::ClassType::setProjectionMatrixToRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setProjectionMatrix", &D::ClassType::setProjectionMatrix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("projectionMatrix", &D::ClassType::projectionMatrix);
    _d.CPGF_MD_TEMPLATE _method("isMirrored", &D::ClassType::isMirrored);
    _d.CPGF_MD_TEMPLATE _method("setClearColor", &D::ClassType::setClearColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("clearColor", &D::ClassType::clearColor);
    _d.CPGF_MD_TEMPLATE _method("context", &D::ClassType::context);
    _d.CPGF_MD_TEMPLATE _method("renderScene", (void (D::ClassType::*) ())&D::ClassType::renderScene);
    _d.CPGF_MD_TEMPLATE _method("renderScene", (void (D::ClassType::*) (const QSGBindable &))&D::ClassType::renderScene);
    _d.CPGF_MD_TEMPLATE _method("nodeChanged", &D::ClassType::nodeChanged);
    _d.CPGF_MD_TEMPLATE _method("materialChanged", &D::ClassType::materialChanged);
    _d.CPGF_MD_TEMPLATE _method("state", &D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _method("setClearMode", &D::ClassType::setClearMode);
    _d.CPGF_MD_TEMPLATE _method("clearMode", &D::ClassType::clearMode);
    _d.CPGF_MD_TEMPLATE _method("setCustomRenderMode", &D::ClassType::setCustomRenderMode, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("clearChangedFlag", &D::ClassType::clearChangedFlag);
    _d.CPGF_MD_TEMPLATE _method("sceneGraphChanged", &D::ClassType::sceneGraphChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ClipTypeBit>("ClipTypeBit")
        ._element("NoClip", D::ClassType::NoClip)
        ._element("ScissorClip", D::ClassType::ScissorClip)
        ._element("StencilClip", D::ClassType::StencilClip)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ClearModeBit>("ClearModeBit")
        ._element("ClearColorBuffer", D::ClassType::ClearColorBuffer)
        ._element("ClearDepthBuffer", D::ClassType::ClearDepthBuffer)
        ._element("ClearStencilBuffer", D::ClassType::ClearStencilBuffer)
    ;
    {
        GDefineMetaClass<QFlags<typename QSGRenderer::ClipTypeBit > > _t_d = GDefineMetaClass<QFlags<typename QSGRenderer::ClipTypeBit > >::lazyDeclare("ClipType", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QSGRenderer::ClipTypeBit > >, typename QSGRenderer::ClipTypeBit >);
        _d._class(_t_d);
    }
    {
        GDefineMetaClass<QFlags<typename QSGRenderer::ClearModeBit > > _t_d = GDefineMetaClass<QFlags<typename QSGRenderer::ClearModeBit > >::lazyDeclare("ClearMode", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QSGRenderer::ClearModeBit > >, typename QSGRenderer::ClearModeBit >);
        _d._class(_t_d);
    }
}


class QSGRendererWrapper : public QSGRenderer, public cpgf::GScriptWrapper {
public:
    
    QSGRendererWrapper(QSGRenderContext * context)
        : QSGRenderer(context) {}
    
    void render()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("render"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_render()
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
    
    QSGRenderer::ClipType updateStencilClip(const QSGClipNode * clip)
    {
        return QSGRenderer::updateStencilClip(clip);
    }
    
    void nodeChanged(QSGNode * node, QSGNode::DirtyState state)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("nodeChanged"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, node, state);
            return;
        }
        QSGRenderer::nodeChanged(node, state);
    }
    void super_nodeChanged(QSGNode * node, QSGNode::DirtyState state)
    {
        QSGRenderer::nodeChanged(node, state);
    }
    
    void preprocess()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("preprocess"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QSGRenderer::preprocess();
    }
    void super_preprocess()
    {
        QSGRenderer::preprocess();
    }
    
    void markNodeDirtyState(QSGNode * node, QSGNode::DirtyState state)
    {
        QSGRenderer::markNodeDirtyState(node, state);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QSGRenderer::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QSGRenderer::qt_metacast(__arg0);
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
    
    bool isInitialized(const QOpenGLFunctionsPrivate * d)
    {
        return QOpenGLFunctions::isInitialized(d);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void setProjectionMatrixToRect(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setProjectionMatrixToRect"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rect);
            return;
        }
        QSGRenderer::setProjectionMatrixToRect(rect);
    }
    void super_setProjectionMatrixToRect(const QRectF & rect)
    {
        QSGRenderer::setProjectionMatrixToRect(rect);
    }
    
    const QSGBindable * bindable() const
    {
        return QSGRenderer::bindable();
    }
    
    void setCustomRenderMode(const QByteArray & __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCustomRenderMode"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QSGRenderer::setCustomRenderMode(__arg0);
    }
    void super_setCustomRenderMode(const QByteArray & __arg0)
    {
        QSGRenderer::setCustomRenderMode(__arg0);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
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
        return QSGRenderer::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QSGRenderer::metaObject();
    }
    
    void removeNodesToPreprocess(QSGNode * node)
    {
        QSGRenderer::removeNodesToPreprocess(node);
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
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QSGRenderer::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QSGRenderer::qt_metacall(__arg0, __arg1, __arg2);
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
    
    void materialChanged(QSGGeometryNode * node, QSGMaterial * from, QSGMaterial * to)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("materialChanged"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, node, from, to);
            return;
        }
        QSGRenderer::materialChanged(node, from, to);
    }
    void super_materialChanged(QSGGeometryNode * node, QSGMaterial * from, QSGMaterial * to)
    {
        QSGRenderer::materialChanged(node, from, to);
    }
    
    void addNodesToPreprocess(QSGNode * node)
    {
        QSGRenderer::addNodesToPreprocess(node);
    }
    
    void draw(const QSGMaterialShader * material, const QSGGeometry * g)
    {
        QSGRenderer::draw(material, g);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("render", (void (D::ClassType::*) ())&D::ClassType::render);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("updateStencilClip", (QSGRenderer::ClipType (D::ClassType::*) (const QSGClipNode *))&D::ClassType::updateStencilClip);
        _d.CPGF_MD_TEMPLATE _method("preprocess", (void (D::ClassType::*) ())&D::ClassType::preprocess);
        _d.CPGF_MD_TEMPLATE _method("markNodeDirtyState", (void (D::ClassType::*) (QSGNode *, QSGNode::DirtyState))&D::ClassType::markNodeDirtyState);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("isInitialized", (bool (D::ClassType::*) (const QOpenGLFunctionsPrivate *))&D::ClassType::isInitialized);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("bindable", (const QSGBindable * (D::ClassType::*) () const)&D::ClassType::bindable);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("removeNodesToPreprocess", (void (D::ClassType::*) (QSGNode *))&D::ClassType::removeNodesToPreprocess);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("addNodesToPreprocess", (void (D::ClassType::*) (QSGNode *))&D::ClassType::addNodesToPreprocess);
        _d.CPGF_MD_TEMPLATE _method("draw", (void (D::ClassType::*) (const QSGMaterialShader *, const QSGGeometry *))&D::ClassType::draw);
        _d.CPGF_MD_TEMPLATE _method("super_render", (void (D::ClassType::*) ())&D::ClassType::super_render);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_nodeChanged", (void (D::ClassType::*) (QSGNode *, QSGNode::DirtyState))&D::ClassType::super_nodeChanged);
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setProjectionMatrixToRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setProjectionMatrixToRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setCustomRenderMode", (void (D::ClassType::*) (const QByteArray &))&D::ClassType::super_setCustomRenderMode, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_materialChanged", (void (D::ClassType::*) (QSGGeometryNode *, QSGMaterial *, QSGMaterial *))&D::ClassType::super_materialChanged);
    }
};


template <typename D>
void buildMetaClass_QSGRendererWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QSGRenderContext *)>();
    
    QSGRendererWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGRenderer<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
