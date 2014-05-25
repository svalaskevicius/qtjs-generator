// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QSCROLLERPROPERTIES_H
#define CPGF_META_QTWIDGETS_QSCROLLERPROPERTIES_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


inline QScrollerProperties & opErAToRWrapper_QScrollerProperties__opAssign(QScrollerProperties * self, const QScrollerProperties & sp) {
    return (*self) = sp;
}
inline bool opErAToRWrapper_QScrollerProperties__opEqual(const QScrollerProperties * self, const QScrollerProperties & sp) {
    return (*self) == sp;
}
inline bool opErAToRWrapper_QScrollerProperties__opNotEqual(const QScrollerProperties * self, const QScrollerProperties & sp) {
    return (*self) != sp;
}


template <typename D>
void buildMetaClass_QScrollerProperties(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QScrollerProperties &)>();
    _d.CPGF_MD_TEMPLATE _method("scrollMetric", &D::ClassType::scrollMetric);
    _d.CPGF_MD_TEMPLATE _method("setScrollMetric", &D::ClassType::setScrollMetric, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("setDefaultScrollerProperties", &D::ClassType::setDefaultScrollerProperties);
    _d.CPGF_MD_TEMPLATE _method("unsetDefaultScrollerProperties", &D::ClassType::unsetDefaultScrollerProperties);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::OvershootPolicy>("OvershootPolicy")
        ._element("OvershootWhenScrollable", D::ClassType::OvershootWhenScrollable)
        ._element("OvershootAlwaysOff", D::ClassType::OvershootAlwaysOff)
        ._element("OvershootAlwaysOn", D::ClassType::OvershootAlwaysOn)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::FrameRates>("FrameRates")
        ._element("Standard", D::ClassType::Standard)
        ._element("Fps60", D::ClassType::Fps60)
        ._element("Fps30", D::ClassType::Fps30)
        ._element("Fps20", D::ClassType::Fps20)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ScrollMetric>("ScrollMetric")
        ._element("MousePressEventDelay", D::ClassType::MousePressEventDelay)
        ._element("DragStartDistance", D::ClassType::DragStartDistance)
        ._element("DragVelocitySmoothingFactor", D::ClassType::DragVelocitySmoothingFactor)
        ._element("AxisLockThreshold", D::ClassType::AxisLockThreshold)
        ._element("ScrollingCurve", D::ClassType::ScrollingCurve)
        ._element("DecelerationFactor", D::ClassType::DecelerationFactor)
        ._element("MinimumVelocity", D::ClassType::MinimumVelocity)
        ._element("MaximumVelocity", D::ClassType::MaximumVelocity)
        ._element("MaximumClickThroughVelocity", D::ClassType::MaximumClickThroughVelocity)
        ._element("AcceleratingFlickMaximumTime", D::ClassType::AcceleratingFlickMaximumTime)
        ._element("AcceleratingFlickSpeedupFactor", D::ClassType::AcceleratingFlickSpeedupFactor)
        ._element("SnapPositionRatio", D::ClassType::SnapPositionRatio)
        ._element("SnapTime", D::ClassType::SnapTime)
        ._element("OvershootDragResistanceFactor", D::ClassType::OvershootDragResistanceFactor)
        ._element("OvershootDragDistanceFactor", D::ClassType::OvershootDragDistanceFactor)
        ._element("OvershootScrollDistanceFactor", D::ClassType::OvershootScrollDistanceFactor)
        ._element("OvershootScrollTime", D::ClassType::OvershootScrollTime)
        ._element("HorizontalOvershootPolicy", D::ClassType::HorizontalOvershootPolicy)
        ._element("VerticalOvershootPolicy", D::ClassType::VerticalOvershootPolicy)
        ._element("FrameRate", D::ClassType::FrameRate)
        ._element("ScrollMetricCount", D::ClassType::ScrollMetricCount)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QScrollerProperties & (*)(cpgf::GMetaSelf, const QScrollerProperties &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QScrollerProperties & (*) (QScrollerProperties *, const QScrollerProperties &))&opErAToRWrapper_QScrollerProperties__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QScrollerProperties &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QScrollerProperties *, const QScrollerProperties &))&opErAToRWrapper_QScrollerProperties__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QScrollerProperties &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QScrollerProperties *, const QScrollerProperties &))&opErAToRWrapper_QScrollerProperties__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
