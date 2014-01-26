// Auto generated file, don't modify.

#ifndef __META_QTWIDGETS_QSIZEPOLICY_H
#define __META_QTWIDGETS_QSIZEPOLICY_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qsizepolicy(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QSizePolicy &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QSizePolicy &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QSizePolicy &)>(mopHolder << mopHolder);
}


inline bool opErAToRWrapper_QSizePolicy__opEqual(const QSizePolicy * self, const QSizePolicy & s) {
    return (*self) == s;
}
inline bool opErAToRWrapper_QSizePolicy__opNotEqual(const QSizePolicy * self, const QSizePolicy & s) {
    return (*self) != s;
}


template <typename D>
void buildMetaClass_QSizePolicy(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QSizePolicy::Policy, QSizePolicy::Policy, QSizePolicy::ControlType)>()
        ._default(copyVariantFromCopyable(QSizePolicy::DefaultType))
    ;
    _d.CPGF_MD_TEMPLATE _method("horizontalPolicy", &D::ClassType::horizontalPolicy);
    _d.CPGF_MD_TEMPLATE _method("verticalPolicy", &D::ClassType::verticalPolicy);
    _d.CPGF_MD_TEMPLATE _method("controlType", &D::ClassType::controlType);
    _d.CPGF_MD_TEMPLATE _method("setHorizontalPolicy", &D::ClassType::setHorizontalPolicy);
    _d.CPGF_MD_TEMPLATE _method("setVerticalPolicy", &D::ClassType::setVerticalPolicy);
    _d.CPGF_MD_TEMPLATE _method("setControlType", &D::ClassType::setControlType);
    _d.CPGF_MD_TEMPLATE _method("expandingDirections", &D::ClassType::expandingDirections);
    _d.CPGF_MD_TEMPLATE _method("setHeightForWidth", &D::ClassType::setHeightForWidth);
    _d.CPGF_MD_TEMPLATE _method("hasHeightForWidth", &D::ClassType::hasHeightForWidth);
    _d.CPGF_MD_TEMPLATE _method("setWidthForHeight", &D::ClassType::setWidthForHeight);
    _d.CPGF_MD_TEMPLATE _method("hasWidthForHeight", &D::ClassType::hasWidthForHeight);
    _d.CPGF_MD_TEMPLATE _method("horizontalStretch", &D::ClassType::horizontalStretch);
    _d.CPGF_MD_TEMPLATE _method("verticalStretch", &D::ClassType::verticalStretch);
    _d.CPGF_MD_TEMPLATE _method("setHorizontalStretch", &D::ClassType::setHorizontalStretch);
    _d.CPGF_MD_TEMPLATE _method("setVerticalStretch", &D::ClassType::setVerticalStretch);
    _d.CPGF_MD_TEMPLATE _method("retainSizeWhenHidden", &D::ClassType::retainSizeWhenHidden);
    _d.CPGF_MD_TEMPLATE _method("setRetainSizeWhenHidden", &D::ClassType::setRetainSizeWhenHidden);
    _d.CPGF_MD_TEMPLATE _method("transpose", &D::ClassType::transpose);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::PolicyFlag>("PolicyFlag")
        ._element("GrowFlag", D::ClassType::GrowFlag)
        ._element("ExpandFlag", D::ClassType::ExpandFlag)
        ._element("ShrinkFlag", D::ClassType::ShrinkFlag)
        ._element("IgnoreFlag", D::ClassType::IgnoreFlag)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Policy>("Policy")
        ._element("Fixed", D::ClassType::Fixed)
        ._element("Minimum", D::ClassType::Minimum)
        ._element("Maximum", D::ClassType::Maximum)
        ._element("Preferred", D::ClassType::Preferred)
        ._element("MinimumExpanding", D::ClassType::MinimumExpanding)
        ._element("Expanding", D::ClassType::Expanding)
        ._element("Ignored", D::ClassType::Ignored)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ControlType>("ControlType")
        ._element("DefaultType", D::ClassType::DefaultType)
        ._element("ButtonBox", D::ClassType::ButtonBox)
        ._element("CheckBox", D::ClassType::CheckBox)
        ._element("ComboBox", D::ClassType::ComboBox)
        ._element("Frame", D::ClassType::Frame)
        ._element("GroupBox", D::ClassType::GroupBox)
        ._element("Label", D::ClassType::Label)
        ._element("Line", D::ClassType::Line)
        ._element("LineEdit", D::ClassType::LineEdit)
        ._element("PushButton", D::ClassType::PushButton)
        ._element("RadioButton", D::ClassType::RadioButton)
        ._element("Slider", D::ClassType::Slider)
        ._element("SpinBox", D::ClassType::SpinBox)
        ._element("TabWidget", D::ClassType::TabWidget)
        ._element("ToolButton", D::ClassType::ToolButton)
    ;
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QSizePolicy &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QSizePolicy *, const QSizePolicy &))&opErAToRWrapper_QSizePolicy__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QSizePolicy &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QSizePolicy *, const QSizePolicy &))&opErAToRWrapper_QSizePolicy__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
    {
        GDefineMetaClass<QFlags<typename QSizePolicy::ControlType > > _t_d = GDefineMetaClass<QFlags<typename QSizePolicy::ControlType > >::lazyDeclare("ControlTypes", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QSizePolicy::ControlType > >, typename QSizePolicy::ControlType >);
        _d._class(_t_d);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
