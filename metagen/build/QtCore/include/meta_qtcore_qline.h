// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QLINE_H
#define CPGF_META_QTCORE_QLINE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qline(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QLine &)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QLine &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QLine &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QLineF &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QLineF &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QLineF &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
}


inline bool opErAToRWrapper_QLine__opEqual(const QLine * self, const QLine & d) {
    return (*self) == d;
}
inline bool opErAToRWrapper_QLine__opNotEqual(const QLine * self, const QLine & d) {
    return (*self) != d;
}


template <typename D>
void buildMetaClass_QLine(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPoint &, const QPoint &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int, int, int)>();
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("p1", &D::ClassType::p1);
    _d.CPGF_MD_TEMPLATE _method("p2", &D::ClassType::p2);
    _d.CPGF_MD_TEMPLATE _method("x1", &D::ClassType::x1);
    _d.CPGF_MD_TEMPLATE _method("y1", &D::ClassType::y1);
    _d.CPGF_MD_TEMPLATE _method("x2", &D::ClassType::x2);
    _d.CPGF_MD_TEMPLATE _method("y2", &D::ClassType::y2);
    _d.CPGF_MD_TEMPLATE _method("dx", &D::ClassType::dx);
    _d.CPGF_MD_TEMPLATE _method("dy", &D::ClassType::dy);
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (const QPoint &))&D::ClassType::translate);
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (int, int))&D::ClassType::translate);
    _d.CPGF_MD_TEMPLATE _method("translated", (QLine (D::ClassType::*) (const QPoint &) const)&D::ClassType::translated);
    _d.CPGF_MD_TEMPLATE _method("translated", (QLine (D::ClassType::*) (int, int) const)&D::ClassType::translated);
    _d.CPGF_MD_TEMPLATE _method("setP1", &D::ClassType::setP1);
    _d.CPGF_MD_TEMPLATE _method("setP2", &D::ClassType::setP2);
    _d.CPGF_MD_TEMPLATE _method("setPoints", &D::ClassType::setPoints);
    _d.CPGF_MD_TEMPLATE _method("setLine", &D::ClassType::setLine);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QLine &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QLine *, const QLine &))&opErAToRWrapper_QLine__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QLine &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QLine *, const QLine &))&opErAToRWrapper_QLine__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


inline bool opErAToRWrapper_QLineF__opEqual(const QLineF * self, const QLineF & d) {
    return (*self) == d;
}
inline bool opErAToRWrapper_QLineF__opNotEqual(const QLineF * self, const QLineF & d) {
    return (*self) != d;
}


template <typename D>
void buildMetaClass_QLineF(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &, const QPointF &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (qreal, qreal, qreal, qreal)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QLine &)>();
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("p1", &D::ClassType::p1);
    _d.CPGF_MD_TEMPLATE _method("p2", &D::ClassType::p2);
    _d.CPGF_MD_TEMPLATE _method("x1", &D::ClassType::x1);
    _d.CPGF_MD_TEMPLATE _method("y1", &D::ClassType::y1);
    _d.CPGF_MD_TEMPLATE _method("x2", &D::ClassType::x2);
    _d.CPGF_MD_TEMPLATE _method("y2", &D::ClassType::y2);
    _d.CPGF_MD_TEMPLATE _method("dx", &D::ClassType::dx);
    _d.CPGF_MD_TEMPLATE _method("dy", &D::ClassType::dy);
    _d.CPGF_MD_TEMPLATE _method("length", &D::ClassType::length);
    _d.CPGF_MD_TEMPLATE _method("setLength", &D::ClassType::setLength);
    _d.CPGF_MD_TEMPLATE _method("angle", (qreal (D::ClassType::*) () const)&D::ClassType::angle);
    _d.CPGF_MD_TEMPLATE _method("setAngle", &D::ClassType::setAngle);
    _d.CPGF_MD_TEMPLATE _method("angleTo", &D::ClassType::angleTo, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("unitVector", &D::ClassType::unitVector);
    _d.CPGF_MD_TEMPLATE _method("normalVector", &D::ClassType::normalVector);
    _d.CPGF_MD_TEMPLATE _method("intersect", &D::ClassType::intersect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("angle", (qreal (D::ClassType::*) (const QLineF &) const)&D::ClassType::angle, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("pointAt", &D::ClassType::pointAt);
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (const QPointF &))&D::ClassType::translate, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::translate);
    _d.CPGF_MD_TEMPLATE _method("translated", (QLineF (D::ClassType::*) (const QPointF &) const)&D::ClassType::translated, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("translated", (QLineF (D::ClassType::*) (qreal, qreal) const)&D::ClassType::translated);
    _d.CPGF_MD_TEMPLATE _method("setP1", &D::ClassType::setP1, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setP2", &D::ClassType::setP2, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setPoints", &D::ClassType::setPoints, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("setLine", &D::ClassType::setLine);
    _d.CPGF_MD_TEMPLATE _method("toLine", &D::ClassType::toLine);
    _d.CPGF_MD_TEMPLATE _method("fromPolar", &D::ClassType::fromPolar);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::IntersectType>("IntersectType")
        ._element("NoIntersection", D::ClassType::NoIntersection)
        ._element("BoundedIntersection", D::ClassType::BoundedIntersection)
        ._element("UnboundedIntersection", D::ClassType::UnboundedIntersection)
    ;
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QLineF &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QLineF *, const QLineF &))&opErAToRWrapper_QLineF__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QLineF &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QLineF *, const QLineF &))&opErAToRWrapper_QLineF__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
