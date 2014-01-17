// Auto generated file, don't modify.

#ifndef __META_QTGUI_QCOLOR_H
#define __META_QTGUI_QCOLOR_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


template <typename D>
void buildMetaClass_Global_qcolor(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QColor &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QColor &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QColor &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
}


inline QColor & opErAToRWrapper_QColor__opAssign(QColor * self, const QColor & __arg0) {
    return (*self) = __arg0;
}
inline QColor & opErAToRWrapper_QColor__opAssign(QColor * self, Qt::GlobalColor color) {
    return (*self) = color;
}
inline bool opErAToRWrapper_QColor__opEqual(const QColor * self, const QColor & c) {
    return (*self) == c;
}
inline bool opErAToRWrapper_QColor__opNotEqual(const QColor * self, const QColor & c) {
    return (*self) != c;
}


template <typename D>
void buildMetaClass_QColor(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (Qt::GlobalColor)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int, int, int)>()
        ._default(copyVariantFromCopyable(255))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QRgb)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const char *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QColor &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QColor::Spec)>();
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("name", (QString (D::ClassType::*) () const)&D::ClassType::name);
    _d.CPGF_MD_TEMPLATE _method("name", (QString (D::ClassType::*) (QColor::NameFormat) const)&D::ClassType::name);
    _d.CPGF_MD_TEMPLATE _method("setNamedColor", &D::ClassType::setNamedColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("spec", &D::ClassType::spec);
    _d.CPGF_MD_TEMPLATE _method("alpha", &D::ClassType::alpha);
    _d.CPGF_MD_TEMPLATE _method("setAlpha", &D::ClassType::setAlpha);
    _d.CPGF_MD_TEMPLATE _method("alphaF", &D::ClassType::alphaF);
    _d.CPGF_MD_TEMPLATE _method("setAlphaF", &D::ClassType::setAlphaF);
    _d.CPGF_MD_TEMPLATE _method("red", &D::ClassType::red);
    _d.CPGF_MD_TEMPLATE _method("green", &D::ClassType::green);
    _d.CPGF_MD_TEMPLATE _method("blue", &D::ClassType::blue);
    _d.CPGF_MD_TEMPLATE _method("setRed", &D::ClassType::setRed);
    _d.CPGF_MD_TEMPLATE _method("setGreen", &D::ClassType::setGreen);
    _d.CPGF_MD_TEMPLATE _method("setBlue", &D::ClassType::setBlue);
    _d.CPGF_MD_TEMPLATE _method("redF", &D::ClassType::redF);
    _d.CPGF_MD_TEMPLATE _method("greenF", &D::ClassType::greenF);
    _d.CPGF_MD_TEMPLATE _method("blueF", &D::ClassType::blueF);
    _d.CPGF_MD_TEMPLATE _method("setRedF", &D::ClassType::setRedF);
    _d.CPGF_MD_TEMPLATE _method("setGreenF", &D::ClassType::setGreenF);
    _d.CPGF_MD_TEMPLATE _method("setBlueF", &D::ClassType::setBlueF);
    _d.CPGF_MD_TEMPLATE _method("getRgb", &D::ClassType::getRgb)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setRgb", (void (D::ClassType::*) (int, int, int, int))&D::ClassType::setRgb)
        ._default(copyVariantFromCopyable(255))
    ;
    _d.CPGF_MD_TEMPLATE _method("getRgbF", &D::ClassType::getRgbF)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setRgbF", &D::ClassType::setRgbF)
        ._default(copyVariantFromCopyable(1.0))
    ;
    _d.CPGF_MD_TEMPLATE _method("rgba", &D::ClassType::rgba);
    _d.CPGF_MD_TEMPLATE _method("setRgba", &D::ClassType::setRgba);
    _d.CPGF_MD_TEMPLATE _method("rgb", &D::ClassType::rgb);
    _d.CPGF_MD_TEMPLATE _method("setRgb", (void (D::ClassType::*) (QRgb))&D::ClassType::setRgb);
    _d.CPGF_MD_TEMPLATE _method("hue", &D::ClassType::hue);
    _d.CPGF_MD_TEMPLATE _method("saturation", &D::ClassType::saturation);
    _d.CPGF_MD_TEMPLATE _method("hsvHue", &D::ClassType::hsvHue);
    _d.CPGF_MD_TEMPLATE _method("hsvSaturation", &D::ClassType::hsvSaturation);
    _d.CPGF_MD_TEMPLATE _method("value", &D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _method("hueF", &D::ClassType::hueF);
    _d.CPGF_MD_TEMPLATE _method("saturationF", &D::ClassType::saturationF);
    _d.CPGF_MD_TEMPLATE _method("hsvHueF", &D::ClassType::hsvHueF);
    _d.CPGF_MD_TEMPLATE _method("hsvSaturationF", &D::ClassType::hsvSaturationF);
    _d.CPGF_MD_TEMPLATE _method("valueF", &D::ClassType::valueF);
    _d.CPGF_MD_TEMPLATE _method("getHsv", &D::ClassType::getHsv)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setHsv", &D::ClassType::setHsv)
        ._default(copyVariantFromCopyable(255))
    ;
    _d.CPGF_MD_TEMPLATE _method("getHsvF", &D::ClassType::getHsvF)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setHsvF", &D::ClassType::setHsvF)
        ._default(copyVariantFromCopyable(1.0))
    ;
    _d.CPGF_MD_TEMPLATE _method("cyan", &D::ClassType::cyan);
    _d.CPGF_MD_TEMPLATE _method("magenta", &D::ClassType::magenta);
    _d.CPGF_MD_TEMPLATE _method("yellow", &D::ClassType::yellow);
    _d.CPGF_MD_TEMPLATE _method("black", &D::ClassType::black);
    _d.CPGF_MD_TEMPLATE _method("cyanF", &D::ClassType::cyanF);
    _d.CPGF_MD_TEMPLATE _method("magentaF", &D::ClassType::magentaF);
    _d.CPGF_MD_TEMPLATE _method("yellowF", &D::ClassType::yellowF);
    _d.CPGF_MD_TEMPLATE _method("blackF", &D::ClassType::blackF);
    _d.CPGF_MD_TEMPLATE _method("getCmyk", &D::ClassType::getCmyk)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setCmyk", &D::ClassType::setCmyk)
        ._default(copyVariantFromCopyable(255))
    ;
    _d.CPGF_MD_TEMPLATE _method("getCmykF", &D::ClassType::getCmykF)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setCmykF", &D::ClassType::setCmykF)
        ._default(copyVariantFromCopyable(1.0))
    ;
    _d.CPGF_MD_TEMPLATE _method("hslHue", &D::ClassType::hslHue);
    _d.CPGF_MD_TEMPLATE _method("hslSaturation", &D::ClassType::hslSaturation);
    _d.CPGF_MD_TEMPLATE _method("lightness", &D::ClassType::lightness);
    _d.CPGF_MD_TEMPLATE _method("hslHueF", &D::ClassType::hslHueF);
    _d.CPGF_MD_TEMPLATE _method("hslSaturationF", &D::ClassType::hslSaturationF);
    _d.CPGF_MD_TEMPLATE _method("lightnessF", &D::ClassType::lightnessF);
    _d.CPGF_MD_TEMPLATE _method("getHsl", &D::ClassType::getHsl)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setHsl", &D::ClassType::setHsl)
        ._default(copyVariantFromCopyable(255))
    ;
    _d.CPGF_MD_TEMPLATE _method("getHslF", &D::ClassType::getHslF)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setHslF", &D::ClassType::setHslF)
        ._default(copyVariantFromCopyable(1.0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toRgb", &D::ClassType::toRgb);
    _d.CPGF_MD_TEMPLATE _method("toHsv", &D::ClassType::toHsv);
    _d.CPGF_MD_TEMPLATE _method("toCmyk", &D::ClassType::toCmyk);
    _d.CPGF_MD_TEMPLATE _method("toHsl", &D::ClassType::toHsl);
    _d.CPGF_MD_TEMPLATE _method("convertTo", &D::ClassType::convertTo);
    _d.CPGF_MD_TEMPLATE _method("light", &D::ClassType::light)
        ._default(copyVariantFromCopyable(150))
    ;
    _d.CPGF_MD_TEMPLATE _method("lighter", &D::ClassType::lighter)
        ._default(copyVariantFromCopyable(150))
    ;
    _d.CPGF_MD_TEMPLATE _method("dark", &D::ClassType::dark)
        ._default(copyVariantFromCopyable(200))
    ;
    _d.CPGF_MD_TEMPLATE _method("darker", &D::ClassType::darker)
        ._default(copyVariantFromCopyable(200))
    ;
    _d.CPGF_MD_TEMPLATE _method("colorNames", &D::ClassType::colorNames);
    _d.CPGF_MD_TEMPLATE _method("fromRgb", (QColor (*) (QRgb))&D::ClassType::fromRgb);
    _d.CPGF_MD_TEMPLATE _method("fromRgba", &D::ClassType::fromRgba);
    _d.CPGF_MD_TEMPLATE _method("fromRgb", (QColor (*) (int, int, int, int))&D::ClassType::fromRgb)
        ._default(copyVariantFromCopyable(255))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromRgbF", &D::ClassType::fromRgbF)
        ._default(copyVariantFromCopyable(1.0))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromHsv", &D::ClassType::fromHsv)
        ._default(copyVariantFromCopyable(255))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromHsvF", &D::ClassType::fromHsvF)
        ._default(copyVariantFromCopyable(1.0))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromCmyk", &D::ClassType::fromCmyk)
        ._default(copyVariantFromCopyable(255))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromCmykF", &D::ClassType::fromCmykF)
        ._default(copyVariantFromCopyable(1.0))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromHsl", &D::ClassType::fromHsl)
        ._default(copyVariantFromCopyable(255))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromHslF", &D::ClassType::fromHslF)
        ._default(copyVariantFromCopyable(1.0))
    ;
    _d.CPGF_MD_TEMPLATE _method("isValidColor", &D::ClassType::isValidColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Spec>("Spec")
        ._element("Invalid", D::ClassType::Invalid)
        ._element("Rgb", D::ClassType::Rgb)
        ._element("Hsv", D::ClassType::Hsv)
        ._element("Cmyk", D::ClassType::Cmyk)
        ._element("Hsl", D::ClassType::Hsl)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::NameFormat>("NameFormat")
        ._element("HexRgb", D::ClassType::HexRgb)
        ._element("HexArgb", D::ClassType::HexArgb)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QColor & (*)(cpgf::GMetaSelf, const QColor &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QColor & (*) (QColor *, const QColor &))&opErAToRWrapper_QColor__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QColor & (*)(cpgf::GMetaSelf, Qt::GlobalColor)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QColor & (*) (QColor *, Qt::GlobalColor))&opErAToRWrapper_QColor__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QColor &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QColor *, const QColor &))&opErAToRWrapper_QColor__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QColor &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QColor *, const QColor &))&opErAToRWrapper_QColor__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
