// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QGRAPHICSVIEW_H
#define CPGF_META_QTWIDGETS_QGRAPHICSVIEW_H


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
void buildMetaClass_QGraphicsView(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QGraphicsScene *, QWidget *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("sizeHint", &D::ClassType::sizeHint);
    _d.CPGF_MD_TEMPLATE _method("renderHints", &D::ClassType::renderHints);
    _d.CPGF_MD_TEMPLATE _method("setRenderHint", &D::ClassType::setRenderHint)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("setRenderHints", &D::ClassType::setRenderHints);
    _d.CPGF_MD_TEMPLATE _method("alignment", &D::ClassType::alignment);
    _d.CPGF_MD_TEMPLATE _method("setAlignment", &D::ClassType::setAlignment);
    _d.CPGF_MD_TEMPLATE _method("transformationAnchor", &D::ClassType::transformationAnchor);
    _d.CPGF_MD_TEMPLATE _method("setTransformationAnchor", &D::ClassType::setTransformationAnchor);
    _d.CPGF_MD_TEMPLATE _method("resizeAnchor", &D::ClassType::resizeAnchor);
    _d.CPGF_MD_TEMPLATE _method("setResizeAnchor", &D::ClassType::setResizeAnchor);
    _d.CPGF_MD_TEMPLATE _method("viewportUpdateMode", &D::ClassType::viewportUpdateMode);
    _d.CPGF_MD_TEMPLATE _method("setViewportUpdateMode", &D::ClassType::setViewportUpdateMode);
    _d.CPGF_MD_TEMPLATE _method("optimizationFlags", &D::ClassType::optimizationFlags);
    _d.CPGF_MD_TEMPLATE _method("setOptimizationFlag", &D::ClassType::setOptimizationFlag)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("setOptimizationFlags", &D::ClassType::setOptimizationFlags);
    _d.CPGF_MD_TEMPLATE _method("dragMode", &D::ClassType::dragMode);
    _d.CPGF_MD_TEMPLATE _method("setDragMode", &D::ClassType::setDragMode);
    _d.CPGF_MD_TEMPLATE _method("rubberBandSelectionMode", &D::ClassType::rubberBandSelectionMode);
    _d.CPGF_MD_TEMPLATE _method("setRubberBandSelectionMode", &D::ClassType::setRubberBandSelectionMode);
    _d.CPGF_MD_TEMPLATE _method("rubberBandRect", &D::ClassType::rubberBandRect);
    _d.CPGF_MD_TEMPLATE _method("cacheMode", &D::ClassType::cacheMode);
    _d.CPGF_MD_TEMPLATE _method("setCacheMode", &D::ClassType::setCacheMode);
    _d.CPGF_MD_TEMPLATE _method("resetCachedContent", &D::ClassType::resetCachedContent);
    _d.CPGF_MD_TEMPLATE _method("isInteractive", &D::ClassType::isInteractive);
    _d.CPGF_MD_TEMPLATE _method("setInteractive", &D::ClassType::setInteractive);
    _d.CPGF_MD_TEMPLATE _method("scene", &D::ClassType::scene);
    _d.CPGF_MD_TEMPLATE _method("setScene", &D::ClassType::setScene);
    _d.CPGF_MD_TEMPLATE _method("sceneRect", &D::ClassType::sceneRect);
    _d.CPGF_MD_TEMPLATE _method("setSceneRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::setSceneRect);
    _d.CPGF_MD_TEMPLATE _method("setSceneRect", (void (D::ClassType::*) (qreal, qreal, qreal, qreal))&D::ClassType::setSceneRect);
    _d.CPGF_MD_TEMPLATE _method("matrix", &D::ClassType::matrix);
    _d.CPGF_MD_TEMPLATE _method("setMatrix", &D::ClassType::setMatrix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("resetMatrix", &D::ClassType::resetMatrix);
    _d.CPGF_MD_TEMPLATE _method("transform", &D::ClassType::transform);
    _d.CPGF_MD_TEMPLATE _method("viewportTransform", &D::ClassType::viewportTransform);
    _d.CPGF_MD_TEMPLATE _method("isTransformed", &D::ClassType::isTransformed);
    _d.CPGF_MD_TEMPLATE _method("setTransform", &D::ClassType::setTransform, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("resetTransform", &D::ClassType::resetTransform);
    _d.CPGF_MD_TEMPLATE _method("rotate", &D::ClassType::rotate);
    _d.CPGF_MD_TEMPLATE _method("scale", &D::ClassType::scale);
    _d.CPGF_MD_TEMPLATE _method("shear", &D::ClassType::shear);
    _d.CPGF_MD_TEMPLATE _method("translate", &D::ClassType::translate);
    _d.CPGF_MD_TEMPLATE _method("centerOn", (void (D::ClassType::*) (const QPointF &))&D::ClassType::centerOn, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("centerOn", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::centerOn);
    _d.CPGF_MD_TEMPLATE _method("centerOn", (void (D::ClassType::*) (const QGraphicsItem *))&D::ClassType::centerOn);
    _d.CPGF_MD_TEMPLATE _method("ensureVisible", (void (D::ClassType::*) (const QRectF &, int, int))&D::ClassType::ensureVisible)
        ._default(copyVariantFromCopyable(50))
        ._default(copyVariantFromCopyable(50))
    ;
    _d.CPGF_MD_TEMPLATE _method("ensureVisible", (void (D::ClassType::*) (qreal, qreal, qreal, qreal, int, int))&D::ClassType::ensureVisible)
        ._default(copyVariantFromCopyable(50))
        ._default(copyVariantFromCopyable(50))
    ;
    _d.CPGF_MD_TEMPLATE _method("ensureVisible", (void (D::ClassType::*) (const QGraphicsItem *, int, int))&D::ClassType::ensureVisible)
        ._default(copyVariantFromCopyable(50))
        ._default(copyVariantFromCopyable(50))
    ;
    _d.CPGF_MD_TEMPLATE _method("fitInView", (void (D::ClassType::*) (const QRectF &, Qt::AspectRatioMode))&D::ClassType::fitInView)
        ._default(copyVariantFromCopyable(Qt::IgnoreAspectRatio))
    ;
    _d.CPGF_MD_TEMPLATE _method("fitInView", (void (D::ClassType::*) (qreal, qreal, qreal, qreal, Qt::AspectRatioMode))&D::ClassType::fitInView)
        ._default(copyVariantFromCopyable(Qt::IgnoreAspectRatio))
    ;
    _d.CPGF_MD_TEMPLATE _method("fitInView", (void (D::ClassType::*) (const QGraphicsItem *, Qt::AspectRatioMode))&D::ClassType::fitInView)
        ._default(copyVariantFromCopyable(Qt::IgnoreAspectRatio))
    ;
    _d.CPGF_MD_TEMPLATE _method("render", &D::ClassType::render)
        ._default(copyVariantFromCopyable(Qt::KeepAspectRatio))
        ._default(copyVariantFromCopyable(QRect()))
        ._default(copyVariantFromCopyable(QRectF()))
    ;
    _d.CPGF_MD_TEMPLATE _method("items", (QList< QGraphicsItem * > (D::ClassType::*) () const)&D::ClassType::items);
    _d.CPGF_MD_TEMPLATE _method("items", (QList< QGraphicsItem * > (D::ClassType::*) (const QPoint &) const)&D::ClassType::items);
    _d.CPGF_MD_TEMPLATE _method("items", (QList< QGraphicsItem * > (D::ClassType::*) (int, int) const)&D::ClassType::items);
    _d.CPGF_MD_TEMPLATE _method("items", (QList< QGraphicsItem * > (D::ClassType::*) (const QRect &, Qt::ItemSelectionMode) const)&D::ClassType::items)
        ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
    ;
    _d.CPGF_MD_TEMPLATE _method("items", (QList< QGraphicsItem * > (D::ClassType::*) (int, int, int, int, Qt::ItemSelectionMode) const)&D::ClassType::items)
        ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
    ;
    _d.CPGF_MD_TEMPLATE _method("items", (QList< QGraphicsItem * > (D::ClassType::*) (const QPolygon &, Qt::ItemSelectionMode) const)&D::ClassType::items, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
    ;
    _d.CPGF_MD_TEMPLATE _method("items", (QList< QGraphicsItem * > (D::ClassType::*) (const QPainterPath &, Qt::ItemSelectionMode) const)&D::ClassType::items, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::IntersectsItemShape))
    ;
    _d.CPGF_MD_TEMPLATE _method("itemAt", (QGraphicsItem * (D::ClassType::*) (const QPoint &) const)&D::ClassType::itemAt);
    _d.CPGF_MD_TEMPLATE _method("itemAt", (QGraphicsItem * (D::ClassType::*) (int, int) const)&D::ClassType::itemAt);
    _d.CPGF_MD_TEMPLATE _method("mapToScene", (QPointF (D::ClassType::*) (const QPoint &) const)&D::ClassType::mapToScene);
    _d.CPGF_MD_TEMPLATE _method("mapToScene", (QPolygonF (D::ClassType::*) (const QRect &) const)&D::ClassType::mapToScene);
    _d.CPGF_MD_TEMPLATE _method("mapToScene", (QPolygonF (D::ClassType::*) (const QPolygon &) const)&D::ClassType::mapToScene, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapToScene", (QPainterPath (D::ClassType::*) (const QPainterPath &) const)&D::ClassType::mapToScene, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapFromScene", (QPoint (D::ClassType::*) (const QPointF &) const)&D::ClassType::mapFromScene, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapFromScene", (QPolygon (D::ClassType::*) (const QRectF &) const)&D::ClassType::mapFromScene);
    _d.CPGF_MD_TEMPLATE _method("mapFromScene", (QPolygon (D::ClassType::*) (const QPolygonF &) const)&D::ClassType::mapFromScene, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapFromScene", (QPainterPath (D::ClassType::*) (const QPainterPath &) const)&D::ClassType::mapFromScene, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapToScene", (QPointF (D::ClassType::*) (int, int) const)&D::ClassType::mapToScene);
    _d.CPGF_MD_TEMPLATE _method("mapToScene", (QPolygonF (D::ClassType::*) (int, int, int, int) const)&D::ClassType::mapToScene);
    _d.CPGF_MD_TEMPLATE _method("mapFromScene", (QPoint (D::ClassType::*) (qreal, qreal) const)&D::ClassType::mapFromScene);
    _d.CPGF_MD_TEMPLATE _method("mapFromScene", (QPolygon (D::ClassType::*) (qreal, qreal, qreal, qreal) const)&D::ClassType::mapFromScene);
    _d.CPGF_MD_TEMPLATE _method("inputMethodQuery", &D::ClassType::inputMethodQuery);
    _d.CPGF_MD_TEMPLATE _method("backgroundBrush", &D::ClassType::backgroundBrush);
    _d.CPGF_MD_TEMPLATE _method("setBackgroundBrush", &D::ClassType::setBackgroundBrush, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("foregroundBrush", &D::ClassType::foregroundBrush);
    _d.CPGF_MD_TEMPLATE _method("setForegroundBrush", &D::ClassType::setForegroundBrush, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("updateScene", &D::ClassType::updateScene);
    _d.CPGF_MD_TEMPLATE _method("invalidateScene", &D::ClassType::invalidateScene)
        ._default(copyVariantFromCopyable(QGraphicsScene::AllLayers))
        ._default(copyVariantFromCopyable(QRectF()))
    ;
    _d.CPGF_MD_TEMPLATE _method("updateSceneRect", &D::ClassType::updateSceneRect);
    _d.CPGF_MD_TEMPLATE _method("rubberBandChanged", &D::ClassType::rubberBandChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ViewportAnchor>("ViewportAnchor")
        ._element("NoAnchor", D::ClassType::NoAnchor)
        ._element("AnchorViewCenter", D::ClassType::AnchorViewCenter)
        ._element("AnchorUnderMouse", D::ClassType::AnchorUnderMouse)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::CacheModeFlag>("CacheModeFlag")
        ._element("CacheNone", D::ClassType::CacheNone)
        ._element("CacheBackground", D::ClassType::CacheBackground)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::DragMode>("DragMode")
        ._element("NoDrag", D::ClassType::NoDrag)
        ._element("ScrollHandDrag", D::ClassType::ScrollHandDrag)
        ._element("RubberBandDrag", D::ClassType::RubberBandDrag)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ViewportUpdateMode>("ViewportUpdateMode")
        ._element("FullViewportUpdate", D::ClassType::FullViewportUpdate)
        ._element("MinimalViewportUpdate", D::ClassType::MinimalViewportUpdate)
        ._element("SmartViewportUpdate", D::ClassType::SmartViewportUpdate)
        ._element("NoViewportUpdate", D::ClassType::NoViewportUpdate)
        ._element("BoundingRectViewportUpdate", D::ClassType::BoundingRectViewportUpdate)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::OptimizationFlag>("OptimizationFlag")
        ._element("DontClipPainter", D::ClassType::DontClipPainter)
        ._element("DontSavePainterState", D::ClassType::DontSavePainterState)
        ._element("DontAdjustForAntialiasing", D::ClassType::DontAdjustForAntialiasing)
        ._element("IndirectPainting", D::ClassType::IndirectPainting)
    ;
    {
        GDefineMetaClass<QFlags<typename QGraphicsView::CacheModeFlag > > _t_d = GDefineMetaClass<QFlags<typename QGraphicsView::CacheModeFlag > >::lazyDeclare("CacheMode", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QGraphicsView::CacheModeFlag > >, typename QGraphicsView::CacheModeFlag >);
        _d._class(_t_d);
    }
    {
        GDefineMetaClass<QFlags<typename QGraphicsView::OptimizationFlag > > _t_d = GDefineMetaClass<QFlags<typename QGraphicsView::OptimizationFlag > >::lazyDeclare("OptimizationFlags", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QGraphicsView::OptimizationFlag > >, typename QGraphicsView::OptimizationFlag >);
        _d._class(_t_d);
    }
}


class QGraphicsViewWrapper : public QGraphicsView, public cpgf::GScriptWrapper {
public:
    
    QGraphicsViewWrapper(QWidget * parent = 0)
        : QGraphicsView(parent) {}
    
    QGraphicsViewWrapper(QGraphicsScene * scene, QWidget * parent = 0)
        : QGraphicsView(scene, parent) {}
    
    QSize viewportSizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("viewportSizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAbstractScrollArea::viewportSizeHint();
    }
    QSize super_viewportSizeHint() const
    {
        return QAbstractScrollArea::viewportSizeHint();
    }
    
    void scrollContentsBy(int dx, int dy)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scrollContentsBy"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, dx, dy);
            return;
        }
        QGraphicsView::scrollContentsBy(dx, dy);
    }
    void super_scrollContentsBy(int dx, int dy)
    {
        QGraphicsView::scrollContentsBy(dx, dy);
    }
    
    void wheelEvent(QWheelEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsView::wheelEvent(event);
    }
    void super_wheelEvent(QWheelEvent * event)
    {
        QGraphicsView::wheelEvent(event);
    }
    
    void setViewportMargins(int left, int top, int right, int bottom)
    {
        QAbstractScrollArea::setViewportMargins(left, top, right, bottom);
    }
    
    bool viewportEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("viewportEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event).getValue());
        }
        return QGraphicsView::viewportEvent(event);
    }
    bool super_viewportEvent(QEvent * event)
    {
        return QGraphicsView::viewportEvent(event);
    }
    
    void showEvent(QShowEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("showEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsView::showEvent(event);
    }
    void super_showEvent(QShowEvent * event)
    {
        QGraphicsView::showEvent(event);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QGraphicsView::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QGraphicsView::qt_metacast(__arg0);
    }
    
    void tabletEvent(QTabletEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("tabletEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::tabletEvent(__arg0);
    }
    void super_tabletEvent(QTabletEvent * __arg0)
    {
        QWidget::tabletEvent(__arg0);
    }
    
    void resizeEvent(QResizeEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("resizeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsView::resizeEvent(event);
    }
    void super_resizeEvent(QResizeEvent * event)
    {
        QGraphicsView::resizeEvent(event);
    }
    
    void hideEvent(QHideEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hideEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::hideEvent(__arg0);
    }
    void super_hideEvent(QHideEvent * __arg0)
    {
        QWidget::hideEvent(__arg0);
    }
    
    int metric(QPaintDevice::PaintDeviceMetric __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metric"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QWidget::metric(__arg0);
    }
    int super_metric(QPaintDevice::PaintDeviceMetric __arg0) const
    {
        return QWidget::metric(__arg0);
    }
    
    void focusInEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsView::focusInEvent(event);
    }
    void super_focusInEvent(QFocusEvent * event)
    {
        QGraphicsView::focusInEvent(event);
    }
    
    void contextMenuEvent(QContextMenuEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsView::contextMenuEvent(event);
    }
    void super_contextMenuEvent(QContextMenuEvent * event)
    {
        QGraphicsView::contextMenuEvent(event);
    }
    
    bool event(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event).getValue());
        }
        return QGraphicsView::event(event);
    }
    bool super_event(QEvent * event)
    {
        return QGraphicsView::event(event);
    }
    
    void leaveEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("leaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::leaveEvent(__arg0);
    }
    void super_leaveEvent(QEvent * __arg0)
    {
        QWidget::leaveEvent(__arg0);
    }
    
    void dropEvent(QDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsView::dropEvent(event);
    }
    void super_dropEvent(QDropEvent * event)
    {
        QGraphicsView::dropEvent(event);
    }
    
    bool focusNextChild()
    {
        return QWidget::focusNextChild();
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
    
    void setViewportMargins(const QMargins & margins)
    {
        QAbstractScrollArea::setViewportMargins(margins);
    }
    
    void paintEvent(QPaintEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsView::paintEvent(event);
    }
    void super_paintEvent(QPaintEvent * event)
    {
        QGraphicsView::paintEvent(event);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void destroy(bool destroyWindow = true, bool destroySubWindows = true)
    {
        QWidget::destroy(destroyWindow, destroySubWindows);
    }
    
    void drawBackground(QPainter * painter, const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawBackground"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, rect);
            return;
        }
        QGraphicsView::drawBackground(painter, rect);
    }
    void super_drawBackground(QPainter * painter, const QRectF & rect)
    {
        QGraphicsView::drawBackground(painter, rect);
    }
    
    void mouseDoubleClickEvent(QMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsView::mouseDoubleClickEvent(event);
    }
    void super_mouseDoubleClickEvent(QMouseEvent * event)
    {
        QGraphicsView::mouseDoubleClickEvent(event);
    }
    
    void focusOutEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsView::focusOutEvent(event);
    }
    void super_focusOutEvent(QFocusEvent * event)
    {
        QGraphicsView::focusOutEvent(event);
    }
    
    void create(WId __arg0 = 0, bool initializeWindow = true, bool destroyOldWindow = true)
    {
        QWidget::create(__arg0, initializeWindow, destroyOldWindow);
    }
    
    void moveEvent(QMoveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("moveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::moveEvent(__arg0);
    }
    void super_moveEvent(QMoveEvent * __arg0)
    {
        QWidget::moveEvent(__arg0);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    void updateMicroFocus()
    {
        QWidget::updateMicroFocus();
    }
    
    void changeEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("changeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QFrame::changeEvent(__arg0);
    }
    void super_changeEvent(QEvent * __arg0)
    {
        QFrame::changeEvent(__arg0);
    }
    
    bool hasHeightForWidth() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::hasHeightForWidth();
    }
    bool super_hasHeightForWidth() const
    {
        return QWidget::hasHeightForWidth();
    }
    
    QPainter * sharedPainter() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sharedPainter"));
        if(func)
        {
            return cpgf::fromVariant<QPainter * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::sharedPainter();
    }
    QPainter * super_sharedPainter() const
    {
        return QWidget::sharedPainter();
    }
    
    void setupViewport(QWidget * widget)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setupViewport"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, widget);
            return;
        }
        QGraphicsView::setupViewport(widget);
    }
    void super_setupViewport(QWidget * widget)
    {
        QGraphicsView::setupViewport(widget);
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1).getValue());
        }
        return QAbstractScrollArea::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QAbstractScrollArea::eventFilter(__arg0, __arg1);
    }
    
    QPaintDevice * redirected(QPoint * offset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("redirected"));
        if(func)
        {
            return cpgf::fromVariant<QPaintDevice * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset).getValue());
        }
        return QWidget::redirected(offset);
    }
    QPaintDevice * super_redirected(QPoint * offset) const
    {
        return QWidget::redirected(offset);
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QGraphicsView::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QGraphicsView::qt_metacall(__arg0, __arg1, __arg2);
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
    
    int heightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("heightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QWidget::heightForWidth(__arg0);
    }
    int super_heightForWidth(int __arg0) const
    {
        return QWidget::heightForWidth(__arg0);
    }
    
    void enterEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("enterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::enterEvent(__arg0);
    }
    void super_enterEvent(QEvent * __arg0)
    {
        QWidget::enterEvent(__arg0);
    }
    
    void dragMoveEvent(QDragMoveEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsView::dragMoveEvent(event);
    }
    void super_dragMoveEvent(QDragMoveEvent * event)
    {
        QGraphicsView::dragMoveEvent(event);
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
    
    void drawForeground(QPainter * painter, const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawForeground"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, rect);
            return;
        }
        QGraphicsView::drawForeground(painter, rect);
    }
    void super_drawForeground(QPainter * painter, const QRectF & rect)
    {
        QGraphicsView::drawForeground(painter, rect);
    }
    
    bool focusNextPrevChild(bool next)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusNextPrevChild"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, next).getValue());
        }
        return QGraphicsView::focusNextPrevChild(next);
    }
    bool super_focusNextPrevChild(bool next)
    {
        return QGraphicsView::focusNextPrevChild(next);
    }
    
    QSize sizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsView::sizeHint();
    }
    QSize super_sizeHint() const
    {
        return QGraphicsView::sizeHint();
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
    
    void initPainter(QPainter * painter) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("initPainter"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter);
            return;
        }
        QWidget::initPainter(painter);
    }
    void super_initPainter(QPainter * painter) const
    {
        QWidget::initPainter(painter);
    }
    
    bool focusPreviousChild()
    {
        return QWidget::focusPreviousChild();
    }
    
    void mouseMoveEvent(QMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsView::mouseMoveEvent(event);
    }
    void super_mouseMoveEvent(QMouseEvent * event)
    {
        QGraphicsView::mouseMoveEvent(event);
    }
    
    void keyPressEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsView::keyPressEvent(event);
    }
    void super_keyPressEvent(QKeyEvent * event)
    {
        QGraphicsView::keyPressEvent(event);
    }
    
    void actionEvent(QActionEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("actionEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::actionEvent(__arg0);
    }
    void super_actionEvent(QActionEvent * __arg0)
    {
        QWidget::actionEvent(__arg0);
    }
    
    void setVisible(bool visible)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setVisible"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, visible);
            return;
        }
        QWidget::setVisible(visible);
    }
    void super_setVisible(bool visible)
    {
        QWidget::setVisible(visible);
    }
    
    void inputMethodEvent(QInputMethodEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsView::inputMethodEvent(event);
    }
    void super_inputMethodEvent(QInputMethodEvent * event)
    {
        QGraphicsView::inputMethodEvent(event);
    }
    
    void dragEnterEvent(QDragEnterEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsView::dragEnterEvent(event);
    }
    void super_dragEnterEvent(QDragEnterEvent * event)
    {
        QGraphicsView::dragEnterEvent(event);
    }
    
    void mousePressEvent(QMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsView::mousePressEvent(event);
    }
    void super_mousePressEvent(QMouseEvent * event)
    {
        QGraphicsView::mousePressEvent(event);
    }
    
    void drawItems(QPainter * painter, int numItems, QGraphicsItem ** items, const QStyleOptionGraphicsItem* options)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawItems"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, numItems, items, options);
            return;
        }
        QGraphicsView::drawItems(painter, numItems, items, options);
    }
    void super_drawItems(QPainter * painter, int numItems, QGraphicsItem ** items, const QStyleOptionGraphicsItem* options)
    {
        QGraphicsView::drawItems(painter, numItems, items, options);
    }
    
    void drawFrame(QPainter * __arg0)
    {
        QFrame::drawFrame(__arg0);
    }
    
    QVariant inputMethodQuery(Qt::InputMethodQuery query) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodQuery"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, query).getValue());
        }
        return QGraphicsView::inputMethodQuery(query);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery query) const
    {
        return QGraphicsView::inputMethodQuery(query);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void dragLeaveEvent(QDragLeaveEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsView::dragLeaveEvent(event);
    }
    void super_dragLeaveEvent(QDragLeaveEvent * event)
    {
        QGraphicsView::dragLeaveEvent(event);
    }
    
    bool nativeEvent(const QByteArray & eventType, void * message, long * result)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("nativeEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, eventType, message, result).getValue());
        }
        return QWidget::nativeEvent(eventType, message, result);
    }
    bool super_nativeEvent(const QByteArray & eventType, void * message, long * result)
    {
        return QWidget::nativeEvent(eventType, message, result);
    }
    
    QSize minimumSizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumSizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAbstractScrollArea::minimumSizeHint();
    }
    QSize super_minimumSizeHint() const
    {
        return QAbstractScrollArea::minimumSizeHint();
    }
    
    int devType() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("devType"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::devType();
    }
    int super_devType() const
    {
        return QWidget::devType();
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    QPaintEngine * paintEngine() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintEngine"));
        if(func)
        {
            return cpgf::fromVariant<QPaintEngine * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::paintEngine();
    }
    QPaintEngine * super_paintEngine() const
    {
        return QWidget::paintEngine();
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsView::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QGraphicsView::metaObject();
    }
    
    void keyReleaseEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsView::keyReleaseEvent(event);
    }
    void super_keyReleaseEvent(QKeyEvent * event)
    {
        QGraphicsView::keyReleaseEvent(event);
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
    
    void mouseReleaseEvent(QMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QGraphicsView::mouseReleaseEvent(event);
    }
    void super_mouseReleaseEvent(QMouseEvent * event)
    {
        QGraphicsView::mouseReleaseEvent(event);
    }
    
    void closeEvent(QCloseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("closeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::closeEvent(__arg0);
    }
    void super_closeEvent(QCloseEvent * __arg0)
    {
        QWidget::closeEvent(__arg0);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("viewportSizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::viewportSizeHint);
        _d.CPGF_MD_TEMPLATE _method("scrollContentsBy", (void (D::ClassType::*) (int, int))&D::ClassType::scrollContentsBy);
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("setViewportMargins", (void (D::ClassType::*) (int, int, int, int))&D::ClassType::setViewportMargins);
        _d.CPGF_MD_TEMPLATE _method("viewportEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::viewportEvent);
        _d.CPGF_MD_TEMPLATE _method("showEvent", (void (D::ClassType::*) (QShowEvent *))&D::ClassType::showEvent);
        _d.CPGF_MD_TEMPLATE _method("tabletEvent", (void (D::ClassType::*) (QTabletEvent *))&D::ClassType::tabletEvent);
        _d.CPGF_MD_TEMPLATE _method("resizeEvent", (void (D::ClassType::*) (QResizeEvent *))&D::ClassType::resizeEvent);
        _d.CPGF_MD_TEMPLATE _method("hideEvent", (void (D::ClassType::*) (QHideEvent *))&D::ClassType::hideEvent);
        _d.CPGF_MD_TEMPLATE _method("metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::metric);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::event);
        _d.CPGF_MD_TEMPLATE _method("leaveEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::leaveEvent);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("focusNextChild", (bool (D::ClassType::*) ())&D::ClassType::focusNextChild);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("setViewportMargins", (void (D::ClassType::*) (const QMargins &))&D::ClassType::setViewportMargins);
        _d.CPGF_MD_TEMPLATE _method("paintEvent", (void (D::ClassType::*) (QPaintEvent *))&D::ClassType::paintEvent);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("destroy", (void (D::ClassType::*) (bool, bool))&D::ClassType::destroy)
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(true))
        ;
        _d.CPGF_MD_TEMPLATE _method("drawBackground", (void (D::ClassType::*) (QPainter *, const QRectF &))&D::ClassType::drawBackground);
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("create", (void (D::ClassType::*) (WId, bool, bool))&D::ClassType::create)
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("moveEvent", (void (D::ClassType::*) (QMoveEvent *))&D::ClassType::moveEvent);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("changeEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::changeEvent);
        _d.CPGF_MD_TEMPLATE _method("sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::sharedPainter);
        _d.CPGF_MD_TEMPLATE _method("setupViewport", (void (D::ClassType::*) (QWidget *))&D::ClassType::setupViewport);
        _d.CPGF_MD_TEMPLATE _method("eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::eventFilter);
        _d.CPGF_MD_TEMPLATE _method("redirected", (QPaintDevice * (D::ClassType::*) (QPoint *) const)&D::ClassType::redirected);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("enterEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::enterEvent);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QDragMoveEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("drawForeground", (void (D::ClassType::*) (QPainter *, const QRectF &))&D::ClassType::drawForeground);
        _d.CPGF_MD_TEMPLATE _method("focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("initPainter", (void (D::ClassType::*) (QPainter *) const)&D::ClassType::initPainter);
        _d.CPGF_MD_TEMPLATE _method("focusPreviousChild", (bool (D::ClassType::*) ())&D::ClassType::focusPreviousChild);
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("actionEvent", (void (D::ClassType::*) (QActionEvent *))&D::ClassType::actionEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("drawItems", (void (D::ClassType::*) (QPainter *, int, QGraphicsItem **, const QStyleOptionGraphicsItem*))&D::ClassType::drawItems);
        _d.CPGF_MD_TEMPLATE _method("drawFrame", (void (D::ClassType::*) (QPainter *))&D::ClassType::drawFrame);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("nativeEvent", (bool (D::ClassType::*) (const QByteArray &, void *, long *))&D::ClassType::nativeEvent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::closeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_viewportSizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_viewportSizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_scrollContentsBy", (void (D::ClassType::*) (int, int))&D::ClassType::super_scrollContentsBy);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_viewportEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_viewportEvent);
        _d.CPGF_MD_TEMPLATE _method("super_showEvent", (void (D::ClassType::*) (QShowEvent *))&D::ClassType::super_showEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_tabletEvent", (void (D::ClassType::*) (QTabletEvent *))&D::ClassType::super_tabletEvent);
        _d.CPGF_MD_TEMPLATE _method("super_resizeEvent", (void (D::ClassType::*) (QResizeEvent *))&D::ClassType::super_resizeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hideEvent", (void (D::ClassType::*) (QHideEvent *))&D::ClassType::super_hideEvent);
        _d.CPGF_MD_TEMPLATE _method("super_metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::super_metric);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_leaveEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_leaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paintEvent", (void (D::ClassType::*) (QPaintEvent *))&D::ClassType::super_paintEvent);
        _d.CPGF_MD_TEMPLATE _method("super_drawBackground", (void (D::ClassType::*) (QPainter *, const QRectF &))&D::ClassType::super_drawBackground);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_moveEvent", (void (D::ClassType::*) (QMoveEvent *))&D::ClassType::super_moveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_changeEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_changeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hasHeightForWidth", (bool (D::ClassType::*) () const)&D::ClassType::super_hasHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::super_sharedPainter);
        _d.CPGF_MD_TEMPLATE _method("super_setupViewport", (void (D::ClassType::*) (QWidget *))&D::ClassType::super_setupViewport);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_redirected", (QPaintDevice * (D::ClassType::*) (QPoint *) const)&D::ClassType::super_redirected);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_heightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_heightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_enterEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_enterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QDragMoveEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_drawForeground", (void (D::ClassType::*) (QPainter *, const QRectF &))&D::ClassType::super_drawForeground);
        _d.CPGF_MD_TEMPLATE _method("super_focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::super_focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_sizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_initPainter", (void (D::ClassType::*) (QPainter *) const)&D::ClassType::super_initPainter);
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_actionEvent", (void (D::ClassType::*) (QActionEvent *))&D::ClassType::super_actionEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setVisible", (void (D::ClassType::*) (bool))&D::ClassType::super_setVisible);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_drawItems", (void (D::ClassType::*) (QPainter *, int, QGraphicsItem **, const QStyleOptionGraphicsItem*))&D::ClassType::super_drawItems);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_nativeEvent", (bool (D::ClassType::*) (const QByteArray &, void *, long *))&D::ClassType::super_nativeEvent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_minimumSizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_minimumSizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_devType", (int (D::ClassType::*) () const)&D::ClassType::super_devType);
        _d.CPGF_MD_TEMPLATE _method("super_paintEngine", (QPaintEngine * (D::ClassType::*) () const)&D::ClassType::super_paintEngine);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::super_closeEvent);
    }
};


template <typename D>
void buildMetaClass_QGraphicsViewWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGraphicsViewWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsView<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
