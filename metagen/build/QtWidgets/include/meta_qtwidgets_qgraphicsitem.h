// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QGRAPHICSITEM_H
#define CPGF_META_QTWIDGETS_QGRAPHICSITEM_H


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
void buildMetaClass_Global_qgraphicsitem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, QGraphicsItem *)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, QGraphicsObject *)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, QGraphicsItem::GraphicsItemChange)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, QGraphicsItem::GraphicsItemFlag)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, QGraphicsItem::GraphicsItemFlags)>(mopHolder << mopHolder);
}


template <typename D>
void buildMetaClass_QAbstractGraphicsShapeItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("pen", &D::ClassType::pen);
    _d.CPGF_MD_TEMPLATE _method("setPen", &D::ClassType::setPen, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("brush", &D::ClassType::brush);
    _d.CPGF_MD_TEMPLATE _method("setBrush", &D::ClassType::setBrush, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isObscuredBy", &D::ClassType::isObscuredBy);
    _d.CPGF_MD_TEMPLATE _method("opaqueArea", &D::ClassType::opaqueArea);
}


class QAbstractGraphicsShapeItemWrapper : public QAbstractGraphicsShapeItem, public cpgf::GScriptWrapper {
public:
    
    QAbstractGraphicsShapeItemWrapper(QGraphicsItem * parent = 0)
        : QAbstractGraphicsShapeItem(parent) {}
    
    void hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverLeaveEvent(event);
    }
    void super_hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverLeaveEvent(event);
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
    
    void removeFromIndex()
    {
        QGraphicsItem::removeFromIndex();
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
    
    void dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragMoveEvent(event);
    }
    void super_dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragMoveEvent(event);
    }
    
    void wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::wheelEvent(event);
    }
    void super_wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        QGraphicsItem::wheelEvent(event);
    }
    
    void mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseReleaseEvent(event);
    }
    void super_mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseReleaseEvent(event);
    }
    
    void keyPressEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyPressEvent(event);
    }
    void super_keyPressEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyPressEvent(event);
    }
    
    void focusInEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusInEvent(event);
    }
    void super_focusInEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusInEvent(event);
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
    
    void mouseMoveEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::inputMethodEvent(event);
    }
    void super_inputMethodEvent(QInputMethodEvent * event)
    {
        QGraphicsItem::inputMethodEvent(event);
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
    
    int type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsItem::type();
    }
    int super_type() const
    {
        return QGraphicsItem::type();
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, query).getValue());
        }
        return QGraphicsItem::inputMethodQuery(query);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery query) const
    {
        return QGraphicsItem::inputMethodQuery(query);
    }
    
    void focusOutEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusOutEvent(event);
    }
    void super_focusOutEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusOutEvent(event);
    }
    
    void hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverEnterEvent(event);
    }
    void super_hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverEnterEvent(event);
    }
    
    void updateMicroFocus()
    {
        QGraphicsItem::updateMicroFocus();
    }
    
    void dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dropEvent(event);
    }
    void super_dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dropEvent(event);
    }
    
    void mousePressEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, extension, variant);
            return;
        }
        QGraphicsItem::setExtension(extension, variant);
    }
    void super_setExtension(QGraphicsItem::Extension extension, const QVariant & variant)
    {
        QGraphicsItem::setExtension(extension, variant);
    }
    
    QPainterPath opaqueArea() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("opaqueArea"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAbstractGraphicsShapeItem::opaqueArea();
    }
    QPainterPath super_opaqueArea() const
    {
        return QAbstractGraphicsShapeItem::opaqueArea();
    }
    
    QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemChange"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, change, value).getValue());
        }
        return QGraphicsItem::itemChange(change, value);
    }
    QVariant super_itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        return QGraphicsItem::itemChange(change, value);
    }
    
    bool isObscuredBy(const QGraphicsItem * item) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isObscuredBy"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, item).getValue());
        }
        return QAbstractGraphicsShapeItem::isObscuredBy(item);
    }
    bool super_isObscuredBy(const QGraphicsItem * item) const
    {
        return QAbstractGraphicsShapeItem::isObscuredBy(item);
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
    
    void contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
    
    void keyReleaseEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyReleaseEvent(event);
    }
    void super_keyReleaseEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyReleaseEvent(event);
    }
    
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paint"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, option, widget);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool sceneEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sceneEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event).getValue());
        }
        return QGraphicsItem::sceneEvent(event);
    }
    bool super_sceneEvent(QEvent * event)
    {
        return QGraphicsItem::sceneEvent(event);
    }
    
    void dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragEnterEvent(event);
    }
    void super_dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragEnterEvent(event);
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
    
    QRectF boundingRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QRectF super_boundingRect() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    void super_mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    
    void hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverMoveEvent(event);
    }
    void super_hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverMoveEvent(event);
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
    
    QPainterPath shape() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("shape"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsItem::shape();
    }
    QPainterPath super_shape() const
    {
        return QGraphicsItem::shape();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("removeFromIndex", (void (D::ClassType::*) ())&D::ClassType::removeFromIndex);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("addToIndex", (void (D::ClassType::*) ())&D::ClassType::addToIndex);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("prepareGeometryChange", (void (D::ClassType::*) ())&D::ClassType::prepareGeometryChange);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::super_supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithPath", (bool (D::ClassType::*) (const QPainterPath &, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::super_extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_advance", (void (D::ClassType::*) (int))&D::ClassType::super_advance);
        _d.CPGF_MD_TEMPLATE _method("super_type", (int (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::super_setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_opaqueArea", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_opaqueArea);
        _d.CPGF_MD_TEMPLATE _method("super_itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::super_itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_isObscuredBy", (bool (D::ClassType::*) (const QGraphicsItem *) const)&D::ClassType::super_isObscuredBy);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithItem", (bool (D::ClassType::*) (const QGraphicsItem *, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithItem)
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paint", (void (D::ClassType::*) (QPainter *, const QStyleOptionGraphicsItem *, QWidget *))&D::ClassType::super_paint)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_contains", (bool (D::ClassType::*) (const QPointF &) const)&D::ClassType::super_contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_boundingRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_boundingRect);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::super_sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_shape", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_shape);
    }
};


template <typename D>
void buildMetaClass_QAbstractGraphicsShapeItemWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAbstractGraphicsShapeItemWrapper::cpgf__register(_d);
    
    buildMetaClass_QAbstractGraphicsShapeItem<D>(_d);
}


template <typename D>
void buildMetaClass_QGraphicsEllipseItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QGraphicsItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QRectF &, QGraphicsItem *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (qreal, qreal, qreal, qreal, QGraphicsItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("setRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::setRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setRect", (void (D::ClassType::*) (qreal, qreal, qreal, qreal))&D::ClassType::setRect);
    _d.CPGF_MD_TEMPLATE _method("startAngle", &D::ClassType::startAngle);
    _d.CPGF_MD_TEMPLATE _method("setStartAngle", &D::ClassType::setStartAngle);
    _d.CPGF_MD_TEMPLATE _method("spanAngle", &D::ClassType::spanAngle);
    _d.CPGF_MD_TEMPLATE _method("setSpanAngle", &D::ClassType::setSpanAngle);
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("shape", &D::ClassType::shape);
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("paint", &D::ClassType::paint)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("isObscuredBy", &D::ClassType::isObscuredBy);
    _d.CPGF_MD_TEMPLATE _method("opaqueArea", &D::ClassType::opaqueArea);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtWidgets_1")
        ._element("Type", D::ClassType::Type)
    ;
}


class QGraphicsEllipseItemWrapper : public QGraphicsEllipseItem, public cpgf::GScriptWrapper {
public:
    
    QGraphicsEllipseItemWrapper(QGraphicsItem * parent = 0)
        : QGraphicsEllipseItem(parent) {}
    
    QGraphicsEllipseItemWrapper(const QRectF & rect, QGraphicsItem * parent = 0)
        : QGraphicsEllipseItem(rect, parent) {}
    
    QGraphicsEllipseItemWrapper(qreal x, qreal y, qreal w, qreal h, QGraphicsItem * parent = 0)
        : QGraphicsEllipseItem(x, y, w, h, parent) {}
    
    void hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverLeaveEvent(event);
    }
    void super_hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverLeaveEvent(event);
    }
    
    bool supportsExtension(QGraphicsItem::Extension extension) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("supportsExtension"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, extension).getValue());
        }
        return QGraphicsEllipseItem::supportsExtension(extension);
    }
    bool super_supportsExtension(QGraphicsItem::Extension extension) const
    {
        return QGraphicsEllipseItem::supportsExtension(extension);
    }
    
    void removeFromIndex()
    {
        QGraphicsItem::removeFromIndex();
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
    
    void dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragMoveEvent(event);
    }
    void super_dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragMoveEvent(event);
    }
    
    void wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::wheelEvent(event);
    }
    void super_wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        QGraphicsItem::wheelEvent(event);
    }
    
    void mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseReleaseEvent(event);
    }
    void super_mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseReleaseEvent(event);
    }
    
    void keyPressEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyPressEvent(event);
    }
    void super_keyPressEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyPressEvent(event);
    }
    
    void focusInEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusInEvent(event);
    }
    void super_focusInEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusInEvent(event);
    }
    
    QVariant extension(const QVariant & variant) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("extension"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, variant).getValue());
        }
        return QGraphicsEllipseItem::extension(variant);
    }
    QVariant super_extension(const QVariant & variant) const
    {
        return QGraphicsEllipseItem::extension(variant);
    }
    
    void mouseMoveEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::inputMethodEvent(event);
    }
    void super_inputMethodEvent(QInputMethodEvent * event)
    {
        QGraphicsItem::inputMethodEvent(event);
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
    
    int type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsEllipseItem::type();
    }
    int super_type() const
    {
        return QGraphicsEllipseItem::type();
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, query).getValue());
        }
        return QGraphicsItem::inputMethodQuery(query);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery query) const
    {
        return QGraphicsItem::inputMethodQuery(query);
    }
    
    void focusOutEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusOutEvent(event);
    }
    void super_focusOutEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusOutEvent(event);
    }
    
    void hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverEnterEvent(event);
    }
    void super_hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverEnterEvent(event);
    }
    
    void updateMicroFocus()
    {
        QGraphicsItem::updateMicroFocus();
    }
    
    void dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dropEvent(event);
    }
    void super_dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dropEvent(event);
    }
    
    void mousePressEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, extension, variant);
            return;
        }
        QGraphicsEllipseItem::setExtension(extension, variant);
    }
    void super_setExtension(QGraphicsItem::Extension extension, const QVariant & variant)
    {
        QGraphicsEllipseItem::setExtension(extension, variant);
    }
    
    QPainterPath opaqueArea() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("opaqueArea"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsEllipseItem::opaqueArea();
    }
    QPainterPath super_opaqueArea() const
    {
        return QGraphicsEllipseItem::opaqueArea();
    }
    
    QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemChange"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, change, value).getValue());
        }
        return QGraphicsItem::itemChange(change, value);
    }
    QVariant super_itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        return QGraphicsItem::itemChange(change, value);
    }
    
    bool isObscuredBy(const QGraphicsItem * item) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isObscuredBy"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, item).getValue());
        }
        return QGraphicsEllipseItem::isObscuredBy(item);
    }
    bool super_isObscuredBy(const QGraphicsItem * item) const
    {
        return QGraphicsEllipseItem::isObscuredBy(item);
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
    
    void contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
    
    void keyReleaseEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyReleaseEvent(event);
    }
    void super_keyReleaseEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyReleaseEvent(event);
    }
    
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paint"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, option, widget);
            return;
        }
        QGraphicsEllipseItem::paint(painter, option, widget);
    }
    void super_paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        QGraphicsEllipseItem::paint(painter, option, widget);
    }
    
    bool sceneEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sceneEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event).getValue());
        }
        return QGraphicsItem::sceneEvent(event);
    }
    bool super_sceneEvent(QEvent * event)
    {
        return QGraphicsItem::sceneEvent(event);
    }
    
    void dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragEnterEvent(event);
    }
    void super_dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragEnterEvent(event);
    }
    
    bool contains(const QPointF & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contains"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, point).getValue());
        }
        return QGraphicsEllipseItem::contains(point);
    }
    bool super_contains(const QPointF & point) const
    {
        return QGraphicsEllipseItem::contains(point);
    }
    
    QRectF boundingRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsEllipseItem::boundingRect();
    }
    QRectF super_boundingRect() const
    {
        return QGraphicsEllipseItem::boundingRect();
    }
    
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    void super_mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    
    void hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverMoveEvent(event);
    }
    void super_hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverMoveEvent(event);
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
    
    QPainterPath shape() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("shape"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsEllipseItem::shape();
    }
    QPainterPath super_shape() const
    {
        return QGraphicsEllipseItem::shape();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("removeFromIndex", (void (D::ClassType::*) ())&D::ClassType::removeFromIndex);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("addToIndex", (void (D::ClassType::*) ())&D::ClassType::addToIndex);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("prepareGeometryChange", (void (D::ClassType::*) ())&D::ClassType::prepareGeometryChange);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::super_supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithPath", (bool (D::ClassType::*) (const QPainterPath &, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::super_extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_advance", (void (D::ClassType::*) (int))&D::ClassType::super_advance);
        _d.CPGF_MD_TEMPLATE _method("super_type", (int (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::super_setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_opaqueArea", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_opaqueArea);
        _d.CPGF_MD_TEMPLATE _method("super_itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::super_itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_isObscuredBy", (bool (D::ClassType::*) (const QGraphicsItem *) const)&D::ClassType::super_isObscuredBy);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithItem", (bool (D::ClassType::*) (const QGraphicsItem *, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithItem)
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paint", (void (D::ClassType::*) (QPainter *, const QStyleOptionGraphicsItem *, QWidget *))&D::ClassType::super_paint)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_contains", (bool (D::ClassType::*) (const QPointF &) const)&D::ClassType::super_contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_boundingRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_boundingRect);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::super_sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_shape", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_shape);
    }
};


template <typename D>
void buildMetaClass_QGraphicsEllipseItemWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGraphicsEllipseItemWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsEllipseItem<D>(_d);
}


