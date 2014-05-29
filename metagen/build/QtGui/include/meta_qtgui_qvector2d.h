// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QVECTOR2D_H
#define CPGF_META_QTGUI_QVECTOR2D_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qvector2d(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qFuzzyCompare", (bool (*) (const QVector2D &, const QVector2D &))&qFuzzyCompare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QVector2D &, const QVector2D &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QVector2D &, const QVector2D &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QVector2D (*)(const QVector2D &, const QVector2D &)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QVector2D (*)(const QVector2D &, const QVector2D &)>(mopHolder - mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QVector2D (*)(float, const QVector2D &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QVector2D (*)(const QVector2D &, float)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<const QVector2D (*)(const QVector2D &, const QVector2D &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QVector2D (*)(const QVector2D &)>(-mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<const QVector2D (*)(const QVector2D &, float)>(mopHolder / mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QVector2D &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QVector2D &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QVector2D &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
}


inline float & opErAToRWrapper_QVector2D__opArrayGet(QVector2D * self, int i) {
    return (*self)[i];
}
inline void opErAToRWrapper_QVector2D__opArraySet(QVector2D * self, int i, const cpgf::RemoveReference<float & >::Result & OpsEt_vALue) {
    (*self)[i] = OpsEt_vALue;
}
inline float opErAToRWrapper_QVector2D__opArrayGet(const QVector2D * self, int i) {
    return (*self)[i];
}
inline QVector2D & opErAToRWrapper_QVector2D__opAddAssign(QVector2D * self, const QVector2D & vector) {
    return (*self) += vector;
}
inline QVector2D & opErAToRWrapper_QVector2D__opSubAssign(QVector2D * self, const QVector2D & vector) {
    return (*self) -= vector;
}
inline QVector2D & opErAToRWrapper_QVector2D__opMulAssign(QVector2D * self, float factor) {
    return (*self) *= factor;
}
inline QVector2D & opErAToRWrapper_QVector2D__opMulAssign(QVector2D * self, const QVector2D & vector) {
    return (*self) *= vector;
}
inline QVector2D & opErAToRWrapper_QVector2D__opDivAssign(QVector2D * self, float divisor) {
    return (*self) /= divisor;
}


template <typename D>
void buildMetaClass_QVector2D(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (float, float)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPoint &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QVector3D &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QVector4D &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("x", &D::ClassType::x);
    _d.CPGF_MD_TEMPLATE _method("y", &D::ClassType::y);
    _d.CPGF_MD_TEMPLATE _method("setX", &D::ClassType::setX);
    _d.CPGF_MD_TEMPLATE _method("setY", &D::ClassType::setY);
    _d.CPGF_MD_TEMPLATE _method("length", &D::ClassType::length);
    _d.CPGF_MD_TEMPLATE _method("lengthSquared", &D::ClassType::lengthSquared);
    _d.CPGF_MD_TEMPLATE _method("normalized", &D::ClassType::normalized);
    _d.CPGF_MD_TEMPLATE _method("normalize", &D::ClassType::normalize);
    _d.CPGF_MD_TEMPLATE _method("distanceToPoint", &D::ClassType::distanceToPoint, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("distanceToLine", &D::ClassType::distanceToLine, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("toVector3D", &D::ClassType::toVector3D);
    _d.CPGF_MD_TEMPLATE _method("toVector4D", &D::ClassType::toVector4D);
    _d.CPGF_MD_TEMPLATE _method("toPoint", &D::ClassType::toPoint);
    _d.CPGF_MD_TEMPLATE _method("toPointF", &D::ClassType::toPointF);
    _d.CPGF_MD_TEMPLATE _method("dotProduct", &D::ClassType::dotProduct, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<float & (*)(cpgf::GMetaSelf, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (float & (*) (QVector2D *, int))&opErAToRWrapper_QVector2D__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _method("_opArraySet", (void (*) (QVector2D *, int, const cpgf::RemoveReference<float & >::Result &))&opErAToRWrapper_QVector2D__opArraySet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<float (*)(const cpgf::GMetaSelf &, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (float (*) (const QVector2D *, int))&opErAToRWrapper_QVector2D__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVector2D & (*)(cpgf::GMetaSelf, const QVector2D &)>(mopHolder += mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QVector2D & (*) (QVector2D *, const QVector2D &))&opErAToRWrapper_QVector2D__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVector2D & (*)(cpgf::GMetaSelf, const QVector2D &)>(mopHolder -= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (QVector2D & (*) (QVector2D *, const QVector2D &))&opErAToRWrapper_QVector2D__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVector2D & (*)(cpgf::GMetaSelf, float)>(mopHolder *= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QVector2D & (*) (QVector2D *, float))&opErAToRWrapper_QVector2D__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVector2D & (*)(cpgf::GMetaSelf, const QVector2D &)>(mopHolder *= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QVector2D & (*) (QVector2D *, const QVector2D &))&opErAToRWrapper_QVector2D__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVector2D & (*)(cpgf::GMetaSelf, float)>(mopHolder /= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDivAssign", (QVector2D & (*) (QVector2D *, float))&opErAToRWrapper_QVector2D__opDivAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
