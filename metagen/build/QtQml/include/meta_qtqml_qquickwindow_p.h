// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQUICKWINDOW_P_H
#define CPGF_META_QTQML_QQUICKWINDOW_P_H


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
void buildMetaClass_QQuickCloseEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("isAccepted", &D::ClassType::isAccepted);
    _d.CPGF_MD_TEMPLATE _method("setAccepted", &D::ClassType::setAccepted);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QQuickCloseEventWrapper : public QQuickCloseEvent, public cpgf::GScriptWrapper {
public:
    
    QQuickCloseEventWrapper()
        : QQuickCloseEvent() {}
    
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
        return QQuickCloseEvent::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QQuickCloseEvent::qt_metacast(__arg0);
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
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QQuickCloseEvent::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QQuickCloseEvent::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QQuickCloseEvent::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QQuickCloseEvent::qt_metacall(__arg0, __arg1, __arg2);
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
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
    }
};


template <typename D>
void buildMetaClass_QQuickCloseEventWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QQuickCloseEventWrapper::cpgf__register(_d);
    
    buildMetaClass_QQuickCloseEvent<D>(_d);
}


inline uint bItFiEldWrapper_QQuickWindowPrivate_clearBeforeRendering_getter(QQuickWindowPrivate * self) {
    return self->clearBeforeRendering;
}

inline void bItFiEldWrapper_QQuickWindowPrivate_clearBeforeRendering_setter(QQuickWindowPrivate * self, uint value) {
    self->clearBeforeRendering = value;
}
inline uint bItFiEldWrapper_QQuickWindowPrivate_persistentGLContext_getter(QQuickWindowPrivate * self) {
    return self->persistentGLContext;
}

inline void bItFiEldWrapper_QQuickWindowPrivate_persistentGLContext_setter(QQuickWindowPrivate * self, uint value) {
    self->persistentGLContext = value;
}
inline uint bItFiEldWrapper_QQuickWindowPrivate_persistentSceneGraph_getter(QQuickWindowPrivate * self) {
    return self->persistentSceneGraph;
}

inline void bItFiEldWrapper_QQuickWindowPrivate_persistentSceneGraph_setter(QQuickWindowPrivate * self, uint value) {
    self->persistentSceneGraph = value;
}
inline uint bItFiEldWrapper_QQuickWindowPrivate_lastWheelEventAccepted_getter(QQuickWindowPrivate * self) {
    return self->lastWheelEventAccepted;
}

inline void bItFiEldWrapper_QQuickWindowPrivate_lastWheelEventAccepted_setter(QQuickWindowPrivate * self, uint value) {
    self->lastWheelEventAccepted = value;
}
inline bool bItFiEldWrapper_QQuickWindowPrivate_componentCompleted_getter(QQuickWindowPrivate * self) {
    return self->componentCompleted;
}

inline void bItFiEldWrapper_QQuickWindowPrivate_componentCompleted_setter(QQuickWindowPrivate * self, bool value) {
    self->componentCompleted = value;
}