template <typename D>
void buildMetaClass_QGraphicsItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("scene", &D::ClassType::scene);
    _d.CPGF_MD_TEMPLATE _method("parentItem", &D::ClassType::parentItem);
    _d.CPGF_MD_TEMPLATE _method("topLevelItem", &D::ClassType::topLevelItem);
    _d.CPGF_MD_TEMPLATE _method("parentObject", &D::ClassType::parentObject);
    _d.CPGF_MD_TEMPLATE _method("parentWidget", &D::ClassType::parentWidget);
    _d.CPGF_MD_TEMPLATE _method("topLevelWidget", &D::ClassType::topLevelWidget);
    _d.CPGF_MD_TEMPLATE _method("window", &D::ClassType::window);
    _d.CPGF_MD_TEMPLATE _method("panel", &D::ClassType::panel);
    _d.CPGF_MD_TEMPLATE _method("setParentItem", &D::ClassType::setParentItem);
    _d.CPGF_MD_TEMPLATE _method("childItems", &D::ClassType::childItems);
    _d.CPGF_MD_TEMPLATE _method("isWidget", &D::ClassType::isWidget);
    _d.CPGF_MD_TEMPLATE _method("isWindow", &D::ClassType::isWindow);
    _d.CPGF_MD_TEMPLATE _method("isPanel", &D::ClassType::isPanel);
    _d.CPGF_MD_TEMPLATE _method("toGraphicsObject", (QGraphicsObject * (D::ClassType::*) ())&D::ClassType::toGraphicsObject);
    _d.CPGF_MD_TEMPLATE _method("toGraphicsObject", (const QGraphicsObject * (D::ClassType::*) () const)&D::ClassType::toGraphicsObject);
    _d.CPGF_MD_TEMPLATE _method("group", &D::ClassType::group);
    _d.CPGF_MD_TEMPLATE _method("setGroup", &D::ClassType::setGroup);
    _d.CPGF_MD_TEMPLATE _method("flags", &D::ClassType::flags);
    _d.CPGF_MD_TEMPLATE _method("setFlag", &D::ClassType::setFlag)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("setFlags", &D::ClassType::setFlags);
    _d.CPGF_MD_TEMPLATE _method("cacheMode", &D::ClassType::cacheMode);
    _d.CPGF_MD_TEMPLATE _method("setCacheMode", &D::ClassType::setCacheMode)
        ._default(copyVariantFromCopyable(QSize()))
    ;
    _d.CPGF_MD_TEMPLATE _method("panelModality", &D::ClassType::panelModality);
    _d.CPGF_MD_TEMPLATE _method("setPanelModality", &D::ClassType::setPanelModality);
    _d.CPGF_MD_TEMPLATE _method("isBlockedByModalPanel", &D::ClassType::isBlockedByModalPanel)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toolTip", &D::ClassType::toolTip);
    _d.CPGF_MD_TEMPLATE _method("setToolTip", &D::ClassType::setToolTip, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("cursor", &D::ClassType::cursor);
    _d.CPGF_MD_TEMPLATE _method("setCursor", &D::ClassType::setCursor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("hasCursor", &D::ClassType::hasCursor);
    _d.CPGF_MD_TEMPLATE _method("unsetCursor", &D::ClassType::unsetCursor);
    _d.CPGF_MD_TEMPLATE _method("isVisible", &D::ClassType::isVisible);
    _d.CPGF_MD_TEMPLATE _method("isVisibleTo", &D::ClassType::isVisibleTo);
    _d.CPGF_MD_TEMPLATE _method("setVisible", &D::ClassType::setVisible);
    _d.CPGF_MD_TEMPLATE _method("hide", &D::ClassType::hide);
    _d.CPGF_MD_TEMPLATE _method("show", &D::ClassType::show);
    _d.CPGF_MD_TEMPLATE _method("isEnabled", &D::ClassType::isEnabled);
    _d.CPGF_MD_TEMPLATE _method("setEnabled", &D::ClassType::setEnabled);
    _d.CPGF_MD_TEMPLATE _method("isSelected", &D::ClassType::isSelected);
    _d.CPGF_MD_TEMPLATE _method("setSelected", &D::ClassType::setSelected);
    _d.CPGF_MD_TEMPLATE _method("acceptDrops", &D::ClassType::acceptDrops);
    _d.CPGF_MD_TEMPLATE _method("setAcceptDrops", &D::ClassType::setAcceptDrops);
    _d.CPGF_MD_TEMPLATE _method("opacity", &D::ClassType::opacity);
    _d.CPGF_MD_TEMPLATE _method("effectiveOpacity", &D::ClassType::effectiveOpacity);
    _d.CPGF_MD_TEMPLATE _method("setOpacity", &D::ClassType::setOpacity);
    _d.CPGF_MD_TEMPLATE _method("graphicsEffect", &D::ClassType::graphicsEffect);
    _d.CPGF_MD_TEMPLATE _method("setGraphicsEffect", &D::ClassType::setGraphicsEffect);
    _d.CPGF_MD_TEMPLATE _method("acceptedMouseButtons", &D::ClassType::acceptedMouseButtons);
    _d.CPGF_MD_TEMPLATE _method("setAcceptedMouseButtons", &D::ClassType::setAcceptedMouseButtons);
    _d.CPGF_MD_TEMPLATE _method("acceptHoverEvents", &D::ClassType::acceptHoverEvents);
    _d.CPGF_MD_TEMPLATE _method("setAcceptHoverEvents", &D::ClassType::setAcceptHoverEvents);
    _d.CPGF_MD_TEMPLATE _method("acceptTouchEvents", &D::ClassType::acceptTouchEvents);
    _d.CPGF_MD_TEMPLATE _method("setAcceptTouchEvents", &D::ClassType::setAcceptTouchEvents);
    _d.CPGF_MD_TEMPLATE _method("filtersChildEvents", &D::ClassType::filtersChildEvents);
    _d.CPGF_MD_TEMPLATE _method("setFiltersChildEvents", &D::ClassType::setFiltersChildEvents);
    _d.CPGF_MD_TEMPLATE _method("handlesChildEvents", &D::ClassType::handlesChildEvents);
    _d.CPGF_MD_TEMPLATE _method("setHandlesChildEvents", &D::ClassType::setHandlesChildEvents);
    _d.CPGF_MD_TEMPLATE _method("isActive", &D::ClassType::isActive);
    _d.CPGF_MD_TEMPLATE _method("setActive", &D::ClassType::setActive);
    _d.CPGF_MD_TEMPLATE _method("hasFocus", &D::ClassType::hasFocus);
    _d.CPGF_MD_TEMPLATE _method("setFocus", &D::ClassType::setFocus)
        ._default(copyVariantFromCopyable(Qt::OtherFocusReason))
    ;
    _d.CPGF_MD_TEMPLATE _method("clearFocus", &D::ClassType::clearFocus);
    _d.CPGF_MD_TEMPLATE _method("focusProxy", &D::ClassType::focusProxy);
    _d.CPGF_MD_TEMPLATE _method("setFocusProxy", &D::ClassType::setFocusProxy);
    _d.CPGF_MD_TEMPLATE _method("focusItem", &D::ClassType::focusItem);
    _d.CPGF_MD_TEMPLATE _method("focusScopeItem", &D::ClassType::focusScopeItem);
    _d.CPGF_MD_TEMPLATE _method("grabMouse", &D::ClassType::grabMouse);
    _d.CPGF_MD_TEMPLATE _method("ungrabMouse", &D::ClassType::ungrabMouse);
    _d.CPGF_MD_TEMPLATE _method("grabKeyboard", &D::ClassType::grabKeyboard);
    _d.CPGF_MD_TEMPLATE _method("ungrabKeyboard", &D::ClassType::ungrabKeyboard);
    _d.CPGF_MD_TEMPLATE _method("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("x", &D::ClassType::x);
    _d.CPGF_MD_TEMPLATE _method("setX", &D::ClassType::setX);
    _d.CPGF_MD_TEMPLATE _method("y", &D::ClassType::y);
    _d.CPGF_MD_TEMPLATE _method("setY", &D::ClassType::setY);
    _d.CPGF_MD_TEMPLATE _method("scenePos", &D::ClassType::scenePos);
    _d.CPGF_MD_TEMPLATE _method("setPos", (void (D::ClassType::*) (const QPointF &))&D::ClassType::setPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setPos", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::setPos);
    _d.CPGF_MD_TEMPLATE _method("moveBy", &D::ClassType::moveBy);
    _d.CPGF_MD_TEMPLATE _method("ensureVisible", (void (D::ClassType::*) (const QRectF &, int, int))&D::ClassType::ensureVisible, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(50))
        ._default(copyVariantFromCopyable(50))
        ._default(copyVariantFromCopyable(QRectF()))
    ;
    _d.CPGF_MD_TEMPLATE _method("ensureVisible", (void (D::ClassType::*) (qreal, qreal, qreal, qreal, int, int))&D::ClassType::ensureVisible)
        ._default(copyVariantFromCopyable(50))
        ._default(copyVariantFromCopyable(50))
    ;
    _d.CPGF_MD_TEMPLATE _method("matrix", &D::ClassType::matrix);
    _d.CPGF_MD_TEMPLATE _method("sceneMatrix", &D::ClassType::sceneMatrix);
    _d.CPGF_MD_TEMPLATE _method("setMatrix", &D::ClassType::setMatrix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("resetMatrix", &D::ClassType::resetMatrix);
    _d.CPGF_MD_TEMPLATE _method("transform", &D::ClassType::transform);
    _d.CPGF_MD_TEMPLATE _method("sceneTransform", &D::ClassType::sceneTransform);
    _d.CPGF_MD_TEMPLATE _method("deviceTransform", &D::ClassType::deviceTransform, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("itemTransform", &D::ClassType::itemTransform)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setTransform", &D::ClassType::setTransform, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("resetTransform", &D::ClassType::resetTransform);
    _d.CPGF_MD_TEMPLATE _method("setRotation", &D::ClassType::setRotation);
    _d.CPGF_MD_TEMPLATE _method("rotation", &D::ClassType::rotation);
    _d.CPGF_MD_TEMPLATE _method("setScale", &D::ClassType::setScale);
    _d.CPGF_MD_TEMPLATE _method("scale", &D::ClassType::scale);
    _d.CPGF_MD_TEMPLATE _method("transformations", &D::ClassType::transformations);
    _d.CPGF_MD_TEMPLATE _method("setTransformations", &D::ClassType::setTransformations);
    _d.CPGF_MD_TEMPLATE _method("transformOriginPoint", &D::ClassType::transformOriginPoint);
    _d.CPGF_MD_TEMPLATE _method("setTransformOriginPoint", (void (D::ClassType::*) (const QPointF &))&D::ClassType::setTransformOriginPoint, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setTransformOriginPoint", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::setTransformOriginPoint);
    _d.CPGF_MD_TEMPLATE _method("advance", &D::ClassType::advance);
    _d.CPGF_MD_TEMPLATE _method("zValue", &D::ClassType::zValue);
    _d.CPGF_MD_TEMPLATE _method("setZValue", &D::ClassType::setZValue);
    _d.CPGF_MD_TEMPLATE _method("stackBefore", &D::ClassType::stackBefore);
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("childrenBoundingRect", &D::ClassType::childrenBoundingRect);
    _d.CPGF_MD_TEMPLATE _method("sceneBoundingRect", &D::ClassType::sceneBoundingRect);
    _d.CPGF_MD_TEMPLATE _method("shape", &D::ClassType::shape);
    _d.CPGF_MD_TEMPLATE _method("isClipped", &D::ClassType::isClipped);
    _d.CPGF_MD_TEMPLATE _method("clipPath", &D::ClassType::clipPath);
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("collidesWithItem", &D::ClassType::collidesWithItem)
        ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
    ;
    _d.CPGF_MD_TEMPLATE _method("collidesWithPath", &D::ClassType::collidesWithPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
    ;
    _d.CPGF_MD_TEMPLATE _method("collidingItems", &D::ClassType::collidingItems)
        ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
    ;
    _d.CPGF_MD_TEMPLATE _method("isObscured", (bool (D::ClassType::*) (const QRectF &) const)&D::ClassType::isObscured, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QRectF()))
    ;
    _d.CPGF_MD_TEMPLATE _method("isObscured", (bool (D::ClassType::*) (qreal, qreal, qreal, qreal) const)&D::ClassType::isObscured);
    _d.CPGF_MD_TEMPLATE _method("isObscuredBy", &D::ClassType::isObscuredBy);
    _d.CPGF_MD_TEMPLATE _method("opaqueArea", &D::ClassType::opaqueArea);
    _d.CPGF_MD_TEMPLATE _method("boundingRegion", &D::ClassType::boundingRegion, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("boundingRegionGranularity", &D::ClassType::boundingRegionGranularity);
    _d.CPGF_MD_TEMPLATE _method("setBoundingRegionGranularity", &D::ClassType::setBoundingRegionGranularity);
    _d.CPGF_MD_TEMPLATE _method("paint", &D::ClassType::paint)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("update", (void (D::ClassType::*) (const QRectF &))&D::ClassType::update, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QRectF()))
    ;
    _d.CPGF_MD_TEMPLATE _method("update", (void (D::ClassType::*) (qreal, qreal, qreal, qreal))&D::ClassType::update);
    _d.CPGF_MD_TEMPLATE _method("scroll", &D::ClassType::scroll, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QRectF()))
    ;
    _d.CPGF_MD_TEMPLATE _method("mapToItem", (QPointF (D::ClassType::*) (const QGraphicsItem *, const QPointF &) const)&D::ClassType::mapToItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("mapToParent", (QPointF (D::ClassType::*) (const QPointF &) const)&D::ClassType::mapToParent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapToScene", (QPointF (D::ClassType::*) (const QPointF &) const)&D::ClassType::mapToScene, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapToItem", (QPolygonF (D::ClassType::*) (const QGraphicsItem *, const QRectF &) const)&D::ClassType::mapToItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("mapToParent", (QPolygonF (D::ClassType::*) (const QRectF &) const)&D::ClassType::mapToParent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapToScene", (QPolygonF (D::ClassType::*) (const QRectF &) const)&D::ClassType::mapToScene, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapRectToItem", (QRectF (D::ClassType::*) (const QGraphicsItem *, const QRectF &) const)&D::ClassType::mapRectToItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("mapRectToParent", (QRectF (D::ClassType::*) (const QRectF &) const)&D::ClassType::mapRectToParent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapRectToScene", (QRectF (D::ClassType::*) (const QRectF &) const)&D::ClassType::mapRectToScene, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapToItem", (QPolygonF (D::ClassType::*) (const QGraphicsItem *, const QPolygonF &) const)&D::ClassType::mapToItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("mapToParent", (QPolygonF (D::ClassType::*) (const QPolygonF &) const)&D::ClassType::mapToParent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapToScene", (QPolygonF (D::ClassType::*) (const QPolygonF &) const)&D::ClassType::mapToScene, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapToItem", (QPainterPath (D::ClassType::*) (const QGraphicsItem *, const QPainterPath &) const)&D::ClassType::mapToItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("mapToParent", (QPainterPath (D::ClassType::*) (const QPainterPath &) const)&D::ClassType::mapToParent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapToScene", (QPainterPath (D::ClassType::*) (const QPainterPath &) const)&D::ClassType::mapToScene, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapFromItem", (QPointF (D::ClassType::*) (const QGraphicsItem *, const QPointF &) const)&D::ClassType::mapFromItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("mapFromParent", (QPointF (D::ClassType::*) (const QPointF &) const)&D::ClassType::mapFromParent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapFromScene", (QPointF (D::ClassType::*) (const QPointF &) const)&D::ClassType::mapFromScene, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapFromItem", (QPolygonF (D::ClassType::*) (const QGraphicsItem *, const QRectF &) const)&D::ClassType::mapFromItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("mapFromParent", (QPolygonF (D::ClassType::*) (const QRectF &) const)&D::ClassType::mapFromParent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapFromScene", (QPolygonF (D::ClassType::*) (const QRectF &) const)&D::ClassType::mapFromScene, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapRectFromItem", (QRectF (D::ClassType::*) (const QGraphicsItem *, const QRectF &) const)&D::ClassType::mapRectFromItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("mapRectFromParent", (QRectF (D::ClassType::*) (const QRectF &) const)&D::ClassType::mapRectFromParent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapRectFromScene", (QRectF (D::ClassType::*) (const QRectF &) const)&D::ClassType::mapRectFromScene, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapFromItem", (QPolygonF (D::ClassType::*) (const QGraphicsItem *, const QPolygonF &) const)&D::ClassType::mapFromItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("mapFromParent", (QPolygonF (D::ClassType::*) (const QPolygonF &) const)&D::ClassType::mapFromParent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapFromScene", (QPolygonF (D::ClassType::*) (const QPolygonF &) const)&D::ClassType::mapFromScene, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapFromItem", (QPainterPath (D::ClassType::*) (const QGraphicsItem *, const QPainterPath &) const)&D::ClassType::mapFromItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("mapFromParent", (QPainterPath (D::ClassType::*) (const QPainterPath &) const)&D::ClassType::mapFromParent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapFromScene", (QPainterPath (D::ClassType::*) (const QPainterPath &) const)&D::ClassType::mapFromScene, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapToItem", (QPointF (D::ClassType::*) (const QGraphicsItem *, qreal, qreal) const)&D::ClassType::mapToItem);
    _d.CPGF_MD_TEMPLATE _method("mapToParent", (QPointF (D::ClassType::*) (qreal, qreal) const)&D::ClassType::mapToParent);
    _d.CPGF_MD_TEMPLATE _method("mapToScene", (QPointF (D::ClassType::*) (qreal, qreal) const)&D::ClassType::mapToScene);
    _d.CPGF_MD_TEMPLATE _method("mapToItem", (QPolygonF (D::ClassType::*) (const QGraphicsItem *, qreal, qreal, qreal, qreal) const)&D::ClassType::mapToItem);
    _d.CPGF_MD_TEMPLATE _method("mapToParent", (QPolygonF (D::ClassType::*) (qreal, qreal, qreal, qreal) const)&D::ClassType::mapToParent);
    _d.CPGF_MD_TEMPLATE _method("mapToScene", (QPolygonF (D::ClassType::*) (qreal, qreal, qreal, qreal) const)&D::ClassType::mapToScene);
    _d.CPGF_MD_TEMPLATE _method("mapRectToItem", (QRectF (D::ClassType::*) (const QGraphicsItem *, qreal, qreal, qreal, qreal) const)&D::ClassType::mapRectToItem);
    _d.CPGF_MD_TEMPLATE _method("mapRectToParent", (QRectF (D::ClassType::*) (qreal, qreal, qreal, qreal) const)&D::ClassType::mapRectToParent);
    _d.CPGF_MD_TEMPLATE _method("mapRectToScene", (QRectF (D::ClassType::*) (qreal, qreal, qreal, qreal) const)&D::ClassType::mapRectToScene);
    _d.CPGF_MD_TEMPLATE _method("mapFromItem", (QPointF (D::ClassType::*) (const QGraphicsItem *, qreal, qreal) const)&D::ClassType::mapFromItem);
    _d.CPGF_MD_TEMPLATE _method("mapFromParent", (QPointF (D::ClassType::*) (qreal, qreal) const)&D::ClassType::mapFromParent);
    _d.CPGF_MD_TEMPLATE _method("mapFromScene", (QPointF (D::ClassType::*) (qreal, qreal) const)&D::ClassType::mapFromScene);
    _d.CPGF_MD_TEMPLATE _method("mapFromItem", (QPolygonF (D::ClassType::*) (const QGraphicsItem *, qreal, qreal, qreal, qreal) const)&D::ClassType::mapFromItem);
    _d.CPGF_MD_TEMPLATE _method("mapFromParent", (QPolygonF (D::ClassType::*) (qreal, qreal, qreal, qreal) const)&D::ClassType::mapFromParent);
    _d.CPGF_MD_TEMPLATE _method("mapFromScene", (QPolygonF (D::ClassType::*) (qreal, qreal, qreal, qreal) const)&D::ClassType::mapFromScene);
    _d.CPGF_MD_TEMPLATE _method("mapRectFromItem", (QRectF (D::ClassType::*) (const QGraphicsItem *, qreal, qreal, qreal, qreal) const)&D::ClassType::mapRectFromItem);
    _d.CPGF_MD_TEMPLATE _method("mapRectFromParent", (QRectF (D::ClassType::*) (qreal, qreal, qreal, qreal) const)&D::ClassType::mapRectFromParent);
    _d.CPGF_MD_TEMPLATE _method("mapRectFromScene", (QRectF (D::ClassType::*) (qreal, qreal, qreal, qreal) const)&D::ClassType::mapRectFromScene);
    _d.CPGF_MD_TEMPLATE _method("isAncestorOf", &D::ClassType::isAncestorOf);
    _d.CPGF_MD_TEMPLATE _method("commonAncestorItem", &D::ClassType::commonAncestorItem);
    _d.CPGF_MD_TEMPLATE _method("isUnderMouse", &D::ClassType::isUnderMouse);
    _d.CPGF_MD_TEMPLATE _method("data", &D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("setData", &D::ClassType::setData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("inputMethodHints", &D::ClassType::inputMethodHints);
    _d.CPGF_MD_TEMPLATE _method("setInputMethodHints", &D::ClassType::setInputMethodHints);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("installSceneEventFilter", &D::ClassType::installSceneEventFilter);
    _d.CPGF_MD_TEMPLATE _method("removeSceneEventFilter", &D::ClassType::removeSceneEventFilter);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::GraphicsItemFlag>("GraphicsItemFlag")
        ._element("ItemIsMovable", D::ClassType::ItemIsMovable)
        ._element("ItemIsSelectable", D::ClassType::ItemIsSelectable)
        ._element("ItemIsFocusable", D::ClassType::ItemIsFocusable)
        ._element("ItemClipsToShape", D::ClassType::ItemClipsToShape)
        ._element("ItemClipsChildrenToShape", D::ClassType::ItemClipsChildrenToShape)
        ._element("ItemIgnoresTransformations", D::ClassType::ItemIgnoresTransformations)
        ._element("ItemIgnoresParentOpacity", D::ClassType::ItemIgnoresParentOpacity)
        ._element("ItemDoesntPropagateOpacityToChildren", D::ClassType::ItemDoesntPropagateOpacityToChildren)
        ._element("ItemStacksBehindParent", D::ClassType::ItemStacksBehindParent)
        ._element("ItemUsesExtendedStyleOption", D::ClassType::ItemUsesExtendedStyleOption)
        ._element("ItemHasNoContents", D::ClassType::ItemHasNoContents)
        ._element("ItemSendsGeometryChanges", D::ClassType::ItemSendsGeometryChanges)
        ._element("ItemAcceptsInputMethod", D::ClassType::ItemAcceptsInputMethod)
        ._element("ItemNegativeZStacksBehindParent", D::ClassType::ItemNegativeZStacksBehindParent)
        ._element("ItemIsPanel", D::ClassType::ItemIsPanel)
        ._element("ItemIsFocusScope", D::ClassType::ItemIsFocusScope)
        ._element("ItemSendsScenePositionChanges", D::ClassType::ItemSendsScenePositionChanges)
        ._element("ItemStopsClickFocusPropagation", D::ClassType::ItemStopsClickFocusPropagation)
        ._element("ItemStopsFocusHandling", D::ClassType::ItemStopsFocusHandling)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::GraphicsItemChange>("GraphicsItemChange")
        ._element("ItemPositionChange", D::ClassType::ItemPositionChange)
        ._element("ItemMatrixChange", D::ClassType::ItemMatrixChange)
        ._element("ItemVisibleChange", D::ClassType::ItemVisibleChange)
        ._element("ItemEnabledChange", D::ClassType::ItemEnabledChange)
        ._element("ItemSelectedChange", D::ClassType::ItemSelectedChange)
        ._element("ItemParentChange", D::ClassType::ItemParentChange)
        ._element("ItemChildAddedChange", D::ClassType::ItemChildAddedChange)
        ._element("ItemChildRemovedChange", D::ClassType::ItemChildRemovedChange)
        ._element("ItemTransformChange", D::ClassType::ItemTransformChange)
        ._element("ItemPositionHasChanged", D::ClassType::ItemPositionHasChanged)
        ._element("ItemTransformHasChanged", D::ClassType::ItemTransformHasChanged)
        ._element("ItemSceneChange", D::ClassType::ItemSceneChange)
        ._element("ItemVisibleHasChanged", D::ClassType::ItemVisibleHasChanged)
        ._element("ItemEnabledHasChanged", D::ClassType::ItemEnabledHasChanged)
        ._element("ItemSelectedHasChanged", D::ClassType::ItemSelectedHasChanged)
        ._element("ItemParentHasChanged", D::ClassType::ItemParentHasChanged)
        ._element("ItemSceneHasChanged", D::ClassType::ItemSceneHasChanged)
        ._element("ItemCursorChange", D::ClassType::ItemCursorChange)
        ._element("ItemCursorHasChanged", D::ClassType::ItemCursorHasChanged)
        ._element("ItemToolTipChange", D::ClassType::ItemToolTipChange)
        ._element("ItemToolTipHasChanged", D::ClassType::ItemToolTipHasChanged)
        ._element("ItemFlagsChange", D::ClassType::ItemFlagsChange)
        ._element("ItemFlagsHaveChanged", D::ClassType::ItemFlagsHaveChanged)
        ._element("ItemZValueChange", D::ClassType::ItemZValueChange)
        ._element("ItemZValueHasChanged", D::ClassType::ItemZValueHasChanged)
        ._element("ItemOpacityChange", D::ClassType::ItemOpacityChange)
        ._element("ItemOpacityHasChanged", D::ClassType::ItemOpacityHasChanged)
        ._element("ItemScenePositionHasChanged", D::ClassType::ItemScenePositionHasChanged)
        ._element("ItemRotationChange", D::ClassType::ItemRotationChange)
        ._element("ItemRotationHasChanged", D::ClassType::ItemRotationHasChanged)
        ._element("ItemScaleChange", D::ClassType::ItemScaleChange)
        ._element("ItemScaleHasChanged", D::ClassType::ItemScaleHasChanged)
        ._element("ItemTransformOriginPointChange", D::ClassType::ItemTransformOriginPointChange)
        ._element("ItemTransformOriginPointHasChanged", D::ClassType::ItemTransformOriginPointHasChanged)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::CacheMode>("CacheMode")
        ._element("NoCache", D::ClassType::NoCache)
        ._element("ItemCoordinateCache", D::ClassType::ItemCoordinateCache)
        ._element("DeviceCoordinateCache", D::ClassType::DeviceCoordinateCache)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::PanelModality>("PanelModality")
        ._element("NonModal", D::ClassType::NonModal)
        ._element("PanelModal", D::ClassType::PanelModal)
        ._element("SceneModal", D::ClassType::SceneModal)
    ;
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtWidgets_1")
        ._element("Type", D::ClassType::Type)
        ._element("UserType", D::ClassType::UserType)
    ;
    {
        GDefineMetaClass<QFlags<typename QGraphicsItem::GraphicsItemFlag > > _t_d = GDefineMetaClass<QFlags<typename QGraphicsItem::GraphicsItemFlag > >::lazyDeclare("GraphicsItemFlags", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QGraphicsItem::GraphicsItemFlag > >, typename QGraphicsItem::GraphicsItemFlag >);
        _d._class(_t_d);
    }
}


class QGraphicsItemWrapper : public QGraphicsItem, public cpgf::GScriptWrapper {
public:
    
    QGraphicsItemWrapper(QGraphicsItem * parent = 0)
        : QGraphicsItem(parent) {}
    
    void hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverLeaveEvent(event);
    }
    void super_hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverLeaveEvent(event);
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
    
    void removeFromIndex()
    {
        QGraphicsItem::removeFromIndex();
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
    
    void dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragMoveEvent(event);
    }
    void super_dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragMoveEvent(event);
    }
    
    void wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::wheelEvent(event);
    }
    void super_wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        QGraphicsItem::wheelEvent(event);
    }
    
    void mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseReleaseEvent(event);
    }
    void super_mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseReleaseEvent(event);
    }
    
    void keyPressEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyPressEvent(event);
    }
    void super_keyPressEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyPressEvent(event);
    }
    
    void focusInEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusInEvent(event);
    }
    void super_focusInEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusInEvent(event);
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
    
    void mouseMoveEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::inputMethodEvent(event);
    }
    void super_inputMethodEvent(QInputMethodEvent * event)
    {
        QGraphicsItem::inputMethodEvent(event);
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
    
    int type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsItem::type();
    }
    int super_type() const
    {
        return QGraphicsItem::type();
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, query).getValue());
        }
        return QGraphicsItem::inputMethodQuery(query);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery query) const
    {
        return QGraphicsItem::inputMethodQuery(query);
    }
    
    void focusOutEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusOutEvent(event);
    }
    void super_focusOutEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusOutEvent(event);
    }
    
    void hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverEnterEvent(event);
    }
    void super_hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverEnterEvent(event);
    }
    
    void updateMicroFocus()
    {
        QGraphicsItem::updateMicroFocus();
    }
    
    void dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dropEvent(event);
    }
    void super_dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dropEvent(event);
    }
    
    void mousePressEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, extension, variant);
            return;
        }
        QGraphicsItem::setExtension(extension, variant);
    }
    void super_setExtension(QGraphicsItem::Extension extension, const QVariant & variant)
    {
        QGraphicsItem::setExtension(extension, variant);
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
    
    QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemChange"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, change, value).getValue());
        }
        return QGraphicsItem::itemChange(change, value);
    }
    QVariant super_itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        return QGraphicsItem::itemChange(change, value);
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
    
    void contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
    
    void keyReleaseEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyReleaseEvent(event);
    }
    void super_keyReleaseEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyReleaseEvent(event);
    }
    
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paint"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, option, widget);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool sceneEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sceneEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event).getValue());
        }
        return QGraphicsItem::sceneEvent(event);
    }
    bool super_sceneEvent(QEvent * event)
    {
        return QGraphicsItem::sceneEvent(event);
    }
    
    void dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragEnterEvent(event);
    }
    void super_dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragEnterEvent(event);
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
    
    QRectF boundingRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QRectF super_boundingRect() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    void super_mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    
    void hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverMoveEvent(event);
    }
    void super_hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverMoveEvent(event);
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
    
    QPainterPath shape() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("shape"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsItem::shape();
    }
    QPainterPath super_shape() const
    {
        return QGraphicsItem::shape();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("removeFromIndex", (void (D::ClassType::*) ())&D::ClassType::removeFromIndex);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("addToIndex", (void (D::ClassType::*) ())&D::ClassType::addToIndex);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("prepareGeometryChange", (void (D::ClassType::*) ())&D::ClassType::prepareGeometryChange);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::super_supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithPath", (bool (D::ClassType::*) (const QPainterPath &, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::super_extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_advance", (void (D::ClassType::*) (int))&D::ClassType::super_advance);
        _d.CPGF_MD_TEMPLATE _method("super_type", (int (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::super_setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_opaqueArea", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_opaqueArea);
        _d.CPGF_MD_TEMPLATE _method("super_itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::super_itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_isObscuredBy", (bool (D::ClassType::*) (const QGraphicsItem *) const)&D::ClassType::super_isObscuredBy);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithItem", (bool (D::ClassType::*) (const QGraphicsItem *, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithItem)
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paint", (void (D::ClassType::*) (QPainter *, const QStyleOptionGraphicsItem *, QWidget *))&D::ClassType::super_paint)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_contains", (bool (D::ClassType::*) (const QPointF &) const)&D::ClassType::super_contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_boundingRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_boundingRect);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::super_sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_shape", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_shape);
    }
};


