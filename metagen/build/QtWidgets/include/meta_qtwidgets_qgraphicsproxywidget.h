// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QGRAPHICSPROXYWIDGET_H
#define CPGF_META_QTWIDGETS_QGRAPHICSPROXYWIDGET_H


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
void buildMetaClass_QGraphicsProxyWidget(D _d)
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
    _d.CPGF_MD_TEMPLATE _method("setWidget", &D::ClassType::setWidget);
    _d.CPGF_MD_TEMPLATE _method("widget", &D::ClassType::widget);
    _d.CPGF_MD_TEMPLATE _method("subWidgetRect", &D::ClassType::subWidgetRect);
    _d.CPGF_MD_TEMPLATE _method("setGeometry", &D::ClassType::setGeometry, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("paint", &D::ClassType::paint);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("createProxyForChildWidget", &D::ClassType::createProxyForChildWidget);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtWidgets_1")
        ._element("Type", D::ClassType::Type)
    ;
}


class QGraphicsProxyWidgetWrapper : public QGraphicsProxyWidget, public cpgf::GScriptWrapper {
public:
    
    QGraphicsProxyWidgetWrapper(QGraphicsItem * parent = 0, Qt::WindowFlags wFlags = 0)
        : QGraphicsProxyWidget(parent, wFlags) {}
    
    QGraphicsProxyWidget * newProxyWidget(const QWidget * __arg0)
    {
        return QGraphicsProxyWidget::newProxyWidget(__arg0);
    }
    
    QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemChange"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, change, value).getValue());
        }
        return QGraphicsProxyWidget::itemChange(change, value);
    }
    QVariant super_itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        return QGraphicsProxyWidget::itemChange(change, value);
    }
    
    void zChanged()
    {
        QGraphicsObject::zChanged();
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    QRectF boundingRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsWidget::boundingRect();
    }
    QRectF super_boundingRect() const
    {
        return QGraphicsWidget::boundingRect();
    }
    
    void keyReleaseEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::keyReleaseEvent(event);
    }
    void super_keyReleaseEvent(QKeyEvent * event)
    {
        QGraphicsProxyWidget::keyReleaseEvent(event);
    }
    
    void updateMicroFocus()
    {
        QGraphicsObject::updateMicroFocus();
    }
    
    void ungrabMouseEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("ungrabMouseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::ungrabMouseEvent(event);
    }
    void super_ungrabMouseEvent(QEvent * event)
    {
        QGraphicsProxyWidget::ungrabMouseEvent(event);
    }
    
    bool collidesWithPath(const QPainterPath & path, Qt::ItemSelectionMode mode = Qt::IntersectsItemShape) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("collidesWithPath"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, path, mode).getValue());
        }
        return QGraphicsItem::collidesWithPath(path, mode);
    }
    bool super_collidesWithPath(const QPainterPath & path, Qt::ItemSelectionMode mode = Qt::IntersectsItemShape) const
    {
        return QGraphicsItem::collidesWithPath(path, mode);
    }
    
    void grabMouseEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("grabMouseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::grabMouseEvent(event);
    }
    void super_grabMouseEvent(QEvent * event)
    {
        QGraphicsProxyWidget::grabMouseEvent(event);
    }
    
    void heightChanged()
    {
        QGraphicsObject::heightChanged();
    }
    
    void showEvent(QShowEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("showEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::showEvent(event);
    }
    void super_showEvent(QShowEvent * event)
    {
        QGraphicsProxyWidget::showEvent(event);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    void focusOutEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::focusOutEvent(event);
    }
    void super_focusOutEvent(QFocusEvent * event)
    {
        QGraphicsProxyWidget::focusOutEvent(event);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void hideEvent(QHideEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hideEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::hideEvent(event);
    }
    void super_hideEvent(QHideEvent * event)
    {
        QGraphicsProxyWidget::hideEvent(event);
    }
    
    bool eventFilter(QObject * object, QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, object, event).getValue());
        }
        return QGraphicsProxyWidget::eventFilter(object, event);
    }
    bool super_eventFilter(QObject * object, QEvent * event)
    {
        return QGraphicsProxyWidget::eventFilter(object, event);
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
    
    void visibleChanged()
    {
        QGraphicsObject::visibleChanged();
    }
    
    void inputMethodEvent(QInputMethodEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::inputMethodEvent(event);
    }
    void super_inputMethodEvent(QInputMethodEvent * event)
    {
        QGraphicsProxyWidget::inputMethodEvent(event);
    }
    
    void dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::dragEnterEvent(event);
    }
    void super_dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsProxyWidget::dragEnterEvent(event);
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
    
    void setGraphicsItem(QGraphicsItem * item)
    {
        QGraphicsLayoutItem::setGraphicsItem(item);
    }
    
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paint"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, option, widget);
            return;
        }
        QGraphicsProxyWidget::paint(painter, option, widget);
    }
    void super_paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)
    {
        QGraphicsProxyWidget::paint(painter, option, widget);
    }
    
    bool contains(const QPointF & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contains"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, point).getValue());
        }
        return QGraphicsItem::contains(point);
    }
    bool super_contains(const QPointF & point) const
    {
        return QGraphicsItem::contains(point);
    }
    
    void mouseMoveEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::mouseMoveEvent(event);
    }
    void super_mouseMoveEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsProxyWidget::mouseMoveEvent(event);
    }
    
    void closeEvent(QCloseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("closeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsWidget::closeEvent(event);
    }
    void super_closeEvent(QCloseEvent * event)
    {
        QGraphicsWidget::closeEvent(event);
    }
    
    bool sceneEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sceneEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event).getValue());
        }
        return QGraphicsWidget::sceneEvent(event);
    }
    bool super_sceneEvent(QEvent * event)
    {
        return QGraphicsWidget::sceneEvent(event);
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
    
    void wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::wheelEvent(event);
    }
    void super_wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        QGraphicsProxyWidget::wheelEvent(event);
    }
    
    void moveEvent(QGraphicsSceneMoveEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("moveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsWidget::moveEvent(event);
    }
    void super_moveEvent(QGraphicsSceneMoveEvent * event)
    {
        QGraphicsWidget::moveEvent(event);
    }
    
    void scaleChanged()
    {
        QGraphicsObject::scaleChanged();
    }
    
    void polishEvent()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("polishEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QGraphicsWidget::polishEvent();
    }
    void super_polishEvent()
    {
        QGraphicsWidget::polishEvent();
    }
    
    QPainterPath shape() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("shape"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsWidget::shape();
    }
    QPainterPath super_shape() const
    {
        return QGraphicsWidget::shape();
    }
    
    void enabledChanged()
    {
        QGraphicsObject::enabledChanged();
    }
    
    void childrenChanged()
    {
        QGraphicsObject::childrenChanged();
    }
    
    void setExtension(QGraphicsItem::Extension extension, const QVariant & variant)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setExtension"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, extension, variant);
            return;
        }
        QGraphicsItem::setExtension(extension, variant);
    }
    void super_setExtension(QGraphicsItem::Extension extension, const QVariant & variant)
    {
        QGraphicsItem::setExtension(extension, variant);
    }
    
    void removeFromIndex()
    {
        QGraphicsItem::removeFromIndex();
    }
    
    void parentChanged()
    {
        QGraphicsObject::parentChanged();
    }
    
    void getContentsMargins(qreal * left, qreal * top, qreal * right, qreal * bottom) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("getContentsMargins"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, left, top, right, bottom);
            return;
        }
        QGraphicsWidget::getContentsMargins(left, top, right, bottom);
    }
    void super_getContentsMargins(qreal * left, qreal * top, qreal * right, qreal * bottom) const
    {
        QGraphicsWidget::getContentsMargins(left, top, right, bottom);
    }
    
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::mouseDoubleClickEvent(event);
    }
    void super_mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsProxyWidget::mouseDoubleClickEvent(event);
    }
    
    void addToIndex()
    {
        QGraphicsItem::addToIndex();
    }
    
    void focusInEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::focusInEvent(event);
    }
    void super_focusInEvent(QFocusEvent * event)
    {
        QGraphicsProxyWidget::focusInEvent(event);
    }
    
    void mousePressEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::mousePressEvent(event);
    }
    void super_mousePressEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsProxyWidget::mousePressEvent(event);
    }
    
    void prepareGeometryChange()
    {
        QGraphicsItem::prepareGeometryChange();
    }
    
    void ungrabKeyboardEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("ungrabKeyboardEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsWidget::ungrabKeyboardEvent(event);
    }
    void super_ungrabKeyboardEvent(QEvent * event)
    {
        QGraphicsWidget::ungrabKeyboardEvent(event);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsProxyWidget::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QGraphicsProxyWidget::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QGraphicsProxyWidget::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QGraphicsProxyWidget::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    void mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::mouseReleaseEvent(event);
    }
    void super_mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsProxyWidget::mouseReleaseEvent(event);
    }
    
    int type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsProxyWidget::type();
    }
    int super_type() const
    {
        return QGraphicsProxyWidget::type();
    }
    
    bool isObscuredBy(const QGraphicsItem * item) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isObscuredBy"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, item).getValue());
        }
        return QGraphicsItem::isObscuredBy(item);
    }
    bool super_isObscuredBy(const QGraphicsItem * item) const
    {
        return QGraphicsItem::isObscuredBy(item);
    }
    
    void dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::dragMoveEvent(event);
    }
    void super_dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsProxyWidget::dragMoveEvent(event);
    }
    
    void hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::hoverEnterEvent(event);
    }
    void super_hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsProxyWidget::hoverEnterEvent(event);
    }
    
    void grabKeyboardEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("grabKeyboardEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsWidget::grabKeyboardEvent(event);
    }
    void super_grabKeyboardEvent(QEvent * event)
    {
        QGraphicsWidget::grabKeyboardEvent(event);
    }
    
    void dragLeaveEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::dragLeaveEvent(event);
    }
    void super_dragLeaveEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsProxyWidget::dragLeaveEvent(event);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void rotationChanged()
    {
        QGraphicsObject::rotationChanged();
    }
    
    QSizeF sizeHint(Qt::SizeHint which, const QSizeF & constraint = QSizeF()) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSizeF >(cpgf::invokeScriptFunctionOnObject(func.get(), this, which, constraint).getValue());
        }
        return QGraphicsProxyWidget::sizeHint(which, constraint);
    }
    QSizeF super_sizeHint(Qt::SizeHint which, const QSizeF & constraint = QSizeF()) const
    {
        return QGraphicsProxyWidget::sizeHint(which, constraint);
    }
    
    bool sceneEventFilter(QGraphicsItem * watched, QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sceneEventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, watched, event).getValue());
        }
        return QGraphicsItem::sceneEventFilter(watched, event);
    }
    bool super_sceneEventFilter(QGraphicsItem * watched, QEvent * event)
    {
        return QGraphicsItem::sceneEventFilter(watched, event);
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
    
    void setOwnedByLayout(bool ownedByLayout)
    {
        QGraphicsLayoutItem::setOwnedByLayout(ownedByLayout);
    }
    
    QVariant inputMethodQuery(Qt::InputMethodQuery query) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodQuery"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, query).getValue());
        }
        return QGraphicsProxyWidget::inputMethodQuery(query);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery query) const
    {
        return QGraphicsProxyWidget::inputMethodQuery(query);
    }
    
    void hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::hoverMoveEvent(event);
    }
    void super_hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsProxyWidget::hoverMoveEvent(event);
    }
    
    void resizeEvent(QGraphicsSceneResizeEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("resizeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::resizeEvent(event);
    }
    void super_resizeEvent(QGraphicsSceneResizeEvent * event)
    {
        QGraphicsProxyWidget::resizeEvent(event);
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
    
    QPainterPath opaqueArea() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("opaqueArea"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsItem::opaqueArea();
    }
    QPainterPath super_opaqueArea() const
    {
        return QGraphicsItem::opaqueArea();
    }
    
    void hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::hoverLeaveEvent(event);
    }
    void super_hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsProxyWidget::hoverLeaveEvent(event);
    }
    
    void paintWindowFrame(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintWindowFrame"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, option, widget);
            return;
        }
        QGraphicsWidget::paintWindowFrame(painter, option, widget);
    }
    void super_paintWindowFrame(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        QGraphicsWidget::paintWindowFrame(painter, option, widget);
    }
    
    bool focusNextPrevChild(bool next)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusNextPrevChild"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, next).getValue());
        }
        return QGraphicsProxyWidget::focusNextPrevChild(next);
    }
    bool super_focusNextPrevChild(bool next)
    {
        return QGraphicsProxyWidget::focusNextPrevChild(next);
    }
    
    bool windowFrameEvent(QEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("windowFrameEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, e).getValue());
        }
        return QGraphicsWidget::windowFrameEvent(e);
    }
    bool super_windowFrameEvent(QEvent * e)
    {
        return QGraphicsWidget::windowFrameEvent(e);
    }
    
    QVariant extension(const QVariant & variant) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("extension"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, variant).getValue());
        }
        return QGraphicsItem::extension(variant);
    }
    QVariant super_extension(const QVariant & variant) const
    {
        return QGraphicsItem::extension(variant);
    }
    
    void xChanged()
    {
        QGraphicsObject::xChanged();
    }
    
    void changeEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("changeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsWidget::changeEvent(event);
    }
    void super_changeEvent(QEvent * event)
    {
        QGraphicsWidget::changeEvent(event);
    }
    
    QVariant propertyChange(const QString & propertyName, const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("propertyChange"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, propertyName, value).getValue());
        }
        return QGraphicsWidget::propertyChange(propertyName, value);
    }
    QVariant super_propertyChange(const QString & propertyName, const QVariant & value)
    {
        return QGraphicsWidget::propertyChange(propertyName, value);
    }
    
    void keyPressEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::keyPressEvent(event);
    }
    void super_keyPressEvent(QKeyEvent * event)
    {
        QGraphicsProxyWidget::keyPressEvent(event);
    }
    
    void advance(int phase)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("advance"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, phase);
            return;
        }
        QGraphicsItem::advance(phase);
    }
    void super_advance(int phase)
    {
        QGraphicsItem::advance(phase);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QGraphicsProxyWidget::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QGraphicsProxyWidget::qt_metacast(__arg0);
    }
    
    void contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::contextMenuEvent(event);
    }
    void super_contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
    {
        QGraphicsProxyWidget::contextMenuEvent(event);
    }
    
    void yChanged()
    {
        QGraphicsObject::yChanged();
    }
    
    void widthChanged()
    {
        QGraphicsObject::widthChanged();
    }
    
    void initStyleOption(QStyleOption * option) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("initStyleOption"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, option);
            return;
        }
        QGraphicsWidget::initStyleOption(option);
    }
    void super_initStyleOption(QStyleOption * option) const
    {
        QGraphicsWidget::initStyleOption(option);
    }
    
    bool event(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event).getValue());
        }
        return QGraphicsProxyWidget::event(event);
    }
    bool super_event(QEvent * event)
    {
        return QGraphicsProxyWidget::event(event);
    }
    
    void setGeometry(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setGeometry"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rect);
            return;
        }
        QGraphicsProxyWidget::setGeometry(rect);
    }
    void super_setGeometry(const QRectF & rect)
    {
        QGraphicsProxyWidget::setGeometry(rect);
    }
    
    Qt::WindowFrameSection windowFrameSectionAt(const QPointF & pos) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("windowFrameSectionAt"));
        if(func)
        {
            return cpgf::fromVariant<Qt::WindowFrameSection >(cpgf::invokeScriptFunctionOnObject(func.get(), this, pos).getValue());
        }
        return QGraphicsWidget::windowFrameSectionAt(pos);
    }
    Qt::WindowFrameSection super_windowFrameSectionAt(const QPointF & pos) const
    {
        return QGraphicsWidget::windowFrameSectionAt(pos);
    }
    
    void dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsProxyWidget::dropEvent(event);
    }
    void super_dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsProxyWidget::dropEvent(event);
    }
    
    bool supportsExtension(QGraphicsItem::Extension extension) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("supportsExtension"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, extension).getValue());
        }
        return QGraphicsItem::supportsExtension(extension);
    }
    bool super_supportsExtension(QGraphicsItem::Extension extension) const
    {
        return QGraphicsItem::supportsExtension(extension);
    }
    
    bool collidesWithItem(const QGraphicsItem * other, Qt::ItemSelectionMode mode = Qt::IntersectsItemShape) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("collidesWithItem"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, other, mode).getValue());
        }
        return QGraphicsItem::collidesWithItem(other, mode);
    }
    bool super_collidesWithItem(const QGraphicsItem * other, Qt::ItemSelectionMode mode = Qt::IntersectsItemShape) const
    {
        return QGraphicsItem::collidesWithItem(other, mode);
    }
    
    void updateGeometry()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updateGeometry"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QGraphicsWidget::updateGeometry();
    }
    void super_updateGeometry()
    {
        QGraphicsWidget::updateGeometry();
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
        _d.CPGF_MD_TEMPLATE _method("newProxyWidget", (QGraphicsProxyWidget * (D::ClassType::*) (const QWidget *))&D::ClassType::newProxyWidget);
        _d.CPGF_MD_TEMPLATE _method("itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("zChanged", (void (D::ClassType::*) ())&D::ClassType::zChanged);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("ungrabMouseEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::ungrabMouseEvent);
        _d.CPGF_MD_TEMPLATE _method("grabMouseEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::grabMouseEvent);
        _d.CPGF_MD_TEMPLATE _method("heightChanged", (void (D::ClassType::*) ())&D::ClassType::heightChanged);
        _d.CPGF_MD_TEMPLATE _method("showEvent", (void (D::ClassType::*) (QShowEvent *))&D::ClassType::showEvent);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("hideEvent", (void (D::ClassType::*) (QHideEvent *))&D::ClassType::hideEvent);
        _d.CPGF_MD_TEMPLATE _method("eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::eventFilter);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("visibleChanged", (void (D::ClassType::*) ())&D::ClassType::visibleChanged);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("setGraphicsItem", (void (D::ClassType::*) (QGraphicsItem *))&D::ClassType::setGraphicsItem);
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::closeEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("moveEvent", (void (D::ClassType::*) (QGraphicsSceneMoveEvent *))&D::ClassType::moveEvent);
        _d.CPGF_MD_TEMPLATE _method("scaleChanged", (void (D::ClassType::*) ())&D::ClassType::scaleChanged);
        _d.CPGF_MD_TEMPLATE _method("polishEvent", (void (D::ClassType::*) ())&D::ClassType::polishEvent);
        _d.CPGF_MD_TEMPLATE _method("enabledChanged", (void (D::ClassType::*) ())&D::ClassType::enabledChanged);
        _d.CPGF_MD_TEMPLATE _method("childrenChanged", (void (D::ClassType::*) ())&D::ClassType::childrenChanged);
        _d.CPGF_MD_TEMPLATE _method("setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("removeFromIndex", (void (D::ClassType::*) ())&D::ClassType::removeFromIndex);
        _d.CPGF_MD_TEMPLATE _method("parentChanged", (void (D::ClassType::*) ())&D::ClassType::parentChanged);
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("addToIndex", (void (D::ClassType::*) ())&D::ClassType::addToIndex);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("prepareGeometryChange", (void (D::ClassType::*) ())&D::ClassType::prepareGeometryChange);
        _d.CPGF_MD_TEMPLATE _method("ungrabKeyboardEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::ungrabKeyboardEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("grabKeyboardEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::grabKeyboardEvent);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("rotationChanged", (void (D::ClassType::*) ())&D::ClassType::rotationChanged);
        _d.CPGF_MD_TEMPLATE _method("sizeHint", (QSizeF (D::ClassType::*) (Qt::SizeHint, const QSizeF &) const)&D::ClassType::sizeHint, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
            ._default(copyVariantFromCopyable(QSizeF()))
        ;
        _d.CPGF_MD_TEMPLATE _method("sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("setOwnedByLayout", (void (D::ClassType::*) (bool))&D::ClassType::setOwnedByLayout);
        _d.CPGF_MD_TEMPLATE _method("inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("resizeEvent", (void (D::ClassType::*) (QGraphicsSceneResizeEvent *))&D::ClassType::resizeEvent);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("windowFrameEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::windowFrameEvent);
        _d.CPGF_MD_TEMPLATE _method("extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("xChanged", (void (D::ClassType::*) ())&D::ClassType::xChanged);
        _d.CPGF_MD_TEMPLATE _method("changeEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::changeEvent);
        _d.CPGF_MD_TEMPLATE _method("propertyChange", (QVariant (D::ClassType::*) (const QString &, const QVariant &))&D::ClassType::propertyChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("yChanged", (void (D::ClassType::*) ())&D::ClassType::yChanged);
        _d.CPGF_MD_TEMPLATE _method("widthChanged", (void (D::ClassType::*) ())&D::ClassType::widthChanged);
        _d.CPGF_MD_TEMPLATE _method("initStyleOption", (void (D::ClassType::*) (QStyleOption *) const)&D::ClassType::initStyleOption);
        _d.CPGF_MD_TEMPLATE _method("event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::event);
        _d.CPGF_MD_TEMPLATE _method("windowFrameSectionAt", (Qt::WindowFrameSection (D::ClassType::*) (const QPointF &) const)&D::ClassType::windowFrameSectionAt, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("updateGeometry", (void (D::ClassType::*) ())&D::ClassType::updateGeometry);
        _d.CPGF_MD_TEMPLATE _method("opacityChanged", (void (D::ClassType::*) ())&D::ClassType::opacityChanged);
        _d.CPGF_MD_TEMPLATE _method("super_itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::super_itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_boundingRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_boundingRect);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_ungrabMouseEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_ungrabMouseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithPath", (bool (D::ClassType::*) (const QPainterPath &, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_grabMouseEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_grabMouseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_showEvent", (void (D::ClassType::*) (QShowEvent *))&D::ClassType::super_showEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hideEvent", (void (D::ClassType::*) (QHideEvent *))&D::ClassType::super_hideEvent);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paint", (void (D::ClassType::*) (QPainter *, const QStyleOptionGraphicsItem *, QWidget *))&D::ClassType::super_paint);
        _d.CPGF_MD_TEMPLATE _method("super_contains", (bool (D::ClassType::*) (const QPointF &) const)&D::ClassType::super_contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::super_closeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_moveEvent", (void (D::ClassType::*) (QGraphicsSceneMoveEvent *))&D::ClassType::super_moveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_polishEvent", (void (D::ClassType::*) ())&D::ClassType::super_polishEvent);
        _d.CPGF_MD_TEMPLATE _method("super_shape", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_shape);
        _d.CPGF_MD_TEMPLATE _method("super_setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::super_setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_getContentsMargins", (void (D::ClassType::*) (qreal *, qreal *, qreal *, qreal *) const)&D::ClassType::super_getContentsMargins);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_ungrabKeyboardEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_ungrabKeyboardEvent);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_type", (int (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_isObscuredBy", (bool (D::ClassType::*) (const QGraphicsItem *) const)&D::ClassType::super_isObscuredBy);
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_grabKeyboardEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_grabKeyboardEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSizeF (D::ClassType::*) (Qt::SizeHint, const QSizeF &) const)&D::ClassType::super_sizeHint, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
            ._default(copyVariantFromCopyable(QSizeF()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::super_sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_resizeEvent", (void (D::ClassType::*) (QGraphicsSceneResizeEvent *))&D::ClassType::super_resizeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_opaqueArea", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_opaqueArea);
        _d.CPGF_MD_TEMPLATE _method("super_hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paintWindowFrame", (void (D::ClassType::*) (QPainter *, const QStyleOptionGraphicsItem *, QWidget *))&D::ClassType::super_paintWindowFrame)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::super_focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("super_windowFrameEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_windowFrameEvent);
        _d.CPGF_MD_TEMPLATE _method("super_extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::super_extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_changeEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_changeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_propertyChange", (QVariant (D::ClassType::*) (const QString &, const QVariant &))&D::ClassType::super_propertyChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_advance", (void (D::ClassType::*) (int))&D::ClassType::super_advance);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_initStyleOption", (void (D::ClassType::*) (QStyleOption *) const)&D::ClassType::super_initStyleOption);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_setGeometry", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setGeometry, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_windowFrameSectionAt", (Qt::WindowFrameSection (D::ClassType::*) (const QPointF &) const)&D::ClassType::super_windowFrameSectionAt, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::super_supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithItem", (bool (D::ClassType::*) (const QGraphicsItem *, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithItem)
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_updateGeometry", (void (D::ClassType::*) ())&D::ClassType::super_updateGeometry);
    }
};


template <typename D>
void buildMetaClass_QGraphicsProxyWidgetWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGraphicsProxyWidgetWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsProxyWidget<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
