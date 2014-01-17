// Auto generated file, don't modify.

#ifndef __META_QTGUI_QSTATICTEXT_H
#define __META_QTGUI_QSTATICTEXT_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


inline QStaticText & opErAToRWrapper_QStaticText__opAssign(QStaticText * self, const QStaticText & __arg0) {
    return (*self) = __arg0;
}
inline bool opErAToRWrapper_QStaticText__opEqual(const QStaticText * self, const QStaticText & __arg0) {
    return (*self) == __arg0;
}
inline bool opErAToRWrapper_QStaticText__opNotEqual(const QStaticText * self, const QStaticText & __arg0) {
    return (*self) != __arg0;
}


template <typename D>
void buildMetaClass_QStaticText(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStaticText &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("setText", &D::ClassType::setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("setTextFormat", &D::ClassType::setTextFormat);
    _d.CPGF_MD_TEMPLATE _method("textFormat", &D::ClassType::textFormat);
    _d.CPGF_MD_TEMPLATE _method("setTextWidth", &D::ClassType::setTextWidth);
    _d.CPGF_MD_TEMPLATE _method("textWidth", &D::ClassType::textWidth);
    _d.CPGF_MD_TEMPLATE _method("setTextOption", &D::ClassType::setTextOption, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("textOption", &D::ClassType::textOption);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("prepare", &D::ClassType::prepare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QFont()))
        ._default(copyVariantFromCopyable(QTransform()))
    ;
    _d.CPGF_MD_TEMPLATE _method("setPerformanceHint", &D::ClassType::setPerformanceHint);
    _d.CPGF_MD_TEMPLATE _method("performanceHint", &D::ClassType::performanceHint);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::PerformanceHint>("PerformanceHint")
        ._element("ModerateCaching", D::ClassType::ModerateCaching)
        ._element("AggressiveCaching", D::ClassType::AggressiveCaching)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QStaticText & (*)(cpgf::GMetaSelf, const QStaticText &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QStaticText & (*) (QStaticText *, const QStaticText &))&opErAToRWrapper_QStaticText__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QStaticText &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QStaticText *, const QStaticText &))&opErAToRWrapper_QStaticText__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QStaticText &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QStaticText *, const QStaticText &))&opErAToRWrapper_QStaticText__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
