// Auto generated file, don't modify.

#ifndef __META_QTGUI_QVECTOR4D_H
#define __META_QTGUI_QVECTOR4D_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


template <typename D>
void buildMetaClass_Global_qvector4d(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qFuzzyCompare", (bool (*) (const QVector4D &, const QVector4D &))&qFuzzyCompare);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QVector4D &, const QVector4D &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QVector4D &, const QVector4D &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QVector4D (*)(const QVector4D &, const QVector4D &)>(mopHolder + mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QVector4D (*)(const QVector4D &, const QVector4D &)>(mopHolder - mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QVector4D (*)(float, const QVector4D &)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QVector4D (*)(const QVector4D &, float)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QVector4D (*)(const QVector4D &, const QVector4D &)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QVector4D (*)(const QVector4D &)>(-mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QVector4D (*)(const QVector4D &, float)>(mopHolder / mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QVector4D &)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QVector4D &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QVector4D &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
}


inline float & opErAToRWrapper_QVector4D__opArrayGet(QVector4D * self, int i) {
    return (*self)[i];
}
inline void opErAToRWrapper_QVector4D__opArraySet(QVector4D * self, int i, const cpgf::RemoveReference<float & >::Result & OpsEt_vALue) {
    (*self)[i] = OpsEt_vALue;
}
inline float opErAToRWrapper_QVector4D__opArrayGet(const QVector4D * self, int i) {
    return (*self)[i];
}
inline QVector4D & opErAToRWrapper_QVector4D__opAddAssign(QVector4D * self, const QVector4D & vector) {
    return (*self) += vector;
}
inline QVector4D & opErAToRWrapper_QVector4D__opSubAssign(QVector4D * self, const QVector4D & vector) {
    return (*self) -= vector;
}
inline QVector4D & opErAToRWrapper_QVector4D__opMulAssign(QVector4D * self, float factor) {
    return (*self) *= factor;
}
inline QVector4D & opErAToRWrapper_QVector4D__opMulAssign(QVector4D * self, const QVector4D & vector) {
    return (*self) *= vector;
}
inline QVector4D & opErAToRWrapper_QVector4D__opDivAssign(QVector4D * self, float divisor) {
    return (*self) /= divisor;
}


template <typename D>
void buildMetaClass_QVector4D(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (float, float, float, float)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPoint &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QVector2D &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QVector2D &, float, float)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QVector3D &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QVector3D &, float)>();
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("x", &D::ClassType::x);
    _d.CPGF_MD_TEMPLATE _method("y", &D::ClassType::y);
    _d.CPGF_MD_TEMPLATE _method("z", &D::ClassType::z);
    _d.CPGF_MD_TEMPLATE _method("w", &D::ClassType::w);
    _d.CPGF_MD_TEMPLATE _method("setX", &D::ClassType::setX);
    _d.CPGF_MD_TEMPLATE _method("setY", &D::ClassType::setY);
    _d.CPGF_MD_TEMPLATE _method("setZ", &D::ClassType::setZ);
    _d.CPGF_MD_TEMPLATE _method("setW", &D::ClassType::setW);
    _d.CPGF_MD_TEMPLATE _method("length", &D::ClassType::length);
    _d.CPGF_MD_TEMPLATE _method("lengthSquared", &D::ClassType::lengthSquared);
    _d.CPGF_MD_TEMPLATE _method("normalized", &D::ClassType::normalized);
    _d.CPGF_MD_TEMPLATE _method("normalize", &D::ClassType::normalize);
    _d.CPGF_MD_TEMPLATE _method("toVector2D", &D::ClassType::toVector2D);
    _d.CPGF_MD_TEMPLATE _method("toVector2DAffine", &D::ClassType::toVector2DAffine);
    _d.CPGF_MD_TEMPLATE _method("toVector3D", &D::ClassType::toVector3D);
    _d.CPGF_MD_TEMPLATE _method("toVector3DAffine", &D::ClassType::toVector3DAffine);
    _d.CPGF_MD_TEMPLATE _method("toPoint", &D::ClassType::toPoint);
    _d.CPGF_MD_TEMPLATE _method("toPointF", &D::ClassType::toPointF);
    _d.CPGF_MD_TEMPLATE _method("dotProduct", &D::ClassType::dotProduct);
    _d.CPGF_MD_TEMPLATE _operator<float & (*)(cpgf::GMetaSelf, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (float & (*) (QVector4D *, int))&opErAToRWrapper_QVector4D__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _method("_opArraySet", (void (*) (QVector4D *, int, const cpgf::RemoveReference<float & >::Result &))&opErAToRWrapper_QVector4D__opArraySet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<float (*)(const cpgf::GMetaSelf &, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (float (*) (const QVector4D *, int))&opErAToRWrapper_QVector4D__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVector4D & (*)(cpgf::GMetaSelf, const QVector4D &)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QVector4D & (*) (QVector4D *, const QVector4D &))&opErAToRWrapper_QVector4D__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVector4D & (*)(cpgf::GMetaSelf, const QVector4D &)>(mopHolder -= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (QVector4D & (*) (QVector4D *, const QVector4D &))&opErAToRWrapper_QVector4D__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVector4D & (*)(cpgf::GMetaSelf, float)>(mopHolder *= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QVector4D & (*) (QVector4D *, float))&opErAToRWrapper_QVector4D__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVector4D & (*)(cpgf::GMetaSelf, const QVector4D &)>(mopHolder *= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QVector4D & (*) (QVector4D *, const QVector4D &))&opErAToRWrapper_QVector4D__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVector4D & (*)(cpgf::GMetaSelf, float)>(mopHolder /= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDivAssign", (QVector4D & (*) (QVector4D *, float))&opErAToRWrapper_QVector4D__opDivAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
