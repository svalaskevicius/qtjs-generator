// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QMATRIX4X4_H
#define CPGF_META_QTGUI_QMATRIX4X4_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qmatrix4x4(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qFuzzyCompare", (bool (*) (const QMatrix4x4 &, const QMatrix4x4 &))&qFuzzyCompare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QMatrix4x4 (*)(const QMatrix4x4 &, float)>(mopHolder / mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QMatrix4x4 (*)(const QMatrix4x4 &, const QMatrix4x4 &)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QMatrix4x4 (*)(const QMatrix4x4 &, const QMatrix4x4 &)>(mopHolder - mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QMatrix4x4 (*)(const QMatrix4x4 &, const QMatrix4x4 &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QVector3D (*)(const QVector3D &, const QMatrix4x4 &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QVector3D (*)(const QMatrix4x4 &, const QVector3D &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QVector4D (*)(const QVector4D &, const QMatrix4x4 &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QVector4D (*)(const QMatrix4x4 &, const QVector4D &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QPoint (*)(const QPoint &, const QMatrix4x4 &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QPointF (*)(const QPointF &, const QMatrix4x4 &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QPoint (*)(const QMatrix4x4 &, const QPoint &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QPointF (*)(const QMatrix4x4 &, const QPointF &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QMatrix4x4 (*)(const QMatrix4x4 &)>(-mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QMatrix4x4 (*)(float, const QMatrix4x4 &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QMatrix4x4 (*)(const QMatrix4x4 &, float)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QMatrix4x4 &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QMatrix4x4 &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QMatrix4x4 &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
}


