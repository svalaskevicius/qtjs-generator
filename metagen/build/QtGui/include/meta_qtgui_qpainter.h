// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QPAINTER_H
#define CPGF_META_QTGUI_QPAINTER_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QPainter(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QPaintDevice *)>();
    _d.CPGF_MD_TEMPLATE _method("device", &D::ClassType::device);
    _d.CPGF_MD_TEMPLATE _method("begin", &D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("end", &D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("isActive", &D::ClassType::isActive);
    _d.CPGF_MD_TEMPLATE _method("initFrom", &D::ClassType::initFrom);
    _d.CPGF_MD_TEMPLATE _method("setCompositionMode", &D::ClassType::setCompositionMode);
    _d.CPGF_MD_TEMPLATE _method("compositionMode", &D::ClassType::compositionMode);
    _d.CPGF_MD_TEMPLATE _method("font", &D::ClassType::font, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("setFont", &D::ClassType::setFont, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fontMetrics", &D::ClassType::fontMetrics);
    _d.CPGF_MD_TEMPLATE _method("fontInfo", &D::ClassType::fontInfo);
    _d.CPGF_MD_TEMPLATE _method("setPen", (void (D::ClassType::*) (const QColor &))&D::ClassType::setPen, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setPen", (void (D::ClassType::*) (const QPen &))&D::ClassType::setPen, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setPen", (void (D::ClassType::*) (Qt::PenStyle))&D::ClassType::setPen);
    _d.CPGF_MD_TEMPLATE _method("pen", &D::ClassType::pen, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("setBrush", (void (D::ClassType::*) (const QBrush &))&D::ClassType::setBrush, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setBrush", (void (D::ClassType::*) (Qt::BrushStyle))&D::ClassType::setBrush);
    _d.CPGF_MD_TEMPLATE _method("brush", &D::ClassType::brush, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("setBackgroundMode", &D::ClassType::setBackgroundMode);
    _d.CPGF_MD_TEMPLATE _method("backgroundMode", &D::ClassType::backgroundMode);
    _d.CPGF_MD_TEMPLATE _method("brushOrigin", &D::ClassType::brushOrigin);
    _d.CPGF_MD_TEMPLATE _method("setBrushOrigin", (void (D::ClassType::*) (int, int))&D::ClassType::setBrushOrigin);
    _d.CPGF_MD_TEMPLATE _method("setBrushOrigin", (void (D::ClassType::*) (const QPoint &))&D::ClassType::setBrushOrigin);
    _d.CPGF_MD_TEMPLATE _method("setBrushOrigin", (void (D::ClassType::*) (const QPointF &))&D::ClassType::setBrushOrigin, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setBackground", &D::ClassType::setBackground, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("background", &D::ClassType::background, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("opacity", &D::ClassType::opacity);
    _d.CPGF_MD_TEMPLATE _method("setOpacity", &D::ClassType::setOpacity);
    _d.CPGF_MD_TEMPLATE _method("clipRegion", &D::ClassType::clipRegion);
    _d.CPGF_MD_TEMPLATE _method("clipPath", &D::ClassType::clipPath);
    _d.CPGF_MD_TEMPLATE _method("setClipRect", (void (D::ClassType::*) (const QRectF &, Qt::ClipOperation))&D::ClassType::setClipRect)
        ._default(copyVariantFromCopyable(Qt::ReplaceClip))
    ;
    _d.CPGF_MD_TEMPLATE _method("setClipRect", (void (D::ClassType::*) (const QRect &, Qt::ClipOperation))&D::ClassType::setClipRect)
        ._default(copyVariantFromCopyable(Qt::ReplaceClip))
    ;
    _d.CPGF_MD_TEMPLATE _method("setClipRect", (void (D::ClassType::*) (int, int, int, int, Qt::ClipOperation))&D::ClassType::setClipRect)
        ._default(copyVariantFromCopyable(Qt::ReplaceClip))
    ;
    _d.CPGF_MD_TEMPLATE _method("setClipRegion", &D::ClassType::setClipRegion, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::ReplaceClip))
    ;
    _d.CPGF_MD_TEMPLATE _method("setClipPath", &D::ClassType::setClipPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::ReplaceClip))
    ;
    _d.CPGF_MD_TEMPLATE _method("setClipping", &D::ClassType::setClipping);
    _d.CPGF_MD_TEMPLATE _method("hasClipping", &D::ClassType::hasClipping);
    _d.CPGF_MD_TEMPLATE _method("clipBoundingRect", &D::ClassType::clipBoundingRect);
    _d.CPGF_MD_TEMPLATE _method("save", &D::ClassType::save);
    _d.CPGF_MD_TEMPLATE _method("restore", &D::ClassType::restore);
    _d.CPGF_MD_TEMPLATE _method("setMatrix", &D::ClassType::setMatrix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("matrix", &D::ClassType::matrix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("deviceMatrix", &D::ClassType::deviceMatrix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("resetMatrix", &D::ClassType::resetMatrix);
    _d.CPGF_MD_TEMPLATE _method("setTransform", &D::ClassType::setTransform, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("transform", &D::ClassType::transform, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("deviceTransform", &D::ClassType::deviceTransform, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("resetTransform", &D::ClassType::resetTransform);
    _d.CPGF_MD_TEMPLATE _method("setWorldMatrix", &D::ClassType::setWorldMatrix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("worldMatrix", &D::ClassType::worldMatrix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("setWorldTransform", &D::ClassType::setWorldTransform, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("worldTransform", &D::ClassType::worldTransform, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("combinedMatrix", &D::ClassType::combinedMatrix);
    _d.CPGF_MD_TEMPLATE _method("combinedTransform", &D::ClassType::combinedTransform);
    _d.CPGF_MD_TEMPLATE _method("setMatrixEnabled", &D::ClassType::setMatrixEnabled);
    _d.CPGF_MD_TEMPLATE _method("matrixEnabled", &D::ClassType::matrixEnabled);
    _d.CPGF_MD_TEMPLATE _method("setWorldMatrixEnabled", &D::ClassType::setWorldMatrixEnabled);
    _d.CPGF_MD_TEMPLATE _method("worldMatrixEnabled", &D::ClassType::worldMatrixEnabled);
    _d.CPGF_MD_TEMPLATE _method("scale", &D::ClassType::scale);
    _d.CPGF_MD_TEMPLATE _method("shear", &D::ClassType::shear);
    _d.CPGF_MD_TEMPLATE _method("rotate", &D::ClassType::rotate);
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (const QPointF &))&D::ClassType::translate, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (const QPoint &))&D::ClassType::translate);
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::translate);
    _d.CPGF_MD_TEMPLATE _method("window", &D::ClassType::window);
    _d.CPGF_MD_TEMPLATE _method("setWindow", (void (D::ClassType::*) (const QRect &))&D::ClassType::setWindow);
    _d.CPGF_MD_TEMPLATE _method("setWindow", (void (D::ClassType::*) (int, int, int, int))&D::ClassType::setWindow);
    _d.CPGF_MD_TEMPLATE _method("viewport", &D::ClassType::viewport);
    _d.CPGF_MD_TEMPLATE _method("setViewport", (void (D::ClassType::*) (const QRect &))&D::ClassType::setViewport);
    _d.CPGF_MD_TEMPLATE _method("setViewport", (void (D::ClassType::*) (int, int, int, int))&D::ClassType::setViewport);
    _d.CPGF_MD_TEMPLATE _method("setViewTransformEnabled", &D::ClassType::setViewTransformEnabled);
    _d.CPGF_MD_TEMPLATE _method("viewTransformEnabled", &D::ClassType::viewTransformEnabled);
    _d.CPGF_MD_TEMPLATE _method("strokePath", &D::ClassType::strokePath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("fillPath", &D::ClassType::fillPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("drawPath", &D::ClassType::drawPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawPoint", (void (D::ClassType::*) (const QPointF &))&D::ClassType::drawPoint, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawPoint", (void (D::ClassType::*) (const QPoint &))&D::ClassType::drawPoint);
    _d.CPGF_MD_TEMPLATE _method("drawPoint", (void (D::ClassType::*) (int, int))&D::ClassType::drawPoint);
    _d.CPGF_MD_TEMPLATE _method("drawPoints", (void (D::ClassType::*) (const QPointF *, int))&D::ClassType::drawPoints);
    _d.CPGF_MD_TEMPLATE _method("drawPoints", (void (D::ClassType::*) (const QPolygonF &))&D::ClassType::drawPoints, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawPoints", (void (D::ClassType::*) (const QPoint *, int))&D::ClassType::drawPoints);
    _d.CPGF_MD_TEMPLATE _method("drawPoints", (void (D::ClassType::*) (const QPolygon &))&D::ClassType::drawPoints, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawLine", (void (D::ClassType::*) (const QLineF &))&D::ClassType::drawLine, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawLine", (void (D::ClassType::*) (const QLine &))&D::ClassType::drawLine);
    _d.CPGF_MD_TEMPLATE _method("drawLine", (void (D::ClassType::*) (int, int, int, int))&D::ClassType::drawLine);
    _d.CPGF_MD_TEMPLATE _method("drawLine", (void (D::ClassType::*) (const QPoint &, const QPoint &))&D::ClassType::drawLine);
    _d.CPGF_MD_TEMPLATE _method("drawLine", (void (D::ClassType::*) (const QPointF &, const QPointF &))&D::ClassType::drawLine, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("drawLines", (void (D::ClassType::*) (const QLineF *, int))&D::ClassType::drawLines);
    _d.CPGF_MD_TEMPLATE _method("drawLines", (void (D::ClassType::*) (const QVector< QLineF > &))&D::ClassType::drawLines, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawLines", (void (D::ClassType::*) (const QPointF *, int))&D::ClassType::drawLines);
    _d.CPGF_MD_TEMPLATE _method("drawLines", (void (D::ClassType::*) (const QVector< QPointF > &))&D::ClassType::drawLines, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawLines", (void (D::ClassType::*) (const QLine *, int))&D::ClassType::drawLines);
    _d.CPGF_MD_TEMPLATE _method("drawLines", (void (D::ClassType::*) (const QVector< QLine > &))&D::ClassType::drawLines, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawLines", (void (D::ClassType::*) (const QPoint *, int))&D::ClassType::drawLines);
    _d.CPGF_MD_TEMPLATE _method("drawLines", (void (D::ClassType::*) (const QVector< QPoint > &))&D::ClassType::drawLines, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::drawRect);
    _d.CPGF_MD_TEMPLATE _method("drawRect", (void (D::ClassType::*) (int, int, int, int))&D::ClassType::drawRect);
    _d.CPGF_MD_TEMPLATE _method("drawRect", (void (D::ClassType::*) (const QRect &))&D::ClassType::drawRect);
    _d.CPGF_MD_TEMPLATE _method("drawRects", (void (D::ClassType::*) (const QRectF *, int))&D::ClassType::drawRects);
    _d.CPGF_MD_TEMPLATE _method("drawRects", (void (D::ClassType::*) (const QVector< QRectF > &))&D::ClassType::drawRects, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawRects", (void (D::ClassType::*) (const QRect *, int))&D::ClassType::drawRects);
    _d.CPGF_MD_TEMPLATE _method("drawRects", (void (D::ClassType::*) (const QVector< QRect > &))&D::ClassType::drawRects, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawEllipse", (void (D::ClassType::*) (const QRectF &))&D::ClassType::drawEllipse);
    _d.CPGF_MD_TEMPLATE _method("drawEllipse", (void (D::ClassType::*) (const QRect &))&D::ClassType::drawEllipse);
    _d.CPGF_MD_TEMPLATE _method("drawEllipse", (void (D::ClassType::*) (int, int, int, int))&D::ClassType::drawEllipse);
    _d.CPGF_MD_TEMPLATE _method("drawEllipse", (void (D::ClassType::*) (const QPointF &, qreal, qreal))&D::ClassType::drawEllipse, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawEllipse", (void (D::ClassType::*) (const QPoint &, int, int))&D::ClassType::drawEllipse);
    _d.CPGF_MD_TEMPLATE _method("drawPolyline", (void (D::ClassType::*) (const QPointF *, int))&D::ClassType::drawPolyline);
    _d.CPGF_MD_TEMPLATE _method("drawPolyline", (void (D::ClassType::*) (const QPolygonF &))&D::ClassType::drawPolyline, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawPolyline", (void (D::ClassType::*) (const QPoint *, int))&D::ClassType::drawPolyline);
    _d.CPGF_MD_TEMPLATE _method("drawPolyline", (void (D::ClassType::*) (const QPolygon &))&D::ClassType::drawPolyline, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawPolygon", (void (D::ClassType::*) (const QPointF *, int, Qt::FillRule))&D::ClassType::drawPolygon)
        ._default(copyVariantFromCopyable(Qt::OddEvenFill))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawPolygon", (void (D::ClassType::*) (const QPolygonF &, Qt::FillRule))&D::ClassType::drawPolygon, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::OddEvenFill))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawPolygon", (void (D::ClassType::*) (const QPoint *, int, Qt::FillRule))&D::ClassType::drawPolygon)
        ._default(copyVariantFromCopyable(Qt::OddEvenFill))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawPolygon", (void (D::ClassType::*) (const QPolygon &, Qt::FillRule))&D::ClassType::drawPolygon, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::OddEvenFill))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawConvexPolygon", (void (D::ClassType::*) (const QPointF *, int))&D::ClassType::drawConvexPolygon);
    _d.CPGF_MD_TEMPLATE _method("drawConvexPolygon", (void (D::ClassType::*) (const QPolygonF &))&D::ClassType::drawConvexPolygon, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawConvexPolygon", (void (D::ClassType::*) (const QPoint *, int))&D::ClassType::drawConvexPolygon);
    _d.CPGF_MD_TEMPLATE _method("drawConvexPolygon", (void (D::ClassType::*) (const QPolygon &))&D::ClassType::drawConvexPolygon, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawArc", (void (D::ClassType::*) (const QRectF &, int, int))&D::ClassType::drawArc);
    _d.CPGF_MD_TEMPLATE _method("drawArc", (void (D::ClassType::*) (const QRect &, int, int))&D::ClassType::drawArc);
    _d.CPGF_MD_TEMPLATE _method("drawArc", (void (D::ClassType::*) (int, int, int, int, int, int))&D::ClassType::drawArc);
    _d.CPGF_MD_TEMPLATE _method("drawPie", (void (D::ClassType::*) (const QRectF &, int, int))&D::ClassType::drawPie);
    _d.CPGF_MD_TEMPLATE _method("drawPie", (void (D::ClassType::*) (int, int, int, int, int, int))&D::ClassType::drawPie);
    _d.CPGF_MD_TEMPLATE _method("drawPie", (void (D::ClassType::*) (const QRect &, int, int))&D::ClassType::drawPie);
    _d.CPGF_MD_TEMPLATE _method("drawChord", (void (D::ClassType::*) (const QRectF &, int, int))&D::ClassType::drawChord);
    _d.CPGF_MD_TEMPLATE _method("drawChord", (void (D::ClassType::*) (int, int, int, int, int, int))&D::ClassType::drawChord);
    _d.CPGF_MD_TEMPLATE _method("drawChord", (void (D::ClassType::*) (const QRect &, int, int))&D::ClassType::drawChord);
    _d.CPGF_MD_TEMPLATE _method("drawRoundedRect", (void (D::ClassType::*) (const QRectF &, qreal, qreal, Qt::SizeMode))&D::ClassType::drawRoundedRect)
        ._default(copyVariantFromCopyable(Qt::AbsoluteSize))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawRoundedRect", (void (D::ClassType::*) (int, int, int, int, qreal, qreal, Qt::SizeMode))&D::ClassType::drawRoundedRect)
        ._default(copyVariantFromCopyable(Qt::AbsoluteSize))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawRoundedRect", (void (D::ClassType::*) (const QRect &, qreal, qreal, Qt::SizeMode))&D::ClassType::drawRoundedRect)
        ._default(copyVariantFromCopyable(Qt::AbsoluteSize))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawRoundRect", (void (D::ClassType::*) (const QRectF &, int, int))&D::ClassType::drawRoundRect)
        ._default(copyVariantFromCopyable(25))
        ._default(copyVariantFromCopyable(25))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawRoundRect", (void (D::ClassType::*) (int, int, int, int, int, int))&D::ClassType::drawRoundRect)
        ._default(copyVariantFromCopyable(25))
        ._default(copyVariantFromCopyable(25))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawRoundRect", (void (D::ClassType::*) (const QRect &, int, int))&D::ClassType::drawRoundRect)
        ._default(copyVariantFromCopyable(25))
        ._default(copyVariantFromCopyable(25))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawTiledPixmap", (void (D::ClassType::*) (const QRectF &, const QPixmap &, const QPointF &))&D::ClassType::drawTiledPixmap, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QPointF()))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawTiledPixmap", (void (D::ClassType::*) (int, int, int, int, const QPixmap &, int, int))&D::ClassType::drawTiledPixmap)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawTiledPixmap", (void (D::ClassType::*) (const QRect &, const QPixmap &, const QPoint &))&D::ClassType::drawTiledPixmap)
        ._default(copyVariantFromCopyable(QPoint()))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawPicture", (void (D::ClassType::*) (const QPointF &, const QPicture &))&D::ClassType::drawPicture, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawPicture", (void (D::ClassType::*) (int, int, const QPicture &))&D::ClassType::drawPicture);
    _d.CPGF_MD_TEMPLATE _method("drawPicture", (void (D::ClassType::*) (const QPoint &, const QPicture &))&D::ClassType::drawPicture);
    _d.CPGF_MD_TEMPLATE _method("drawPixmap", (void (D::ClassType::*) (const QRectF &, const QPixmap &, const QRectF &))&D::ClassType::drawPixmap);
    _d.CPGF_MD_TEMPLATE _method("drawPixmap", (void (D::ClassType::*) (const QRect &, const QPixmap &, const QRect &))&D::ClassType::drawPixmap);
    _d.CPGF_MD_TEMPLATE _method("drawPixmap", (void (D::ClassType::*) (int, int, int, int, const QPixmap &, int, int, int, int))&D::ClassType::drawPixmap);
    _d.CPGF_MD_TEMPLATE _method("drawPixmap", (void (D::ClassType::*) (int, int, const QPixmap &, int, int, int, int))&D::ClassType::drawPixmap);
    _d.CPGF_MD_TEMPLATE _method("drawPixmap", (void (D::ClassType::*) (const QPointF &, const QPixmap &, const QRectF &))&D::ClassType::drawPixmap, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawPixmap", (void (D::ClassType::*) (const QPoint &, const QPixmap &, const QRect &))&D::ClassType::drawPixmap);
    _d.CPGF_MD_TEMPLATE _method("drawPixmap", (void (D::ClassType::*) (const QPointF &, const QPixmap &))&D::ClassType::drawPixmap, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawPixmap", (void (D::ClassType::*) (const QPoint &, const QPixmap &))&D::ClassType::drawPixmap);
    _d.CPGF_MD_TEMPLATE _method("drawPixmap", (void (D::ClassType::*) (int, int, const QPixmap &))&D::ClassType::drawPixmap);
    _d.CPGF_MD_TEMPLATE _method("drawPixmap", (void (D::ClassType::*) (const QRect &, const QPixmap &))&D::ClassType::drawPixmap);
    _d.CPGF_MD_TEMPLATE _method("drawPixmap", (void (D::ClassType::*) (int, int, int, int, const QPixmap &))&D::ClassType::drawPixmap);
    _d.CPGF_MD_TEMPLATE _method("drawPixmapFragments", &D::ClassType::drawPixmapFragments)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawImage", (void (D::ClassType::*) (const QRectF &, const QImage &, const QRectF &, Qt::ImageConversionFlags))&D::ClassType::drawImage)
        ._default(copyVariantFromCopyable(Qt::AutoColor))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawImage", (void (D::ClassType::*) (const QRect &, const QImage &, const QRect &, Qt::ImageConversionFlags))&D::ClassType::drawImage)
        ._default(copyVariantFromCopyable(Qt::AutoColor))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawImage", (void (D::ClassType::*) (const QPointF &, const QImage &, const QRectF &, Qt::ImageConversionFlags))&D::ClassType::drawImage, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::AutoColor))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawImage", (void (D::ClassType::*) (const QPoint &, const QImage &, const QRect &, Qt::ImageConversionFlags))&D::ClassType::drawImage)
        ._default(copyVariantFromCopyable(Qt::AutoColor))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawImage", (void (D::ClassType::*) (const QRectF &, const QImage &))&D::ClassType::drawImage);
    _d.CPGF_MD_TEMPLATE _method("drawImage", (void (D::ClassType::*) (const QRect &, const QImage &))&D::ClassType::drawImage);
    _d.CPGF_MD_TEMPLATE _method("drawImage", (void (D::ClassType::*) (const QPointF &, const QImage &))&D::ClassType::drawImage, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawImage", (void (D::ClassType::*) (const QPoint &, const QImage &))&D::ClassType::drawImage);
    _d.CPGF_MD_TEMPLATE _method("drawImage", (void (D::ClassType::*) (int, int, const QImage &, int, int, int, int, Qt::ImageConversionFlags))&D::ClassType::drawImage)
        ._default(copyVariantFromCopyable(Qt::AutoColor))
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setLayoutDirection", &D::ClassType::setLayoutDirection);
    _d.CPGF_MD_TEMPLATE _method("layoutDirection", &D::ClassType::layoutDirection);
    _d.CPGF_MD_TEMPLATE _method("drawGlyphRun", &D::ClassType::drawGlyphRun, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawStaticText", (void (D::ClassType::*) (const QPointF &, const QStaticText &))&D::ClassType::drawStaticText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("drawStaticText", (void (D::ClassType::*) (const QPoint &, const QStaticText &))&D::ClassType::drawStaticText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("drawStaticText", (void (D::ClassType::*) (int, int, const QStaticText &))&D::ClassType::drawStaticText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("drawText", (void (D::ClassType::*) (const QPointF &, const QString &))&D::ClassType::drawText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("drawText", (void (D::ClassType::*) (const QPoint &, const QString &))&D::ClassType::drawText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("drawText", (void (D::ClassType::*) (int, int, const QString &))&D::ClassType::drawText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("drawText", (void (D::ClassType::*) (const QPointF &, const QString &, int, int))&D::ClassType::drawText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("drawText", (void (D::ClassType::*) (const QRectF &, int, const QString &, QRectF *))&D::ClassType::drawText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawText", (void (D::ClassType::*) (const QRect &, int, const QString &, QRect *))&D::ClassType::drawText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawText", (void (D::ClassType::*) (int, int, int, int, int, const QString &, QRect *))&D::ClassType::drawText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<5> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawText", (void (D::ClassType::*) (const QRectF &, const QString &, const QTextOption &))&D::ClassType::drawText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QTextOption()))
    ;
    _d.CPGF_MD_TEMPLATE _method("boundingRect", (QRectF (D::ClassType::*) (const QRectF &, int, const QString &))&D::ClassType::boundingRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("boundingRect", (QRect (D::ClassType::*) (const QRect &, int, const QString &))&D::ClassType::boundingRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("boundingRect", (QRect (D::ClassType::*) (int, int, int, int, int, const QString &))&D::ClassType::boundingRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<5> >());
    _d.CPGF_MD_TEMPLATE _method("boundingRect", (QRectF (D::ClassType::*) (const QRectF &, const QString &, const QTextOption &))&D::ClassType::boundingRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QTextOption()))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawTextItem", (void (D::ClassType::*) (const QPointF &, const QTextItem &))&D::ClassType::drawTextItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawTextItem", (void (D::ClassType::*) (int, int, const QTextItem &))&D::ClassType::drawTextItem);
    _d.CPGF_MD_TEMPLATE _method("drawTextItem", (void (D::ClassType::*) (const QPoint &, const QTextItem &))&D::ClassType::drawTextItem);
    _d.CPGF_MD_TEMPLATE _method("fillRect", (void (D::ClassType::*) (const QRectF &, const QBrush &))&D::ClassType::fillRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("fillRect", (void (D::ClassType::*) (int, int, int, int, const QBrush &))&D::ClassType::fillRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<4> >());
    _d.CPGF_MD_TEMPLATE _method("fillRect", (void (D::ClassType::*) (const QRect &, const QBrush &))&D::ClassType::fillRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("fillRect", (void (D::ClassType::*) (const QRectF &, const QColor &))&D::ClassType::fillRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("fillRect", (void (D::ClassType::*) (int, int, int, int, const QColor &))&D::ClassType::fillRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<4> >());
    _d.CPGF_MD_TEMPLATE _method("fillRect", (void (D::ClassType::*) (const QRect &, const QColor &))&D::ClassType::fillRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("fillRect", (void (D::ClassType::*) (int, int, int, int, Qt::GlobalColor))&D::ClassType::fillRect);
    _d.CPGF_MD_TEMPLATE _method("fillRect", (void (D::ClassType::*) (const QRect &, Qt::GlobalColor))&D::ClassType::fillRect);
    _d.CPGF_MD_TEMPLATE _method("fillRect", (void (D::ClassType::*) (const QRectF &, Qt::GlobalColor))&D::ClassType::fillRect);
    _d.CPGF_MD_TEMPLATE _method("fillRect", (void (D::ClassType::*) (int, int, int, int, Qt::BrushStyle))&D::ClassType::fillRect);
    _d.CPGF_MD_TEMPLATE _method("fillRect", (void (D::ClassType::*) (const QRect &, Qt::BrushStyle))&D::ClassType::fillRect);
    _d.CPGF_MD_TEMPLATE _method("fillRect", (void (D::ClassType::*) (const QRectF &, Qt::BrushStyle))&D::ClassType::fillRect);
    _d.CPGF_MD_TEMPLATE _method("eraseRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::eraseRect);
    _d.CPGF_MD_TEMPLATE _method("eraseRect", (void (D::ClassType::*) (int, int, int, int))&D::ClassType::eraseRect);
    _d.CPGF_MD_TEMPLATE _method("eraseRect", (void (D::ClassType::*) (const QRect &))&D::ClassType::eraseRect);
    _d.CPGF_MD_TEMPLATE _method("setRenderHint", &D::ClassType::setRenderHint)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("setRenderHints", &D::ClassType::setRenderHints)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("renderHints", &D::ClassType::renderHints);
    _d.CPGF_MD_TEMPLATE _method("testRenderHint", &D::ClassType::testRenderHint);
    _d.CPGF_MD_TEMPLATE _method("paintEngine", &D::ClassType::paintEngine);
    _d.CPGF_MD_TEMPLATE _method("beginNativePainting", &D::ClassType::beginNativePainting);
    _d.CPGF_MD_TEMPLATE _method("endNativePainting", &D::ClassType::endNativePainting);
    _d.CPGF_MD_TEMPLATE _method("setRedirected", &D::ClassType::setRedirected)
        ._default(copyVariantFromCopyable(QPoint()))
    ;
    _d.CPGF_MD_TEMPLATE _method("redirected", &D::ClassType::redirected)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("restoreRedirected", &D::ClassType::restoreRedirected);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::RenderHint>("RenderHint")
        ._element("Antialiasing", D::ClassType::Antialiasing)
        ._element("TextAntialiasing", D::ClassType::TextAntialiasing)
        ._element("SmoothPixmapTransform", D::ClassType::SmoothPixmapTransform)
        ._element("HighQualityAntialiasing", D::ClassType::HighQualityAntialiasing)
        ._element("NonCosmeticDefaultPen", D::ClassType::NonCosmeticDefaultPen)
        ._element("Qt4CompatiblePainting", D::ClassType::Qt4CompatiblePainting)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::PixmapFragmentHint>("PixmapFragmentHint")
        ._element("OpaqueHint", D::ClassType::OpaqueHint)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::CompositionMode>("CompositionMode")
        ._element("CompositionMode_SourceOver", D::ClassType::CompositionMode_SourceOver)
        ._element("CompositionMode_DestinationOver", D::ClassType::CompositionMode_DestinationOver)
        ._element("CompositionMode_Clear", D::ClassType::CompositionMode_Clear)
        ._element("CompositionMode_Source", D::ClassType::CompositionMode_Source)
        ._element("CompositionMode_Destination", D::ClassType::CompositionMode_Destination)
        ._element("CompositionMode_SourceIn", D::ClassType::CompositionMode_SourceIn)
        ._element("CompositionMode_DestinationIn", D::ClassType::CompositionMode_DestinationIn)
        ._element("CompositionMode_SourceOut", D::ClassType::CompositionMode_SourceOut)
        ._element("CompositionMode_DestinationOut", D::ClassType::CompositionMode_DestinationOut)
        ._element("CompositionMode_SourceAtop", D::ClassType::CompositionMode_SourceAtop)
        ._element("CompositionMode_DestinationAtop", D::ClassType::CompositionMode_DestinationAtop)
        ._element("CompositionMode_Xor", D::ClassType::CompositionMode_Xor)
        ._element("CompositionMode_Plus", D::ClassType::CompositionMode_Plus)
        ._element("CompositionMode_Multiply", D::ClassType::CompositionMode_Multiply)
        ._element("CompositionMode_Screen", D::ClassType::CompositionMode_Screen)
        ._element("CompositionMode_Overlay", D::ClassType::CompositionMode_Overlay)
        ._element("CompositionMode_Darken", D::ClassType::CompositionMode_Darken)
        ._element("CompositionMode_Lighten", D::ClassType::CompositionMode_Lighten)
        ._element("CompositionMode_ColorDodge", D::ClassType::CompositionMode_ColorDodge)
        ._element("CompositionMode_ColorBurn", D::ClassType::CompositionMode_ColorBurn)
        ._element("CompositionMode_HardLight", D::ClassType::CompositionMode_HardLight)
        ._element("CompositionMode_SoftLight", D::ClassType::CompositionMode_SoftLight)
        ._element("CompositionMode_Difference", D::ClassType::CompositionMode_Difference)
        ._element("CompositionMode_Exclusion", D::ClassType::CompositionMode_Exclusion)
        ._element("RasterOp_SourceOrDestination", D::ClassType::RasterOp_SourceOrDestination)
        ._element("RasterOp_SourceAndDestination", D::ClassType::RasterOp_SourceAndDestination)
        ._element("RasterOp_SourceXorDestination", D::ClassType::RasterOp_SourceXorDestination)
        ._element("RasterOp_NotSourceAndNotDestination", D::ClassType::RasterOp_NotSourceAndNotDestination)
        ._element("RasterOp_NotSourceOrNotDestination", D::ClassType::RasterOp_NotSourceOrNotDestination)
        ._element("RasterOp_NotSourceXorDestination", D::ClassType::RasterOp_NotSourceXorDestination)
        ._element("RasterOp_NotSource", D::ClassType::RasterOp_NotSource)
        ._element("RasterOp_NotSourceAndDestination", D::ClassType::RasterOp_NotSourceAndDestination)
        ._element("RasterOp_SourceAndNotDestination", D::ClassType::RasterOp_SourceAndNotDestination)
        ._element("RasterOp_NotSourceOrDestination", D::ClassType::RasterOp_NotSourceOrDestination)
        ._element("RasterOp_SourceOrNotDestination", D::ClassType::RasterOp_SourceOrNotDestination)
        ._element("RasterOp_ClearDestination", D::ClassType::RasterOp_ClearDestination)
        ._element("RasterOp_SetDestination", D::ClassType::RasterOp_SetDestination)
        ._element("RasterOp_NotDestination", D::ClassType::RasterOp_NotDestination)
    ;
    {
        GDefineMetaClass<QFlags<typename QPainter::RenderHint > > _t_d = GDefineMetaClass<QFlags<typename QPainter::RenderHint > >::lazyDeclare("RenderHints", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QPainter::RenderHint > >, typename QPainter::RenderHint >);
        _d._class(_t_d);
    }
    {
        GDefineMetaClass<QFlags<typename QPainter::PixmapFragmentHint > > _t_d = GDefineMetaClass<QFlags<typename QPainter::PixmapFragmentHint > >::lazyDeclare("PixmapFragmentHints", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QPainter::PixmapFragmentHint > >, typename QPainter::PixmapFragmentHint >);
        _d._class(_t_d);
    }
    {
        GDefineMetaClass<QPainter::PixmapFragment> _nd = GDefineMetaClass<QPainter::PixmapFragment>::declare("PixmapFragment");
        _nd.CPGF_MD_TEMPLATE _field("x", &QPainter::PixmapFragment::x);
        _nd.CPGF_MD_TEMPLATE _field("y", &QPainter::PixmapFragment::y);
        _nd.CPGF_MD_TEMPLATE _field("sourceLeft", &QPainter::PixmapFragment::sourceLeft);
        _nd.CPGF_MD_TEMPLATE _field("sourceTop", &QPainter::PixmapFragment::sourceTop);
        _nd.CPGF_MD_TEMPLATE _field("width", &QPainter::PixmapFragment::width);
        _nd.CPGF_MD_TEMPLATE _field("height", &QPainter::PixmapFragment::height);
        _nd.CPGF_MD_TEMPLATE _field("scaleX", &QPainter::PixmapFragment::scaleX);
        _nd.CPGF_MD_TEMPLATE _field("scaleY", &QPainter::PixmapFragment::scaleY);
        _nd.CPGF_MD_TEMPLATE _field("rotation", &QPainter::PixmapFragment::rotation);
        _nd.CPGF_MD_TEMPLATE _field("opacity", &QPainter::PixmapFragment::opacity);
        _nd.CPGF_MD_TEMPLATE _method("create", &QPainter::PixmapFragment::create, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
            ._default(copyVariantFromCopyable(1))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(1))
            ._default(copyVariantFromCopyable(1))
        ;
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