template <typename D>
void buildMetaClass_QGraphicsItemWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QGraphicsItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    
    QGraphicsItemWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsItem<D>(_d);
}


template <typename D>
void buildMetaClass_QGraphicsItemGroup(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QGraphicsItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("addToGroup", &D::ClassType::addToGroup);
    _d.CPGF_MD_TEMPLATE _method("removeFromGroup", &D::ClassType::removeFromGroup);
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("paint", &D::ClassType::paint)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("isObscuredBy", &D::ClassType::isObscuredBy);
    _d.CPGF_MD_TEMPLATE _method("opaqueArea", &D::ClassType::opaqueArea);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtWidgets_1")
        ._element("Type", D::ClassType::Type)
    ;
}


class QGraphicsItemGroupWrapper : public QGraphicsItemGroup, public cpgf::GScriptWrapper {
public:
    
    QGraphicsItemGroupWrapper(QGraphicsItem * parent = 0)
        : QGraphicsItemGroup(parent) {}
    
    void hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverLeaveEvent(event);
    }
    void super_hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverLeaveEvent(event);
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
    
    void removeFromIndex()
    {
        QGraphicsItem::removeFromIndex();
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
    
    void dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragMoveEvent(event);
    }
    void super_dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragMoveEvent(event);
    }
    
    void wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::wheelEvent(event);
    }
    void super_wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        QGraphicsItem::wheelEvent(event);
    }
    
    void mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseReleaseEvent(event);
    }
    void super_mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseReleaseEvent(event);
    }
    
    void keyPressEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyPressEvent(event);
    }
    void super_keyPressEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyPressEvent(event);
    }
    
    void focusInEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusInEvent(event);
    }
    void super_focusInEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusInEvent(event);
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
    
    void mouseMoveEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::inputMethodEvent(event);
    }
    void super_inputMethodEvent(QInputMethodEvent * event)
    {
        QGraphicsItem::inputMethodEvent(event);
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
    
    int type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsItemGroup::type();
    }
    int super_type() const
    {
        return QGraphicsItemGroup::type();
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, query).getValue());
        }
        return QGraphicsItem::inputMethodQuery(query);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery query) const
    {
        return QGraphicsItem::inputMethodQuery(query);
    }
    
    void focusOutEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusOutEvent(event);
    }
    void super_focusOutEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusOutEvent(event);
    }
    
    void hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverEnterEvent(event);
    }
    void super_hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverEnterEvent(event);
    }
    
    void updateMicroFocus()
    {
        QGraphicsItem::updateMicroFocus();
    }
    
    void dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dropEvent(event);
    }
    void super_dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dropEvent(event);
    }
    
    void mousePressEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, extension, variant);
            return;
        }
        QGraphicsItem::setExtension(extension, variant);
    }
    void super_setExtension(QGraphicsItem::Extension extension, const QVariant & variant)
    {
        QGraphicsItem::setExtension(extension, variant);
    }
    
    QPainterPath opaqueArea() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("opaqueArea"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsItemGroup::opaqueArea();
    }
    QPainterPath super_opaqueArea() const
    {
        return QGraphicsItemGroup::opaqueArea();
    }
    
    QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemChange"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, change, value).getValue());
        }
        return QGraphicsItem::itemChange(change, value);
    }
    QVariant super_itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        return QGraphicsItem::itemChange(change, value);
    }
    
    bool isObscuredBy(const QGraphicsItem * item) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isObscuredBy"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, item).getValue());
        }
        return QGraphicsItemGroup::isObscuredBy(item);
    }
    bool super_isObscuredBy(const QGraphicsItem * item) const
    {
        return QGraphicsItemGroup::isObscuredBy(item);
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
    
    void contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
    
    void keyReleaseEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyReleaseEvent(event);
    }
    void super_keyReleaseEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyReleaseEvent(event);
    }
    
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paint"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, option, widget);
            return;
        }
        QGraphicsItemGroup::paint(painter, option, widget);
    }
    void super_paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        QGraphicsItemGroup::paint(painter, option, widget);
    }
    
    bool sceneEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sceneEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event).getValue());
        }
        return QGraphicsItem::sceneEvent(event);
    }
    bool super_sceneEvent(QEvent * event)
    {
        return QGraphicsItem::sceneEvent(event);
    }
    
    void dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragEnterEvent(event);
    }
    void super_dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragEnterEvent(event);
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
    
    QRectF boundingRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsItemGroup::boundingRect();
    }
    QRectF super_boundingRect() const
    {
        return QGraphicsItemGroup::boundingRect();
    }
    
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    void super_mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    
    void hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverMoveEvent(event);
    }
    void super_hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverMoveEvent(event);
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
    
    QPainterPath shape() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("shape"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsItem::shape();
    }
    QPainterPath super_shape() const
    {
        return QGraphicsItem::shape();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("removeFromIndex", (void (D::ClassType::*) ())&D::ClassType::removeFromIndex);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("addToIndex", (void (D::ClassType::*) ())&D::ClassType::addToIndex);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("prepareGeometryChange", (void (D::ClassType::*) ())&D::ClassType::prepareGeometryChange);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::super_supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithPath", (bool (D::ClassType::*) (const QPainterPath &, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::super_extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_advance", (void (D::ClassType::*) (int))&D::ClassType::super_advance);
        _d.CPGF_MD_TEMPLATE _method("super_type", (int (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::super_setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_opaqueArea", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_opaqueArea);
        _d.CPGF_MD_TEMPLATE _method("super_itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::super_itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_isObscuredBy", (bool (D::ClassType::*) (const QGraphicsItem *) const)&D::ClassType::super_isObscuredBy);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithItem", (bool (D::ClassType::*) (const QGraphicsItem *, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithItem)
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paint", (void (D::ClassType::*) (QPainter *, const QStyleOptionGraphicsItem *, QWidget *))&D::ClassType::super_paint)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_contains", (bool (D::ClassType::*) (const QPointF &) const)&D::ClassType::super_contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_boundingRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_boundingRect);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::super_sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_shape", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_shape);
    }
};


