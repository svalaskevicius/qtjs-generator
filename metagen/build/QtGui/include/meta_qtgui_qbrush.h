// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QBRUSH_H
#define CPGF_META_QTGUI_QBRUSH_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qbrush(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QBrush &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QBrush &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QBrush &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline QBrush & opErAToRWrapper_QBrush__opAssign(QBrush * self, const QBrush & brush) {
    return (*self) = brush;
}
inline bool opErAToRWrapper_QBrush__opEqual(const QBrush * self, const QBrush & b) {
    return (*self) == b;
}
inline bool opErAToRWrapper_QBrush__opNotEqual(const QBrush * self, const QBrush & b) {
    return (*self) != b;
}


template <typename D>
void buildMetaClass_QBrush(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (Qt::BrushStyle)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QColor &, Qt::BrushStyle)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::SolidPattern))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (Qt::GlobalColor, Qt::BrushStyle)>()
        ._default(copyVariantFromCopyable(Qt::SolidPattern))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QColor &, const QPixmap &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (Qt::GlobalColor, const QPixmap &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPixmap &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QImage &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QBrush &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QGradient &)>();
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("style", &D::ClassType::style);
    _d.CPGF_MD_TEMPLATE _method("setStyle", &D::ClassType::setStyle);
    _d.CPGF_MD_TEMPLATE _method("matrix", &D::ClassType::matrix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("setMatrix", &D::ClassType::setMatrix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("transform", &D::ClassType::transform);
    _d.CPGF_MD_TEMPLATE _method("setTransform", &D::ClassType::setTransform, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("texture", &D::ClassType::texture, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("setTexture", &D::ClassType::setTexture);
    _d.CPGF_MD_TEMPLATE _method("textureImage", &D::ClassType::textureImage, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("setTextureImage", &D::ClassType::setTextureImage);
    _d.CPGF_MD_TEMPLATE _method("color", &D::ClassType::color, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("setColor", (void (D::ClassType::*) (const QColor &))&D::ClassType::setColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setColor", (void (D::ClassType::*) (Qt::GlobalColor))&D::ClassType::setColor);
    _d.CPGF_MD_TEMPLATE _method("gradient", &D::ClassType::gradient);
    _d.CPGF_MD_TEMPLATE _method("isOpaque", &D::ClassType::isOpaque);
    _d.CPGF_MD_TEMPLATE _method("isDetached", &D::ClassType::isDetached);
    _d.CPGF_MD_TEMPLATE _operator<QBrush & (*)(cpgf::GMetaSelf, const QBrush &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QBrush & (*) (QBrush *, const QBrush &))&opErAToRWrapper_QBrush__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QBrush &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QBrush *, const QBrush &))&opErAToRWrapper_QBrush__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QBrush &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QBrush *, const QBrush &))&opErAToRWrapper_QBrush__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


template <typename D>
void buildMetaClass_QBrushData(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("ref", &D::ClassType::ref);
    _d.CPGF_MD_TEMPLATE _field("style", &D::ClassType::style);
    _d.CPGF_MD_TEMPLATE _field("color", &D::ClassType::color);
    _d.CPGF_MD_TEMPLATE _field("transform", &D::ClassType::transform);
}


template <typename D>
void buildMetaClass_QConicalGradient(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &, qreal)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (qreal, qreal, qreal)>();
    _d.CPGF_MD_TEMPLATE _method("center", &D::ClassType::center);
    _d.CPGF_MD_TEMPLATE _method("setCenter", (void (D::ClassType::*) (const QPointF &))&D::ClassType::setCenter, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setCenter", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::setCenter);
    _d.CPGF_MD_TEMPLATE _method("angle", &D::ClassType::angle);
    _d.CPGF_MD_TEMPLATE _method("setAngle", &D::ClassType::setAngle);
}


inline bool opErAToRWrapper_QGradient__opEqual(const QGradient * self, const QGradient & gradient) {
    return (*self) == gradient;
}
inline bool opErAToRWrapper_QGradient__opNotEqual(const QGradient * self, const QGradient & other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QGradient(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("setSpread", &D::ClassType::setSpread);
    _d.CPGF_MD_TEMPLATE _method("spread", &D::ClassType::spread);
    _d.CPGF_MD_TEMPLATE _method("setColorAt", &D::ClassType::setColorAt, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("setStops", &D::ClassType::setStops);
    _d.CPGF_MD_TEMPLATE _method("stops", &D::ClassType::stops);
    _d.CPGF_MD_TEMPLATE _method("coordinateMode", &D::ClassType::coordinateMode);
    _d.CPGF_MD_TEMPLATE _method("setCoordinateMode", &D::ClassType::setCoordinateMode);
    _d.CPGF_MD_TEMPLATE _method("interpolationMode", &D::ClassType::interpolationMode);
    _d.CPGF_MD_TEMPLATE _method("setInterpolationMode", &D::ClassType::setInterpolationMode);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Type>("Type")
        ._element("LinearGradient", D::ClassType::LinearGradient)
        ._element("RadialGradient", D::ClassType::RadialGradient)
        ._element("ConicalGradient", D::ClassType::ConicalGradient)
        ._element("NoGradient", D::ClassType::NoGradient)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Spread>("Spread")
        ._element("PadSpread", D::ClassType::PadSpread)
        ._element("ReflectSpread", D::ClassType::ReflectSpread)
        ._element("RepeatSpread", D::ClassType::RepeatSpread)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::CoordinateMode>("CoordinateMode")
        ._element("LogicalMode", D::ClassType::LogicalMode)
        ._element("StretchToDeviceMode", D::ClassType::StretchToDeviceMode)
        ._element("ObjectBoundingMode", D::ClassType::ObjectBoundingMode)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::InterpolationMode>("InterpolationMode")
        ._element("ColorInterpolation", D::ClassType::ColorInterpolation)
        ._element("ComponentInterpolation", D::ClassType::ComponentInterpolation)
    ;
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QGradient &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QGradient *, const QGradient &))&opErAToRWrapper_QGradient__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QGradient &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QGradient *, const QGradient &))&opErAToRWrapper_QGradient__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


template <typename D>
void buildMetaClass_QLinearGradient(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &, const QPointF &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (qreal, qreal, qreal, qreal)>();
    _d.CPGF_MD_TEMPLATE _method("start", &D::ClassType::start);
    _d.CPGF_MD_TEMPLATE _method("setStart", (void (D::ClassType::*) (const QPointF &))&D::ClassType::setStart, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setStart", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::setStart);
    _d.CPGF_MD_TEMPLATE _method("finalStop", &D::ClassType::finalStop);
    _d.CPGF_MD_TEMPLATE _method("setFinalStop", (void (D::ClassType::*) (const QPointF &))&D::ClassType::setFinalStop, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setFinalStop", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::setFinalStop);
}


template <typename D>
void buildMetaClass_QRadialGradient(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &, qreal, const QPointF &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (qreal, qreal, qreal, qreal, qreal)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &, qreal)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (qreal, qreal, qreal)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &, qreal, const QPointF &, qreal)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (qreal, qreal, qreal, qreal, qreal, qreal)>();
    _d.CPGF_MD_TEMPLATE _method("center", &D::ClassType::center);
    _d.CPGF_MD_TEMPLATE _method("setCenter", (void (D::ClassType::*) (const QPointF &))&D::ClassType::setCenter, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setCenter", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::setCenter);
    _d.CPGF_MD_TEMPLATE _method("focalPoint", &D::ClassType::focalPoint);
    _d.CPGF_MD_TEMPLATE _method("setFocalPoint", (void (D::ClassType::*) (const QPointF &))&D::ClassType::setFocalPoint, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setFocalPoint", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::setFocalPoint);
    _d.CPGF_MD_TEMPLATE _method("radius", &D::ClassType::radius);
    _d.CPGF_MD_TEMPLATE _method("setRadius", &D::ClassType::setRadius);
    _d.CPGF_MD_TEMPLATE _method("centerRadius", &D::ClassType::centerRadius);
    _d.CPGF_MD_TEMPLATE _method("setCenterRadius", &D::ClassType::setCenterRadius);
    _d.CPGF_MD_TEMPLATE _method("focalRadius", &D::ClassType::focalRadius);
    _d.CPGF_MD_TEMPLATE _method("setFocalRadius", &D::ClassType::setFocalRadius);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
