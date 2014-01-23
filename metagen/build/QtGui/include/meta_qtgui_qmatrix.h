// Auto generated file, don't modify.

#ifndef __META_QTGUI_QMATRIX_H
#define __META_QTGUI_QMATRIX_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qmatrix(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qFuzzyCompare", (bool (*) (const QMatrix &, const QMatrix &))&qFuzzyCompare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QPoint (*)(const QPoint &, const QMatrix &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QPointF (*)(const QPointF &, const QMatrix &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QLineF (*)(const QLineF &, const QMatrix &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QLine (*)(const QLine &, const QMatrix &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QPolygon (*)(const QPolygon &, const QMatrix &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QPolygonF (*)(const QPolygonF &, const QMatrix &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QRegion (*)(const QRegion &, const QMatrix &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QPainterPath (*)(const QPainterPath &, const QMatrix &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QMatrix &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QMatrix &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QMatrix &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline bool opErAToRWrapper_QMatrix__opEqual(const QMatrix * self, const QMatrix & __arg0) {
    return (*self) == __arg0;
}
inline bool opErAToRWrapper_QMatrix__opNotEqual(const QMatrix * self, const QMatrix & __arg0) {
    return (*self) != __arg0;
}
inline QMatrix & opErAToRWrapper_QMatrix__opMulAssign(QMatrix * self, const QMatrix & __arg0) {
    return (*self) *= __arg0;
}
inline QMatrix opErAToRWrapper_QMatrix__opMul(const QMatrix * self, const QMatrix & o) {
    return (*self) * o;
}
inline QMatrix & opErAToRWrapper_QMatrix__opAssign(QMatrix * self, const QMatrix & __arg0) {
    return (*self) = __arg0;
}


template <typename D>
void buildMetaClass_QMatrix(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (Qt::Initialization)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (qreal, qreal, qreal, qreal, qreal, qreal)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QMatrix &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setMatrix", &D::ClassType::setMatrix);
    _d.CPGF_MD_TEMPLATE _method("m11", &D::ClassType::m11);
    _d.CPGF_MD_TEMPLATE _method("m12", &D::ClassType::m12);
    _d.CPGF_MD_TEMPLATE _method("m21", &D::ClassType::m21);
    _d.CPGF_MD_TEMPLATE _method("m22", &D::ClassType::m22);
    _d.CPGF_MD_TEMPLATE _method("dx", &D::ClassType::dx);
    _d.CPGF_MD_TEMPLATE _method("dy", &D::ClassType::dy);
    _d.CPGF_MD_TEMPLATE _method("map", (void (D::ClassType::*) (int, int, int *, int *) const)&D::ClassType::map);
    _d.CPGF_MD_TEMPLATE _method("map", (void (D::ClassType::*) (qreal, qreal, qreal *, qreal *) const)&D::ClassType::map);
    _d.CPGF_MD_TEMPLATE _method("mapRect", (QRect (D::ClassType::*) (const QRect &) const)&D::ClassType::mapRect);
    _d.CPGF_MD_TEMPLATE _method("mapRect", (QRectF (D::ClassType::*) (const QRectF &) const)&D::ClassType::mapRect);
    _d.CPGF_MD_TEMPLATE _method("map", (QPoint (D::ClassType::*) (const QPoint &) const)&D::ClassType::map);
    _d.CPGF_MD_TEMPLATE _method("map", (QPointF (D::ClassType::*) (const QPointF &) const)&D::ClassType::map, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("map", (QLine (D::ClassType::*) (const QLine &) const)&D::ClassType::map);
    _d.CPGF_MD_TEMPLATE _method("map", (QLineF (D::ClassType::*) (const QLineF &) const)&D::ClassType::map, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("map", (QPolygonF (D::ClassType::*) (const QPolygonF &) const)&D::ClassType::map, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("map", (QPolygon (D::ClassType::*) (const QPolygon &) const)&D::ClassType::map, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("map", (QRegion (D::ClassType::*) (const QRegion &) const)&D::ClassType::map, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("map", (QPainterPath (D::ClassType::*) (const QPainterPath &) const)&D::ClassType::map, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("mapToPolygon", &D::ClassType::mapToPolygon);
    _d.CPGF_MD_TEMPLATE _method("reset", &D::ClassType::reset);
    _d.CPGF_MD_TEMPLATE _method("isIdentity", &D::ClassType::isIdentity);
    _d.CPGF_MD_TEMPLATE _method("translate", &D::ClassType::translate);
    _d.CPGF_MD_TEMPLATE _method("scale", &D::ClassType::scale);
    _d.CPGF_MD_TEMPLATE _method("shear", &D::ClassType::shear);
    _d.CPGF_MD_TEMPLATE _method("rotate", &D::ClassType::rotate);
    _d.CPGF_MD_TEMPLATE _method("isInvertible", &D::ClassType::isInvertible);
    _d.CPGF_MD_TEMPLATE _method("determinant", &D::ClassType::determinant);
    _d.CPGF_MD_TEMPLATE _method("inverted", &D::ClassType::inverted)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QMatrix &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QMatrix *, const QMatrix &))&opErAToRWrapper_QMatrix__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QMatrix &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QMatrix *, const QMatrix &))&opErAToRWrapper_QMatrix__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QMatrix & (*)(cpgf::GMetaSelf, const QMatrix &)>(mopHolder *= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QMatrix & (*) (QMatrix *, const QMatrix &))&opErAToRWrapper_QMatrix__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QMatrix (*)(const cpgf::GMetaSelf &, const QMatrix &)>(mopHolder * mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opMul", (QMatrix (*) (const QMatrix *, const QMatrix &))&opErAToRWrapper_QMatrix__opMul, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QMatrix & (*)(cpgf::GMetaSelf, const QMatrix &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QMatrix & (*) (QMatrix *, const QMatrix &))&opErAToRWrapper_QMatrix__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