template <typename D>
void buildMetaClass_QGraphicsItemGroupWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGraphicsItemGroupWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsItemGroup<D>(_d);
}


template <typename D>
void buildMetaClass_QGraphicsLineItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QGraphicsItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QLineF &, QGraphicsItem *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (qreal, qreal, qreal, qreal, QGraphicsItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("pen", &D::ClassType::pen);
    _d.CPGF_MD_TEMPLATE _method("setPen", &D::ClassType::setPen, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("line", &D::ClassType::line);
    _d.CPGF_MD_TEMPLATE _method("setLine", (void (D::ClassType::*) (const QLineF &))&D::ClassType::setLine, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setLine", (void (D::ClassType::*) (qreal, qreal, qreal, qreal))&D::ClassType::setLine);
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("shape", &D::ClassType::shape);
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("paint", &D::ClassType::paint)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("isObscuredBy", &D::ClassType::isObscuredBy);
    _d.CPGF_MD_TEMPLATE _method("opaqueArea", &D::ClassType::opaqueArea);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtWidgets_1")
        ._element("Type", D::ClassType::Type)
    ;
}


class QGraphicsLineItemWrapper : public QGraphicsLineItem, public cpgf::GScriptWrapper {
public:
    
    QGraphicsLineItemWrapper(QGraphicsItem * parent = 0)
        : QGraphicsLineItem(parent) {}
    
    QGraphicsLineItemWrapper(const QLineF & line, QGraphicsItem * parent = 0)
        : QGraphicsLineItem(line, parent) {}
    
    QGraphicsLineItemWrapper(qreal x1, qreal y1, qreal x2, qreal y2, QGraphicsItem * parent = 0)
        : QGraphicsLineItem(x1, y1, x2, y2, parent) {}
    
    void hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverLeaveEvent(event);
    }
    void super_hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverLeaveEvent(event);
    }
    
    bool supportsExtension(QGraphicsItem::Extension extension) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("supportsExtension"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, extension).getValue());
        }
        return QGraphicsLineItem::supportsExtension(extension);
    }
    bool super_supportsExtension(QGraphicsItem::Extension extension) const
    {
        return QGraphicsLineItem::supportsExtension(extension);
    }
    
    void removeFromIndex()
    {
        QGraphicsItem::removeFromIndex();
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
    
    void dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragMoveEvent(event);
    }
    void super_dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragMoveEvent(event);
    }
    
    void wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::wheelEvent(event);
    }
    void super_wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        QGraphicsItem::wheelEvent(event);
    }
    
    void mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseReleaseEvent(event);
    }
    void super_mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseReleaseEvent(event);
    }
    
    void keyPressEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyPressEvent(event);
    }
    void super_keyPressEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyPressEvent(event);
    }
    
    void focusInEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusInEvent(event);
    }
    void super_focusInEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusInEvent(event);
    }
    
    QVariant extension(const QVariant & variant) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("extension"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, variant).getValue());
        }
        return QGraphicsLineItem::extension(variant);
    }
    QVariant super_extension(const QVariant & variant) const
    {
        return QGraphicsLineItem::extension(variant);
    }
    
    void mouseMoveEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::inputMethodEvent(event);
    }
    void super_inputMethodEvent(QInputMethodEvent * event)
    {
        QGraphicsItem::inputMethodEvent(event);
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
    
    int type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsLineItem::type();
    }
    int super_type() const
    {
        return QGraphicsLineItem::type();
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, query).getValue());
        }
        return QGraphicsItem::inputMethodQuery(query);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery query) const
    {
        return QGraphicsItem::inputMethodQuery(query);
    }
    
    void focusOutEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusOutEvent(event);
    }
    void super_focusOutEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusOutEvent(event);
    }
    
    void hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverEnterEvent(event);
    }
    void super_hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverEnterEvent(event);
    }
    
    void updateMicroFocus()
    {
        QGraphicsItem::updateMicroFocus();
    }
    
    void dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dropEvent(event);
    }
    void super_dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dropEvent(event);
    }
    
    void mousePressEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, extension, variant);
            return;
        }
        QGraphicsLineItem::setExtension(extension, variant);
    }
    void super_setExtension(QGraphicsItem::Extension extension, const QVariant & variant)
    {
        QGraphicsLineItem::setExtension(extension, variant);
    }
    
    QPainterPath opaqueArea() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("opaqueArea"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsLineItem::opaqueArea();
    }
    QPainterPath super_opaqueArea() const
    {
        return QGraphicsLineItem::opaqueArea();
    }
    
    QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemChange"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, change, value).getValue());
        }
        return QGraphicsItem::itemChange(change, value);
    }
    QVariant super_itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        return QGraphicsItem::itemChange(change, value);
    }
    
    bool isObscuredBy(const QGraphicsItem * item) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isObscuredBy"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, item).getValue());
        }
        return QGraphicsLineItem::isObscuredBy(item);
    }
    bool super_isObscuredBy(const QGraphicsItem * item) const
    {
        return QGraphicsLineItem::isObscuredBy(item);
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
    
    void contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
    
    void keyReleaseEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyReleaseEvent(event);
    }
    void super_keyReleaseEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyReleaseEvent(event);
    }
    
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paint"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, option, widget);
            return;
        }
        QGraphicsLineItem::paint(painter, option, widget);
    }
    void super_paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        QGraphicsLineItem::paint(painter, option, widget);
    }
    
    bool sceneEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sceneEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event).getValue());
        }
        return QGraphicsItem::sceneEvent(event);
    }
    bool super_sceneEvent(QEvent * event)
    {
        return QGraphicsItem::sceneEvent(event);
    }
    
    void dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragEnterEvent(event);
    }
    void super_dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragEnterEvent(event);
    }
    
    bool contains(const QPointF & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contains"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, point).getValue());
        }
        return QGraphicsLineItem::contains(point);
    }
    bool super_contains(const QPointF & point) const
    {
        return QGraphicsLineItem::contains(point);
    }
    
    QRectF boundingRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsLineItem::boundingRect();
    }
    QRectF super_boundingRect() const
    {
        return QGraphicsLineItem::boundingRect();
    }
    
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    void super_mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    
    void hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverMoveEvent(event);
    }
    void super_hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverMoveEvent(event);
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
    
    QPainterPath shape() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("shape"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsLineItem::shape();
    }
    QPainterPath super_shape() const
    {
        return QGraphicsLineItem::shape();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("removeFromIndex", (void (D::ClassType::*) ())&D::ClassType::removeFromIndex);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("addToIndex", (void (D::ClassType::*) ())&D::ClassType::addToIndex);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("prepareGeometryChange", (void (D::ClassType::*) ())&D::ClassType::prepareGeometryChange);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::super_supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithPath", (bool (D::ClassType::*) (const QPainterPath &, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::super_extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_advance", (void (D::ClassType::*) (int))&D::ClassType::super_advance);
        _d.CPGF_MD_TEMPLATE _method("super_type", (int (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::super_setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_opaqueArea", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_opaqueArea);
        _d.CPGF_MD_TEMPLATE _method("super_itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::super_itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_isObscuredBy", (bool (D::ClassType::*) (const QGraphicsItem *) const)&D::ClassType::super_isObscuredBy);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithItem", (bool (D::ClassType::*) (const QGraphicsItem *, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithItem)
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paint", (void (D::ClassType::*) (QPainter *, const QStyleOptionGraphicsItem *, QWidget *))&D::ClassType::super_paint)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_contains", (bool (D::ClassType::*) (const QPointF &) const)&D::ClassType::super_contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_boundingRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_boundingRect);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::super_sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_shape", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_shape);
    }
};