template <typename D>
void buildMetaClass_QQuickWindowPrivate(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("parentlessItems", &D::ClassType::parentlessItems);
    _d.CPGF_MD_TEMPLATE _field("activeFocusItem", &D::ClassType::activeFocusItem);
    _d.CPGF_MD_TEMPLATE _field("mouseGrabberItem", &D::ClassType::mouseGrabberItem);
    _d.CPGF_MD_TEMPLATE _field("cursorItem", &D::ClassType::cursorItem);
    _d.CPGF_MD_TEMPLATE _field("touchMouseId", &D::ClassType::touchMouseId);
    _d.CPGF_MD_TEMPLATE _field("touchMousePressTimestamp", &D::ClassType::touchMousePressTimestamp);
    _d.CPGF_MD_TEMPLATE _field("lastMousePosition", &D::ClassType::lastMousePosition);
    _d.CPGF_MD_TEMPLATE _field("hoverItems", &D::ClassType::hoverItems);
    _d.CPGF_MD_TEMPLATE _field("updatePaintNodeData", &D::ClassType::updatePaintNodeData);
    _d.CPGF_MD_TEMPLATE _field("dirtyItemList", &D::ClassType::dirtyItemList);
    _d.CPGF_MD_TEMPLATE _field("cleanupNodeList", &D::ClassType::cleanupNodeList);
    _d.CPGF_MD_TEMPLATE _field("itemsToPolish", &D::ClassType::itemsToPolish);
    _d.CPGF_MD_TEMPLATE _field("context", &D::ClassType::context);
    _d.CPGF_MD_TEMPLATE _field("renderer", &D::ClassType::renderer);
    _d.CPGF_MD_TEMPLATE _field("customRenderMode", &D::ClassType::customRenderMode);
    _d.CPGF_MD_TEMPLATE _field("windowManager", &D::ClassType::windowManager);
    _d.CPGF_MD_TEMPLATE _field("clearColor", &D::ClassType::clearColor);
    _d.CPGF_MD_TEMPLATE _property("clearBeforeRendering", &bItFiEldWrapper_QQuickWindowPrivate_clearBeforeRendering_getter, &bItFiEldWrapper_QQuickWindowPrivate_clearBeforeRendering_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("persistentGLContext", &bItFiEldWrapper_QQuickWindowPrivate_persistentGLContext_getter, &bItFiEldWrapper_QQuickWindowPrivate_persistentGLContext_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("persistentSceneGraph", &bItFiEldWrapper_QQuickWindowPrivate_persistentSceneGraph_getter, &bItFiEldWrapper_QQuickWindowPrivate_persistentSceneGraph_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("lastWheelEventAccepted", &bItFiEldWrapper_QQuickWindowPrivate_lastWheelEventAccepted_getter, &bItFiEldWrapper_QQuickWindowPrivate_lastWheelEventAccepted_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("componentCompleted", &bItFiEldWrapper_QQuickWindowPrivate_componentCompleted_getter, &bItFiEldWrapper_QQuickWindowPrivate_componentCompleted_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _field("renderTarget", &D::ClassType::renderTarget);
    _d.CPGF_MD_TEMPLATE _field("renderTargetId", &D::ClassType::renderTargetId);
    _d.CPGF_MD_TEMPLATE _field("renderTargetSize", &D::ClassType::renderTargetSize);
    _d.CPGF_MD_TEMPLATE _field("itemForTouchPointId", &D::ClassType::itemForTouchPointId);
    _d.CPGF_MD_TEMPLATE _field("defaultAlphaBuffer", &D::ClassType::defaultAlphaBuffer);
    _d.CPGF_MD_TEMPLATE _method("get", &D::ClassType::get);
    _d.CPGF_MD_TEMPLATE _method("transformTouchPoints", &D::ClassType::transformTouchPoints, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("cloneMouseEvent", &D::ClassType::cloneMouseEvent)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("notifyFocusChangesRecur", &D::ClassType::notifyFocusChangesRecur);
    _d.CPGF_MD_TEMPLATE _method("dragOverThreshold", &D::ClassType::dragOverThreshold)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("data_append", &D::ClassType::data_append);
    _d.CPGF_MD_TEMPLATE _method("data_count", &D::ClassType::data_count);
    _d.CPGF_MD_TEMPLATE _method("data_at", &D::ClassType::data_at);
    _d.CPGF_MD_TEMPLATE _method("data_clear", &D::ClassType::data_clear);
    _d.CPGF_MD_TEMPLATE _method("contextCreationFailureMessage", &D::ClassType::contextCreationFailureMessage, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("data", &D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("deliverKeyEvent", &D::ClassType::deliverKeyEvent);
    _d.CPGF_MD_TEMPLATE _method("checkIfDoubleClicked", &D::ClassType::checkIfDoubleClicked);
    _d.CPGF_MD_TEMPLATE _method("translateTouchToMouse", &D::ClassType::translateTouchToMouse);
    _d.CPGF_MD_TEMPLATE _method("translateTouchEvent", &D::ClassType::translateTouchEvent);
    _d.CPGF_MD_TEMPLATE _method("setMouseGrabber", &D::ClassType::setMouseGrabber);
    _d.CPGF_MD_TEMPLATE _method("deliverInitialMousePressEvent", &D::ClassType::deliverInitialMousePressEvent);
    _d.CPGF_MD_TEMPLATE _method("deliverMouseEvent", &D::ClassType::deliverMouseEvent);
    _d.CPGF_MD_TEMPLATE _method("sendFilteredMouseEvent", &D::ClassType::sendFilteredMouseEvent);
    _d.CPGF_MD_TEMPLATE _method("deliverWheelEvent", &D::ClassType::deliverWheelEvent);
    _d.CPGF_MD_TEMPLATE _method("deliverTouchPoints", &D::ClassType::deliverTouchPoints);
    _d.CPGF_MD_TEMPLATE _method("deliverTouchEvent", &D::ClassType::deliverTouchEvent);
    _d.CPGF_MD_TEMPLATE _method("deliverTouchCancelEvent", &D::ClassType::deliverTouchCancelEvent);
    _d.CPGF_MD_TEMPLATE _method("deliverHoverEvent", &D::ClassType::deliverHoverEvent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("deliverMatchingPointsToItem", &D::ClassType::deliverMatchingPointsToItem);
    _d.CPGF_MD_TEMPLATE _method("touchEventForItemBounds", &D::ClassType::touchEventForItemBounds, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("touchEventWithPoints", &D::ClassType::touchEventWithPoints, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("sendFilteredTouchEvent", &D::ClassType::sendFilteredTouchEvent);
    _d.CPGF_MD_TEMPLATE _method("sendHoverEvent", &D::ClassType::sendHoverEvent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3> >());
    _d.CPGF_MD_TEMPLATE _method("clearHover", &D::ClassType::clearHover);
    _d.CPGF_MD_TEMPLATE _method("updateCursor", &D::ClassType::updateCursor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("findCursorItem", &D::ClassType::findCursorItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("setFocusInScope", &D::ClassType::setFocusInScope)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("clearFocusInScope", &D::ClassType::clearFocusInScope)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("clearFocusObject", &D::ClassType::clearFocusObject);
    _d.CPGF_MD_TEMPLATE _method("updateFocusItemTransform", &D::ClassType::updateFocusItemTransform);
    _d.CPGF_MD_TEMPLATE _method("dirtyItem", &D::ClassType::dirtyItem);
    _d.CPGF_MD_TEMPLATE _method("cleanup", &D::ClassType::cleanup);
    _d.CPGF_MD_TEMPLATE _method("polishItems", &D::ClassType::polishItems);
    _d.CPGF_MD_TEMPLATE _method("syncSceneGraph", &D::ClassType::syncSceneGraph);
    _d.CPGF_MD_TEMPLATE _method("renderSceneGraph", &D::ClassType::renderSceneGraph);
    _d.CPGF_MD_TEMPLATE _method("isRenderable", &D::ClassType::isRenderable);
    _d.CPGF_MD_TEMPLATE _method("emitError", &D::ClassType::emitError, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("updateDirtyNodes", &D::ClassType::updateDirtyNodes);
    _d.CPGF_MD_TEMPLATE _method("cleanupNodes", &D::ClassType::cleanupNodes);
    _d.CPGF_MD_TEMPLATE _method("cleanupNodesOnShutdown", (void (D::ClassType::*) ())&D::ClassType::cleanupNodesOnShutdown);
    _d.CPGF_MD_TEMPLATE _method("updateDirtyNode", &D::ClassType::updateDirtyNode);
    _d.CPGF_MD_TEMPLATE _method("fireFrameSwapped", &D::ClassType::fireFrameSwapped);
    _d.CPGF_MD_TEMPLATE _method("fireOpenGLContextCreated", &D::ClassType::fireOpenGLContextCreated);
    _d.CPGF_MD_TEMPLATE _method("fireAboutToStop", &D::ClassType::fireAboutToStop);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::FocusOption>("FocusOption")
        ._element("DontChangeFocusProperty", D::ClassType::DontChangeFocusProperty)
        ._element("DontChangeSubFocusItem", D::ClassType::DontChangeSubFocusItem)
    ;
    {
        GDefineMetaClass<QFlags<typename QQuickWindowPrivate::FocusOption > > _t_d = GDefineMetaClass<QFlags<typename QQuickWindowPrivate::FocusOption > >::lazyDeclare("FocusOptions", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QQuickWindowPrivate::FocusOption > >, typename QQuickWindowPrivate::FocusOption >);
        _d._class(_t_d);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
