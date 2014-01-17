// Auto generated file, don't modify.

#ifndef __META_QTGUI_QPAINTERPATH_H
#define __META_QTGUI_QPAINTERPATH_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


template <typename D>
void buildMetaClass_Global_qpainterpath(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QPainterPath &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QPainterPath &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QPainterPath &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline QPainterPath & opErAToRWrapper_QPainterPath__opAssign(QPainterPath * self, const QPainterPath & other) {
    return (*self) = other;
}
inline bool opErAToRWrapper_QPainterPath__opEqual(const QPainterPath * self, const QPainterPath & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QPainterPath__opNotEqual(const QPainterPath * self, const QPainterPath & other) {
    return (*self) != other;
}
inline QPainterPath opErAToRWrapper_QPainterPath__opBitAnd(const QPainterPath * self, const QPainterPath & other) {
    return (*self) & other;
}
inline QPainterPath opErAToRWrapper_QPainterPath__opBitOr(const QPainterPath * self, const QPainterPath & other) {
    return (*self) | other;
}
inline QPainterPath opErAToRWrapper_QPainterPath__opAdd(const QPainterPath * self, const QPainterPath & other) {
    return (*self) + other;
}
inline QPainterPath opErAToRWrapper_QPainterPath__opSub(const QPainterPath * self, const QPainterPath & other) {
    return (*self) - other;
}
inline QPainterPath & opErAToRWrapper_QPainterPath__opBitAndAssign(QPainterPath * self, const QPainterPath & other) {
    return (*self) &= other;
}
inline QPainterPath & opErAToRWrapper_QPainterPath__opBitOrAssign(QPainterPath * self, const QPainterPath & other) {
    return (*self) |= other;
}
inline QPainterPath & opErAToRWrapper_QPainterPath__opAddAssign(QPainterPath * self, const QPainterPath & other) {
    return (*self) += other;
}
inline QPainterPath & opErAToRWrapper_QPainterPath__opSubAssign(QPainterPath * self, const QPainterPath & other) {
    return (*self) -= other;
}


inline bool opErAToRWrapper_QPainterPath_Element__opEqual(const QPainterPath::Element * self, const QPainterPath::Element& e) {
    return (*self) == e;
}
inline bool opErAToRWrapper_QPainterPath_Element__opNotEqual(const QPainterPath::Element * self, const QPainterPath::Element& e) {
    return (*self) != e;
}


template <typename D>
void buildMetaClass_QPainterPath(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPainterPath &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("closeSubpath", &D::ClassType::closeSubpath);
    _d.CPGF_MD_TEMPLATE _method("moveTo", (void (D::ClassType::*) (const QPointF &))&D::ClassType::moveTo, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("moveTo", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::moveTo);
    _d.CPGF_MD_TEMPLATE _method("lineTo", (void (D::ClassType::*) (const QPointF &))&D::ClassType::lineTo, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("lineTo", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::lineTo);
    _d.CPGF_MD_TEMPLATE _method("arcMoveTo", (void (D::ClassType::*) (const QRectF &, qreal))&D::ClassType::arcMoveTo);
    _d.CPGF_MD_TEMPLATE _method("arcMoveTo", (void (D::ClassType::*) (qreal, qreal, qreal, qreal, qreal))&D::ClassType::arcMoveTo);
    _d.CPGF_MD_TEMPLATE _method("arcTo", (void (D::ClassType::*) (const QRectF &, qreal, qreal))&D::ClassType::arcTo);
    _d.CPGF_MD_TEMPLATE _method("arcTo", (void (D::ClassType::*) (qreal, qreal, qreal, qreal, qreal, qreal))&D::ClassType::arcTo);
    _d.CPGF_MD_TEMPLATE _method("cubicTo", (void (D::ClassType::*) (const QPointF &, const QPointF &, const QPointF &))&D::ClassType::cubicTo, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("cubicTo", (void (D::ClassType::*) (qreal, qreal, qreal, qreal, qreal, qreal))&D::ClassType::cubicTo);
    _d.CPGF_MD_TEMPLATE _method("quadTo", (void (D::ClassType::*) (const QPointF &, const QPointF &))&D::ClassType::quadTo, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("quadTo", (void (D::ClassType::*) (qreal, qreal, qreal, qreal))&D::ClassType::quadTo);
    _d.CPGF_MD_TEMPLATE _method("currentPosition", &D::ClassType::currentPosition);
    _d.CPGF_MD_TEMPLATE _method("addRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::addRect);
    _d.CPGF_MD_TEMPLATE _method("addRect", (void (D::ClassType::*) (qreal, qreal, qreal, qreal))&D::ClassType::addRect);
    _d.CPGF_MD_TEMPLATE _method("addEllipse", (void (D::ClassType::*) (const QRectF &))&D::ClassType::addEllipse);
    _d.CPGF_MD_TEMPLATE _method("addEllipse", (void (D::ClassType::*) (qreal, qreal, qreal, qreal))&D::ClassType::addEllipse);
    _d.CPGF_MD_TEMPLATE _method("addEllipse", (void (D::ClassType::*) (const QPointF &, qreal, qreal))&D::ClassType::addEllipse, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("addPolygon", &D::ClassType::addPolygon, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("addText", (void (D::ClassType::*) (const QPointF &, const QFont &, const QString &))&D::ClassType::addText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("addText", (void (D::ClassType::*) (qreal, qreal, const QFont &, const QString &))&D::ClassType::addText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3> >());
    _d.CPGF_MD_TEMPLATE _method("addPath", &D::ClassType::addPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("addRegion", &D::ClassType::addRegion, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("addRoundedRect", (void (D::ClassType::*) (const QRectF &, qreal, qreal, Qt::SizeMode))&D::ClassType::addRoundedRect)
        ._default(copyVariantFromCopyable(Qt::AbsoluteSize))
    ;
    _d.CPGF_MD_TEMPLATE _method("addRoundedRect", (void (D::ClassType::*) (qreal, qreal, qreal, qreal, qreal, qreal, Qt::SizeMode))&D::ClassType::addRoundedRect)
        ._default(copyVariantFromCopyable(Qt::AbsoluteSize))
    ;
    _d.CPGF_MD_TEMPLATE _method("addRoundRect", (void (D::ClassType::*) (const QRectF &, int, int))&D::ClassType::addRoundRect);
    _d.CPGF_MD_TEMPLATE _method("addRoundRect", (void (D::ClassType::*) (qreal, qreal, qreal, qreal, int, int))&D::ClassType::addRoundRect);
    _d.CPGF_MD_TEMPLATE _method("addRoundRect", (void (D::ClassType::*) (const QRectF &, int))&D::ClassType::addRoundRect);
    _d.CPGF_MD_TEMPLATE _method("addRoundRect", (void (D::ClassType::*) (qreal, qreal, qreal, qreal, int))&D::ClassType::addRoundRect);
    _d.CPGF_MD_TEMPLATE _method("connectPath", &D::ClassType::connectPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const QPointF &) const)&D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const QRectF &) const)&D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("intersects", (bool (D::ClassType::*) (const QRectF &) const)&D::ClassType::intersects);
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::translate);
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (const QPointF &))&D::ClassType::translate, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("translated", (QPainterPath (D::ClassType::*) (qreal, qreal) const)&D::ClassType::translated);
    _d.CPGF_MD_TEMPLATE _method("translated", (QPainterPath (D::ClassType::*) (const QPointF &) const)&D::ClassType::translated, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("controlPointRect", &D::ClassType::controlPointRect);
    _d.CPGF_MD_TEMPLATE _method("fillRule", &D::ClassType::fillRule);
    _d.CPGF_MD_TEMPLATE _method("setFillRule", &D::ClassType::setFillRule);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("toReversed", &D::ClassType::toReversed);
    _d.CPGF_MD_TEMPLATE _method("toSubpathPolygons", (QList< QPolygonF > (D::ClassType::*) (const QMatrix &) const)&D::ClassType::toSubpathPolygons, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QMatrix()))
    ;
    _d.CPGF_MD_TEMPLATE _method("toFillPolygons", (QList< QPolygonF > (D::ClassType::*) (const QMatrix &) const)&D::ClassType::toFillPolygons, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QMatrix()))
    ;
    _d.CPGF_MD_TEMPLATE _method("toFillPolygon", (QPolygonF (D::ClassType::*) (const QMatrix &) const)&D::ClassType::toFillPolygon, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QMatrix()))
    ;
    _d.CPGF_MD_TEMPLATE _method("toSubpathPolygons", (QList< QPolygonF > (D::ClassType::*) (const QTransform &) const)&D::ClassType::toSubpathPolygons, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("toFillPolygons", (QList< QPolygonF > (D::ClassType::*) (const QTransform &) const)&D::ClassType::toFillPolygons, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("toFillPolygon", (QPolygonF (D::ClassType::*) (const QTransform &) const)&D::ClassType::toFillPolygon, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("elementCount", &D::ClassType::elementCount);
    _d.CPGF_MD_TEMPLATE _method("elementAt", &D::ClassType::elementAt);
    _d.CPGF_MD_TEMPLATE _method("setElementPositionAt", &D::ClassType::setElementPositionAt);
    _d.CPGF_MD_TEMPLATE _method("length", &D::ClassType::length);
    _d.CPGF_MD_TEMPLATE _method("percentAtLength", &D::ClassType::percentAtLength);
    _d.CPGF_MD_TEMPLATE _method("pointAtPercent", &D::ClassType::pointAtPercent);
    _d.CPGF_MD_TEMPLATE _method("angleAtPercent", &D::ClassType::angleAtPercent);
    _d.CPGF_MD_TEMPLATE _method("slopeAtPercent", &D::ClassType::slopeAtPercent);
    _d.CPGF_MD_TEMPLATE _method("intersects", (bool (D::ClassType::*) (const QPainterPath &) const)&D::ClassType::intersects, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const QPainterPath &) const)&D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("united", &D::ClassType::united, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("intersected", &D::ClassType::intersected, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("subtracted", &D::ClassType::subtracted, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("subtractedInverted", &D::ClassType::subtractedInverted, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("simplified", &D::ClassType::simplified);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ElementType>("ElementType")
        ._element("MoveToElement", D::ClassType::MoveToElement)
        ._element("LineToElement", D::ClassType::LineToElement)
        ._element("CurveToElement", D::ClassType::CurveToElement)
        ._element("CurveToDataElement", D::ClassType::CurveToDataElement)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QPainterPath & (*)(cpgf::GMetaSelf, const QPainterPath &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QPainterPath & (*) (QPainterPath *, const QPainterPath &))&opErAToRWrapper_QPainterPath__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QPainterPath &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QPainterPath *, const QPainterPath &))&opErAToRWrapper_QPainterPath__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QPainterPath &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QPainterPath *, const QPainterPath &))&opErAToRWrapper_QPainterPath__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QPainterPath (*)(const cpgf::GMetaSelf &, const QPainterPath &)>(mopHolder & mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opBitAnd", (QPainterPath (*) (const QPainterPath *, const QPainterPath &))&opErAToRWrapper_QPainterPath__opBitAnd, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QPainterPath (*)(const cpgf::GMetaSelf &, const QPainterPath &)>(mopHolder | mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opBitOr", (QPainterPath (*) (const QPainterPath *, const QPainterPath &))&opErAToRWrapper_QPainterPath__opBitOr, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QPainterPath (*)(const cpgf::GMetaSelf &, const QPainterPath &)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAdd", (QPainterPath (*) (const QPainterPath *, const QPainterPath &))&opErAToRWrapper_QPainterPath__opAdd, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QPainterPath (*)(const cpgf::GMetaSelf &, const QPainterPath &)>(mopHolder - mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opSub", (QPainterPath (*) (const QPainterPath *, const QPainterPath &))&opErAToRWrapper_QPainterPath__opSub, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QPainterPath & (*)(cpgf::GMetaSelf, const QPainterPath &)>(mopHolder &= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opBitAndAssign", (QPainterPath & (*) (QPainterPath *, const QPainterPath &))&opErAToRWrapper_QPainterPath__opBitAndAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QPainterPath & (*)(cpgf::GMetaSelf, const QPainterPath &)>(mopHolder |= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opBitOrAssign", (QPainterPath & (*) (QPainterPath *, const QPainterPath &))&opErAToRWrapper_QPainterPath__opBitOrAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QPainterPath & (*)(cpgf::GMetaSelf, const QPainterPath &)>(mopHolder += mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QPainterPath & (*) (QPainterPath *, const QPainterPath &))&opErAToRWrapper_QPainterPath__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QPainterPath & (*)(cpgf::GMetaSelf, const QPainterPath &)>(mopHolder -= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (QPainterPath & (*) (QPainterPath *, const QPainterPath &))&opErAToRWrapper_QPainterPath__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    {
        GDefineMetaClass<QPainterPath::Element> _nd = GDefineMetaClass<QPainterPath::Element>::declare("Element");
        _nd.CPGF_MD_TEMPLATE _field("x", &QPainterPath::Element::x);
        _nd.CPGF_MD_TEMPLATE _field("y", &QPainterPath::Element::y);
        _nd.CPGF_MD_TEMPLATE _field("type", &QPainterPath::Element::type);
        _nd.CPGF_MD_TEMPLATE _method("isMoveTo", &QPainterPath::Element::isMoveTo);
        _nd.CPGF_MD_TEMPLATE _method("isLineTo", &QPainterPath::Element::isLineTo);
        _nd.CPGF_MD_TEMPLATE _method("isCurveTo", &QPainterPath::Element::isCurveTo);
        _nd.CPGF_MD_TEMPLATE _operator< QPointF (cpgf::GMetaSelf)>(mopHolder());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QPainterPath::Element&)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QPainterPath::Element *, const QPainterPath::Element&))&opErAToRWrapper_QPainterPath_Element__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QPainterPath::Element&)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QPainterPath::Element *, const QPainterPath::Element&))&opErAToRWrapper_QPainterPath_Element__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


template <typename D>
void buildMetaClass_QPainterPathStroker(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("setWidth", &D::ClassType::setWidth);
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("setCapStyle", &D::ClassType::setCapStyle);
    _d.CPGF_MD_TEMPLATE _method("capStyle", &D::ClassType::capStyle);
    _d.CPGF_MD_TEMPLATE _method("setJoinStyle", &D::ClassType::setJoinStyle);
    _d.CPGF_MD_TEMPLATE _method("joinStyle", &D::ClassType::joinStyle);
    _d.CPGF_MD_TEMPLATE _method("setMiterLimit", &D::ClassType::setMiterLimit);
    _d.CPGF_MD_TEMPLATE _method("miterLimit", &D::ClassType::miterLimit);
    _d.CPGF_MD_TEMPLATE _method("setCurveThreshold", &D::ClassType::setCurveThreshold);
    _d.CPGF_MD_TEMPLATE _method("curveThreshold", &D::ClassType::curveThreshold);
    _d.CPGF_MD_TEMPLATE _method("setDashPattern", (void (D::ClassType::*) (Qt::PenStyle))&D::ClassType::setDashPattern);
    _d.CPGF_MD_TEMPLATE _method("setDashPattern", (void (D::ClassType::*) (const QVector< qreal > &))&D::ClassType::setDashPattern, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("dashPattern", &D::ClassType::dashPattern);
    _d.CPGF_MD_TEMPLATE _method("setDashOffset", &D::ClassType::setDashOffset);
    _d.CPGF_MD_TEMPLATE _method("dashOffset", &D::ClassType::dashOffset);
    _d.CPGF_MD_TEMPLATE _method("createStroke", &D::ClassType::createStroke, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
