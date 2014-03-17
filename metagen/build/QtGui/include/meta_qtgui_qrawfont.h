// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QRAWFONT_H
#define CPGF_META_QTGUI_QRAWFONT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


inline QRawFont & opErAToRWrapper_QRawFont__opAssign(QRawFont * self, const QRawFont & other) {
    return (*self) = other;
}
inline bool opErAToRWrapper_QRawFont__opEqual(const QRawFont * self, const QRawFont & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QRawFont__opNotEqual(const QRawFont * self, const QRawFont & other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QRawFont(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, qreal, QFont::HintingPreference)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QFont::PreferDefaultHinting))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QByteArray &, qreal, QFont::HintingPreference)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QFont::PreferDefaultHinting))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QRawFont &)>();
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("familyName", &D::ClassType::familyName);
    _d.CPGF_MD_TEMPLATE _method("styleName", &D::ClassType::styleName);
    _d.CPGF_MD_TEMPLATE _method("style", &D::ClassType::style);
    _d.CPGF_MD_TEMPLATE _method("weight", &D::ClassType::weight);
    _d.CPGF_MD_TEMPLATE _method("glyphIndexesForString", &D::ClassType::glyphIndexesForString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("advancesForGlyphIndexes", (QVector< QPointF > (D::ClassType::*) (const QVector< quint32 > &) const)&D::ClassType::advancesForGlyphIndexes, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("advancesForGlyphIndexes", (QVector< QPointF > (D::ClassType::*) (const QVector< quint32 > &, QRawFont::LayoutFlags) const)&D::ClassType::advancesForGlyphIndexes, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("glyphIndexesForChars", &D::ClassType::glyphIndexesForChars);
    _d.CPGF_MD_TEMPLATE _method("advancesForGlyphIndexes", (bool (D::ClassType::*) (const quint32 *, QPointF *, int) const)&D::ClassType::advancesForGlyphIndexes);
    _d.CPGF_MD_TEMPLATE _method("advancesForGlyphIndexes", (bool (D::ClassType::*) (const quint32 *, QPointF *, int, QRawFont::LayoutFlags) const)&D::ClassType::advancesForGlyphIndexes);
    _d.CPGF_MD_TEMPLATE _method("alphaMapForGlyph", &D::ClassType::alphaMapForGlyph, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QTransform()))
        ._default(copyVariantFromCopyable(QRawFont::SubPixelAntialiasing))
    ;
    _d.CPGF_MD_TEMPLATE _method("pathForGlyph", &D::ClassType::pathForGlyph);
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("setPixelSize", &D::ClassType::setPixelSize);
    _d.CPGF_MD_TEMPLATE _method("pixelSize", &D::ClassType::pixelSize);
    _d.CPGF_MD_TEMPLATE _method("hintingPreference", &D::ClassType::hintingPreference);
    _d.CPGF_MD_TEMPLATE _method("ascent", &D::ClassType::ascent);
    _d.CPGF_MD_TEMPLATE _method("descent", &D::ClassType::descent);
    _d.CPGF_MD_TEMPLATE _method("leading", &D::ClassType::leading);
    _d.CPGF_MD_TEMPLATE _method("xHeight", &D::ClassType::xHeight);
    _d.CPGF_MD_TEMPLATE _method("averageCharWidth", &D::ClassType::averageCharWidth);
    _d.CPGF_MD_TEMPLATE _method("maxCharWidth", &D::ClassType::maxCharWidth);
    _d.CPGF_MD_TEMPLATE _method("lineThickness", &D::ClassType::lineThickness);
    _d.CPGF_MD_TEMPLATE _method("underlinePosition", &D::ClassType::underlinePosition);
    _d.CPGF_MD_TEMPLATE _method("unitsPerEm", &D::ClassType::unitsPerEm);
    _d.CPGF_MD_TEMPLATE _method("loadFromFile", &D::ClassType::loadFromFile, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("loadFromData", &D::ClassType::loadFromData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("supportsCharacter", (bool (D::ClassType::*) (uint) const)&D::ClassType::supportsCharacter);
    _d.CPGF_MD_TEMPLATE _method("supportsCharacter", (bool (D::ClassType::*) (QChar) const)&D::ClassType::supportsCharacter);
    _d.CPGF_MD_TEMPLATE _method("supportedWritingSystems", &D::ClassType::supportedWritingSystems);
    _d.CPGF_MD_TEMPLATE _method("fontTable", &D::ClassType::fontTable);
    _d.CPGF_MD_TEMPLATE _method("fromFont", &D::ClassType::fromFont, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QFontDatabase::Any))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::AntialiasingType>("AntialiasingType")
        ._element("PixelAntialiasing", D::ClassType::PixelAntialiasing)
        ._element("SubPixelAntialiasing", D::ClassType::SubPixelAntialiasing)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::LayoutFlag>("LayoutFlag")
        ._element("SeparateAdvances", D::ClassType::SeparateAdvances)
        ._element("KernedAdvances", D::ClassType::KernedAdvances)
        ._element("UseDesignMetrics", D::ClassType::UseDesignMetrics)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QRawFont & (*)(cpgf::GMetaSelf, const QRawFont &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QRawFont & (*) (QRawFont *, const QRawFont &))&opErAToRWrapper_QRawFont__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QRawFont &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QRawFont *, const QRawFont &))&opErAToRWrapper_QRawFont__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QRawFont &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QRawFont *, const QRawFont &))&opErAToRWrapper_QRawFont__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    {
        GDefineMetaClass<QFlags<typename QRawFont::LayoutFlag > > _t_d = GDefineMetaClass<QFlags<typename QRawFont::LayoutFlag > >::lazyDeclare("LayoutFlags", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QRawFont::LayoutFlag > >, typename QRawFont::LayoutFlag >);
        _d._class(_t_d);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