template <typename D>
void buildMetaClass_QGraphicsLineItemWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGraphicsLineItemWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsLineItem<D>(_d);
}


template <typename D>
void buildMetaClass_QGraphicsObject(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("children", &D::ClassType::children);
    _d.CPGF_MD_TEMPLATE _method("grabGesture", &D::ClassType::grabGesture)
        ._default(copyVariantFromCopyable(Qt::GestureFlags()))
    ;
    _d.CPGF_MD_TEMPLATE _method("ungrabGesture", &D::ClassType::ungrabGesture);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QGraphicsObjectWrapper : public QGraphicsObject, public cpgf::GScriptWrapper {
public:
    
    QGraphicsObjectWrapper(QGraphicsItem * parent = 0)
        : QGraphicsObject(parent) {}
    
    void hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverLeaveEvent(event);
    }
    void super_hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverLeaveEvent(event);
    }
    
    void removeFromIndex()
    {
        QGraphicsItem::removeFromIndex();
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QGraphicsObject::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QGraphicsObject::qt_metacast(__arg0);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusInEvent(event);
    }
    void super_focusInEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusInEvent(event);
    }
    
    bool event(QEvent * ev)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, ev).getValue());
        }
        return QGraphicsObject::event(ev);
    }
    bool super_event(QEvent * ev)
    {
        return QGraphicsObject::event(ev);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, phase);
            return;
        }
        QGraphicsItem::advance(phase);
    }
    void super_advance(int phase)
    {
        QGraphicsItem::advance(phase);
    }
    
    void focusOutEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusOutEvent(event);
    }
    void super_focusOutEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusOutEvent(event);
    }
    
    void scaleChanged()
    {
        QGraphicsObject::scaleChanged();
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsItem::opaqueArea();
    }
    QPainterPath super_opaqueArea() const
    {
        return QGraphicsItem::opaqueArea();
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
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1).getValue());
        }
        return QObject::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QObject::eventFilter(__arg0, __arg1);
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
    
    QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemChange"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, change, value).getValue());
        }
        return QGraphicsItem::itemChange(change, value);
    }
    QVariant super_itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        return QGraphicsItem::itemChange(change, value);
    }
    
    void contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event).getValue());
        }
        return QGraphicsItem::sceneEvent(event);
    }
    bool super_sceneEvent(QEvent * event)
    {
        return QGraphicsItem::sceneEvent(event);
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
    
    QRectF boundingRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QRectF super_boundingRect() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QGraphicsObject::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QGraphicsObject::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    void hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverMoveEvent(event);
    }
    void super_hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverMoveEvent(event);
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
    
    QPainterPath shape() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("shape"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsItem::shape();
    }
    QPainterPath super_shape() const
    {
        return QGraphicsItem::shape();
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
    
    void childrenChanged()
    {
        QGraphicsObject::childrenChanged();
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
    
    void dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragMoveEvent(event);
    }
    void super_dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragMoveEvent(event);
    }
    
    void mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, variant).getValue());
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsItem::type();
    }
    int super_type() const
    {
        return QGraphicsItem::type();
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, query).getValue());
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, extension, variant);
            return;
        }
        QGraphicsItem::setExtension(extension, variant);
    }
    void super_setExtension(QGraphicsItem::Extension extension, const QVariant & variant)
    {
        QGraphicsItem::setExtension(extension, variant);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsObject::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QGraphicsObject::metaObject();
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
    
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paint"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, option, widget);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyReleaseEvent(event);
    }
    void super_keyReleaseEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyReleaseEvent(event);
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
    
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    void super_mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseDoubleClickEvent(event);
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
        _d.CPGF_MD_TEMPLATE _method("removeFromIndex", (void (D::ClassType::*) ())&D::ClassType::removeFromIndex);
        _d.CPGF_MD_TEMPLATE _method("enabledChanged", (void (D::ClassType::*) ())&D::ClassType::enabledChanged);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::event);
        _d.CPGF_MD_TEMPLATE _method("widthChanged", (void (D::ClassType::*) ())&D::ClassType::widthChanged);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("yChanged", (void (D::ClassType::*) ())&D::ClassType::yChanged);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("scaleChanged", (void (D::ClassType::*) ())&D::ClassType::scaleChanged);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("parentChanged", (void (D::ClassType::*) ())&D::ClassType::parentChanged);
        _d.CPGF_MD_TEMPLATE _method("zChanged", (void (D::ClassType::*) ())&D::ClassType::zChanged);
        _d.CPGF_MD_TEMPLATE _method("itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("prepareGeometryChange", (void (D::ClassType::*) ())&D::ClassType::prepareGeometryChange);
        _d.CPGF_MD_TEMPLATE _method("sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("childrenChanged", (void (D::ClassType::*) ())&D::ClassType::childrenChanged);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragMoveEvent);
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
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("opacityChanged", (void (D::ClassType::*) ())&D::ClassType::opacityChanged);
        _d.CPGF_MD_TEMPLATE _method("super_hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_advance", (void (D::ClassType::*) (int))&D::ClassType::super_advance);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_opaqueArea", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_opaqueArea);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
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
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::super_supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithPath", (bool (D::ClassType::*) (const QPainterPath &, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragMoveEvent);
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
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithItem", (bool (D::ClassType::*) (const QGraphicsItem *, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithItem)
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_paint", (void (D::ClassType::*) (QPainter *, const QStyleOptionGraphicsItem *, QWidget *))&D::ClassType::super_paint)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
    }
};


template <typename D>
void buildMetaClass_QGraphicsObjectWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGraphicsObjectWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsObject<D>(_d);
}


template <typename D>
void buildMetaClass_QGraphicsPathItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QGraphicsItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPainterPath &, QGraphicsItem *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("path", &D::ClassType::path);
    _d.CPGF_MD_TEMPLATE _method("setPath", &D::ClassType::setPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("shape", &D::ClassType::shape);
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("paint", &D::ClassType::paint)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("isObscuredBy", &D::ClassType::isObscuredBy);
    _d.CPGF_MD_TEMPLATE _method("opaqueArea", &D::ClassType::opaqueArea);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtWidgets_1")
        ._element("Type", D::ClassType::Type)
    ;
}


class QGraphicsPathItemWrapper : public QGraphicsPathItem, public cpgf::GScriptWrapper {
public:
    
    QGraphicsPathItemWrapper(QGraphicsItem * parent = 0)
        : QGraphicsPathItem(parent) {}
    
    QGraphicsPathItemWrapper(const QPainterPath & path, QGraphicsItem * parent = 0)
        : QGraphicsPathItem(path, parent) {}
    
    void hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverLeaveEvent(event);
    }
    void super_hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverLeaveEvent(event);
    }
    
    bool supportsExtension(QGraphicsItem::Extension extension) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("supportsExtension"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, extension).getValue());
        }
        return QGraphicsPathItem::supportsExtension(extension);
    }
    bool super_supportsExtension(QGraphicsItem::Extension extension) const
    {
        return QGraphicsPathItem::supportsExtension(extension);
    }
    
    void removeFromIndex()
    {
        QGraphicsItem::removeFromIndex();
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
    
    void dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragMoveEvent(event);
    }
    void super_dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragMoveEvent(event);
    }
    
    void wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::wheelEvent(event);
    }
    void super_wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        QGraphicsItem::wheelEvent(event);
    }
    
    void mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseReleaseEvent(event);
    }
    void super_mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseReleaseEvent(event);
    }
    
    void keyPressEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyPressEvent(event);
    }
    void super_keyPressEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyPressEvent(event);
    }
    
    void focusInEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusInEvent(event);
    }
    void super_focusInEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusInEvent(event);
    }
    
    QVariant extension(const QVariant & variant) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("extension"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, variant).getValue());
        }
        return QGraphicsPathItem::extension(variant);
    }
    QVariant super_extension(const QVariant & variant) const
    {
        return QGraphicsPathItem::extension(variant);
    }
    
    void mouseMoveEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::inputMethodEvent(event);
    }
    void super_inputMethodEvent(QInputMethodEvent * event)
    {
        QGraphicsItem::inputMethodEvent(event);
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
    
    int type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsPathItem::type();
    }
    int super_type() const
    {
        return QGraphicsPathItem::type();
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, query).getValue());
        }
        return QGraphicsItem::inputMethodQuery(query);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery query) const
    {
        return QGraphicsItem::inputMethodQuery(query);
    }
    
    void focusOutEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusOutEvent(event);
    }
    void super_focusOutEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusOutEvent(event);
    }
    
    void hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverEnterEvent(event);
    }
    void super_hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverEnterEvent(event);
    }
    
    void updateMicroFocus()
    {
        QGraphicsItem::updateMicroFocus();
    }
    
    void dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dropEvent(event);
    }
    void super_dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dropEvent(event);
    }
    
    void mousePressEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, extension, variant);
            return;
        }
        QGraphicsPathItem::setExtension(extension, variant);
    }
    void super_setExtension(QGraphicsItem::Extension extension, const QVariant & variant)
    {
        QGraphicsPathItem::setExtension(extension, variant);
    }
    
    QPainterPath opaqueArea() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("opaqueArea"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsPathItem::opaqueArea();
    }
    QPainterPath super_opaqueArea() const
    {
        return QGraphicsPathItem::opaqueArea();
    }
    
    QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemChange"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, change, value).getValue());
        }
        return QGraphicsItem::itemChange(change, value);
    }
    QVariant super_itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        return QGraphicsItem::itemChange(change, value);
    }
    
    bool isObscuredBy(const QGraphicsItem * item) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isObscuredBy"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, item).getValue());
        }
        return QGraphicsPathItem::isObscuredBy(item);
    }
    bool super_isObscuredBy(const QGraphicsItem * item) const
    {
        return QGraphicsPathItem::isObscuredBy(item);
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
    
    void contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
    
    void keyReleaseEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyReleaseEvent(event);
    }
    void super_keyReleaseEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyReleaseEvent(event);
    }
    
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paint"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, option, widget);
            return;
        }
        QGraphicsPathItem::paint(painter, option, widget);
    }
    void super_paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        QGraphicsPathItem::paint(painter, option, widget);
    }
    
    bool sceneEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sceneEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event).getValue());
        }
        return QGraphicsItem::sceneEvent(event);
    }
    bool super_sceneEvent(QEvent * event)
    {
        return QGraphicsItem::sceneEvent(event);
    }
    
    void dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragEnterEvent(event);
    }
    void super_dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragEnterEvent(event);
    }
    
    bool contains(const QPointF & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contains"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, point).getValue());
        }
        return QGraphicsPathItem::contains(point);
    }
    bool super_contains(const QPointF & point) const
    {
        return QGraphicsPathItem::contains(point);
    }
    
    QRectF boundingRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsPathItem::boundingRect();
    }
    QRectF super_boundingRect() const
    {
        return QGraphicsPathItem::boundingRect();
    }
    
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    void super_mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    
    void hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverMoveEvent(event);
    }
    void super_hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverMoveEvent(event);
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
    
    QPainterPath shape() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("shape"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsPathItem::shape();
    }
    QPainterPath super_shape() const
    {
        return QGraphicsPathItem::shape();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("removeFromIndex", (void (D::ClassType::*) ())&D::ClassType::removeFromIndex);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("addToIndex", (void (D::ClassType::*) ())&D::ClassType::addToIndex);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("prepareGeometryChange", (void (D::ClassType::*) ())&D::ClassType::prepareGeometryChange);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::super_supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithPath", (bool (D::ClassType::*) (const QPainterPath &, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::super_extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_advance", (void (D::ClassType::*) (int))&D::ClassType::super_advance);
        _d.CPGF_MD_TEMPLATE _method("super_type", (int (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::super_setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_opaqueArea", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_opaqueArea);
        _d.CPGF_MD_TEMPLATE _method("super_itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::super_itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_isObscuredBy", (bool (D::ClassType::*) (const QGraphicsItem *) const)&D::ClassType::super_isObscuredBy);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithItem", (bool (D::ClassType::*) (const QGraphicsItem *, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithItem)
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paint", (void (D::ClassType::*) (QPainter *, const QStyleOptionGraphicsItem *, QWidget *))&D::ClassType::super_paint)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_contains", (bool (D::ClassType::*) (const QPointF &) const)&D::ClassType::super_contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_boundingRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_boundingRect);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::super_sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_shape", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_shape);
    }
};


