// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QGRAPHICSSCENE_H
#define CPGF_META_QTWIDGETS_QGRAPHICSSCENE_H


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
void buildMetaClass_QGraphicsScene(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QRectF &, QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (qreal, qreal, qreal, qreal, QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("sceneRect", &D::ClassType::sceneRect);
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("height", &D::ClassType::height);
    _d.CPGF_MD_TEMPLATE _method("setSceneRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::setSceneRect);
    _d.CPGF_MD_TEMPLATE _method("setSceneRect", (void (D::ClassType::*) (qreal, qreal, qreal, qreal))&D::ClassType::setSceneRect);
    _d.CPGF_MD_TEMPLATE _method("render", &D::ClassType::render)
        ._default(copyVariantFromCopyable(Qt::KeepAspectRatio))
        ._default(copyVariantFromCopyable(QRectF()))
        ._default(copyVariantFromCopyable(QRectF()))
    ;
    _d.CPGF_MD_TEMPLATE _method("itemIndexMethod", &D::ClassType::itemIndexMethod);
    _d.CPGF_MD_TEMPLATE _method("setItemIndexMethod", &D::ClassType::setItemIndexMethod);
    _d.CPGF_MD_TEMPLATE _method("isSortCacheEnabled", &D::ClassType::isSortCacheEnabled);
    _d.CPGF_MD_TEMPLATE _method("setSortCacheEnabled", &D::ClassType::setSortCacheEnabled);
    _d.CPGF_MD_TEMPLATE _method("bspTreeDepth", &D::ClassType::bspTreeDepth);
    _d.CPGF_MD_TEMPLATE _method("setBspTreeDepth", &D::ClassType::setBspTreeDepth);
    _d.CPGF_MD_TEMPLATE _method("itemsBoundingRect", &D::ClassType::itemsBoundingRect);
    _d.CPGF_MD_TEMPLATE _method("items", (QList< QGraphicsItem * > (D::ClassType::*) (Qt::SortOrder) const)&D::ClassType::items)
        ._default(copyVariantFromCopyable(Qt::DescendingOrder))
    ;
    _d.CPGF_MD_TEMPLATE _method("items", (QList< QGraphicsItem * > (D::ClassType::*) (const QPointF &, Qt::ItemSelectionMode, Qt::SortOrder, const QTransform &) const)&D::ClassType::items, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<3> >())
        ._default(copyVariantFromCopyable(QTransform()))
        ._default(copyVariantFromCopyable(Qt::DescendingOrder))
        ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
    ;
    _d.CPGF_MD_TEMPLATE _method("items", (QList< QGraphicsItem * > (D::ClassType::*) (const QRectF &, Qt::ItemSelectionMode, Qt::SortOrder, const QTransform &) const)&D::ClassType::items, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<3> >())
        ._default(copyVariantFromCopyable(QTransform()))
        ._default(copyVariantFromCopyable(Qt::DescendingOrder))
        ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
    ;
    _d.CPGF_MD_TEMPLATE _method("items", (QList< QGraphicsItem * > (D::ClassType::*) (const QPolygonF &, Qt::ItemSelectionMode, Qt::SortOrder, const QTransform &) const)&D::ClassType::items, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<3> >())
        ._default(copyVariantFromCopyable(QTransform()))
        ._default(copyVariantFromCopyable(Qt::DescendingOrder))
        ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
    ;
    _d.CPGF_MD_TEMPLATE _method("items", (QList< QGraphicsItem * > (D::ClassType::*) (const QPainterPath &, Qt::ItemSelectionMode, Qt::SortOrder, const QTransform &) const)&D::ClassType::items, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<3> >())
        ._default(copyVariantFromCopyable(QTransform()))
        ._default(copyVariantFromCopyable(Qt::DescendingOrder))
        ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
    ;
    _d.CPGF_MD_TEMPLATE _method("collidingItems", &D::ClassType::collidingItems)
        ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
    ;
    _d.CPGF_MD_TEMPLATE _method("itemAt", (QGraphicsItem * (D::ClassType::*) (const QPointF &, const QTransform &) const)&D::ClassType::itemAt, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("items", (QList< QGraphicsItem * > (D::ClassType::*) (qreal, qreal, qreal, qreal, Qt::ItemSelectionMode, Qt::SortOrder, const QTransform &) const)&D::ClassType::items, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<6> >())
        ._default(copyVariantFromCopyable(QTransform()))
    ;
    _d.CPGF_MD_TEMPLATE _method("itemAt", (QGraphicsItem * (D::ClassType::*) (qreal, qreal, const QTransform &) const)&D::ClassType::itemAt, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("selectedItems", &D::ClassType::selectedItems);
    _d.CPGF_MD_TEMPLATE _method("selectionArea", &D::ClassType::selectionArea);
    _d.CPGF_MD_TEMPLATE _method("setSelectionArea", (void (D::ClassType::*) (const QPainterPath &, const QTransform &))&D::ClassType::setSelectionArea, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("setSelectionArea", (void (D::ClassType::*) (const QPainterPath &, Qt::ItemSelectionMode, const QTransform &))&D::ClassType::setSelectionArea, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QTransform()))
        ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
    ;
    _d.CPGF_MD_TEMPLATE _method("createItemGroup", &D::ClassType::createItemGroup);
    _d.CPGF_MD_TEMPLATE _method("destroyItemGroup", &D::ClassType::destroyItemGroup);
    _d.CPGF_MD_TEMPLATE _method("addItem", &D::ClassType::addItem);
    _d.CPGF_MD_TEMPLATE _method("addEllipse", (QGraphicsEllipseItem * (D::ClassType::*) (const QRectF &, const QPen &, const QBrush &))&D::ClassType::addEllipse, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QBrush()))
        ._default(copyVariantFromCopyable(QPen()))
    ;
    _d.CPGF_MD_TEMPLATE _method("addLine", (QGraphicsLineItem * (D::ClassType::*) (const QLineF &, const QPen &))&D::ClassType::addLine, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QPen()))
    ;
    _d.CPGF_MD_TEMPLATE _method("addPath", &D::ClassType::addPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QBrush()))
        ._default(copyVariantFromCopyable(QPen()))
    ;
    _d.CPGF_MD_TEMPLATE _method("addPixmap", &D::ClassType::addPixmap);
    _d.CPGF_MD_TEMPLATE _method("addPolygon", &D::ClassType::addPolygon, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QBrush()))
        ._default(copyVariantFromCopyable(QPen()))
    ;
    _d.CPGF_MD_TEMPLATE _method("addRect", (QGraphicsRectItem * (D::ClassType::*) (const QRectF &, const QPen &, const QBrush &))&D::ClassType::addRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QBrush()))
        ._default(copyVariantFromCopyable(QPen()))
    ;
    _d.CPGF_MD_TEMPLATE _method("addText", &D::ClassType::addText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QFont()))
    ;
    _d.CPGF_MD_TEMPLATE _method("addSimpleText", &D::ClassType::addSimpleText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QFont()))
    ;
    _d.CPGF_MD_TEMPLATE _method("addWidget", &D::ClassType::addWidget)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("addEllipse", (QGraphicsEllipseItem * (D::ClassType::*) (qreal, qreal, qreal, qreal, const QPen &, const QBrush &))&D::ClassType::addEllipse, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<4>, cpgf::GMetaRuleCopyConstReference<5> >())
        ._default(copyVariantFromCopyable(QBrush()))
        ._default(copyVariantFromCopyable(QPen()))
    ;
    _d.CPGF_MD_TEMPLATE _method("addLine", (QGraphicsLineItem * (D::ClassType::*) (qreal, qreal, qreal, qreal, const QPen &))&D::ClassType::addLine, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<4> >())
        ._default(copyVariantFromCopyable(QPen()))
    ;
    _d.CPGF_MD_TEMPLATE _method("addRect", (QGraphicsRectItem * (D::ClassType::*) (qreal, qreal, qreal, qreal, const QPen &, const QBrush &))&D::ClassType::addRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<4>, cpgf::GMetaRuleCopyConstReference<5> >())
        ._default(copyVariantFromCopyable(QBrush()))
        ._default(copyVariantFromCopyable(QPen()))
    ;
    _d.CPGF_MD_TEMPLATE _method("removeItem", &D::ClassType::removeItem);
    _d.CPGF_MD_TEMPLATE _method("focusItem", &D::ClassType::focusItem);
    _d.CPGF_MD_TEMPLATE _method("setFocusItem", &D::ClassType::setFocusItem)
        ._default(copyVariantFromCopyable(Qt::OtherFocusReason))
    ;
    _d.CPGF_MD_TEMPLATE _method("hasFocus", &D::ClassType::hasFocus);
    _d.CPGF_MD_TEMPLATE _method("setFocus", &D::ClassType::setFocus)
        ._default(copyVariantFromCopyable(Qt::OtherFocusReason))
    ;
    _d.CPGF_MD_TEMPLATE _method("clearFocus", &D::ClassType::clearFocus);
    _d.CPGF_MD_TEMPLATE _method("setStickyFocus", &D::ClassType::setStickyFocus);
    _d.CPGF_MD_TEMPLATE _method("stickyFocus", &D::ClassType::stickyFocus);
    _d.CPGF_MD_TEMPLATE _method("mouseGrabberItem", &D::ClassType::mouseGrabberItem);
    _d.CPGF_MD_TEMPLATE _method("backgroundBrush", &D::ClassType::backgroundBrush);
    _d.CPGF_MD_TEMPLATE _method("setBackgroundBrush", &D::ClassType::setBackgroundBrush, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("foregroundBrush", &D::ClassType::foregroundBrush);
    _d.CPGF_MD_TEMPLATE _method("setForegroundBrush", &D::ClassType::setForegroundBrush, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("inputMethodQuery", &D::ClassType::inputMethodQuery);
    _d.CPGF_MD_TEMPLATE _method("views", &D::ClassType::views);
    _d.CPGF_MD_TEMPLATE _method("style", &D::ClassType::style);
    _d.CPGF_MD_TEMPLATE _method("setStyle", &D::ClassType::setStyle);
    _d.CPGF_MD_TEMPLATE _method("font", &D::ClassType::font);
    _d.CPGF_MD_TEMPLATE _method("setFont", &D::ClassType::setFont, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("palette", &D::ClassType::palette);
    _d.CPGF_MD_TEMPLATE _method("setPalette", &D::ClassType::setPalette, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isActive", &D::ClassType::isActive);
    _d.CPGF_MD_TEMPLATE _method("activePanel", &D::ClassType::activePanel);
    _d.CPGF_MD_TEMPLATE _method("setActivePanel", &D::ClassType::setActivePanel);
    _d.CPGF_MD_TEMPLATE _method("activeWindow", &D::ClassType::activeWindow);
    _d.CPGF_MD_TEMPLATE _method("setActiveWindow", &D::ClassType::setActiveWindow);
    _d.CPGF_MD_TEMPLATE _method("sendEvent", &D::ClassType::sendEvent);
    _d.CPGF_MD_TEMPLATE _method("advance", &D::ClassType::advance);
    _d.CPGF_MD_TEMPLATE _method("clearSelection", &D::ClassType::clearSelection);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ItemIndexMethod>("ItemIndexMethod")
        ._element("BspTreeIndex", D::ClassType::BspTreeIndex)
        ._element("NoIndex", D::ClassType::NoIndex)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SceneLayer>("SceneLayer")
        ._element("ItemLayer", D::ClassType::ItemLayer)
        ._element("BackgroundLayer", D::ClassType::BackgroundLayer)
        ._element("ForegroundLayer", D::ClassType::ForegroundLayer)
        ._element("AllLayers", D::ClassType::AllLayers)
    ;
    {
        GDefineMetaClass<QFlags<typename QGraphicsScene::SceneLayer > > _t_d = GDefineMetaClass<QFlags<typename QGraphicsScene::SceneLayer > >::lazyDeclare("SceneLayers", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QGraphicsScene::SceneLayer > >, typename QGraphicsScene::SceneLayer >);
        _d._class(_t_d);
    }
}


class QGraphicsSceneWrapper : public QGraphicsScene, public cpgf::GScriptWrapper {
public:
    
    QGraphicsSceneWrapper(QObject * parent = 0)
        : QGraphicsScene(parent) {}
    
    QGraphicsSceneWrapper(const QRectF & sceneRect, QObject * parent = 0)
        : QGraphicsScene(sceneRect, parent) {}
    
    QGraphicsSceneWrapper(qreal x, qreal y, qreal width, qreal height, QObject * parent = 0)
        : QGraphicsScene(x, y, width, height, parent) {}
    
    void selectionChanged()
    {
        QGraphicsScene::selectionChanged();
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
    
    void drawForeground(QPainter * painter, const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawForeground"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, painter, rect);
            return;
        }
        QGraphicsScene::drawForeground(painter, rect);
    }
    void super_drawForeground(QPainter * painter, const QRectF & rect)
    {
        QGraphicsScene::drawForeground(painter, rect);
    }
    
    bool focusNextPrevChild(bool next)
    {
        return QGraphicsScene::focusNextPrevChild(next);
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
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QGraphicsScene::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QGraphicsScene::qt_metacast(__arg0);
    }
    
    void dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsScene::dragMoveEvent(event);
    }
    void super_dragMoveEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsScene::dragMoveEvent(event);
    }
    
    void focusItemChanged(QGraphicsItem * newFocus, QGraphicsItem * oldFocus, Qt::FocusReason reason)
    {
        QGraphicsScene::focusItemChanged(newFocus, oldFocus, reason);
    }
    
    void changed(const QList< QRectF > & region)
    {
        QGraphicsScene::changed(region);
    }
    
    void wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsScene::wheelEvent(event);
    }
    void super_wheelEvent(QGraphicsSceneWheelEvent * event)
    {
        QGraphicsScene::wheelEvent(event);
    }
    
    void mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsScene::mouseReleaseEvent(event);
    }
    void super_mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsScene::mouseReleaseEvent(event);
    }
    
    void keyPressEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsScene::keyPressEvent(event);
    }
    void super_keyPressEvent(QKeyEvent * event)
    {
        QGraphicsScene::keyPressEvent(event);
    }
    
    void focusInEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsScene::focusInEvent(event);
    }
    void super_focusInEvent(QFocusEvent * event)
    {
        QGraphicsScene::focusInEvent(event);
    }
    
    bool event(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, event));
        }
        return QGraphicsScene::event(event);
    }
    bool super_event(QEvent * event)
    {
        return QGraphicsScene::event(event);
    }
    
    void mouseMoveEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsScene::mouseMoveEvent(event);
    }
    void super_mouseMoveEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsScene::mouseMoveEvent(event);
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
    
    void sceneRectChanged(const QRectF & rect)
    {
        QGraphicsScene::sceneRectChanged(rect);
    }
    
    void inputMethodEvent(QInputMethodEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsScene::inputMethodEvent(event);
    }
    void super_inputMethodEvent(QInputMethodEvent * event)
    {
        QGraphicsScene::inputMethodEvent(event);
    }
    
    void drawItems(QPainter * painter, int numItems, QGraphicsItem ** items, const QStyleOptionGraphicsItem* options, QWidget * widget = 0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawItems"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, painter, numItems, items, options, widget);
            return;
        }
        QGraphicsScene::drawItems(painter, numItems, items, options, widget);
    }
    void super_drawItems(QPainter * painter, int numItems, QGraphicsItem ** items, const QStyleOptionGraphicsItem* options, QWidget * widget = 0)
    {
        QGraphicsScene::drawItems(painter, numItems, items, options, widget);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void drawBackground(QPainter * painter, const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawBackground"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, painter, rect);
            return;
        }
        QGraphicsScene::drawBackground(painter, rect);
    }
    void super_drawBackground(QPainter * painter, const QRectF & rect)
    {
        QGraphicsScene::drawBackground(painter, rect);
    }
    
    void dragLeaveEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsScene::dragLeaveEvent(event);
    }
    void super_dragLeaveEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsScene::dragLeaveEvent(event);
    }
    
    QVariant inputMethodQuery(Qt::InputMethodQuery query) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodQuery"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunction(func.get(), this, query));
        }
        return QGraphicsScene::inputMethodQuery(query);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery query) const
    {
        return QGraphicsScene::inputMethodQuery(query);
    }
    
    void focusOutEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsScene::focusOutEvent(event);
    }
    void super_focusOutEvent(QFocusEvent * event)
    {
        QGraphicsScene::focusOutEvent(event);
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
    
    void dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsScene::dropEvent(event);
    }
    void super_dropEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsScene::dropEvent(event);
    }
    
    void mousePressEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsScene::mousePressEvent(event);
    }
    void super_mousePressEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsScene::mousePressEvent(event);
    }
    
    bool eventFilter(QObject * watched, QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, watched, event));
        }
        return QGraphicsScene::eventFilter(watched, event);
    }
    bool super_eventFilter(QObject * watched, QEvent * event)
    {
        return QGraphicsScene::eventFilter(watched, event);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QGraphicsScene::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QGraphicsScene::metaObject();
    }
    
    void contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsScene::contextMenuEvent(event);
    }
    void super_contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
    {
        QGraphicsScene::contextMenuEvent(event);
    }
    
    void keyReleaseEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsScene::keyReleaseEvent(event);
    }
    void super_keyReleaseEvent(QKeyEvent * event)
    {
        QGraphicsScene::keyReleaseEvent(event);
    }
    
    void dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsScene::dragEnterEvent(event);
    }
    void super_dragEnterEvent(QGraphicsSceneDragDropEvent * event)
    {
        QGraphicsScene::dragEnterEvent(event);
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
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2));
        }
        return QGraphicsScene::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QGraphicsScene::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsScene::mouseDoubleClickEvent(event);
    }
    void super_mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
    {
        QGraphicsScene::mouseDoubleClickEvent(event);
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
    
    void helpEvent(QGraphicsSceneHelpEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("helpEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QGraphicsScene::helpEvent(event);
    }
    void super_helpEvent(QGraphicsSceneHelpEvent * event)
    {
        QGraphicsScene::helpEvent(event);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("selectionChanged", (void (D::ClassType::*) ())&D::ClassType::selectionChanged);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("drawForeground", (void (D::ClassType::*) (QPainter *, const QRectF &))&D::ClassType::drawForeground);
        _d.CPGF_MD_TEMPLATE _method("focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("focusItemChanged", (void (D::ClassType::*) (QGraphicsItem *, QGraphicsItem *, Qt::FocusReason))&D::ClassType::focusItemChanged);
        _d.CPGF_MD_TEMPLATE _method("changed", (void (D::ClassType::*) (const QList< QRectF > &))&D::ClassType::changed);
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::event);
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("sceneRectChanged", (void (D::ClassType::*) (const QRectF &))&D::ClassType::sceneRectChanged);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("drawItems", (void (D::ClassType::*) (QPainter *, int, QGraphicsItem **, const QStyleOptionGraphicsItem*, QWidget *))&D::ClassType::drawItems)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("drawBackground", (void (D::ClassType::*) (QPainter *, const QRectF &))&D::ClassType::drawBackground);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::eventFilter);
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("helpEvent", (void (D::ClassType::*) (QGraphicsSceneHelpEvent *))&D::ClassType::helpEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_drawForeground", (void (D::ClassType::*) (QPainter *, const QRectF &))&D::ClassType::super_drawForeground);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QGraphicsSceneWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_drawItems", (void (D::ClassType::*) (QPainter *, int, QGraphicsItem **, const QStyleOptionGraphicsItem*, QWidget *))&D::ClassType::super_drawItems)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_drawBackground", (void (D::ClassType::*) (QPainter *, const QRectF &))&D::ClassType::super_drawBackground);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QGraphicsSceneContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QGraphicsSceneDragDropEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QGraphicsSceneMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_helpEvent", (void (D::ClassType::*) (QGraphicsSceneHelpEvent *))&D::ClassType::super_helpEvent);
    }
};


template <typename D>
void buildMetaClass_QGraphicsSceneWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGraphicsSceneWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsScene<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