inline const float & opErAToRWrapper_QMatrix4x4__opFunction(const QMatrix4x4 * self, int row, int column) {
    return (*self)(row, column);
}
inline float & opErAToRWrapper_QMatrix4x4__opFunction(QMatrix4x4 * self, int row, int column) {
    return (*self)(row, column);
}
inline QMatrix4x4 & opErAToRWrapper_QMatrix4x4__opAddAssign(QMatrix4x4 * self, const QMatrix4x4 & other) {
    return (*self) += other;
}
inline QMatrix4x4 & opErAToRWrapper_QMatrix4x4__opSubAssign(QMatrix4x4 * self, const QMatrix4x4 & other) {
    return (*self) -= other;
}
inline QMatrix4x4 & opErAToRWrapper_QMatrix4x4__opMulAssign(QMatrix4x4 * self, const QMatrix4x4 & other) {
    return (*self) *= other;
}
inline QMatrix4x4 & opErAToRWrapper_QMatrix4x4__opMulAssign(QMatrix4x4 * self, float factor) {
    return (*self) *= factor;
}
inline QMatrix4x4 & opErAToRWrapper_QMatrix4x4__opDivAssign(QMatrix4x4 * self, float divisor) {
    return (*self) /= divisor;
}
inline bool opErAToRWrapper_QMatrix4x4__opEqual(const QMatrix4x4 * self, const QMatrix4x4 & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QMatrix4x4__opNotEqual(const QMatrix4x4 * self, const QMatrix4x4 & other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QMatrix4x4(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const float *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const float *, int, int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QTransform &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QMatrix &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("column", &D::ClassType::column);
    _d.CPGF_MD_TEMPLATE _method("setColumn", &D::ClassType::setColumn);
    _d.CPGF_MD_TEMPLATE _method("row", &D::ClassType::row);
    _d.CPGF_MD_TEMPLATE _method("setRow", &D::ClassType::setRow);
    _d.CPGF_MD_TEMPLATE _method("isIdentity", &D::ClassType::isIdentity);
    _d.CPGF_MD_TEMPLATE _method("setToIdentity", &D::ClassType::setToIdentity);
    _d.CPGF_MD_TEMPLATE _method("fill", &D::ClassType::fill);
    _d.CPGF_MD_TEMPLATE _method("determinant", &D::ClassType::determinant);
    _d.CPGF_MD_TEMPLATE _method("inverted", &D::ClassType::inverted)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("transposed", &D::ClassType::transposed);
    _d.CPGF_MD_TEMPLATE _method("normalMatrix", &D::ClassType::normalMatrix);
    _d.CPGF_MD_TEMPLATE _method("scale", (void (D::ClassType::*) (const QVector3D &))&D::ClassType::scale);
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (const QVector3D &))&D::ClassType::translate);
    _d.CPGF_MD_TEMPLATE _method("rotate", (void (D::ClassType::*) (float, const QVector3D &))&D::ClassType::rotate);
    _d.CPGF_MD_TEMPLATE _method("scale", (void (D::ClassType::*) (float, float))&D::ClassType::scale);
    _d.CPGF_MD_TEMPLATE _method("scale", (void (D::ClassType::*) (float, float, float))&D::ClassType::scale);
    _d.CPGF_MD_TEMPLATE _method("scale", (void (D::ClassType::*) (float))&D::ClassType::scale);
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (float, float))&D::ClassType::translate);
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (float, float, float))&D::ClassType::translate);
    _d.CPGF_MD_TEMPLATE _method("rotate", (void (D::ClassType::*) (float, float, float, float))&D::ClassType::rotate)
        ._default(copyVariantFromCopyable(0.0f))
    ;
    _d.CPGF_MD_TEMPLATE _method("rotate", (void (D::ClassType::*) (const QQuaternion &))&D::ClassType::rotate, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("ortho", (void (D::ClassType::*) (const QRect &))&D::ClassType::ortho);
    _d.CPGF_MD_TEMPLATE _method("ortho", (void (D::ClassType::*) (const QRectF &))&D::ClassType::ortho);
    _d.CPGF_MD_TEMPLATE _method("ortho", (void (D::ClassType::*) (float, float, float, float, float, float))&D::ClassType::ortho);
    _d.CPGF_MD_TEMPLATE _method("frustum", &D::ClassType::frustum);
    _d.CPGF_MD_TEMPLATE _method("perspective", &D::ClassType::perspective);
    _d.CPGF_MD_TEMPLATE _method("lookAt", &D::ClassType::lookAt);
    _d.CPGF_MD_TEMPLATE _method("flipCoordinates", &D::ClassType::flipCoordinates);
    _d.CPGF_MD_TEMPLATE _method("copyDataTo", &D::ClassType::copyDataTo);
    _d.CPGF_MD_TEMPLATE _method("toAffine", &D::ClassType::toAffine);
    _d.CPGF_MD_TEMPLATE _method("toTransform", (QTransform (D::ClassType::*) () const)&D::ClassType::toTransform);
    _d.CPGF_MD_TEMPLATE _method("toTransform", (QTransform (D::ClassType::*) (float) const)&D::ClassType::toTransform);
    _d.CPGF_MD_TEMPLATE _method("map", (QPoint (D::ClassType::*) (const QPoint &) const)&D::ClassType::map);
    _d.CPGF_MD_TEMPLATE _method("map", (QPointF (D::ClassType::*) (const QPointF &) const)&D::ClassType::map, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("map", (QVector3D (D::ClassType::*) (const QVector3D &) const)&D::ClassType::map);
    _d.CPGF_MD_TEMPLATE _method("mapVector", &D::ClassType::mapVector);
    _d.CPGF_MD_TEMPLATE _method("map", (QVector4D (D::ClassType::*) (const QVector4D &) const)&D::ClassType::map);
    _d.CPGF_MD_TEMPLATE _method("mapRect", (QRect (D::ClassType::*) (const QRect &) const)&D::ClassType::mapRect);
    _d.CPGF_MD_TEMPLATE _method("mapRect", (QRectF (D::ClassType::*) (const QRectF &) const)&D::ClassType::mapRect);
    _d.CPGF_MD_TEMPLATE _method("data", (float * (D::ClassType::*) ())&D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("data", (const float * (D::ClassType::*) () const)&D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("constData", &D::ClassType::constData);
    _d.CPGF_MD_TEMPLATE _method("optimize", &D::ClassType::optimize);
    _d.CPGF_MD_TEMPLATE _operator<const float & (*)(int, int)>(mopHolder(mopHolder));
    _d.CPGF_MD_TEMPLATE _method("_opFunction", (const float & (*) (const QMatrix4x4 *, int, int))&opErAToRWrapper_QMatrix4x4__opFunction, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<float & (*)(int, int)>(mopHolder(mopHolder));
    _d.CPGF_MD_TEMPLATE _method("_opFunction", (float & (*) (QMatrix4x4 *, int, int))&opErAToRWrapper_QMatrix4x4__opFunction, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QMatrix4x4 & (*)(cpgf::GMetaSelf, const QMatrix4x4 &)>(mopHolder += mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QMatrix4x4 & (*) (QMatrix4x4 *, const QMatrix4x4 &))&opErAToRWrapper_QMatrix4x4__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QMatrix4x4 & (*)(cpgf::GMetaSelf, const QMatrix4x4 &)>(mopHolder -= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (QMatrix4x4 & (*) (QMatrix4x4 *, const QMatrix4x4 &))&opErAToRWrapper_QMatrix4x4__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QMatrix4x4 & (*)(cpgf::GMetaSelf, const QMatrix4x4 &)>(mopHolder *= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QMatrix4x4 & (*) (QMatrix4x4 *, const QMatrix4x4 &))&opErAToRWrapper_QMatrix4x4__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QMatrix4x4 & (*)(cpgf::GMetaSelf, float)>(mopHolder *= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QMatrix4x4 & (*) (QMatrix4x4 *, float))&opErAToRWrapper_QMatrix4x4__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QMatrix4x4 & (*)(cpgf::GMetaSelf, float)>(mopHolder /= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDivAssign", (QMatrix4x4 & (*) (QMatrix4x4 *, float))&opErAToRWrapper_QMatrix4x4__opDivAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QMatrix4x4 &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QMatrix4x4 *, const QMatrix4x4 &))&opErAToRWrapper_QMatrix4x4__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QMatrix4x4 &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QMatrix4x4 *, const QMatrix4x4 &))&opErAToRWrapper_QMatrix4x4__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