template <typename D>
void buildMetaClass_QGraphicsPathItemWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGraphicsPathItemWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsPathItem<D>(_d);
}


template <typename D>
void buildMetaClass_QGraphicsPixmapItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QGraphicsItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPixmap &, QGraphicsItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("pixmap", &D::ClassType::pixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("setPixmap", &D::ClassType::setPixmap);
    _d.CPGF_MD_TEMPLATE _method("transformationMode", &D::ClassType::transformationMode);
    _d.CPGF_MD_TEMPLATE _method("setTransformationMode", &D::ClassType::setTransformationMode);
    _d.CPGF_MD_TEMPLATE _method("offset", &D::ClassType::offset);
    _d.CPGF_MD_TEMPLATE _method("setOffset", (void (D::ClassType::*) (const QPointF &))&D::ClassType::setOffset, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setOffset", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::setOffset);
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("shape", &D::ClassType::shape);
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("paint", &D::ClassType::paint);
    _d.CPGF_MD_TEMPLATE _method("isObscuredBy", &D::ClassType::isObscuredBy);
    _d.CPGF_MD_TEMPLATE _method("opaqueArea", &D::ClassType::opaqueArea);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("shapeMode", &D::ClassType::shapeMode);
    _d.CPGF_MD_TEMPLATE _method("setShapeMode", &D::ClassType::setShapeMode);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ShapeMode>("ShapeMode")
        ._element("MaskShape", D::ClassType::MaskShape)
        ._element("BoundingRectShape", D::ClassType::BoundingRectShape)
        ._element("HeuristicMaskShape", D::ClassType::HeuristicMaskShape)
    ;
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtWidgets_1")
        ._element("Type", D::ClassType::Type)
    ;
}


class QGraphicsPixmapItemWrapper : public QGraphicsPixmapItem, public cpgf::GScriptWrapper {
public:
    
    QGraphicsPixmapItemWrapper(QGraphicsItem * parent = 0)
        : QGraphicsPixmapItem(parent) {}
    
    QGraphicsPixmapItemWrapper(const QPixmap & pixmap, QGraphicsItem * parent = 0)
        : QGraphicsPixmapItem(pixmap, parent) {}
    
    void hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverLeaveEvent(event);
    }
    void super_hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverLeaveEvent(event);
    }
    
    bool supportsExtension(QGraphicsItem::Extension extension) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("supportsExtension"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, extension).getValue());
        }
        return QGraphicsPixmapItem::supportsExtension(extension);
    }
    bool super_supportsExtension(QGraphicsItem::Extension extension) const
    {
        return QGraphicsPixmapItem::supportsExtension(extension);
    }
    
    void removeFromIndex()
    {
        QGraphicsItem::removeFromIndex();
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
    
    void dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragMoveEvent(event);
    }
    void super_dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragMoveEvent(event);
    }
    
    void wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::wheelEvent(event);
    }
    void super_wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        QGraphicsItem::wheelEvent(event);
    }
    
    void mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseReleaseEvent(event);
    }
    void super_mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseReleaseEvent(event);
    }
    
    void keyPressEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyPressEvent(event);
    }
    void super_keyPressEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyPressEvent(event);
    }
    
    void focusInEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusInEvent(event);
    }
    void super_focusInEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusInEvent(event);
    }
    
    QVariant extension(const QVariant & variant) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("extension"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, variant).getValue());
        }
        return QGraphicsPixmapItem::extension(variant);
    }
    QVariant super_extension(const QVariant & variant) const
    {
        return QGraphicsPixmapItem::extension(variant);
    }
    
    void mouseMoveEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::inputMethodEvent(event);
    }
    void super_inputMethodEvent(QInputMethodEvent * event)
    {
        QGraphicsItem::inputMethodEvent(event);
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
    
    int type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsPixmapItem::type();
    }
    int super_type() const
    {
        return QGraphicsPixmapItem::type();
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, query).getValue());
        }
        return QGraphicsItem::inputMethodQuery(query);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery query) const
    {
        return QGraphicsItem::inputMethodQuery(query);
    }
    
    void focusOutEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusOutEvent(event);
    }
    void super_focusOutEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusOutEvent(event);
    }
    
    void hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverEnterEvent(event);
    }
    void super_hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverEnterEvent(event);
    }
    
    void updateMicroFocus()
    {
        QGraphicsItem::updateMicroFocus();
    }
    
    void dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dropEvent(event);
    }
    void super_dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dropEvent(event);
    }
    
    void mousePressEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, extension, variant);
            return;
        }
        QGraphicsPixmapItem::setExtension(extension, variant);
    }
    void super_setExtension(QGraphicsItem::Extension extension, const QVariant & variant)
    {
        QGraphicsPixmapItem::setExtension(extension, variant);
    }
    
    QPainterPath opaqueArea() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("opaqueArea"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsPixmapItem::opaqueArea();
    }
    QPainterPath super_opaqueArea() const
    {
        return QGraphicsPixmapItem::opaqueArea();
    }
    
    QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemChange"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, change, value).getValue());
        }
        return QGraphicsItem::itemChange(change, value);
    }
    QVariant super_itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        return QGraphicsItem::itemChange(change, value);
    }
    
    bool isObscuredBy(const QGraphicsItem * item) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isObscuredBy"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, item).getValue());
        }
        return QGraphicsPixmapItem::isObscuredBy(item);
    }
    bool super_isObscuredBy(const QGraphicsItem * item) const
    {
        return QGraphicsPixmapItem::isObscuredBy(item);
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
    
    void contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
    
    void keyReleaseEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyReleaseEvent(event);
    }
    void super_keyReleaseEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyReleaseEvent(event);
    }
    
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paint"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, option, widget);
            return;
        }
        QGraphicsPixmapItem::paint(painter, option, widget);
    }
    void super_paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)
    {
        QGraphicsPixmapItem::paint(painter, option, widget);
    }
    
    bool sceneEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sceneEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event).getValue());
        }
        return QGraphicsItem::sceneEvent(event);
    }
    bool super_sceneEvent(QEvent * event)
    {
        return QGraphicsItem::sceneEvent(event);
    }
    
    void dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragEnterEvent(event);
    }
    void super_dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragEnterEvent(event);
    }
    
    bool contains(const QPointF & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contains"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, point).getValue());
        }
        return QGraphicsPixmapItem::contains(point);
    }
    bool super_contains(const QPointF & point) const
    {
        return QGraphicsPixmapItem::contains(point);
    }
    
    QRectF boundingRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsPixmapItem::boundingRect();
    }
    QRectF super_boundingRect() const
    {
        return QGraphicsPixmapItem::boundingRect();
    }
    
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    void super_mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    
    void hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverMoveEvent(event);
    }
    void super_hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverMoveEvent(event);
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
    
    QPainterPath shape() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("shape"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsPixmapItem::shape();
    }
    QPainterPath super_shape() const
    {
        return QGraphicsPixmapItem::shape();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("removeFromIndex", (void (D::ClassType::*) ())&D::ClassType::removeFromIndex);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("addToIndex", (void (D::ClassType::*) ())&D::ClassType::addToIndex);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("prepareGeometryChange", (void (D::ClassType::*) ())&D::ClassType::prepareGeometryChange);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::super_supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithPath", (bool (D::ClassType::*) (const QPainterPath &, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::super_extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_advance", (void (D::ClassType::*) (int))&D::ClassType::super_advance);
        _d.CPGF_MD_TEMPLATE _method("super_type", (int (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::super_setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_opaqueArea", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_opaqueArea);
        _d.CPGF_MD_TEMPLATE _method("super_itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::super_itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_isObscuredBy", (bool (D::ClassType::*) (const QGraphicsItem *) const)&D::ClassType::super_isObscuredBy);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithItem", (bool (D::ClassType::*) (const QGraphicsItem *, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithItem)
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paint", (void (D::ClassType::*) (QPainter *, const QStyleOptionGraphicsItem *, QWidget *))&D::ClassType::super_paint);
        _d.CPGF_MD_TEMPLATE _method("super_sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_contains", (bool (D::ClassType::*) (const QPointF &) const)&D::ClassType::super_contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_boundingRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_boundingRect);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::super_sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_shape", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_shape);
    }
};


template <typename D>
void buildMetaClass_QGraphicsPixmapItemWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGraphicsPixmapItemWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsPixmapItem<D>(_d);
}


template <typename D>
void buildMetaClass_QGraphicsPolygonItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QGraphicsItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPolygonF &, QGraphicsItem *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("polygon", &D::ClassType::polygon);
    _d.CPGF_MD_TEMPLATE _method("setPolygon", &D::ClassType::setPolygon, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fillRule", &D::ClassType::fillRule);
    _d.CPGF_MD_TEMPLATE _method("setFillRule", &D::ClassType::setFillRule);
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("shape", &D::ClassType::shape);
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("paint", &D::ClassType::paint)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("isObscuredBy", &D::ClassType::isObscuredBy);
    _d.CPGF_MD_TEMPLATE _method("opaqueArea", &D::ClassType::opaqueArea);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtWidgets_1")
        ._element("Type", D::ClassType::Type)
    ;
}


class QGraphicsPolygonItemWrapper : public QGraphicsPolygonItem, public cpgf::GScriptWrapper {
public:
    
    QGraphicsPolygonItemWrapper(QGraphicsItem * parent = 0)
        : QGraphicsPolygonItem(parent) {}
    
    QGraphicsPolygonItemWrapper(const QPolygonF & polygon, QGraphicsItem * parent = 0)
        : QGraphicsPolygonItem(polygon, parent) {}
    
    void hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverLeaveEvent(event);
    }
    void super_hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverLeaveEvent(event);
    }
    
    bool supportsExtension(QGraphicsItem::Extension extension) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("supportsExtension"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, extension).getValue());
        }
        return QGraphicsPolygonItem::supportsExtension(extension);
    }
    bool super_supportsExtension(QGraphicsItem::Extension extension) const
    {
        return QGraphicsPolygonItem::supportsExtension(extension);
    }
    
    void removeFromIndex()
    {
        QGraphicsItem::removeFromIndex();
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
    
    void dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragMoveEvent(event);
    }
    void super_dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragMoveEvent(event);
    }
    
    void wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::wheelEvent(event);
    }
    void super_wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        QGraphicsItem::wheelEvent(event);
    }
    
    void mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseReleaseEvent(event);
    }
    void super_mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseReleaseEvent(event);
    }
    
    void keyPressEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyPressEvent(event);
    }
    void super_keyPressEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyPressEvent(event);
    }
    
    void focusInEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusInEvent(event);
    }
    void super_focusInEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusInEvent(event);
    }
    
    QVariant extension(const QVariant & variant) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("extension"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, variant).getValue());
        }
        return QGraphicsPolygonItem::extension(variant);
    }
    QVariant super_extension(const QVariant & variant) const
    {
        return QGraphicsPolygonItem::extension(variant);
    }
    
    void mouseMoveEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::inputMethodEvent(event);
    }
    void super_inputMethodEvent(QInputMethodEvent * event)
    {
        QGraphicsItem::inputMethodEvent(event);
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
    
    int type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsPolygonItem::type();
    }
    int super_type() const
    {
        return QGraphicsPolygonItem::type();
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, query).getValue());
        }
        return QGraphicsItem::inputMethodQuery(query);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery query) const
    {
        return QGraphicsItem::inputMethodQuery(query);
    }
    
    void focusOutEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusOutEvent(event);
    }
    void super_focusOutEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusOutEvent(event);
    }
    
    void hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverEnterEvent(event);
    }
    void super_hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverEnterEvent(event);
    }
    
    void updateMicroFocus()
    {
        QGraphicsItem::updateMicroFocus();
    }
    
    void dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dropEvent(event);
    }
    void super_dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dropEvent(event);
    }
    
    void mousePressEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, extension, variant);
            return;
        }
        QGraphicsPolygonItem::setExtension(extension, variant);
    }
    void super_setExtension(QGraphicsItem::Extension extension, const QVariant & variant)
    {
        QGraphicsPolygonItem::setExtension(extension, variant);
    }
    
    QPainterPath opaqueArea() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("opaqueArea"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsPolygonItem::opaqueArea();
    }
    QPainterPath super_opaqueArea() const
    {
        return QGraphicsPolygonItem::opaqueArea();
    }
    
    QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemChange"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, change, value).getValue());
        }
        return QGraphicsItem::itemChange(change, value);
    }
    QVariant super_itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        return QGraphicsItem::itemChange(change, value);
    }
    
    bool isObscuredBy(const QGraphicsItem * item) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isObscuredBy"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, item).getValue());
        }
        return QGraphicsPolygonItem::isObscuredBy(item);
    }
    bool super_isObscuredBy(const QGraphicsItem * item) const
    {
        return QGraphicsPolygonItem::isObscuredBy(item);
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
    
    void contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
    
    void keyReleaseEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyReleaseEvent(event);
    }
    void super_keyReleaseEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyReleaseEvent(event);
    }
    
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paint"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, option, widget);
            return;
        }
        QGraphicsPolygonItem::paint(painter, option, widget);
    }
    void super_paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        QGraphicsPolygonItem::paint(painter, option, widget);
    }
    
    bool sceneEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sceneEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event).getValue());
        }
        return QGraphicsItem::sceneEvent(event);
    }
    bool super_sceneEvent(QEvent * event)
    {
        return QGraphicsItem::sceneEvent(event);
    }
    
    void dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragEnterEvent(event);
    }
    void super_dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragEnterEvent(event);
    }
    
    bool contains(const QPointF & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contains"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, point).getValue());
        }
        return QGraphicsPolygonItem::contains(point);
    }
    bool super_contains(const QPointF & point) const
    {
        return QGraphicsPolygonItem::contains(point);
    }
    
    QRectF boundingRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsPolygonItem::boundingRect();
    }
    QRectF super_boundingRect() const
    {
        return QGraphicsPolygonItem::boundingRect();
    }
    
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    void super_mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    
    void hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverMoveEvent(event);
    }
    void super_hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverMoveEvent(event);
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
    
    QPainterPath shape() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("shape"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsPolygonItem::shape();
    }
    QPainterPath super_shape() const
    {
        return QGraphicsPolygonItem::shape();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("removeFromIndex", (void (D::ClassType::*) ())&D::ClassType::removeFromIndex);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("addToIndex", (void (D::ClassType::*) ())&D::ClassType::addToIndex);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("prepareGeometryChange", (void (D::ClassType::*) ())&D::ClassType::prepareGeometryChange);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::super_supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithPath", (bool (D::ClassType::*) (const QPainterPath &, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::super_extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_advance", (void (D::ClassType::*) (int))&D::ClassType::super_advance);
        _d.CPGF_MD_TEMPLATE _method("super_type", (int (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::super_setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_opaqueArea", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_opaqueArea);
        _d.CPGF_MD_TEMPLATE _method("super_itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::super_itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_isObscuredBy", (bool (D::ClassType::*) (const QGraphicsItem *) const)&D::ClassType::super_isObscuredBy);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithItem", (bool (D::ClassType::*) (const QGraphicsItem *, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithItem)
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paint", (void (D::ClassType::*) (QPainter *, const QStyleOptionGraphicsItem *, QWidget *))&D::ClassType::super_paint)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_contains", (bool (D::ClassType::*) (const QPointF &) const)&D::ClassType::super_contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_boundingRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_boundingRect);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::super_sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_shape", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_shape);
    }
};


