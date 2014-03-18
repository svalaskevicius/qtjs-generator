// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QPOLYGON_H
#define CPGF_META_QTGUI_QPOLYGON_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qpolygon(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QPolygon &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QPolygon &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QPolygon &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QPolygonF &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QPolygonF &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QPolygonF &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
}


template <typename D>
void buildMetaClass_QPolygon(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPolygon &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QVector< QPoint > &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QRect &, bool)>()
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, const int *)>();
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (int, int))&D::ClassType::translate);
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (const QPoint &))&D::ClassType::translate);
    _d.CPGF_MD_TEMPLATE _method("translated", (QPolygon (D::ClassType::*) (int, int) const)&D::ClassType::translated);
    _d.CPGF_MD_TEMPLATE _method("translated", (QPolygon (D::ClassType::*) (const QPoint &) const)&D::ClassType::translated);
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("point", (void (D::ClassType::*) (int, int *, int *) const)&D::ClassType::point);
    _d.CPGF_MD_TEMPLATE _method("point", (QPoint (D::ClassType::*) (int) const)&D::ClassType::point);
    _d.CPGF_MD_TEMPLATE _method("setPoint", (void (D::ClassType::*) (int, int, int))&D::ClassType::setPoint);
    _d.CPGF_MD_TEMPLATE _method("setPoint", (void (D::ClassType::*) (int, const QPoint &))&D::ClassType::setPoint);
    _d.CPGF_MD_TEMPLATE _method("setPoints", (void (D::ClassType::*) (int, const int *))&D::ClassType::setPoints);
    _d.CPGF_MD_TEMPLATE _method("putPoints", (void (D::ClassType::*) (int, int, const int *))&D::ClassType::putPoints);
    _d.CPGF_MD_TEMPLATE _method("putPoints", (void (D::ClassType::*) (int, int, const QPolygon &, int))&D::ClassType::putPoints, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("containsPoint", &D::ClassType::containsPoint);
    _d.CPGF_MD_TEMPLATE _method("united", &D::ClassType::united, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("intersected", &D::ClassType::intersected, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("subtracted", &D::ClassType::subtracted, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
}


template <typename D>
void buildMetaClass_QPolygonF(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPolygonF &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QVector< QPointF > &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QRectF &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPolygon &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::translate);
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (const QPointF &))&D::ClassType::translate, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("translated", (QPolygonF (D::ClassType::*) (qreal, qreal) const)&D::ClassType::translated);
    _d.CPGF_MD_TEMPLATE _method("translated", (QPolygonF (D::ClassType::*) (const QPointF &) const)&D::ClassType::translated, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("toPolygon", &D::ClassType::toPolygon);
    _d.CPGF_MD_TEMPLATE _method("isClosed", &D::ClassType::isClosed);
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("containsPoint", &D::ClassType::containsPoint, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("united", &D::ClassType::united, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("intersected", &D::ClassType::intersected, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("subtracted", &D::ClassType::subtracted, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
