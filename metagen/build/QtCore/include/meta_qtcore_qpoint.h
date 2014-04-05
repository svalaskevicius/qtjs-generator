// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QPOINT_H
#define CPGF_META_QTCORE_QPOINT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qpoint(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QPoint &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QPoint &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QPoint &, const QPoint &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QPoint &, const QPoint &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QPoint (*)(const QPoint &, const QPoint &)>(mopHolder + mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QPoint (*)(const QPoint &, const QPoint &)>(mopHolder - mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QPoint (*)(const QPoint &, float)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QPoint (*)(const QPoint &, double)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QPoint (*)(const QPoint &, int)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QPoint (*)(float, const QPoint &)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QPoint (*)(double, const QPoint &)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QPoint (*)(int, const QPoint &)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QPoint (*)(const QPoint &)>(+mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QPoint (*)(const QPoint &)>(-mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QPoint (*)(const QPoint &, qreal)>(mopHolder / mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QPoint &)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QPointF &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QPointF &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QPointF &, const QPointF &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QPointF &, const QPointF &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QPointF (*)(const QPointF &, const QPointF &)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QPointF (*)(const QPointF &, const QPointF &)>(mopHolder - mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QPointF (*)(const QPointF &, qreal)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<const QPointF (*)(qreal, const QPointF &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QPointF (*)(const QPointF &)>(+mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<const QPointF (*)(const QPointF &)>(-mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<const QPointF (*)(const QPointF &, qreal)>(mopHolder / mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QPointF &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline QPoint & opErAToRWrapper_QPoint__opAddAssign(QPoint * self, const QPoint & p) {
    return (*self) += p;
}
inline QPoint & opErAToRWrapper_QPoint__opSubAssign(QPoint * self, const QPoint & p) {
    return (*self) -= p;
}
inline QPoint & opErAToRWrapper_QPoint__opMulAssign(QPoint * self, float factor) {
    return (*self) *= factor;
}
inline QPoint & opErAToRWrapper_QPoint__opMulAssign(QPoint * self, double factor) {
    return (*self) *= factor;
}
inline QPoint & opErAToRWrapper_QPoint__opMulAssign(QPoint * self, int factor) {
    return (*self) *= factor;
}
inline QPoint & opErAToRWrapper_QPoint__opDivAssign(QPoint * self, qreal divisor) {
    return (*self) /= divisor;
}


template <typename D>
void buildMetaClass_QPoint(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int)>();
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("x", &D::ClassType::x);
    _d.CPGF_MD_TEMPLATE _method("y", &D::ClassType::y);
    _d.CPGF_MD_TEMPLATE _method("setX", &D::ClassType::setX);
    _d.CPGF_MD_TEMPLATE _method("setY", &D::ClassType::setY);
    _d.CPGF_MD_TEMPLATE _method("manhattanLength", &D::ClassType::manhattanLength);
    _d.CPGF_MD_TEMPLATE _method("rx", &D::ClassType::rx);
    _d.CPGF_MD_TEMPLATE _method("ry", &D::ClassType::ry);
    _d.CPGF_MD_TEMPLATE _method("dotProduct", &D::ClassType::dotProduct);
    _d.CPGF_MD_TEMPLATE _operator<QPoint & (*)(cpgf::GMetaSelf, const QPoint &)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QPoint & (*) (QPoint *, const QPoint &))&opErAToRWrapper_QPoint__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QPoint & (*)(cpgf::GMetaSelf, const QPoint &)>(mopHolder -= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (QPoint & (*) (QPoint *, const QPoint &))&opErAToRWrapper_QPoint__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QPoint & (*)(cpgf::GMetaSelf, float)>(mopHolder *= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QPoint & (*) (QPoint *, float))&opErAToRWrapper_QPoint__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QPoint & (*)(cpgf::GMetaSelf, double)>(mopHolder *= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QPoint & (*) (QPoint *, double))&opErAToRWrapper_QPoint__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QPoint & (*)(cpgf::GMetaSelf, int)>(mopHolder *= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QPoint & (*) (QPoint *, int))&opErAToRWrapper_QPoint__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QPoint & (*)(cpgf::GMetaSelf, qreal)>(mopHolder /= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDivAssign", (QPoint & (*) (QPoint *, qreal))&opErAToRWrapper_QPoint__opDivAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


inline QPointF & opErAToRWrapper_QPointF__opAddAssign(QPointF * self, const QPointF & p) {
    return (*self) += p;
}
inline QPointF & opErAToRWrapper_QPointF__opSubAssign(QPointF * self, const QPointF & p) {
    return (*self) -= p;
}
inline QPointF & opErAToRWrapper_QPointF__opMulAssign(QPointF * self, qreal c) {
    return (*self) *= c;
}
inline QPointF & opErAToRWrapper_QPointF__opDivAssign(QPointF * self, qreal c) {
    return (*self) /= c;
}


template <typename D>
void buildMetaClass_QPointF(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPoint &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (qreal, qreal)>();
    _d.CPGF_MD_TEMPLATE _method("manhattanLength", &D::ClassType::manhattanLength);
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("x", &D::ClassType::x);
    _d.CPGF_MD_TEMPLATE _method("y", &D::ClassType::y);
    _d.CPGF_MD_TEMPLATE _method("setX", &D::ClassType::setX);
    _d.CPGF_MD_TEMPLATE _method("setY", &D::ClassType::setY);
    _d.CPGF_MD_TEMPLATE _method("rx", &D::ClassType::rx);
    _d.CPGF_MD_TEMPLATE _method("ry", &D::ClassType::ry);
    _d.CPGF_MD_TEMPLATE _method("toPoint", &D::ClassType::toPoint);
    _d.CPGF_MD_TEMPLATE _method("dotProduct", &D::ClassType::dotProduct, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QPointF & (*)(cpgf::GMetaSelf, const QPointF &)>(mopHolder += mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QPointF & (*) (QPointF *, const QPointF &))&opErAToRWrapper_QPointF__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QPointF & (*)(cpgf::GMetaSelf, const QPointF &)>(mopHolder -= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (QPointF & (*) (QPointF *, const QPointF &))&opErAToRWrapper_QPointF__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QPointF & (*)(cpgf::GMetaSelf, qreal)>(mopHolder *= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QPointF & (*) (QPointF *, qreal))&opErAToRWrapper_QPointF__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QPointF & (*)(cpgf::GMetaSelf, qreal)>(mopHolder /= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDivAssign", (QPointF & (*) (QPointF *, qreal))&opErAToRWrapper_QPointF__opDivAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