template <typename D>
void buildMetaClass_QGraphicsPolygonItemWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGraphicsPolygonItemWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsPolygonItem<D>(_d);
}


template <typename D>
void buildMetaClass_QGraphicsRectItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QGraphicsItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QRectF &, QGraphicsItem *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (qreal, qreal, qreal, qreal, QGraphicsItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("setRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::setRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setRect", (void (D::ClassType::*) (qreal, qreal, qreal, qreal))&D::ClassType::setRect);
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("shape", &D::ClassType::shape);
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("paint", &D::ClassType::paint)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("isObscuredBy", &D::ClassType::isObscuredBy);
    _d.CPGF_MD_TEMPLATE _method("opaqueArea", &D::ClassType::opaqueArea);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtWidgets_1")
        ._element("Type", D::ClassType::Type)
    ;
}


class QGraphicsRectItemWrapper : public QGraphicsRectItem, public cpgf::GScriptWrapper {
public:
    
    QGraphicsRectItemWrapper(QGraphicsItem * parent = 0)
        : QGraphicsRectItem(parent) {}
    
    QGraphicsRectItemWrapper(const QRectF & rect, QGraphicsItem * parent = 0)
        : QGraphicsRectItem(rect, parent) {}
    
    QGraphicsRectItemWrapper(qreal x, qreal y, qreal w, qreal h, QGraphicsItem * parent = 0)
        : QGraphicsRectItem(x, y, w, h, parent) {}
    
    void hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverLeaveEvent(event);
    }
    void super_hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverLeaveEvent(event);
    }
    
    bool supportsExtension(QGraphicsItem::Extension extension) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("supportsExtension"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, extension).getValue());
        }
        return QGraphicsRectItem::supportsExtension(extension);
    }
    bool super_supportsExtension(QGraphicsItem::Extension extension) const
    {
        return QGraphicsRectItem::supportsExtension(extension);
    }
    
    void removeFromIndex()
    {
        QGraphicsItem::removeFromIndex();
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
    
    void dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragMoveEvent(event);
    }
    void super_dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragMoveEvent(event);
    }
    
    void wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::wheelEvent(event);
    }
    void super_wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        QGraphicsItem::wheelEvent(event);
    }
    
    void mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseReleaseEvent(event);
    }
    void super_mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseReleaseEvent(event);
    }
    
    void keyPressEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyPressEvent(event);
    }
    void super_keyPressEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyPressEvent(event);
    }
    
    void focusInEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusInEvent(event);
    }
    void super_focusInEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusInEvent(event);
    }
    
    QVariant extension(const QVariant & variant) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("extension"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, variant).getValue());
        }
        return QGraphicsRectItem::extension(variant);
    }
    QVariant super_extension(const QVariant & variant) const
    {
        return QGraphicsRectItem::extension(variant);
    }
    
    void mouseMoveEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::inputMethodEvent(event);
    }
    void super_inputMethodEvent(QInputMethodEvent * event)
    {
        QGraphicsItem::inputMethodEvent(event);
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
    
    int type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsRectItem::type();
    }
    int super_type() const
    {
        return QGraphicsRectItem::type();
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, query).getValue());
        }
        return QGraphicsItem::inputMethodQuery(query);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery query) const
    {
        return QGraphicsItem::inputMethodQuery(query);
    }
    
    void focusOutEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusOutEvent(event);
    }
    void super_focusOutEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusOutEvent(event);
    }
    
    void hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverEnterEvent(event);
    }
    void super_hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverEnterEvent(event);
    }
    
    void updateMicroFocus()
    {
        QGraphicsItem::updateMicroFocus();
    }
    
    void dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dropEvent(event);
    }
    void super_dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dropEvent(event);
    }
    
    void mousePressEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, extension, variant);
            return;
        }
        QGraphicsRectItem::setExtension(extension, variant);
    }
    void super_setExtension(QGraphicsItem::Extension extension, const QVariant & variant)
    {
        QGraphicsRectItem::setExtension(extension, variant);
    }
    
    QPainterPath opaqueArea() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("opaqueArea"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsRectItem::opaqueArea();
    }
    QPainterPath super_opaqueArea() const
    {
        return QGraphicsRectItem::opaqueArea();
    }
    
    QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemChange"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, change, value).getValue());
        }
        return QGraphicsItem::itemChange(change, value);
    }
    QVariant super_itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        return QGraphicsItem::itemChange(change, value);
    }
    
    bool isObscuredBy(const QGraphicsItem * item) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isObscuredBy"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, item).getValue());
        }
        return QGraphicsRectItem::isObscuredBy(item);
    }
    bool super_isObscuredBy(const QGraphicsItem * item) const
    {
        return QGraphicsRectItem::isObscuredBy(item);
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
    
    void contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
    
    void keyReleaseEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyReleaseEvent(event);
    }
    void super_keyReleaseEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyReleaseEvent(event);
    }
    
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paint"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, option, widget);
            return;
        }
        QGraphicsRectItem::paint(painter, option, widget);
    }
    void super_paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)
    {
        QGraphicsRectItem::paint(painter, option, widget);
    }
    
    bool sceneEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sceneEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event).getValue());
        }
        return QGraphicsItem::sceneEvent(event);
    }
    bool super_sceneEvent(QEvent * event)
    {
        return QGraphicsItem::sceneEvent(event);
    }
    
    void dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragEnterEvent(event);
    }
    void super_dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragEnterEvent(event);
    }
    
    bool contains(const QPointF & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contains"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, point).getValue());
        }
        return QGraphicsRectItem::contains(point);
    }
    bool super_contains(const QPointF & point) const
    {
        return QGraphicsRectItem::contains(point);
    }
    
    QRectF boundingRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsRectItem::boundingRect();
    }
    QRectF super_boundingRect() const
    {
        return QGraphicsRectItem::boundingRect();
    }
    
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    void super_mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    
    void hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverMoveEvent(event);
    }
    void super_hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverMoveEvent(event);
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
    
    QPainterPath shape() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("shape"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsRectItem::shape();
    }
    QPainterPath super_shape() const
    {
        return QGraphicsRectItem::shape();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("removeFromIndex", (void (D::ClassType::*) ())&D::ClassType::removeFromIndex);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("addToIndex", (void (D::ClassType::*) ())&D::ClassType::addToIndex);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("prepareGeometryChange", (void (D::ClassType::*) ())&D::ClassType::prepareGeometryChange);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::super_supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithPath", (bool (D::ClassType::*) (const QPainterPath &, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::super_extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_advance", (void (D::ClassType::*) (int))&D::ClassType::super_advance);
        _d.CPGF_MD_TEMPLATE _method("super_type", (int (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::super_setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_opaqueArea", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_opaqueArea);
        _d.CPGF_MD_TEMPLATE _method("super_itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::super_itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_isObscuredBy", (bool (D::ClassType::*) (const QGraphicsItem *) const)&D::ClassType::super_isObscuredBy);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithItem", (bool (D::ClassType::*) (const QGraphicsItem *, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithItem)
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paint", (void (D::ClassType::*) (QPainter *, const QStyleOptionGraphicsItem *, QWidget *))&D::ClassType::super_paint)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_contains", (bool (D::ClassType::*) (const QPointF &) const)&D::ClassType::super_contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_boundingRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_boundingRect);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::super_sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_shape", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_shape);
    }
};


template <typename D>
void buildMetaClass_QGraphicsRectItemWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGraphicsRectItemWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsRectItem<D>(_d);
}


template <typename D>
void buildMetaClass_QGraphicsSimpleTextItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QGraphicsItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, QGraphicsItem *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setText", &D::ClassType::setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("setFont", &D::ClassType::setFont, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("font", &D::ClassType::font);
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("shape", &D::ClassType::shape);
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("paint", &D::ClassType::paint);
    _d.CPGF_MD_TEMPLATE _method("isObscuredBy", &D::ClassType::isObscuredBy);
    _d.CPGF_MD_TEMPLATE _method("opaqueArea", &D::ClassType::opaqueArea);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtWidgets_1")
        ._element("Type", D::ClassType::Type)
    ;
}


class QGraphicsSimpleTextItemWrapper : public QGraphicsSimpleTextItem, public cpgf::GScriptWrapper {
public:
    
    QGraphicsSimpleTextItemWrapper(QGraphicsItem * parent = 0)
        : QGraphicsSimpleTextItem(parent) {}
    
    QGraphicsSimpleTextItemWrapper(const QString & text, QGraphicsItem * parent = 0)
        : QGraphicsSimpleTextItem(text, parent) {}
    
    void hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverLeaveEvent(event);
    }
    void super_hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverLeaveEvent(event);
    }
    
    bool supportsExtension(QGraphicsItem::Extension extension) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("supportsExtension"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, extension).getValue());
        }
        return QGraphicsSimpleTextItem::supportsExtension(extension);
    }
    bool super_supportsExtension(QGraphicsItem::Extension extension) const
    {
        return QGraphicsSimpleTextItem::supportsExtension(extension);
    }
    
    void removeFromIndex()
    {
        QGraphicsItem::removeFromIndex();
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
    
    void dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragMoveEvent(event);
    }
    void super_dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragMoveEvent(event);
    }
    
    void wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::wheelEvent(event);
    }
    void super_wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        QGraphicsItem::wheelEvent(event);
    }
    
    void mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseReleaseEvent(event);
    }
    void super_mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseReleaseEvent(event);
    }
    
    void keyPressEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyPressEvent(event);
    }
    void super_keyPressEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyPressEvent(event);
    }
    
    void focusInEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusInEvent(event);
    }
    void super_focusInEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusInEvent(event);
    }
    
    QVariant extension(const QVariant & variant) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("extension"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, variant).getValue());
        }
        return QGraphicsSimpleTextItem::extension(variant);
    }
    QVariant super_extension(const QVariant & variant) const
    {
        return QGraphicsSimpleTextItem::extension(variant);
    }
    
    void mouseMoveEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::inputMethodEvent(event);
    }
    void super_inputMethodEvent(QInputMethodEvent * event)
    {
        QGraphicsItem::inputMethodEvent(event);
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
    
    int type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsSimpleTextItem::type();
    }
    int super_type() const
    {
        return QGraphicsSimpleTextItem::type();
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, query).getValue());
        }
        return QGraphicsItem::inputMethodQuery(query);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery query) const
    {
        return QGraphicsItem::inputMethodQuery(query);
    }
    
    void focusOutEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::focusOutEvent(event);
    }
    void super_focusOutEvent(QFocusEvent * event)
    {
        QGraphicsItem::focusOutEvent(event);
    }
    
    void hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverEnterEvent(event);
    }
    void super_hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverEnterEvent(event);
    }
    
    void updateMicroFocus()
    {
        QGraphicsItem::updateMicroFocus();
    }
    
    void dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dropEvent(event);
    }
    void super_dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dropEvent(event);
    }
    
    void mousePressEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, extension, variant);
            return;
        }
        QGraphicsSimpleTextItem::setExtension(extension, variant);
    }
    void super_setExtension(QGraphicsItem::Extension extension, const QVariant & variant)
    {
        QGraphicsSimpleTextItem::setExtension(extension, variant);
    }
    
    QPainterPath opaqueArea() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("opaqueArea"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsSimpleTextItem::opaqueArea();
    }
    QPainterPath super_opaqueArea() const
    {
        return QGraphicsSimpleTextItem::opaqueArea();
    }
    
    QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemChange"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, change, value).getValue());
        }
        return QGraphicsItem::itemChange(change, value);
    }
    QVariant super_itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        return QGraphicsItem::itemChange(change, value);
    }
    
    bool isObscuredBy(const QGraphicsItem * item) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isObscuredBy"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, item).getValue());
        }
        return QGraphicsSimpleTextItem::isObscuredBy(item);
    }
    bool super_isObscuredBy(const QGraphicsItem * item) const
    {
        return QGraphicsSimpleTextItem::isObscuredBy(item);
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
    
    void contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
    
    void keyReleaseEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::keyReleaseEvent(event);
    }
    void super_keyReleaseEvent(QKeyEvent * event)
    {
        QGraphicsItem::keyReleaseEvent(event);
    }
    
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paint"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, option, widget);
            return;
        }
        QGraphicsSimpleTextItem::paint(painter, option, widget);
    }
    void super_paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)
    {
        QGraphicsSimpleTextItem::paint(painter, option, widget);
    }
    
    bool sceneEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sceneEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event).getValue());
        }
        return QGraphicsItem::sceneEvent(event);
    }
    bool super_sceneEvent(QEvent * event)
    {
        return QGraphicsItem::sceneEvent(event);
    }
    
    void dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::dragEnterEvent(event);
    }
    void super_dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsItem::dragEnterEvent(event);
    }
    
    bool contains(const QPointF & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contains"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, point).getValue());
        }
        return QGraphicsSimpleTextItem::contains(point);
    }
    bool super_contains(const QPointF & point) const
    {
        return QGraphicsSimpleTextItem::contains(point);
    }
    
    QRectF boundingRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsSimpleTextItem::boundingRect();
    }
    QRectF super_boundingRect() const
    {
        return QGraphicsSimpleTextItem::boundingRect();
    }
    
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    void super_mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsItem::mouseDoubleClickEvent(event);
    }
    
    void hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsItem::hoverMoveEvent(event);
    }
    void super_hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsItem::hoverMoveEvent(event);
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
    
    QPainterPath shape() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("shape"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsSimpleTextItem::shape();
    }
    QPainterPath super_shape() const
    {
        return QGraphicsSimpleTextItem::shape();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("removeFromIndex", (void (D::ClassType::*) ())&D::ClassType::removeFromIndex);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("addToIndex", (void (D::ClassType::*) ())&D::ClassType::addToIndex);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("prepareGeometryChange", (void (D::ClassType::*) ())&D::ClassType::prepareGeometryChange);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::super_supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithPath", (bool (D::ClassType::*) (const QPainterPath &, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_extension", (QVariant (D::ClassType::*) (const QVariant &) const)&D::ClassType::super_extension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_advance", (void (D::ClassType::*) (int))&D::ClassType::super_advance);
        _d.CPGF_MD_TEMPLATE _method("super_type", (int (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverEnterEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setExtension", (void (D::ClassType::*) (QGraphicsItem::Extension, const QVariant &))&D::ClassType::super_setExtension, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_opaqueArea", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_opaqueArea);
        _d.CPGF_MD_TEMPLATE _method("super_itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::super_itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_isObscuredBy", (bool (D::ClassType::*) (const QGraphicsItem *) const)&D::ClassType::super_isObscuredBy);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithItem", (bool (D::ClassType::*) (const QGraphicsItem *, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithItem)
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paint", (void (D::ClassType::*) (QPainter *, const QStyleOptionGraphicsItem *, QWidget *))&D::ClassType::super_paint);
        _d.CPGF_MD_TEMPLATE _method("super_sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_contains", (bool (D::ClassType::*) (const QPointF &) const)&D::ClassType::super_contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_boundingRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_boundingRect);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::super_sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_shape", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_shape);
    }
};


template <typename D>
void buildMetaClass_QGraphicsSimpleTextItemWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGraphicsSimpleTextItemWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsSimpleTextItem<D>(_d);
}


