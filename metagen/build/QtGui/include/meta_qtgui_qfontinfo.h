// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QFONTINFO_H
#define CPGF_META_QTGUI_QFONTINFO_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


inline QFontInfo & opErAToRWrapper_QFontInfo__opAssign(QFontInfo * self, const QFontInfo & __arg0) {
    return (*self) = __arg0;
}


template <typename D>
void buildMetaClass_QFontInfo(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QFont &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QFontInfo &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("family", &D::ClassType::family);
    _d.CPGF_MD_TEMPLATE _method("styleName", &D::ClassType::styleName);
    _d.CPGF_MD_TEMPLATE _method("pixelSize", &D::ClassType::pixelSize);
    _d.CPGF_MD_TEMPLATE _method("pointSize", &D::ClassType::pointSize);
    _d.CPGF_MD_TEMPLATE _method("pointSizeF", &D::ClassType::pointSizeF);
    _d.CPGF_MD_TEMPLATE _method("italic", &D::ClassType::italic);
    _d.CPGF_MD_TEMPLATE _method("style", &D::ClassType::style);
    _d.CPGF_MD_TEMPLATE _method("weight", &D::ClassType::weight);
    _d.CPGF_MD_TEMPLATE _method("bold", &D::ClassType::bold);
    _d.CPGF_MD_TEMPLATE _method("underline", &D::ClassType::underline);
    _d.CPGF_MD_TEMPLATE _method("overline", &D::ClassType::overline);
    _d.CPGF_MD_TEMPLATE _method("strikeOut", &D::ClassType::strikeOut);
    _d.CPGF_MD_TEMPLATE _method("fixedPitch", &D::ClassType::fixedPitch);
    _d.CPGF_MD_TEMPLATE _method("styleHint", &D::ClassType::styleHint);
    _d.CPGF_MD_TEMPLATE _method("rawMode", &D::ClassType::rawMode);
    _d.CPGF_MD_TEMPLATE _method("exactMatch", &D::ClassType::exactMatch);
    _d.CPGF_MD_TEMPLATE _operator<QFontInfo & (*)(cpgf::GMetaSelf, const QFontInfo &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QFontInfo & (*) (QFontInfo *, const QFontInfo &))&opErAToRWrapper_QFontInfo__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
