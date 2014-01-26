// Auto generated file, don't modify.

#ifndef __META_QTGUI_QTEXTOPTION_H
#define __META_QTGUI_QTEXTOPTION_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


inline QTextOption & opErAToRWrapper_QTextOption__opAssign(QTextOption * self, const QTextOption & o) {
    return (*self) = o;
}


inline bool opErAToRWrapper_QTextOption_Tab__opEqual(const QTextOption::Tab * self, const QTextOption::Tab& other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QTextOption_Tab__opNotEqual(const QTextOption::Tab * self, const QTextOption::Tab& other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QTextOption(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (Qt::Alignment)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QTextOption &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setAlignment", &D::ClassType::setAlignment);
    _d.CPGF_MD_TEMPLATE _method("alignment", &D::ClassType::alignment);
    _d.CPGF_MD_TEMPLATE _method("setTextDirection", &D::ClassType::setTextDirection);
    _d.CPGF_MD_TEMPLATE _method("textDirection", &D::ClassType::textDirection);
    _d.CPGF_MD_TEMPLATE _method("setWrapMode", &D::ClassType::setWrapMode);
    _d.CPGF_MD_TEMPLATE _method("wrapMode", &D::ClassType::wrapMode);
    _d.CPGF_MD_TEMPLATE _method("setFlags", &D::ClassType::setFlags);
    _d.CPGF_MD_TEMPLATE _method("flags", &D::ClassType::flags);
    _d.CPGF_MD_TEMPLATE _method("setTabStop", &D::ClassType::setTabStop);
    _d.CPGF_MD_TEMPLATE _method("tabStop", &D::ClassType::tabStop);
    _d.CPGF_MD_TEMPLATE _method("setTabArray", &D::ClassType::setTabArray);
    _d.CPGF_MD_TEMPLATE _method("tabArray", &D::ClassType::tabArray);
    _d.CPGF_MD_TEMPLATE _method("setTabs", &D::ClassType::setTabs);
    _d.CPGF_MD_TEMPLATE _method("tabs", &D::ClassType::tabs);
    _d.CPGF_MD_TEMPLATE _method("setUseDesignMetrics", &D::ClassType::setUseDesignMetrics);
    _d.CPGF_MD_TEMPLATE _method("useDesignMetrics", &D::ClassType::useDesignMetrics);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::TabType>("TabType")
        ._element("LeftTab", D::ClassType::LeftTab)
        ._element("RightTab", D::ClassType::RightTab)
        ._element("CenterTab", D::ClassType::CenterTab)
        ._element("DelimiterTab", D::ClassType::DelimiterTab)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::WrapMode>("WrapMode")
        ._element("NoWrap", D::ClassType::NoWrap)
        ._element("WordWrap", D::ClassType::WordWrap)
        ._element("ManualWrap", D::ClassType::ManualWrap)
        ._element("WrapAnywhere", D::ClassType::WrapAnywhere)
        ._element("WrapAtWordBoundaryOrAnywhere", D::ClassType::WrapAtWordBoundaryOrAnywhere)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Flag>("Flag")
        ._element("ShowTabsAndSpaces", D::ClassType::ShowTabsAndSpaces)
        ._element("ShowLineAndParagraphSeparators", D::ClassType::ShowLineAndParagraphSeparators)
        ._element("AddSpaceForLineAndParagraphSeparators", D::ClassType::AddSpaceForLineAndParagraphSeparators)
        ._element("SuppressColors", D::ClassType::SuppressColors)
        ._element("IncludeTrailingSpaces", D::ClassType::IncludeTrailingSpaces)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QTextOption & (*)(cpgf::GMetaSelf, const QTextOption &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QTextOption & (*) (QTextOption *, const QTextOption &))&opErAToRWrapper_QTextOption__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    {
        GDefineMetaClass<QFlags<typename QTextOption::Flag > > _t_d = GDefineMetaClass<QFlags<typename QTextOption::Flag > >::lazyDeclare("Flags", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QTextOption::Flag > >, typename QTextOption::Flag >);
        _d._class(_t_d);
    }
    {
        GDefineMetaClass<QTextOption::Tab> _nd = GDefineMetaClass<QTextOption::Tab>::declare("Tab");
        _nd.CPGF_MD_TEMPLATE _constructor<void * ()>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (qreal, QTextOption::TabType, QChar)>()
            ._default(copyVariantFromCopyable(QChar()))
        ;
        _nd.CPGF_MD_TEMPLATE _field("position", &QTextOption::Tab::position);
        _nd.CPGF_MD_TEMPLATE _field("type", &QTextOption::Tab::type);
        _nd.CPGF_MD_TEMPLATE _field("delimiter", &QTextOption::Tab::delimiter);
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTextOption::Tab&)>(mopHolder == mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QTextOption::Tab *, const QTextOption::Tab&))&opErAToRWrapper_QTextOption_Tab__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTextOption::Tab&)>(mopHolder != mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QTextOption::Tab *, const QTextOption::Tab&))&opErAToRWrapper_QTextOption_Tab__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
