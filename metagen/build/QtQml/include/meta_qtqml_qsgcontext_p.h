// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QSGCONTEXT_P_H
#define CPGF_META_QTQML_QSGCONTEXT_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"


using namespace QSGAtlasTexture;


namespace qt_metadata { 


template <typename D>
void buildMetaClass_QSGContext(D _d)
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
    _d.CPGF_MD_TEMPLATE _method("renderContextInitialized", &D::ClassType::renderContextInitialized);
    _d.CPGF_MD_TEMPLATE _method("renderContextInvalidated", &D::ClassType::renderContextInvalidated);
    _d.CPGF_MD_TEMPLATE _method("createRenderContext", &D::ClassType::createRenderContext);
    _d.CPGF_MD_TEMPLATE _method("createRectangleNode", &D::ClassType::createRectangleNode);
    _d.CPGF_MD_TEMPLATE _method("createImageNode", &D::ClassType::createImageNode);
    _d.CPGF_MD_TEMPLATE _method("createGlyphNode", &D::ClassType::createGlyphNode);
    _d.CPGF_MD_TEMPLATE _method("createAnimationDriver", &D::ClassType::createAnimationDriver);
    _d.CPGF_MD_TEMPLATE _method("minimumFBOSize", &D::ClassType::minimumFBOSize);
    _d.CPGF_MD_TEMPLATE _method("defaultSurfaceFormat", &D::ClassType::defaultSurfaceFormat);
    _d.CPGF_MD_TEMPLATE _method("setDistanceFieldEnabled", &D::ClassType::setDistanceFieldEnabled);
    _d.CPGF_MD_TEMPLATE _method("isDistanceFieldEnabled", &D::ClassType::isDistanceFieldEnabled);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("createDefaultContext", &D::ClassType::createDefaultContext);
    _d.CPGF_MD_TEMPLATE _method("createTextureFactoryFromImage", &D::ClassType::createTextureFactoryFromImage);
    _d.CPGF_MD_TEMPLATE _method("createWindowManager", &D::ClassType::createWindowManager);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::AntialiasingMethod>("AntialiasingMethod")
        ._element("UndecidedAntialiasing", D::ClassType::UndecidedAntialiasing)
        ._element("VertexAntialiasing", D::ClassType::VertexAntialiasing)
        ._element("MsaaAntialiasing", D::ClassType::MsaaAntialiasing)
    ;
}


class QSGContextWrapper : public QSGContext, public cpgf::GScriptWrapper {
public:
    
    QSGContextWrapper(QObject * parent = 0)
        : QSGContext(parent) {}
    
    QSGRectangleNode * createRectangleNode()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createRectangleNode"));
        if(func)
        {
            return cpgf::fromVariant<QSGRectangleNode * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGContext::createRectangleNode();
    }
    QSGRectangleNode * super_createRectangleNode()
    {
        return QSGContext::createRectangleNode();
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
    
    QSGGlyphNode * createGlyphNode(QSGRenderContext * rc, bool preferNativeGlyphNode)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createGlyphNode"));
        if(func)
        {
            return cpgf::fromVariant<QSGGlyphNode * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, rc, preferNativeGlyphNode).getValue());
        }
        return QSGContext::createGlyphNode(rc, preferNativeGlyphNode);
    }
    QSGGlyphNode * super_createGlyphNode(QSGRenderContext * rc, bool preferNativeGlyphNode)
    {
        return QSGContext::createGlyphNode(rc, preferNativeGlyphNode);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void renderContextInvalidated(QSGRenderContext * renderContext)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("renderContextInvalidated"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, renderContext);
            return;
        }
        QSGContext::renderContextInvalidated(renderContext);
    }
    void super_renderContextInvalidated(QSGRenderContext * renderContext)
    {
        QSGContext::renderContextInvalidated(renderContext);
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
    
    QSurfaceFormat defaultSurfaceFormat() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("defaultSurfaceFormat"));
        if(func)
        {
            return cpgf::fromVariant<QSurfaceFormat >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGContext::defaultSurfaceFormat();
    }
    QSurfaceFormat super_defaultSurfaceFormat() const
    {
        return QSGContext::defaultSurfaceFormat();
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
    
    QSGRenderContext * createRenderContext()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createRenderContext"));
        if(func)
        {
            return cpgf::fromVariant<QSGRenderContext * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGContext::createRenderContext();
    }
    QSGRenderContext * super_createRenderContext()
    {
        return QSGContext::createRenderContext();
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QSGContext::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QSGContext::qt_metacast(__arg0);
    }
    
    QSize minimumFBOSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumFBOSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGContext::minimumFBOSize();
    }
    QSize super_minimumFBOSize() const
    {
        return QSGContext::minimumFBOSize();
    }
    
    QAnimationDriver * createAnimationDriver(QObject * parent)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createAnimationDriver"));
        if(func)
        {
            return cpgf::fromVariant<QAnimationDriver * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, parent).getValue());
        }
        return QSGContext::createAnimationDriver(parent);
    }
    QAnimationDriver * super_createAnimationDriver(QObject * parent)
    {
        return QSGContext::createAnimationDriver(parent);
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
    
    QSGImageNode * createImageNode()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createImageNode"));
        if(func)
        {
            return cpgf::fromVariant<QSGImageNode * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGContext::createImageNode();
    }
    QSGImageNode * super_createImageNode()
    {
        return QSGContext::createImageNode();
    }
    
    void renderContextInitialized(QSGRenderContext * renderContext)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("renderContextInitialized"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, renderContext);
            return;
        }
        QSGContext::renderContextInitialized(renderContext);
    }
    void super_renderContextInitialized(QSGRenderContext * renderContext)
    {
        QSGContext::renderContextInitialized(renderContext);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGContext::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QSGContext::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QSGContext::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QSGContext::qt_metacall(__arg0, __arg1, __arg2);
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
        _d.CPGF_MD_TEMPLATE _method("super_createRectangleNode", (QSGRectangleNode * (D::ClassType::*) ())&D::ClassType::super_createRectangleNode);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_createGlyphNode", (QSGGlyphNode * (D::ClassType::*) (QSGRenderContext *, bool))&D::ClassType::super_createGlyphNode);
        _d.CPGF_MD_TEMPLATE _method("super_renderContextInvalidated", (void (D::ClassType::*) (QSGRenderContext *))&D::ClassType::super_renderContextInvalidated);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_defaultSurfaceFormat", (QSurfaceFormat (D::ClassType::*) () const)&D::ClassType::super_defaultSurfaceFormat);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_createRenderContext", (QSGRenderContext * (D::ClassType::*) ())&D::ClassType::super_createRenderContext);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_minimumFBOSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_minimumFBOSize);
        _d.CPGF_MD_TEMPLATE _method("super_createAnimationDriver", (QAnimationDriver * (D::ClassType::*) (QObject *))&D::ClassType::super_createAnimationDriver);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_createImageNode", (QSGImageNode * (D::ClassType::*) ())&D::ClassType::super_createImageNode);
        _d.CPGF_MD_TEMPLATE _method("super_renderContextInitialized", (void (D::ClassType::*) (QSGRenderContext *))&D::ClassType::super_renderContextInitialized);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
    }
};


template <typename D>
void buildMetaClass_QSGContextWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGContextWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGContext<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
