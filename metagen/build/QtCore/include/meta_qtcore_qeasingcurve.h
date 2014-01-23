// Auto generated file, don't modify.

#ifndef __META_QTCORE_QEASINGCURVE_H
#define __META_QTCORE_QEASINGCURVE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qeasingcurve(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QEasingCurve &)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QEasingCurve &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QEasingCurve &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
}


inline QEasingCurve & opErAToRWrapper_QEasingCurve__opAssign(QEasingCurve * self, const QEasingCurve & other) {
    return (*self) = other;
}
inline bool opErAToRWrapper_QEasingCurve__opEqual(const QEasingCurve * self, const QEasingCurve & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QEasingCurve__opNotEqual(const QEasingCurve * self, const QEasingCurve & other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QEasingCurve(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEasingCurve::Type)>()
        ._default(copyVariantFromCopyable(QEasingCurve::Linear))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QEasingCurve &)>();
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("amplitude", &D::ClassType::amplitude);
    _d.CPGF_MD_TEMPLATE _method("setAmplitude", &D::ClassType::setAmplitude);
    _d.CPGF_MD_TEMPLATE _method("period", &D::ClassType::period);
    _d.CPGF_MD_TEMPLATE _method("setPeriod", &D::ClassType::setPeriod);
    _d.CPGF_MD_TEMPLATE _method("overshoot", &D::ClassType::overshoot);
    _d.CPGF_MD_TEMPLATE _method("setOvershoot", &D::ClassType::setOvershoot);
    _d.CPGF_MD_TEMPLATE _method("addCubicBezierSegment", &D::ClassType::addCubicBezierSegment, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("addTCBSegment", &D::ClassType::addTCBSegment, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("toCubicSpline", &D::ClassType::toCubicSpline);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("setType", &D::ClassType::setType);
    _d.CPGF_MD_TEMPLATE _method("setCustomType", &D::ClassType::setCustomType);
    _d.CPGF_MD_TEMPLATE _method("customType", &D::ClassType::customType);
    _d.CPGF_MD_TEMPLATE _method("valueForProgress", &D::ClassType::valueForProgress);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Type>("Type")
        ._element("Linear", D::ClassType::Linear)
        ._element("InQuad", D::ClassType::InQuad)
        ._element("OutQuad", D::ClassType::OutQuad)
        ._element("InOutQuad", D::ClassType::InOutQuad)
        ._element("OutInQuad", D::ClassType::OutInQuad)
        ._element("InCubic", D::ClassType::InCubic)
        ._element("OutCubic", D::ClassType::OutCubic)
        ._element("InOutCubic", D::ClassType::InOutCubic)
        ._element("OutInCubic", D::ClassType::OutInCubic)
        ._element("InQuart", D::ClassType::InQuart)
        ._element("OutQuart", D::ClassType::OutQuart)
        ._element("InOutQuart", D::ClassType::InOutQuart)
        ._element("OutInQuart", D::ClassType::OutInQuart)
        ._element("InQuint", D::ClassType::InQuint)
        ._element("OutQuint", D::ClassType::OutQuint)
        ._element("InOutQuint", D::ClassType::InOutQuint)
        ._element("OutInQuint", D::ClassType::OutInQuint)
        ._element("InSine", D::ClassType::InSine)
        ._element("OutSine", D::ClassType::OutSine)
        ._element("InOutSine", D::ClassType::InOutSine)
        ._element("OutInSine", D::ClassType::OutInSine)
        ._element("InExpo", D::ClassType::InExpo)
        ._element("OutExpo", D::ClassType::OutExpo)
        ._element("InOutExpo", D::ClassType::InOutExpo)
        ._element("OutInExpo", D::ClassType::OutInExpo)
        ._element("InCirc", D::ClassType::InCirc)
        ._element("OutCirc", D::ClassType::OutCirc)
        ._element("InOutCirc", D::ClassType::InOutCirc)
        ._element("OutInCirc", D::ClassType::OutInCirc)
        ._element("InElastic", D::ClassType::InElastic)
        ._element("OutElastic", D::ClassType::OutElastic)
        ._element("InOutElastic", D::ClassType::InOutElastic)
        ._element("OutInElastic", D::ClassType::OutInElastic)
        ._element("InBack", D::ClassType::InBack)
        ._element("OutBack", D::ClassType::OutBack)
        ._element("InOutBack", D::ClassType::InOutBack)
        ._element("OutInBack", D::ClassType::OutInBack)
        ._element("InBounce", D::ClassType::InBounce)
        ._element("OutBounce", D::ClassType::OutBounce)
        ._element("InOutBounce", D::ClassType::InOutBounce)
        ._element("OutInBounce", D::ClassType::OutInBounce)
        ._element("InCurve", D::ClassType::InCurve)
        ._element("OutCurve", D::ClassType::OutCurve)
        ._element("SineCurve", D::ClassType::SineCurve)
        ._element("CosineCurve", D::ClassType::CosineCurve)
        ._element("BezierSpline", D::ClassType::BezierSpline)
        ._element("TCBSpline", D::ClassType::TCBSpline)
        ._element("Custom", D::ClassType::Custom)
        ._element("NCurveTypes", D::ClassType::NCurveTypes)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QEasingCurve & (*)(cpgf::GMetaSelf, const QEasingCurve &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QEasingCurve & (*) (QEasingCurve *, const QEasingCurve &))&opErAToRWrapper_QEasingCurve__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QEasingCurve &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QEasingCurve *, const QEasingCurve &))&opErAToRWrapper_QEasingCurve__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QEasingCurve &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QEasingCurve *, const QEasingCurve &))&opErAToRWrapper_QEasingCurve__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
