// Auto generated file, don't modify.

#ifndef __META_QTGUI_QTRANSFORM_H
#define __META_QTGUI_QTRANSFORM_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


template <typename D>
void buildMetaClass_Global_qtransform(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qFuzzyCompare", (bool (*) (const QTransform &, const QTransform &))&qFuzzyCompare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QTransform &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QTransform &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QTransform &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QPoint (*)(const QPoint &, const QTransform &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QPointF (*)(const QPointF &, const QTransform &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QLineF (*)(const QLineF &, const QTransform &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QLine (*)(const QLine &, const QTransform &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QPolygon (*)(const QPolygon &, const QTransform &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QPolygonF (*)(const QPolygonF &, const QTransform &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QRegion (*)(const QRegion &, const QTransform &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QPainterPath (*)(const QPainterPath &, const QTransform &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QTransform (*)(const QTransform &, qreal)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QTransform (*)(const QTransform &, qreal)>(mopHolder / mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QTransform (*)(const QTransform &, qreal)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QTransform (*)(const QTransform &, qreal)>(mopHolder - mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


inline bool opErAToRWrapper_QTransform__opEqual(const QTransform * self, const QTransform & __arg0) {
    return (*self) == __arg0;
}
inline bool opErAToRWrapper_QTransform__opNotEqual(const QTransform * self, const QTransform & __arg0) {
    return (*self) != __arg0;
}
inline QTransform & opErAToRWrapper_QTransform__opMulAssign(QTransform * self, const QTransform & __arg0) {
    return (*self) *= __arg0;
}
inline QTransform opErAToRWrapper_QTransform__opMul(const QTransform * self, const QTransform & o) {
    return (*self) * o;
}
inline QTransform & opErAToRWrapper_QTransform__opAssign(QTransform * self, const QTransform & __arg0) {
    return (*self) = __arg0;
}
inline QTransform & opErAToRWrapper_QTransform__opMulAssign(QTransform * self, qreal div) {
    return (*self) *= div;
}
inline QTransform & opErAToRWrapper_QTransform__opDivAssign(QTransform * self, qreal div) {
    return (*self) /= div;
}
inline QTransform & opErAToRWrapper_QTransform__opAddAssign(QTransform * self, qreal div) {
    return (*self) += div;
}
inline QTransform & opErAToRWrapper_QTransform__opSubAssign(QTransform * self, qreal div) {
    return (*self) -= div;
}


template <typename D>
void buildMetaClass_QTransform(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (Qt::Initialization)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (qreal, qreal, qreal, qreal, qreal, qreal, qreal, qreal, qreal)>()
        ._default(copyVariantFromCopyable(1.0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (qreal, qreal, qreal, qreal, qreal, qreal)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QMatrix &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isAffine", &D::ClassType::isAffine);
    _d.CPGF_MD_TEMPLATE _method("isIdentity", &D::ClassType::isIdentity);
    _d.CPGF_MD_TEMPLATE _method("isInvertible", &D::ClassType::isInvertible);
    _d.CPGF_MD_TEMPLATE _method("isScaling", &D::ClassType::isScaling);
    _d.CPGF_MD_TEMPLATE _method("isRotating", &D::ClassType::isRotating);
    _d.CPGF_MD_TEMPLATE _method("isTranslating", &D::ClassType::isTranslating);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("determinant", &D::ClassType::determinant);
    _d.CPGF_MD_TEMPLATE _method("det", &D::ClassType::det);
    _d.CPGF_MD_TEMPLATE _method("m11", &D::ClassType::m11);
    _d.CPGF_MD_TEMPLATE _method("m12", &D::ClassType::m12);
    _d.CPGF_MD_TEMPLATE _method("m13", &D::ClassType::m13);
    _d.CPGF_MD_TEMPLATE _method("m21", &D::ClassType::m21);
    _d.CPGF_MD_TEMPLATE _method("m22", &D::ClassType::m22);
    _d.CPGF_MD_TEMPLATE _method("m23", &D::ClassType::m23);
    _d.CPGF_MD_TEMPLATE _method("m31", &D::ClassType::m31);
    _d.CPGF_MD_TEMPLATE _method("m32", &D::ClassType::m32);
    _d.CPGF_MD_TEMPLATE _method("m33", &D::ClassType::m33);
    _d.CPGF_MD_TEMPLATE _method("dx", &D::ClassType::dx);
    _d.CPGF_MD_TEMPLATE _method("dy", &D::ClassType::dy);
    _d.CPGF_MD_TEMPLATE _method("setMatrix", &D::ClassType::setMatrix);
    _d.CPGF_MD_TEMPLATE _method("inverted", &D::ClassType::inverted)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("adjoint", &D::ClassType::adjoint);
    _d.CPGF_MD_TEMPLATE _method("transposed", &D::ClassType::transposed);
    _d.CPGF_MD_TEMPLATE _method("translate", &D::ClassType::translate);
    _d.CPGF_MD_TEMPLATE _method("scale", &D::ClassType::scale);
    _d.CPGF_MD_TEMPLATE _method("shear", &D::ClassType::shear);
    _d.CPGF_MD_TEMPLATE _method("rotate", &D::ClassType::rotate)
        ._default(copyVariantFromCopyable(Qt::ZAxis))
    ;
    _d.CPGF_MD_TEMPLATE _method("rotateRadians", &D::ClassType::rotateRadians)
        ._default(copyVariantFromCopyable(Qt::ZAxis))
    ;
    _d.CPGF_MD_TEMPLATE _method("reset", &D::ClassType::reset);
    _d.CPGF_MD_TEMPLATE _method("map", (QPoint (D::ClassType::*) (const QPoint &) const)&D::ClassType::map);
    _d.CPGF_MD_TEMPLATE _method("map", (QPointF (D::ClassType::*) (const QPointF &) const)&D::ClassType::map, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("map", (QLine (D::ClassType::*) (const QLine &) const)&D::ClassType::map);
    _d.CPGF_MD_TEMPLATE _method("map", (QLineF (D::ClassType::*) (const QLineF &) const)&D::ClassType::map, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("map", (QPolygonF (D::ClassType::*) (const QPolygonF &) const)&D::ClassType::map, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("map", (QPolygon (D::ClassType::*) (const QPolygon &) const)&D::ClassType::map, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("map", (QRegion (D::ClassType::*) (const QRegion &) const)&D::ClassType::map, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("map", (QPainterPath (D::ClassType::*) (const QPainterPath &) const)&D::ClassType::map, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapToPolygon", &D::ClassType::mapToPolygon);
    _d.CPGF_MD_TEMPLATE _method("mapRect", (QRect (D::ClassType::*) (const QRect &) const)&D::ClassType::mapRect);
    _d.CPGF_MD_TEMPLATE _method("mapRect", (QRectF (D::ClassType::*) (const QRectF &) const)&D::ClassType::mapRect);
    _d.CPGF_MD_TEMPLATE _method("map", (void (D::ClassType::*) (int, int, int *, int *) const)&D::ClassType::map);
    _d.CPGF_MD_TEMPLATE _method("map", (void (D::ClassType::*) (qreal, qreal, qreal *, qreal *) const)&D::ClassType::map);
    _d.CPGF_MD_TEMPLATE _method("toAffine", &D::ClassType::toAffine, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("squareToQuad", &D::ClassType::squareToQuad, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("quadToSquare", &D::ClassType::quadToSquare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("quadToQuad", &D::ClassType::quadToQuad, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("fromTranslate", &D::ClassType::fromTranslate);
    _d.CPGF_MD_TEMPLATE _method("fromScale", &D::ClassType::fromScale);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::TransformationType>("TransformationType")
        ._element("TxNone", D::ClassType::TxNone)
        ._element("TxTranslate", D::ClassType::TxTranslate)
        ._element("TxScale", D::ClassType::TxScale)
        ._element("TxRotate", D::ClassType::TxRotate)
        ._element("TxShear", D::ClassType::TxShear)
        ._element("TxProject", D::ClassType::TxProject)
    ;
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTransform &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QTransform *, const QTransform &))&opErAToRWrapper_QTransform__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTransform &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QTransform *, const QTransform &))&opErAToRWrapper_QTransform__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTransform & (*)(cpgf::GMetaSelf, const QTransform &)>(mopHolder *= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QTransform & (*) (QTransform *, const QTransform &))&opErAToRWrapper_QTransform__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTransform (*)(const cpgf::GMetaSelf &, const QTransform &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opMul", (QTransform (*) (const QTransform *, const QTransform &))&opErAToRWrapper_QTransform__opMul, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTransform & (*)(cpgf::GMetaSelf, const QTransform &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QTransform & (*) (QTransform *, const QTransform &))&opErAToRWrapper_QTransform__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
    _d.CPGF_MD_TEMPLATE _operator<QTransform & (*)(cpgf::GMetaSelf, qreal)>(mopHolder *= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QTransform & (*) (QTransform *, qreal))&opErAToRWrapper_QTransform__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTransform & (*)(cpgf::GMetaSelf, qreal)>(mopHolder /= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDivAssign", (QTransform & (*) (QTransform *, qreal))&opErAToRWrapper_QTransform__opDivAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTransform & (*)(cpgf::GMetaSelf, qreal)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QTransform & (*) (QTransform *, qreal))&opErAToRWrapper_QTransform__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTransform & (*)(cpgf::GMetaSelf, qreal)>(mopHolder -= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (QTransform & (*) (QTransform *, qreal))&opErAToRWrapper_QTransform__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
