// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QGRAPHICSWIDGET_H
#define CPGF_META_QTWIDGETS_QGRAPHICSWIDGET_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QGraphicsWidget(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QGraphicsItem *, Qt::WindowFlags)>()
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("layout", &D::ClassType::layout);
    _d.CPGF_MD_TEMPLATE _method("setLayout", &D::ClassType::setLayout);
    _d.CPGF_MD_TEMPLATE _method("adjustSize", &D::ClassType::adjustSize);
    _d.CPGF_MD_TEMPLATE _method("layoutDirection", &D::ClassType::layoutDirection);
    _d.CPGF_MD_TEMPLATE _method("setLayoutDirection", &D::ClassType::setLayoutDirection);
    _d.CPGF_MD_TEMPLATE _method("unsetLayoutDirection", &D::ClassType::unsetLayoutDirection);
    _d.CPGF_MD_TEMPLATE _method("style", &D::ClassType::style);
    _d.CPGF_MD_TEMPLATE _method("setStyle", &D::ClassType::setStyle);
    _d.CPGF_MD_TEMPLATE _method("font", &D::ClassType::font);
    _d.CPGF_MD_TEMPLATE _method("setFont", &D::ClassType::setFont, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("palette", &D::ClassType::palette);
    _d.CPGF_MD_TEMPLATE _method("setPalette", &D::ClassType::setPalette, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("autoFillBackground", &D::ClassType::autoFillBackground);
    _d.CPGF_MD_TEMPLATE _method("setAutoFillBackground", &D::ClassType::setAutoFillBackground);
    _d.CPGF_MD_TEMPLATE _method("resize", (void (D::ClassType::*) (const QSizeF &))&D::ClassType::resize);
    _d.CPGF_MD_TEMPLATE _method("resize", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::resize);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("setGeometry", (void (D::ClassType::*) (const QRectF &))&D::ClassType::setGeometry);
    _d.CPGF_MD_TEMPLATE _method("setGeometry", (void (D::ClassType::*) (qreal, qreal, qreal, qreal))&D::ClassType::setGeometry);
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("setContentsMargins", &D::ClassType::setContentsMargins);
    _d.CPGF_MD_TEMPLATE _method("getContentsMargins", &D::ClassType::getContentsMargins);
    _d.CPGF_MD_TEMPLATE _method("setWindowFrameMargins", &D::ClassType::setWindowFrameMargins);
    _d.CPGF_MD_TEMPLATE _method("getWindowFrameMargins", &D::ClassType::getWindowFrameMargins);
    _d.CPGF_MD_TEMPLATE _method("unsetWindowFrameMargins", &D::ClassType::unsetWindowFrameMargins);
    _d.CPGF_MD_TEMPLATE _method("windowFrameGeometry", &D::ClassType::windowFrameGeometry);
    _d.CPGF_MD_TEMPLATE _method("windowFrameRect", &D::ClassType::windowFrameRect);
    _d.CPGF_MD_TEMPLATE _method("windowFlags", &D::ClassType::windowFlags);
    _d.CPGF_MD_TEMPLATE _method("windowType", &D::ClassType::windowType);
    _d.CPGF_MD_TEMPLATE _method("setWindowFlags", &D::ClassType::setWindowFlags);
    _d.CPGF_MD_TEMPLATE _method("isActiveWindow", &D::ClassType::isActiveWindow);
    _d.CPGF_MD_TEMPLATE _method("setWindowTitle", &D::ClassType::setWindowTitle, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("windowTitle", &D::ClassType::windowTitle);
    _d.CPGF_MD_TEMPLATE _method("focusPolicy", &D::ClassType::focusPolicy);
    _d.CPGF_MD_TEMPLATE _method("setFocusPolicy", &D::ClassType::setFocusPolicy);
    _d.CPGF_MD_TEMPLATE _method("focusWidget", &D::ClassType::focusWidget);
    _d.CPGF_MD_TEMPLATE _method("grabShortcut", &D::ClassType::grabShortcut, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::WindowShortcut))
    ;
    _d.CPGF_MD_TEMPLATE _method("releaseShortcut", &D::ClassType::releaseShortcut);
    _d.CPGF_MD_TEMPLATE _method("setShortcutEnabled", &D::ClassType::setShortcutEnabled)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("setShortcutAutoRepeat", &D::ClassType::setShortcutAutoRepeat)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("addAction", &D::ClassType::addAction);
    _d.CPGF_MD_TEMPLATE _method("addActions", &D::ClassType::addActions);
    _d.CPGF_MD_TEMPLATE _method("insertAction", &D::ClassType::insertAction);
    _d.CPGF_MD_TEMPLATE _method("insertActions", &D::ClassType::insertActions);
    _d.CPGF_MD_TEMPLATE _method("removeAction", &D::ClassType::removeAction);
    _d.CPGF_MD_TEMPLATE _method("actions", &D::ClassType::actions);
    _d.CPGF_MD_TEMPLATE _method("setAttribute", &D::ClassType::setAttribute)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("testAttribute", &D::ClassType::testAttribute);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("paint", &D::ClassType::paint)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("paintWindowFrame", &D::ClassType::paintWindowFrame)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("shape", &D::ClassType::shape);
    _d.CPGF_MD_TEMPLATE _method("children", &D::ClassType::children);
    _d.CPGF_MD_TEMPLATE _method("geometryChanged", &D::ClassType::geometryChanged);
    _d.CPGF_MD_TEMPLATE _method("layoutChanged", &D::ClassType::layoutChanged);
    _d.CPGF_MD_TEMPLATE _method("close", &D::ClassType::close);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setTabOrder", &D::ClassType::setTabOrder);
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtWidgets_1")
        ._element("Type", D::ClassType::Type)
    ;
}


class QGraphicsWidgetWrapper : public QGraphicsWidget, public cpgf::GScriptWrapper {
public:
    
    QGraphicsWidgetWrapper(QGraphicsItem * parent = 0, Qt::WindowFlags wFlags = 0)
        : QGraphicsWidget(parent, wFlags) {}
    
    void hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsWidget::hoverLeaveEvent(event);
    }
    void super_hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsWidget::hoverLeaveEvent(event);
    }
    
    void initStyleOption(QStyleOption * option) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("initStyleOption"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, option);
            return;
        }
        QGraphicsWidget::initStyleOption(option);
    }
    void super_initStyleOption(QStyleOption * option) const
    {
        QGraphicsWidget::initStyleOption(option);
    }
    
    void resizeEvent(QGraphicsSceneResizeEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("resizeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsWidget::resizeEvent(event);
    }
    void super_resizeEvent(QGraphicsSceneResizeEvent * event)
    {
        QGraphicsWidget::resizeEvent(event);
    }
    
    void removeFromIndex()
    {
        QGraphicsItem::removeFromIndex();
    }
    
    void showEvent(QShowEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("showEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsWidget::showEvent(event);
    }
    void super_showEvent(QShowEvent * event)
    {
        QGraphicsWidget::showEvent(event);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0).getValue());
        }
        return QGraphicsWidget::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QGraphicsWidget::qt_metacast(__arg0);
    }
    
    void hideEvent(QHideEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hideEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsWidget::hideEvent(event);
    }
    void super_hideEvent(QHideEvent * event)
    {
        QGraphicsWidget::hideEvent(event);
    }
    
    void enabledChanged()
    {
        QGraphicsObject::enabledChanged();
    }
    
    void focusInEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsWidget::focusInEvent(event);
    }
    void super_focusInEvent(QFocusEvent * event)
    {
        QGraphicsWidget::focusInEvent(event);
    }
    
    void updateGeometry()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updateGeometry"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QGraphicsWidget::updateGeometry();
    }
    void super_updateGeometry()
    {
        QGraphicsWidget::updateGeometry();
    }
    
    bool event(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, event).getValue());
        }
        return QGraphicsWidget::event(event);
    }
    bool super_event(QEvent * event)
    {
        return QGraphicsWidget::event(event);
    }
    
    void widthChanged()
    {
        QGraphicsObject::widthChanged();
    }
    
    void timerEvent(QTimerEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::timerEvent(__arg0);
    }
    void super_timerEvent(QTimerEvent * __arg0)
    {
        QObject::timerEvent(__arg0);
    }
    
    void yChanged()
    {
        QGraphicsObject::yChanged();
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void advance(int phase)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("advance"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, phase);
            return;
        }
        QGraphicsItem::advance(phase);
    }
    void super_advance(int phase)
    {
        QGraphicsItem::advance(phase);
    }
    
    void ungrabKeyboardEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("ungrabKeyboardEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsWidget::ungrabKeyboardEvent(event);
    }
    void super_ungrabKeyboardEvent(QEvent * event)
    {
        QGraphicsWidget::ungrabKeyboardEvent(event);
    }
    
    void paintWindowFrame(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintWindowFrame"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, painter, option, widget);
            return;
        }
        QGraphicsWidget::paintWindowFrame(painter, option, widget);
    }
    void super_paintWindowFrame(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        QGraphicsWidget::paintWindowFrame(painter, option, widget);
    }
    
    void setOwnedByLayout(bool ownedByLayout)
    {
        QGraphicsLayoutItem::setOwnedByLayout(ownedByLayout);
    }
    
    void focusOutEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsWidget::focusOutEvent(event);
    }
    void super_focusOutEvent(QFocusEvent * event)
    {
        QGraphicsWidget::focusOutEvent(event);
    }
    
    void scaleChanged()
    {
        QGraphicsObject::scaleChanged();
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    void changeEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("changeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsWidget::changeEvent(event);
    }
    void super_changeEvent(QEvent * event)
    {
        QGraphicsWidget::changeEvent(event);
    }
    
    void updateMicroFocus()
    {
        QGraphicsObject::updateMicroFocus();
    }
    
    void dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsItem::dropEvent(event);
    }
    void super_dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dropEvent(event);
    }
    
    void parentChanged()
    {
        QGraphicsObject::parentChanged();
    }
    
    QPainterPath opaqueArea() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("opaqueArea"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QGraphicsItem::opaqueArea();
    }
    QPainterPath super_opaqueArea() const
    {
        return QGraphicsItem::opaqueArea();
    }
    
    void grabKeyboardEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("grabKeyboardEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsWidget::grabKeyboardEvent(event);
    }
    void super_grabKeyboardEvent(QEvent * event)
    {
        QGraphicsWidget::grabKeyboardEvent(event);
    }
    
    void zChanged()
    {
        QGraphicsObject::zChanged();
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1).getValue());
        }
        return QObject::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QObject::eventFilter(__arg0, __arg1);
    }
    
    void moveEvent(QGraphicsSceneMoveEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("moveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsWidget::moveEvent(event);
    }
    void super_moveEvent(QGraphicsSceneMoveEvent * event)
    {
        QGraphicsWidget::moveEvent(event);
    }
    
    bool isObscuredBy(const QGraphicsItem * item) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isObscuredBy"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, item).getValue());
        }
        return QGraphicsItem::isObscuredBy(item);
    }
    bool super_isObscuredBy(const QGraphicsItem * item) const
    {
        return QGraphicsItem::isObscuredBy(item);
    }
    
    QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemChange"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunction(func.get(), this, change, value).getValue());
        }
        return QGraphicsWidget::itemChange(change, value);
    }
    QVariant super_itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        return QGraphicsWidget::itemChange(change, value);
    }
    
    void contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsItem::contextMenuEvent(event);
    }
    void super_contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
    {
        QGraphicsItem::contextMenuEvent(event);
    }
    
    void prepareGeometryChange()
    {
        QGraphicsItem::prepareGeometryChange();
    }
    
    bool sceneEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sceneEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, event).getValue());
        }
        return QGraphicsWidget::sceneEvent(event);
    }
    bool super_sceneEvent(QEvent * event)
    {
        return QGraphicsWidget::sceneEvent(event);
    }
    
    bool contains(const QPointF & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contains"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, point).getValue());
        }
        return QGraphicsItem::contains(point);
    }
    bool super_contains(const QPointF & point) const
    {
        return QGraphicsItem::contains(point);
    }
    
    QRectF boundingRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QGraphicsWidget::boundingRect();
    }
    QRectF super_boundingRect() const
    {
        return QGraphicsWidget::boundingRect();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QGraphicsWidget::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QGraphicsWidget::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    void hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsWidget::hoverMoveEvent(event);
    }
    void super_hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsWidget::hoverMoveEvent(event);
    }
    
    void disconnectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("disconnectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::disconnectNotify(signal);
    }
    void super_disconnectNotify(const QMetaMethod & signal)
    {
        QObject::disconnectNotify(signal);
    }
    
    QPainterPath shape() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("shape"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QGraphicsWidget::shape();
    }
    QPainterPath super_shape() const
    {
        return QGraphicsWidget::shape();
    }
    
    bool sceneEventFilter(QGraphicsItem * watched, QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sceneEventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, watched, event).getValue());
        }
        return QGraphicsItem::sceneEventFilter(watched, event);
    }
    bool super_sceneEventFilter(QGraphicsItem * watched, QEvent * event)
    {
        return QGraphicsItem::sceneEventFilter(watched, event);
    }
    
    void grabMouseEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("grabMouseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsWidget::grabMouseEvent(event);
    }
    void super_grabMouseEvent(QEvent * event)
    {
        QGraphicsWidget::grabMouseEvent(event);
    }
    
    void connectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("connectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::connectNotify(signal);
    }
    void super_connectNotify(const QMetaMethod & signal)
    {
        QObject::connectNotify(signal);
    }
    
    bool supportsExtension(QGraphicsItem::Extension extension) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("supportsExtension"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, extension).getValue());
        }
        return QGraphicsItem::supportsExtension(extension);
    }
    bool super_supportsExtension(QGraphicsItem::Extension extension) const
    {
        return QGraphicsItem::supportsExtension(extension);
    }
    
    bool focusNextPrevChild(bool next)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusNextPrevChild"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, next).getValue());
        }
        return QGraphicsWidget::focusNextPrevChild(next);
    }
    bool super_focusNextPrevChild(bool next)
    {
        return QGraphicsWidget::focusNextPrevChild(next);
    }
    
    void childEvent(QChildEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::childEvent(__arg0);
    }
    void super_childEvent(QChildEvent * __arg0)
    {
        QObject::childEvent(__arg0);
    }
    
    void childrenChanged()
    {
        QGraphicsObject::childrenChanged();
    }
    
    void ungrabMouseEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("ungrabMouseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsWidget::ungrabMouseEvent(event);
    }
    void super_ungrabMouseEvent(QEvent * event)
    {
        QGraphicsWidget::ungrabMouseEvent(event);
    }
    
    bool collidesWithPath(const QPainterPath & path, Qt::ItemSelectionMode mode = Qt::IntersectsItemShape) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("collidesWithPath"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, path, mode).getValue());
        }
        return QGraphicsItem::collidesWithPath(path, mode);
    }
    bool super_collidesWithPath(const QPainterPath & path, Qt::ItemSelectionMode mode = Qt::IntersectsItemShape) const
    {
        return QGraphicsItem::collidesWithPath(path, mode);
    }
    
    void dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragMoveEvent(event);
    }
    void super_dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragMoveEvent(event);
    }
    
    void polishEvent()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("polishEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QGraphicsWidget::polishEvent();
    }
    void super_polishEvent()
    {
        QGraphicsWidget::polishEvent();
    }
    
    void mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseReleaseEvent(event);
    }
    void super_mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseReleaseEvent(event);
    }
    
    void wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsItem::wheelEvent(event);
    }
    void super_wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        QGraphicsItem::wheelEvent(event);
    }
    
    void keyPressEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyPressEvent(event);
    }
    void super_keyPressEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyPressEvent(event);
    }
    
    QVariant extension(const QVariant & variant) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("extension"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunction(func.get(), this, variant).getValue());
        }
        return QGraphicsItem::extension(variant);
    }
    QVariant super_extension(const QVariant & variant) const
    {
        return QGraphicsItem::extension(variant);
    }
    
    void rotationChanged()
    {
        QGraphicsObject::rotationChanged();
    }
    
    void xChanged()
    {
        QGraphicsObject::xChanged();
    }
    
    void mouseMoveEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseMoveEvent(event);
    }
    void super_mouseMoveEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseMoveEvent(event);
    }
    
    void inputMethodEvent(QInputMethodEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsItem::inputMethodEvent(event);
    }
    void super_inputMethodEvent(QInputMethodEvent * event)
    {
        QGraphicsItem::inputMethodEvent(event);
    }
    
    void visibleChanged()
    {
        QGraphicsObject::visibleChanged();
    }
    
    int type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QGraphicsWidget::type();
    }
    int super_type() const
    {
        return QGraphicsWidget::type();
    }
    
    void heightChanged()
    {
        QGraphicsObject::heightChanged();
    }
    
    void addToIndex()
    {
        QGraphicsItem::addToIndex();
    }
    
    void dragLeaveEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragLeaveEvent(event);
    }
    void super_dragLeaveEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragLeaveEvent(event);
    }
    
    QVariant inputMethodQuery(Qt::InputMethodQuery query) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodQuery"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunction(func.get(), this, query).getValue());
        }
        return QGraphicsItem::inputMethodQuery(query);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery query) const
    {
        return QGraphicsItem::inputMethodQuery(query);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverEnterEvent(event);
    }
    void super_hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverEnterEvent(event);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    void mousePressEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsItem::mousePressEvent(event);
    }
    void super_mousePressEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mousePressEvent(event);
    }
    
    void setExtension(QGraphicsItem::Extension extension, const QVariant & variant)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setExtension"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, extension, variant);
            return;
        }
        QGraphicsItem::setExtension(extension, variant);
    }
    void super_setExtension(QGraphicsItem::Extension extension, const QVariant & variant)
    {
        QGraphicsItem::setExtension(extension, variant);
    }
    
    bool windowFrameEvent(QEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("windowFrameEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, e).getValue());
        }
        return QGraphicsWidget::windowFrameEvent(e);
    }
    bool super_windowFrameEvent(QEvent * e)
    {
        return QGraphicsWidget::windowFrameEvent(e);
    }
    
    void setGeometry(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setGeometry"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, rect);
            return;
        }
        QGraphicsWidget::setGeometry(rect);
    }
    void super_setGeometry(const QRectF & rect)
    {
        QGraphicsWidget::setGeometry(rect);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QGraphicsWidget::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QGraphicsWidget::metaObject();
    }
    
    bool collidesWithItem(const QGraphicsItem * other, Qt::ItemSelectionMode mode = Qt::IntersectsItemShape) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("collidesWithItem"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, other, mode).getValue());
        }
        return QGraphicsItem::collidesWithItem(other, mode);
    }
    bool super_collidesWithItem(const QGraphicsItem * other, Qt::ItemSelectionMode mode = Qt::IntersectsItemShape) const
    {
        return QGraphicsItem::collidesWithItem(other, mode);
    }
    
    QSizeF sizeHint(Qt::SizeHint which, const QSizeF & constraint = QSizeF()) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSizeF >(cpgf::invokeScriptFunction(func.get(), this, which, constraint).getValue());
        }
        return QGraphicsWidget::sizeHint(which, constraint);
    }
    QSizeF super_sizeHint(Qt::SizeHint which, const QSizeF & constraint = QSizeF()) const
    {
        return QGraphicsWidget::sizeHint(which, constraint);
    }
    
    void setGraphicsItem(QGraphicsItem * item)
    {
        QGraphicsLayoutItem::setGraphicsItem(item);
    }
    
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paint"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, painter, option, widget);
            return;
        }
        QGraphicsWidget::paint(painter, option, widget);
    }
    void super_paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        QGraphicsWidget::paint(painter, option, widget);
    }
    
    void dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragEnterEvent(event);
    }
    void super_dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragEnterEvent(event);
    }
    
    void keyReleaseEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyReleaseEvent(event);
    }
    void super_keyReleaseEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyReleaseEvent(event);
    }
    
    QVariant propertyChange(const QString & propertyName, const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("propertyChange"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunction(func.get(), this, propertyName, value).getValue());
        }
        return QGraphicsWidget::propertyChange(propertyName, value);
    }
    QVariant super_propertyChange(const QString & propertyName, const QVariant & value)
    {
        return QGraphicsWidget::propertyChange(propertyName, value);
    }
    
    void customEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("customEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::customEvent(__arg0);
    }
    void super_customEvent(QEvent * __arg0)
    {
        QObject::customEvent(__arg0);
    }
    
    Qt::WindowFrameSection windowFrameSectionAt(const QPointF & pos) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("windowFrameSectionAt"));
        if(func)
        {
            return cpgf::fromVariant<Qt::WindowFrameSection >(cpgf::invokeScriptFunction(func.get(), this, pos).getValue());
        }
        return QGraphicsWidget::windowFrameSectionAt(pos);
    }
    Qt::WindowFrameSection super_windowFrameSectionAt(const QPointF & pos) const
    {
        return QGraphicsWidget::windowFrameSectionAt(pos);
    }
    
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    void super_mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    
    void closeEvent(QCloseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("closeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsWidget::closeEvent(event);
    }
    void super_closeEvent(QCloseEvent * event)
    {
        QGraphicsWidget::closeEvent(event);
    }
    
    void getContentsMargins(qreal * left, qreal * top, qreal * right, qreal * bottom) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("getContentsMargins"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, left, top, right, bottom);
            return;
        }
        QGraphicsWidget::getContentsMargins(left, top, right, bottom);
    }
    void super_getContentsMargins(qreal * left, qreal * top, qreal * right, qreal * bottom) const
    {
        QGraphicsWidget::getContentsMargins(left, top, right, bottom);
    }
    
    void opacityChanged()
    {
        QGraphicsObject::opacityChanged();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("initStyleOption", (void (D::ClassType::*) (QStyleOption *) const)&D::ClassType::initStyleOption);
        _d.CPGF_MD_TEMPLATE _method("resizeEvent", (void (D::ClassType::*) (QGraphicsSceneResizeEvent *))&D::ClassType::resizeEvent);
        _d.CPGF_MD_TEMPLATE _method("removeFromIndex", (void (D::ClassType::*) ())&D::ClassType::removeFromIndex);
        _d.CPGF_MD_TEMPLATE _method("showEvent", (void (D::ClassType::*) (QShowEvent *))&D::ClassType::showEvent);
        _d.CPGF_MD_TEMPLATE _method("hideEvent", (void (D::ClassType::*) (QHideEvent *))&D::ClassType::hideEvent);
        _d.CPGF_MD_TEMPLATE _method("enabledChanged", (void (D::ClassType::*) ())&D::ClassType::enabledChanged);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("updateGeometry", (void (D::ClassType::*) ())&D::ClassType::updateGeometry);
        _d.CPGF_MD_TEMPLATE _method("event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::event);
        _d.CPGF_MD_TEMPLATE _method("widthChanged", (void (D::ClassType::*) ())&D::ClassType::widthChanged);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("yChanged", (void (D::ClassType::*) ())&D::ClassType::yChanged);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("ungrabKeyboardEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::ungrabKeyboardEvent);
        _d.CPGF_MD_TEMPLATE _method("setOwnedByLayout", (void (D::ClassType::*) (bool))&D::ClassType::setOwnedByLayout);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("scaleChanged", (void (D::ClassType::*) ())&D::ClassType::scaleChanged);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("changeEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::changeEvent);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("parentChanged", (void (D::ClassType::*) ())&D::ClassType::parentChanged);
        _d.CPGF_MD_TEMPLATE _method("grabKeyboardEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::grabKeyboardEvent);
        _d.CPGF_MD_TEMPLATE _method("zChanged", (void (D::ClassType::*) ())&D::ClassType::zChanged);
        _d.CPGF_MD_TEMPLATE _method("moveEvent", (void (D::ClassType::*) (QGraphicsSceneMoveEvent *))&D::ClassType::moveEvent);
        _d.CPGF_MD_TEMPLATE _method("itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("prepareGeometryChange", (void (D::ClassType::*) ())&D::ClassType::prepareGeometryChange);
        _d.CPGF_MD_TEMPLATE _method("sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("grabMouseEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::grabMouseEvent);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("childrenChanged", (void (D::ClassType::*) ())&D::ClassType::childrenChanged);
        _d.CPGF_MD_TEMPLATE _method("ungrabMouseEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::ungrabMouseEvent);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("polishEvent", (void (D::ClassType::*) ())&D::ClassType::polishEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("rotationChanged", (void (D::ClassType::*) ())&D::ClassType::rotationChanged);
        _d.CPGF_MD_TEMPLATE _method("xChanged", (void (D::ClassType::*) ())&D::ClassType::xChanged);
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("visibleChanged", (void (D::ClassType::*) ())&D::ClassType::visibleChanged);
        _d.CPGF_MD_TEMPLATE _method("heightChanged", (void (D::ClassType::*) ())&D::ClassType::heightChanged);
        _d.CPGF_MD_TEMPLATE _method("addToIndex", (void (D::ClassType::*) ())&D::ClassType::addToIndex);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("windowFrameEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::windowFrameEvent);
        _d.CPGF_MD_TEMPLATE _method("sizeHint", (QSizeF (D::ClassType::*) (Qt::SizeHint, const QSizeF &) const)&D::ClassType::sizeHint)
            ._default(copyVariantFromCopyable(QSizeF()))
        ;
        _d.CPGF_MD_TEMPLATE _method("setGraphicsItem", (void (D::ClassType::*) (QGraphicsItem *))&D::ClassType::setGraphicsItem);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("propertyChange", (QVariant (D::ClassType::*) (const QString &, const QVariant &))&D::ClassType::propertyChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("windowFrameSectionAt", (Qt::WindowFrameSection (D::ClassType::*) (const QPointF &) const)&D::ClassType::windowFrameSectionAt, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::closeEvent);
        _d.CPGF_MD_TEMPLATE _method("opacityChanged", (void (D::ClassType::*) ())&D::ClassType::opacityChanged);
        _d.CPGF_MD_TEMPLATE _method("super_hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_initStyleOption", (void (D::ClassType::*) (QStyleOption *) const)&D::ClassType::super_initStyleOption);
        _d.CPGF_MD_TEMPLATE _method("super_resizeEvent", (void (D::ClassType::*) (QGraphicsSceneResizeEvent *))&D::ClassType::super_resizeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_showEvent", (void (D::ClassType::*) (QShowEvent *))&D::ClassType::super_showEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_hideEvent", (void (D::ClassType::*) (QHideEvent *))&D::ClassType::super_hideEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_updateGeometry", (void (D::ClassType::*) ())&D::ClassType::super_updateGeometry);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_advance", (void (D::ClassType::*) (int))&D::ClassType::super_advance);
        _d.CPGF_MD_TEMPLATE _method("super_ungrabKeyboardEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_ungrabKeyboardEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paintWindowFrame", (void (D::ClassType::*) (QPainter *, const QStyleOptionGraphicsItem *, QWidget *))&D::ClassType::super_paintWindowFrame)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_changeEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_changeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_opaqueArea", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_opaqueArea);
        _d.CPGF_MD_TEMPLATE _method("super_grabKeyboardEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_grabKeyboardEvent);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_moveEvent", (void (D::ClassType::*) (QGraphicsSceneMoveEvent *))&D::ClassType::super_moveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_isObscuredBy", (bool (D::ClassType::*) (const QGraphicsItem *) const)&D::ClassType::super_isObscuredBy);
        _d.CPGF_MD_TEMPLATE _method("super_itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::super_itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("super_contains", (bool (D::ClassType::*) (const QPointF &) const)&D::ClassType::super_contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_boundingRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_boundingRect);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_shape", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_shape);
        _d.CPGF_MD_TEMPLATE _method("super_sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::super_sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_grabMouseEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_grabMouseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::super_supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("super_focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::super_focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_ungrabMouseEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_ungrabMouseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithPath", (bool (D::ClassType::*) (const QPainterPath &, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_polishEvent", (void (D::ClassType::*) ())&D::ClassType::super_polishEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::super_extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_type", (int (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::super_setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_windowFrameEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_windowFrameEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setGeometry", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setGeometry);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithItem", (bool (D::ClassType::*) (const QGraphicsItem *, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithItem)
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSizeF (D::ClassType::*) (Qt::SizeHint, const QSizeF &) const)&D::ClassType::super_sizeHint)
            ._default(copyVariantFromCopyable(QSizeF()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_paint", (void (D::ClassType::*) (QPainter *, const QStyleOptionGraphicsItem *, QWidget *))&D::ClassType::super_paint)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_propertyChange", (QVariant (D::ClassType::*) (const QString &, const QVariant &))&D::ClassType::super_propertyChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_windowFrameSectionAt", (Qt::WindowFrameSection (D::ClassType::*) (const QPointF &) const)&D::ClassType::super_windowFrameSectionAt, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::super_closeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_getContentsMargins", (void (D::ClassType::*) (qreal *, qreal *, qreal *, qreal *) const)&D::ClassType::super_getContentsMargins);
    }
};


template <typename D>
void buildMetaClass_QGraphicsWidgetWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGraphicsWidgetWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsWidget<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
