// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QFONT_H
#define CPGF_META_QTGUI_QFONT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qfont(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QFont &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QFont &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QFont &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline QFont & opErAToRWrapper_QFont__opAssign(QFont * self, const QFont & __arg0) {
    return (*self) = __arg0;
}
inline bool opErAToRWrapper_QFont__opEqual(const QFont * self, const QFont & __arg0) {
    return (*self) == __arg0;
}
inline bool opErAToRWrapper_QFont__opNotEqual(const QFont * self, const QFont & __arg0) {
    return (*self) != __arg0;
}
inline bool opErAToRWrapper_QFont__opLess(const QFont * self, const QFont & __arg0) {
    return (*self) < __arg0;
}


template <typename D>
void buildMetaClass_QFont(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, int, int, bool)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(false))
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QFont &, QPaintDevice *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QFont &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("family", &D::ClassType::family);
    _d.CPGF_MD_TEMPLATE _method("setFamily", &D::ClassType::setFamily, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("styleName", &D::ClassType::styleName);
    _d.CPGF_MD_TEMPLATE _method("setStyleName", &D::ClassType::setStyleName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("pointSize", &D::ClassType::pointSize);
    _d.CPGF_MD_TEMPLATE _method("setPointSize", &D::ClassType::setPointSize);
    _d.CPGF_MD_TEMPLATE _method("pointSizeF", &D::ClassType::pointSizeF);
    _d.CPGF_MD_TEMPLATE _method("setPointSizeF", &D::ClassType::setPointSizeF);
    _d.CPGF_MD_TEMPLATE _method("pixelSize", &D::ClassType::pixelSize);
    _d.CPGF_MD_TEMPLATE _method("setPixelSize", &D::ClassType::setPixelSize);
    _d.CPGF_MD_TEMPLATE _method("weight", &D::ClassType::weight);
    _d.CPGF_MD_TEMPLATE _method("setWeight", &D::ClassType::setWeight);
    _d.CPGF_MD_TEMPLATE _method("bold", &D::ClassType::bold);
    _d.CPGF_MD_TEMPLATE _method("setBold", &D::ClassType::setBold);
    _d.CPGF_MD_TEMPLATE _method("setStyle", &D::ClassType::setStyle);
    _d.CPGF_MD_TEMPLATE _method("style", &D::ClassType::style);
    _d.CPGF_MD_TEMPLATE _method("italic", &D::ClassType::italic);
    _d.CPGF_MD_TEMPLATE _method("setItalic", &D::ClassType::setItalic);
    _d.CPGF_MD_TEMPLATE _method("underline", &D::ClassType::underline);
    _d.CPGF_MD_TEMPLATE _method("setUnderline", &D::ClassType::setUnderline);
    _d.CPGF_MD_TEMPLATE _method("overline", &D::ClassType::overline);
    _d.CPGF_MD_TEMPLATE _method("setOverline", &D::ClassType::setOverline);
    _d.CPGF_MD_TEMPLATE _method("strikeOut", &D::ClassType::strikeOut);
    _d.CPGF_MD_TEMPLATE _method("setStrikeOut", &D::ClassType::setStrikeOut);
    _d.CPGF_MD_TEMPLATE _method("fixedPitch", &D::ClassType::fixedPitch);
    _d.CPGF_MD_TEMPLATE _method("setFixedPitch", &D::ClassType::setFixedPitch);
    _d.CPGF_MD_TEMPLATE _method("kerning", &D::ClassType::kerning);
    _d.CPGF_MD_TEMPLATE _method("setKerning", &D::ClassType::setKerning);
    _d.CPGF_MD_TEMPLATE _method("styleHint", &D::ClassType::styleHint);
    _d.CPGF_MD_TEMPLATE _method("styleStrategy", &D::ClassType::styleStrategy);
    _d.CPGF_MD_TEMPLATE _method("setStyleHint", &D::ClassType::setStyleHint)
        ._default(copyVariantFromCopyable(QFont::PreferDefault))
    ;
    _d.CPGF_MD_TEMPLATE _method("setStyleStrategy", &D::ClassType::setStyleStrategy);
    _d.CPGF_MD_TEMPLATE _method("stretch", &D::ClassType::stretch);
    _d.CPGF_MD_TEMPLATE _method("setStretch", &D::ClassType::setStretch);
    _d.CPGF_MD_TEMPLATE _method("letterSpacing", &D::ClassType::letterSpacing);
    _d.CPGF_MD_TEMPLATE _method("letterSpacingType", &D::ClassType::letterSpacingType);
    _d.CPGF_MD_TEMPLATE _method("setLetterSpacing", &D::ClassType::setLetterSpacing);
    _d.CPGF_MD_TEMPLATE _method("wordSpacing", &D::ClassType::wordSpacing);
    _d.CPGF_MD_TEMPLATE _method("setWordSpacing", &D::ClassType::setWordSpacing);
    _d.CPGF_MD_TEMPLATE _method("setCapitalization", &D::ClassType::setCapitalization);
    _d.CPGF_MD_TEMPLATE _method("capitalization", &D::ClassType::capitalization);
    _d.CPGF_MD_TEMPLATE _method("setHintingPreference", &D::ClassType::setHintingPreference);
    _d.CPGF_MD_TEMPLATE _method("hintingPreference", &D::ClassType::hintingPreference);
    _d.CPGF_MD_TEMPLATE _method("rawMode", &D::ClassType::rawMode);
    _d.CPGF_MD_TEMPLATE _method("setRawMode", &D::ClassType::setRawMode);
    _d.CPGF_MD_TEMPLATE _method("exactMatch", &D::ClassType::exactMatch);
    _d.CPGF_MD_TEMPLATE _method("isCopyOf", &D::ClassType::isCopyOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setRawName", &D::ClassType::setRawName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("rawName", &D::ClassType::rawName);
    _d.CPGF_MD_TEMPLATE _method("key", &D::ClassType::key);
    _d.CPGF_MD_TEMPLATE _method("toString", &D::ClassType::toString);
    _d.CPGF_MD_TEMPLATE _method("fromString", &D::ClassType::fromString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("defaultFamily", &D::ClassType::defaultFamily);
    _d.CPGF_MD_TEMPLATE _method("lastResortFamily", &D::ClassType::lastResortFamily);
    _d.CPGF_MD_TEMPLATE _method("lastResortFont", &D::ClassType::lastResortFont);
    _d.CPGF_MD_TEMPLATE _method("resolve", (QFont (D::ClassType::*) (const QFont &) const)&D::ClassType::resolve, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("resolve", (uint (D::ClassType::*) () const)&D::ClassType::resolve);
    _d.CPGF_MD_TEMPLATE _method("resolve", (void (D::ClassType::*) (uint))&D::ClassType::resolve);
    _d.CPGF_MD_TEMPLATE _method("substitute", &D::ClassType::substitute, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("substitutes", &D::ClassType::substitutes, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("substitutions", &D::ClassType::substitutions);
    _d.CPGF_MD_TEMPLATE _method("insertSubstitution", &D::ClassType::insertSubstitution, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("insertSubstitutions", &D::ClassType::insertSubstitutions, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("removeSubstitutions", &D::ClassType::removeSubstitutions, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("initialize", &D::ClassType::initialize);
    _d.CPGF_MD_TEMPLATE _method("cleanup", &D::ClassType::cleanup);
    _d.CPGF_MD_TEMPLATE _method("cacheStatistics", &D::ClassType::cacheStatistics);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleHint>("StyleHint")
        ._element("Helvetica", D::ClassType::Helvetica)
        ._element("SansSerif", D::ClassType::SansSerif)
        ._element("Times", D::ClassType::Times)
        ._element("Serif", D::ClassType::Serif)
        ._element("Courier", D::ClassType::Courier)
        ._element("TypeWriter", D::ClassType::TypeWriter)
        ._element("OldEnglish", D::ClassType::OldEnglish)
        ._element("Decorative", D::ClassType::Decorative)
        ._element("System", D::ClassType::System)
        ._element("AnyStyle", D::ClassType::AnyStyle)
        ._element("Cursive", D::ClassType::Cursive)
        ._element("Monospace", D::ClassType::Monospace)
        ._element("Fantasy", D::ClassType::Fantasy)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleStrategy>("StyleStrategy")
        ._element("PreferDefault", D::ClassType::PreferDefault)
        ._element("PreferBitmap", D::ClassType::PreferBitmap)
        ._element("PreferDevice", D::ClassType::PreferDevice)
        ._element("PreferOutline", D::ClassType::PreferOutline)
        ._element("ForceOutline", D::ClassType::ForceOutline)
        ._element("PreferMatch", D::ClassType::PreferMatch)
        ._element("PreferQuality", D::ClassType::PreferQuality)
        ._element("PreferAntialias", D::ClassType::PreferAntialias)
        ._element("NoAntialias", D::ClassType::NoAntialias)
        ._element("OpenGLCompatible", D::ClassType::OpenGLCompatible)
        ._element("ForceIntegerMetrics", D::ClassType::ForceIntegerMetrics)
        ._element("NoFontMerging", D::ClassType::NoFontMerging)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::HintingPreference>("HintingPreference")
        ._element("PreferDefaultHinting", D::ClassType::PreferDefaultHinting)
        ._element("PreferNoHinting", D::ClassType::PreferNoHinting)
        ._element("PreferVerticalHinting", D::ClassType::PreferVerticalHinting)
        ._element("PreferFullHinting", D::ClassType::PreferFullHinting)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Weight>("Weight")
        ._element("Light", D::ClassType::Light)
        ._element("Normal", D::ClassType::Normal)
        ._element("DemiBold", D::ClassType::DemiBold)
        ._element("Bold", D::ClassType::Bold)
        ._element("Black", D::ClassType::Black)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Style>("Style")
        ._element("StyleNormal", D::ClassType::StyleNormal)
        ._element("StyleItalic", D::ClassType::StyleItalic)
        ._element("StyleOblique", D::ClassType::StyleOblique)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Stretch>("Stretch")
        ._element("UltraCondensed", D::ClassType::UltraCondensed)
        ._element("ExtraCondensed", D::ClassType::ExtraCondensed)
        ._element("Condensed", D::ClassType::Condensed)
        ._element("SemiCondensed", D::ClassType::SemiCondensed)
        ._element("Unstretched", D::ClassType::Unstretched)
        ._element("SemiExpanded", D::ClassType::SemiExpanded)
        ._element("Expanded", D::ClassType::Expanded)
        ._element("ExtraExpanded", D::ClassType::ExtraExpanded)
        ._element("UltraExpanded", D::ClassType::UltraExpanded)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Capitalization>("Capitalization")
        ._element("MixedCase", D::ClassType::MixedCase)
        ._element("AllUppercase", D::ClassType::AllUppercase)
        ._element("AllLowercase", D::ClassType::AllLowercase)
        ._element("SmallCaps", D::ClassType::SmallCaps)
        ._element("Capitalize", D::ClassType::Capitalize)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SpacingType>("SpacingType")
        ._element("PercentageSpacing", D::ClassType::PercentageSpacing)
        ._element("AbsoluteSpacing", D::ClassType::AbsoluteSpacing)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ResolveProperties>("ResolveProperties")
        ._element("FamilyResolved", D::ClassType::FamilyResolved)
        ._element("SizeResolved", D::ClassType::SizeResolved)
        ._element("StyleHintResolved", D::ClassType::StyleHintResolved)
        ._element("StyleStrategyResolved", D::ClassType::StyleStrategyResolved)
        ._element("WeightResolved", D::ClassType::WeightResolved)
        ._element("StyleResolved", D::ClassType::StyleResolved)
        ._element("UnderlineResolved", D::ClassType::UnderlineResolved)
        ._element("OverlineResolved", D::ClassType::OverlineResolved)
        ._element("StrikeOutResolved", D::ClassType::StrikeOutResolved)
        ._element("FixedPitchResolved", D::ClassType::FixedPitchResolved)
        ._element("StretchResolved", D::ClassType::StretchResolved)
        ._element("KerningResolved", D::ClassType::KerningResolved)
        ._element("CapitalizationResolved", D::ClassType::CapitalizationResolved)
        ._element("LetterSpacingResolved", D::ClassType::LetterSpacingResolved)
        ._element("WordSpacingResolved", D::ClassType::WordSpacingResolved)
        ._element("HintingPreferenceResolved", D::ClassType::HintingPreferenceResolved)
        ._element("StyleNameResolved", D::ClassType::StyleNameResolved)
        ._element("AllPropertiesResolved", D::ClassType::AllPropertiesResolved)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QFont & (*)(cpgf::GMetaSelf, const QFont &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QFont & (*) (QFont *, const QFont &))&opErAToRWrapper_QFont__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QFont &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QFont *, const QFont &))&opErAToRWrapper_QFont__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QFont &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QFont *, const QFont &))&opErAToRWrapper_QFont__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QFont &)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QFont *, const QFont &))&opErAToRWrapper_QFont__opLess, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