template <typename D>
void buildMetaClass_QGraphicsTextItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QGraphicsItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, QGraphicsItem *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("toHtml", &D::ClassType::toHtml);
    _d.CPGF_MD_TEMPLATE _method("setHtml", &D::ClassType::setHtml, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("toPlainText", &D::ClassType::toPlainText);
    _d.CPGF_MD_TEMPLATE _method("setPlainText", &D::ClassType::setPlainText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("font", &D::ClassType::font);
    _d.CPGF_MD_TEMPLATE _method("setFont", &D::ClassType::setFont, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setDefaultTextColor", &D::ClassType::setDefaultTextColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("defaultTextColor", &D::ClassType::defaultTextColor);
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("shape", &D::ClassType::shape);
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("paint", &D::ClassType::paint);
    _d.CPGF_MD_TEMPLATE _method("isObscuredBy", &D::ClassType::isObscuredBy);
    _d.CPGF_MD_TEMPLATE _method("opaqueArea", &D::ClassType::opaqueArea);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("setTextWidth", &D::ClassType::setTextWidth);
    _d.CPGF_MD_TEMPLATE _method("textWidth", &D::ClassType::textWidth);
    _d.CPGF_MD_TEMPLATE _method("adjustSize", &D::ClassType::adjustSize);
    _d.CPGF_MD_TEMPLATE _method("setDocument", &D::ClassType::setDocument);
    _d.CPGF_MD_TEMPLATE _method("document", &D::ClassType::document);
    _d.CPGF_MD_TEMPLATE _method("setTextInteractionFlags", &D::ClassType::setTextInteractionFlags);
    _d.CPGF_MD_TEMPLATE _method("textInteractionFlags", &D::ClassType::textInteractionFlags);
    _d.CPGF_MD_TEMPLATE _method("setTabChangesFocus", &D::ClassType::setTabChangesFocus);
    _d.CPGF_MD_TEMPLATE _method("tabChangesFocus", &D::ClassType::tabChangesFocus);
    _d.CPGF_MD_TEMPLATE _method("setOpenExternalLinks", &D::ClassType::setOpenExternalLinks);
    _d.CPGF_MD_TEMPLATE _method("openExternalLinks", &D::ClassType::openExternalLinks);
    _d.CPGF_MD_TEMPLATE _method("setTextCursor", &D::ClassType::setTextCursor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("textCursor", &D::ClassType::textCursor);
    _d.CPGF_MD_TEMPLATE _method("linkActivated", &D::ClassType::linkActivated, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("linkHovered", &D::ClassType::linkHovered, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtWidgets_1")
        ._element("Type", D::ClassType::Type)
    ;
}


class QGraphicsTextItemWrapper : public QGraphicsTextItem, public cpgf::GScriptWrapper {
public:
    
    QGraphicsTextItemWrapper(QGraphicsItem * parent = 0)
        : QGraphicsTextItem(parent) {}
    
    QGraphicsTextItemWrapper(const QString & text, QGraphicsItem * parent = 0)
        : QGraphicsTextItem(text, parent) {}
    
    void hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsTextItem::hoverLeaveEvent(event);
    }
    void super_hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsTextItem::hoverLeaveEvent(event);
    }
    
    void removeFromIndex()
    {
        QGraphicsItem::removeFromIndex();
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QGraphicsTextItem::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QGraphicsTextItem::qt_metacast(__arg0);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsTextItem::focusInEvent(event);
    }
    void super_focusInEvent(QFocusEvent * event)
    {
        QGraphicsTextItem::focusInEvent(event);
    }
    
    bool event(QEvent * ev)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, ev).getValue());
        }
        return QGraphicsObject::event(ev);
    }
    bool super_event(QEvent * ev)
    {
        return QGraphicsObject::event(ev);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, phase);
            return;
        }
        QGraphicsItem::advance(phase);
    }
    void super_advance(int phase)
    {
        QGraphicsItem::advance(phase);
    }
    
    void focusOutEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsTextItem::focusOutEvent(event);
    }
    void super_focusOutEvent(QFocusEvent * event)
    {
        QGraphicsTextItem::focusOutEvent(event);
    }
    
    void scaleChanged()
    {
        QGraphicsObject::scaleChanged();
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsTextItem::dropEvent(event);
    }
    void super_dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsTextItem::dropEvent(event);
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
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsTextItem::opaqueArea();
    }
    QPainterPath super_opaqueArea() const
    {
        return QGraphicsTextItem::opaqueArea();
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
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1).getValue());
        }
        return QObject::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QObject::eventFilter(__arg0, __arg1);
    }
    
    bool isObscuredBy(const QGraphicsItem * item) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isObscuredBy"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, item).getValue());
        }
        return QGraphicsTextItem::isObscuredBy(item);
    }
    bool super_isObscuredBy(const QGraphicsItem * item) const
    {
        return QGraphicsTextItem::isObscuredBy(item);
    }
    
    QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemChange"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, change, value).getValue());
        }
        return QGraphicsItem::itemChange(change, value);
    }
    QVariant super_itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
    {
        return QGraphicsItem::itemChange(change, value);
    }
    
    void contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsTextItem::contextMenuEvent(event);
    }
    void super_contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
    {
        QGraphicsTextItem::contextMenuEvent(event);
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
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event).getValue());
        }
        return QGraphicsTextItem::sceneEvent(event);
    }
    bool super_sceneEvent(QEvent * event)
    {
        return QGraphicsTextItem::sceneEvent(event);
    }
    
    bool contains(const QPointF & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contains"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, point).getValue());
        }
        return QGraphicsTextItem::contains(point);
    }
    bool super_contains(const QPointF & point) const
    {
        return QGraphicsTextItem::contains(point);
    }
    
    QRectF boundingRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsTextItem::boundingRect();
    }
    QRectF super_boundingRect() const
    {
        return QGraphicsTextItem::boundingRect();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QGraphicsTextItem::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QGraphicsTextItem::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    void hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hoverMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsTextItem::hoverMoveEvent(event);
    }
    void super_hoverMoveEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsTextItem::hoverMoveEvent(event);
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
    
    QPainterPath shape() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("shape"));
        if(func)
        {
            return cpgf::fromVariant<QPainterPath >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsTextItem::shape();
    }
    QPainterPath super_shape() const
    {
        return QGraphicsTextItem::shape();
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
    
    bool supportsExtension(QGraphicsItem::Extension extension) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("supportsExtension"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, extension).getValue());
        }
        return QGraphicsTextItem::supportsExtension(extension);
    }
    bool super_supportsExtension(QGraphicsItem::Extension extension) const
    {
        return QGraphicsTextItem::supportsExtension(extension);
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
    
    void childrenChanged()
    {
        QGraphicsObject::childrenChanged();
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
    
    void dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsTextItem::dragMoveEvent(event);
    }
    void super_dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsTextItem::dragMoveEvent(event);
    }
    
    void mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsTextItem::mouseReleaseEvent(event);
    }
    void super_mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsTextItem::mouseReleaseEvent(event);
    }
    
    void wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsTextItem::keyPressEvent(event);
    }
    void super_keyPressEvent(QKeyEvent * event)
    {
        QGraphicsTextItem::keyPressEvent(event);
    }
    
    QVariant extension(const QVariant & variant) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("extension"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, variant).getValue());
        }
        return QGraphicsTextItem::extension(variant);
    }
    QVariant super_extension(const QVariant & variant) const
    {
        return QGraphicsTextItem::extension(variant);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsTextItem::mouseMoveEvent(event);
    }
    void super_mouseMoveEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsTextItem::mouseMoveEvent(event);
    }
    
    void inputMethodEvent(QInputMethodEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsTextItem::inputMethodEvent(event);
    }
    void super_inputMethodEvent(QInputMethodEvent * event)
    {
        QGraphicsTextItem::inputMethodEvent(event);
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
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsTextItem::type();
    }
    int super_type() const
    {
        return QGraphicsTextItem::type();
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsTextItem::dragLeaveEvent(event);
    }
    void super_dragLeaveEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsTextItem::dragLeaveEvent(event);
    }
    
    QVariant inputMethodQuery(Qt::InputMethodQuery query) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodQuery"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, query).getValue());
        }
        return QGraphicsTextItem::inputMethodQuery(query);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery query) const
    {
        return QGraphicsTextItem::inputMethodQuery(query);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsTextItem::hoverEnterEvent(event);
    }
    void super_hoverEnterEvent(QGraphicsSceneHoverEvent * event)
    {
        QGraphicsTextItem::hoverEnterEvent(event);
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
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsTextItem::mousePressEvent(event);
    }
    void super_mousePressEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsTextItem::mousePressEvent(event);
    }
    
    void setExtension(QGraphicsItem::Extension extension, const QVariant & variant)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setExtension"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, extension, variant);
            return;
        }
        QGraphicsTextItem::setExtension(extension, variant);
    }
    void super_setExtension(QGraphicsItem::Extension extension, const QVariant & variant)
    {
        QGraphicsTextItem::setExtension(extension, variant);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsTextItem::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QGraphicsTextItem::metaObject();
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
    
    void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paint"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, option, widget);
            return;
        }
        QGraphicsTextItem::paint(painter, option, widget);
    }
    void super_paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)
    {
        QGraphicsTextItem::paint(painter, option, widget);
    }
    
    void dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsTextItem::dragEnterEvent(event);
    }
    void super_dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsTextItem::dragEnterEvent(event);
    }
    
    void keyReleaseEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsTextItem::keyReleaseEvent(event);
    }
    void super_keyReleaseEvent(QKeyEvent * event)
    {
        QGraphicsTextItem::keyReleaseEvent(event);
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
    
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsTextItem::mouseDoubleClickEvent(event);
    }
    void super_mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsTextItem::mouseDoubleClickEvent(event);
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
        _d.CPGF_MD_TEMPLATE _method("removeFromIndex", (void (D::ClassType::*) ())&D::ClassType::removeFromIndex);
        _d.CPGF_MD_TEMPLATE _method("enabledChanged", (void (D::ClassType::*) ())&D::ClassType::enabledChanged);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::event);
        _d.CPGF_MD_TEMPLATE _method("widthChanged", (void (D::ClassType::*) ())&D::ClassType::widthChanged);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("yChanged", (void (D::ClassType::*) ())&D::ClassType::yChanged);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("scaleChanged", (void (D::ClassType::*) ())&D::ClassType::scaleChanged);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("parentChanged", (void (D::ClassType::*) ())&D::ClassType::parentChanged);
        _d.CPGF_MD_TEMPLATE _method("zChanged", (void (D::ClassType::*) ())&D::ClassType::zChanged);
        _d.CPGF_MD_TEMPLATE _method("itemChange", (QVariant (D::ClassType::*) (QGraphicsItem::GraphicsItemChange, const QVariant &))&D::ClassType::itemChange, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("prepareGeometryChange", (void (D::ClassType::*) ())&D::ClassType::prepareGeometryChange);
        _d.CPGF_MD_TEMPLATE _method("sceneEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::sceneEvent);
        _d.CPGF_MD_TEMPLATE _method("hoverMoveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::hoverMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("sceneEventFilter", (bool (D::ClassType::*) (QGraphicsItem *, QEvent *))&D::ClassType::sceneEventFilter);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("childrenChanged", (void (D::ClassType::*) ())&D::ClassType::childrenChanged);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragMoveEvent);
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
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("opacityChanged", (void (D::ClassType::*) ())&D::ClassType::opacityChanged);
        _d.CPGF_MD_TEMPLATE _method("super_hoverLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneHoverEvent *))&D::ClassType::super_hoverLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_advance", (void (D::ClassType::*) (int))&D::ClassType::super_advance);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_opaqueArea", (QPainterPath (D::ClassType::*) () const)&D::ClassType::super_opaqueArea);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
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
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_supportsExtension", (bool (D::ClassType::*) (QGraphicsItem::Extension) const)&D::ClassType::super_supportsExtension);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithPath", (bool (D::ClassType::*) (const QPainterPath &, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragMoveEvent);
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
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_collidesWithItem", (bool (D::ClassType::*) (const QGraphicsItem *, Qt::ItemSelectionMode) const)&D::ClassType::super_collidesWithItem)
            ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_paint", (void (D::ClassType::*) (QPainter *, const QStyleOptionGraphicsItem *, QWidget *))&D::ClassType::super_paint);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
    }
};


template <typename D>
void buildMetaClass_QGraphicsTextItemWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGraphicsTextItemWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsTextItem<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
