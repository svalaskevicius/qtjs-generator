// Auto generated file, don't modify.

#ifndef __META_QTGUI_QFONTDATABASE_H
#define __META_QTGUI_QFONTDATABASE_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


template <typename D>
void buildMetaClass_QFontDatabase(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("standardSizes", &D::ClassType::standardSizes);
    _d.CPGF_MD_TEMPLATE _method("writingSystemName", &D::ClassType::writingSystemName);
    _d.CPGF_MD_TEMPLATE _method("writingSystemSample", &D::ClassType::writingSystemSample);
    _d.CPGF_MD_TEMPLATE _method("addApplicationFont", &D::ClassType::addApplicationFont, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("addApplicationFontFromData", &D::ClassType::addApplicationFontFromData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("applicationFontFamilies", &D::ClassType::applicationFontFamilies);
    _d.CPGF_MD_TEMPLATE _method("removeApplicationFont", &D::ClassType::removeApplicationFont);
    _d.CPGF_MD_TEMPLATE _method("removeAllApplicationFonts", &D::ClassType::removeAllApplicationFonts);
    _d.CPGF_MD_TEMPLATE _method("systemFont", &D::ClassType::systemFont);
    _d.CPGF_MD_TEMPLATE _method("writingSystems", (QList<QFontDatabase::WritingSystem> (D::ClassType::*) () const)&D::ClassType::writingSystems);
    _d.CPGF_MD_TEMPLATE _method("writingSystems", (QList<QFontDatabase::WritingSystem> (D::ClassType::*) (const QString &) const)&D::ClassType::writingSystems, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("families", &D::ClassType::families)
        ._default(copyVariantFromCopyable(QFontDatabase::Any))
    ;
    _d.CPGF_MD_TEMPLATE _method("styles", &D::ClassType::styles, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("pointSizes", &D::ClassType::pointSizes, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _method("smoothSizes", &D::ClassType::smoothSizes, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("styleString", (QString (D::ClassType::*) (const QFont &))&D::ClassType::styleString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("styleString", (QString (D::ClassType::*) (const QFontInfo &))&D::ClassType::styleString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("font", &D::ClassType::font, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("isBitmapScalable", &D::ClassType::isBitmapScalable, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _method("isSmoothlyScalable", &D::ClassType::isSmoothlyScalable, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _method("isScalable", &D::ClassType::isScalable, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _method("isFixedPitch", &D::ClassType::isFixedPitch, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _method("italic", &D::ClassType::italic, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("bold", &D::ClassType::bold, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("weight", &D::ClassType::weight, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("hasFamily", &D::ClassType::hasFamily, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::WritingSystem>("WritingSystem")
        ._element("Any", D::ClassType::Any)
        ._element("Latin", D::ClassType::Latin)
        ._element("Greek", D::ClassType::Greek)
        ._element("Cyrillic", D::ClassType::Cyrillic)
        ._element("Armenian", D::ClassType::Armenian)
        ._element("Hebrew", D::ClassType::Hebrew)
        ._element("Arabic", D::ClassType::Arabic)
        ._element("Syriac", D::ClassType::Syriac)
        ._element("Thaana", D::ClassType::Thaana)
        ._element("Devanagari", D::ClassType::Devanagari)
        ._element("Bengali", D::ClassType::Bengali)
        ._element("Gurmukhi", D::ClassType::Gurmukhi)
        ._element("Gujarati", D::ClassType::Gujarati)
        ._element("Oriya", D::ClassType::Oriya)
        ._element("Tamil", D::ClassType::Tamil)
        ._element("Telugu", D::ClassType::Telugu)
        ._element("Kannada", D::ClassType::Kannada)
        ._element("Malayalam", D::ClassType::Malayalam)
        ._element("Sinhala", D::ClassType::Sinhala)
        ._element("Thai", D::ClassType::Thai)
        ._element("Lao", D::ClassType::Lao)
        ._element("Tibetan", D::ClassType::Tibetan)
        ._element("Myanmar", D::ClassType::Myanmar)
        ._element("Georgian", D::ClassType::Georgian)
        ._element("Khmer", D::ClassType::Khmer)
        ._element("SimplifiedChinese", D::ClassType::SimplifiedChinese)
        ._element("TraditionalChinese", D::ClassType::TraditionalChinese)
        ._element("Japanese", D::ClassType::Japanese)
        ._element("Korean", D::ClassType::Korean)
        ._element("Vietnamese", D::ClassType::Vietnamese)
        ._element("Symbol", D::ClassType::Symbol)
        ._element("Other", D::ClassType::Other)
        ._element("Ogham", D::ClassType::Ogham)
        ._element("Runic", D::ClassType::Runic)
        ._element("Nko", D::ClassType::Nko)
        ._element("WritingSystemsCount", D::ClassType::WritingSystemsCount)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SystemFont>("SystemFont")
        ._element("GeneralFont", D::ClassType::GeneralFont)
        ._element("FixedFont", D::ClassType::FixedFont)
        ._element("TitleFont", D::ClassType::TitleFont)
        ._element("SmallestReadableFont", D::ClassType::SmallestReadableFont)
    ;
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
