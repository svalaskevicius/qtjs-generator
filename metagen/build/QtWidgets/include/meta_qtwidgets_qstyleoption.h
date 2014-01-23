// Auto generated file, don't modify.

#ifndef __META_QTWIDGETS_QSTYLEOPTION_H
#define __META_QTWIDGETS_QSTYLEOPTION_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qstyleoption(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QStyleOption::OptionType &)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QStyleOption &)>(mopHolder << mopHolder);
}


template <typename D>
void buildMetaClass_QStyleHintReturn(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int)>()
        ._default(copyVariantFromCopyable(QStyleHintReturn::SH_Default))
        ._default(copyVariantFromCopyable(QStyleOption::Version))
    ;
    _d.CPGF_MD_TEMPLATE _field("version", &D::ClassType::version);
    _d.CPGF_MD_TEMPLATE _field("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::HintReturnType>("HintReturnType")
        ._element("SH_Default", D::ClassType::SH_Default)
        ._element("SH_Mask", D::ClassType::SH_Mask)
        ._element("SH_Variant", D::ClassType::SH_Variant)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
}


template <typename D>
void buildMetaClass_QStyleHintReturnMask(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("region", &D::ClassType::region);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
}


template <typename D>
void buildMetaClass_QStyleHintReturnVariant(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("variant", &D::ClassType::variant);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
}


inline QStyleOption & opErAToRWrapper_QStyleOption__opAssign(QStyleOption * self, const QStyleOption & other) {
    return (*self) = other;
}


template <typename D>
void buildMetaClass_QStyleOption(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int)>()
        ._default(copyVariantFromCopyable(QStyleOption::SO_Default))
        ._default(copyVariantFromCopyable(QStyleOption::Version))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOption &)>();
    _d.CPGF_MD_TEMPLATE _field("version", &D::ClassType::version);
    _d.CPGF_MD_TEMPLATE _field("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _field("state", &D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _field("direction", &D::ClassType::direction);
    _d.CPGF_MD_TEMPLATE _field("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _field("fontMetrics", &D::ClassType::fontMetrics);
    _d.CPGF_MD_TEMPLATE _field("palette", &D::ClassType::palette);
    _d.CPGF_MD_TEMPLATE _field("styleObject", &D::ClassType::styleObject);
    _d.CPGF_MD_TEMPLATE _method("init", &D::ClassType::init);
    _d.CPGF_MD_TEMPLATE _method("initFrom", &D::ClassType::initFrom);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::OptionType>("OptionType")
        ._element("SO_Default", D::ClassType::SO_Default)
        ._element("SO_FocusRect", D::ClassType::SO_FocusRect)
        ._element("SO_Button", D::ClassType::SO_Button)
        ._element("SO_Tab", D::ClassType::SO_Tab)
        ._element("SO_MenuItem", D::ClassType::SO_MenuItem)
        ._element("SO_Frame", D::ClassType::SO_Frame)
        ._element("SO_ProgressBar", D::ClassType::SO_ProgressBar)
        ._element("SO_ToolBox", D::ClassType::SO_ToolBox)
        ._element("SO_Header", D::ClassType::SO_Header)
        ._element("SO_DockWidget", D::ClassType::SO_DockWidget)
        ._element("SO_ViewItem", D::ClassType::SO_ViewItem)
        ._element("SO_TabWidgetFrame", D::ClassType::SO_TabWidgetFrame)
        ._element("SO_TabBarBase", D::ClassType::SO_TabBarBase)
        ._element("SO_RubberBand", D::ClassType::SO_RubberBand)
        ._element("SO_ToolBar", D::ClassType::SO_ToolBar)
        ._element("SO_GraphicsItem", D::ClassType::SO_GraphicsItem)
        ._element("SO_Complex", D::ClassType::SO_Complex)
        ._element("SO_Slider", D::ClassType::SO_Slider)
        ._element("SO_SpinBox", D::ClassType::SO_SpinBox)
        ._element("SO_ToolButton", D::ClassType::SO_ToolButton)
        ._element("SO_ComboBox", D::ClassType::SO_ComboBox)
        ._element("SO_TitleBar", D::ClassType::SO_TitleBar)
        ._element("SO_GroupBox", D::ClassType::SO_GroupBox)
        ._element("SO_SizeGrip", D::ClassType::SO_SizeGrip)
        ._element("SO_CustomBase", D::ClassType::SO_CustomBase)
        ._element("SO_ComplexCustomBase", D::ClassType::SO_ComplexCustomBase)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QStyleOption & (*)(cpgf::GMetaSelf, const QStyleOption &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QStyleOption & (*) (QStyleOption *, const QStyleOption &))&opErAToRWrapper_QStyleOption__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


template <typename D>
void buildMetaClass_QStyleOptionButton(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionButton &)>();
    _d.CPGF_MD_TEMPLATE _field("features", &D::ClassType::features);
    _d.CPGF_MD_TEMPLATE _field("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _field("icon", &D::ClassType::icon);
    _d.CPGF_MD_TEMPLATE _field("iconSize", &D::ClassType::iconSize);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ButtonFeature>("ButtonFeature")
        ._element("None", D::ClassType::None)
        ._element("Flat", D::ClassType::Flat)
        ._element("HasMenu", D::ClassType::HasMenu)
        ._element("DefaultButton", D::ClassType::DefaultButton)
        ._element("AutoDefaultButton", D::ClassType::AutoDefaultButton)
        ._element("CommandLinkButton", D::ClassType::CommandLinkButton)
    ;
    {
        GDefineMetaClass<QFlags<typename D::ClassType::ButtonFeature > > _t_d = GDefineMetaClass<QFlags<typename D::ClassType::ButtonFeature > >::lazyDeclare("ButtonFeatures", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename D::ClassType::ButtonFeature > >, typename D::ClassType::ButtonFeature >);
        _d._class(_t_d);
    }
}


template <typename D>
void buildMetaClass_QStyleOptionComboBox(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionComboBox &)>();
    _d.CPGF_MD_TEMPLATE _field("editable", &D::ClassType::editable);
    _d.CPGF_MD_TEMPLATE _field("popupRect", &D::ClassType::popupRect);
    _d.CPGF_MD_TEMPLATE _field("frame", &D::ClassType::frame);
    _d.CPGF_MD_TEMPLATE _field("currentText", &D::ClassType::currentText);
    _d.CPGF_MD_TEMPLATE _field("currentIcon", &D::ClassType::currentIcon);
    _d.CPGF_MD_TEMPLATE _field("iconSize", &D::ClassType::iconSize);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
}


template <typename D>
void buildMetaClass_QStyleOptionComplex(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int)>()
        ._default(copyVariantFromCopyable(QStyleOption::SO_Complex))
        ._default(copyVariantFromCopyable(QStyleOptionComplex::Version))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionComplex &)>();
    _d.CPGF_MD_TEMPLATE _field("subControls", &D::ClassType::subControls);
    _d.CPGF_MD_TEMPLATE _field("activeSubControls", &D::ClassType::activeSubControls);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
}


template <typename D>
void buildMetaClass_QStyleOptionDockWidget(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionDockWidget &)>();
    _d.CPGF_MD_TEMPLATE _field("title", &D::ClassType::title);
    _d.CPGF_MD_TEMPLATE _field("closable", &D::ClassType::closable);
    _d.CPGF_MD_TEMPLATE _field("movable", &D::ClassType::movable);
    _d.CPGF_MD_TEMPLATE _field("floatable", &D::ClassType::floatable);
    _d.CPGF_MD_TEMPLATE _field("verticalTitleBar", &D::ClassType::verticalTitleBar);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
}


template <typename D>
void buildMetaClass_QStyleOptionFocusRect(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionFocusRect &)>();
    _d.CPGF_MD_TEMPLATE _field("backgroundColor", &D::ClassType::backgroundColor);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
}


template <typename D>
void buildMetaClass_QStyleOptionFrame(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionFrame &)>();
    _d.CPGF_MD_TEMPLATE _field("lineWidth", &D::ClassType::lineWidth);
    _d.CPGF_MD_TEMPLATE _field("midLineWidth", &D::ClassType::midLineWidth);
    _d.CPGF_MD_TEMPLATE _field("features", &D::ClassType::features);
    _d.CPGF_MD_TEMPLATE _field("frameShape", &D::ClassType::frameShape);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::FrameFeature>("FrameFeature")
        ._element("None", D::ClassType::None)
        ._element("Flat", D::ClassType::Flat)
        ._element("Rounded", D::ClassType::Rounded)
    ;
    {
        GDefineMetaClass<QFlags<typename D::ClassType::FrameFeature > > _t_d = GDefineMetaClass<QFlags<typename D::ClassType::FrameFeature > >::lazyDeclare("FrameFeatures", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename D::ClassType::FrameFeature > >, typename D::ClassType::FrameFeature >);
        _d._class(_t_d);
    }
}


template <typename D>
void buildMetaClass_QStyleOptionGraphicsItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionGraphicsItem &)>();
    _d.CPGF_MD_TEMPLATE _field("exposedRect", &D::ClassType::exposedRect);
    _d.CPGF_MD_TEMPLATE _field("matrix", &D::ClassType::matrix);
    _d.CPGF_MD_TEMPLATE _field("levelOfDetail", &D::ClassType::levelOfDetail);
    _d.CPGF_MD_TEMPLATE _method("levelOfDetailFromTransform", &D::ClassType::levelOfDetailFromTransform, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
}


template <typename D>
void buildMetaClass_QStyleOptionGroupBox(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionGroupBox &)>();
    _d.CPGF_MD_TEMPLATE _field("features", &D::ClassType::features);
    _d.CPGF_MD_TEMPLATE _field("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _field("textAlignment", &D::ClassType::textAlignment);
    _d.CPGF_MD_TEMPLATE _field("textColor", &D::ClassType::textColor);
    _d.CPGF_MD_TEMPLATE _field("lineWidth", &D::ClassType::lineWidth);
    _d.CPGF_MD_TEMPLATE _field("midLineWidth", &D::ClassType::midLineWidth);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
}


template <typename D>
void buildMetaClass_QStyleOptionHeader(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionHeader &)>();
    _d.CPGF_MD_TEMPLATE _field("section", &D::ClassType::section);
    _d.CPGF_MD_TEMPLATE _field("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _field("textAlignment", &D::ClassType::textAlignment);
    _d.CPGF_MD_TEMPLATE _field("icon", &D::ClassType::icon);
    _d.CPGF_MD_TEMPLATE _field("iconAlignment", &D::ClassType::iconAlignment);
    _d.CPGF_MD_TEMPLATE _field("position", &D::ClassType::position);
    _d.CPGF_MD_TEMPLATE _field("selectedPosition", &D::ClassType::selectedPosition);
    _d.CPGF_MD_TEMPLATE _field("sortIndicator", &D::ClassType::sortIndicator);
    _d.CPGF_MD_TEMPLATE _field("orientation", &D::ClassType::orientation);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SectionPosition>("SectionPosition")
        ._element("Beginning", D::ClassType::Beginning)
        ._element("Middle", D::ClassType::Middle)
        ._element("End", D::ClassType::End)
        ._element("OnlyOneSection", D::ClassType::OnlyOneSection)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SelectedPosition>("SelectedPosition")
        ._element("NotAdjacent", D::ClassType::NotAdjacent)
        ._element("NextIsSelected", D::ClassType::NextIsSelected)
        ._element("PreviousIsSelected", D::ClassType::PreviousIsSelected)
        ._element("NextAndPreviousAreSelected", D::ClassType::NextAndPreviousAreSelected)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SortIndicator>("SortIndicator")
        ._element("None", D::ClassType::None)
        ._element("SortUp", D::ClassType::SortUp)
        ._element("SortDown", D::ClassType::SortDown)
    ;
}


template <typename D>
void buildMetaClass_QStyleOptionMenuItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionMenuItem &)>();
    _d.CPGF_MD_TEMPLATE _field("menuItemType", &D::ClassType::menuItemType);
    _d.CPGF_MD_TEMPLATE _field("checkType", &D::ClassType::checkType);
    _d.CPGF_MD_TEMPLATE _field("checked", &D::ClassType::checked);
    _d.CPGF_MD_TEMPLATE _field("menuHasCheckableItems", &D::ClassType::menuHasCheckableItems);
    _d.CPGF_MD_TEMPLATE _field("menuRect", &D::ClassType::menuRect);
    _d.CPGF_MD_TEMPLATE _field("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _field("icon", &D::ClassType::icon);
    _d.CPGF_MD_TEMPLATE _field("maxIconWidth", &D::ClassType::maxIconWidth);
    _d.CPGF_MD_TEMPLATE _field("tabWidth", &D::ClassType::tabWidth);
    _d.CPGF_MD_TEMPLATE _field("font", &D::ClassType::font);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::MenuItemType>("MenuItemType")
        ._element("Normal", D::ClassType::Normal)
        ._element("DefaultItem", D::ClassType::DefaultItem)
        ._element("Separator", D::ClassType::Separator)
        ._element("SubMenu", D::ClassType::SubMenu)
        ._element("Scroller", D::ClassType::Scroller)
        ._element("TearOff", D::ClassType::TearOff)
        ._element("Margin", D::ClassType::Margin)
        ._element("EmptyArea", D::ClassType::EmptyArea)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::CheckType>("CheckType")
        ._element("NotCheckable", D::ClassType::NotCheckable)
        ._element("Exclusive", D::ClassType::Exclusive)
        ._element("NonExclusive", D::ClassType::NonExclusive)
    ;
}


template <typename D>
void buildMetaClass_QStyleOptionProgressBar(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionProgressBar &)>();
    _d.CPGF_MD_TEMPLATE _field("minimum", &D::ClassType::minimum);
    _d.CPGF_MD_TEMPLATE _field("maximum", &D::ClassType::maximum);
    _d.CPGF_MD_TEMPLATE _field("progress", &D::ClassType::progress);
    _d.CPGF_MD_TEMPLATE _field("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _field("textAlignment", &D::ClassType::textAlignment);
    _d.CPGF_MD_TEMPLATE _field("textVisible", &D::ClassType::textVisible);
    _d.CPGF_MD_TEMPLATE _field("orientation", &D::ClassType::orientation);
    _d.CPGF_MD_TEMPLATE _field("invertedAppearance", &D::ClassType::invertedAppearance);
    _d.CPGF_MD_TEMPLATE _field("bottomToTop", &D::ClassType::bottomToTop);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
}


template <typename D>
void buildMetaClass_QStyleOptionRubberBand(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionRubberBand &)>();
    _d.CPGF_MD_TEMPLATE _field("shape", &D::ClassType::shape);
    _d.CPGF_MD_TEMPLATE _field("opaque", &D::ClassType::opaque);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
}


template <typename D>
void buildMetaClass_QStyleOptionSizeGrip(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionSizeGrip &)>();
    _d.CPGF_MD_TEMPLATE _field("corner", &D::ClassType::corner);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
}


template <typename D>
void buildMetaClass_QStyleOptionSlider(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionSlider &)>();
    _d.CPGF_MD_TEMPLATE _field("orientation", &D::ClassType::orientation);
    _d.CPGF_MD_TEMPLATE _field("minimum", &D::ClassType::minimum);
    _d.CPGF_MD_TEMPLATE _field("maximum", &D::ClassType::maximum);
    _d.CPGF_MD_TEMPLATE _field("tickPosition", &D::ClassType::tickPosition);
    _d.CPGF_MD_TEMPLATE _field("tickInterval", &D::ClassType::tickInterval);
    _d.CPGF_MD_TEMPLATE _field("upsideDown", &D::ClassType::upsideDown);
    _d.CPGF_MD_TEMPLATE _field("sliderPosition", &D::ClassType::sliderPosition);
    _d.CPGF_MD_TEMPLATE _field("sliderValue", &D::ClassType::sliderValue);
    _d.CPGF_MD_TEMPLATE _field("singleStep", &D::ClassType::singleStep);
    _d.CPGF_MD_TEMPLATE _field("pageStep", &D::ClassType::pageStep);
    _d.CPGF_MD_TEMPLATE _field("notchTarget", &D::ClassType::notchTarget);
    _d.CPGF_MD_TEMPLATE _field("dialWrapping", &D::ClassType::dialWrapping);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
}


template <typename D>
void buildMetaClass_QStyleOptionSpinBox(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionSpinBox &)>();
    _d.CPGF_MD_TEMPLATE _field("buttonSymbols", &D::ClassType::buttonSymbols);
    _d.CPGF_MD_TEMPLATE _field("stepEnabled", &D::ClassType::stepEnabled);
    _d.CPGF_MD_TEMPLATE _field("frame", &D::ClassType::frame);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
}


template <typename D>
void buildMetaClass_QStyleOptionTab(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionTab &)>();
    _d.CPGF_MD_TEMPLATE _field("shape", &D::ClassType::shape);
    _d.CPGF_MD_TEMPLATE _field("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _field("icon", &D::ClassType::icon);
    _d.CPGF_MD_TEMPLATE _field("row", &D::ClassType::row);
    _d.CPGF_MD_TEMPLATE _field("position", &D::ClassType::position);
    _d.CPGF_MD_TEMPLATE _field("selectedPosition", &D::ClassType::selectedPosition);
    _d.CPGF_MD_TEMPLATE _field("cornerWidgets", &D::ClassType::cornerWidgets);
    _d.CPGF_MD_TEMPLATE _field("iconSize", &D::ClassType::iconSize);
    _d.CPGF_MD_TEMPLATE _field("documentMode", &D::ClassType::documentMode);
    _d.CPGF_MD_TEMPLATE _field("leftButtonSize", &D::ClassType::leftButtonSize);
    _d.CPGF_MD_TEMPLATE _field("rightButtonSize", &D::ClassType::rightButtonSize);
    _d.CPGF_MD_TEMPLATE _field("features", &D::ClassType::features);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::TabPosition>("TabPosition")
        ._element("Beginning", D::ClassType::Beginning)
        ._element("Middle", D::ClassType::Middle)
        ._element("End", D::ClassType::End)
        ._element("OnlyOneTab", D::ClassType::OnlyOneTab)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SelectedPosition>("SelectedPosition")
        ._element("NotAdjacent", D::ClassType::NotAdjacent)
        ._element("NextIsSelected", D::ClassType::NextIsSelected)
        ._element("PreviousIsSelected", D::ClassType::PreviousIsSelected)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::CornerWidget>("CornerWidget")
        ._element("NoCornerWidgets", D::ClassType::NoCornerWidgets)
        ._element("LeftCornerWidget", D::ClassType::LeftCornerWidget)
        ._element("RightCornerWidget", D::ClassType::RightCornerWidget)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::TabFeature>("TabFeature")
        ._element("None", D::ClassType::None)
        ._element("HasFrame", D::ClassType::HasFrame)
    ;
    {
        GDefineMetaClass<QFlags<typename D::ClassType::CornerWidget > > _t_d = GDefineMetaClass<QFlags<typename D::ClassType::CornerWidget > >::lazyDeclare("CornerWidgets", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename D::ClassType::CornerWidget > >, typename D::ClassType::CornerWidget >);
        _d._class(_t_d);
    }
    {
        GDefineMetaClass<QFlags<typename D::ClassType::TabFeature > > _t_d = GDefineMetaClass<QFlags<typename D::ClassType::TabFeature > >::lazyDeclare("TabFeatures", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename D::ClassType::TabFeature > >, typename D::ClassType::TabFeature >);
        _d._class(_t_d);
    }
}


template <typename D>
void buildMetaClass_QStyleOptionTabBarBase(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionTabBarBase &)>();
    _d.CPGF_MD_TEMPLATE _field("shape", &D::ClassType::shape);
    _d.CPGF_MD_TEMPLATE _field("tabBarRect", &D::ClassType::tabBarRect);
    _d.CPGF_MD_TEMPLATE _field("selectedTabRect", &D::ClassType::selectedTabRect);
    _d.CPGF_MD_TEMPLATE _field("documentMode", &D::ClassType::documentMode);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
}


template <typename D>
void buildMetaClass_QStyleOptionTabWidgetFrame(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionTabWidgetFrame &)>();
    _d.CPGF_MD_TEMPLATE _field("lineWidth", &D::ClassType::lineWidth);
    _d.CPGF_MD_TEMPLATE _field("midLineWidth", &D::ClassType::midLineWidth);
    _d.CPGF_MD_TEMPLATE _field("shape", &D::ClassType::shape);
    _d.CPGF_MD_TEMPLATE _field("tabBarSize", &D::ClassType::tabBarSize);
    _d.CPGF_MD_TEMPLATE _field("rightCornerWidgetSize", &D::ClassType::rightCornerWidgetSize);
    _d.CPGF_MD_TEMPLATE _field("leftCornerWidgetSize", &D::ClassType::leftCornerWidgetSize);
    _d.CPGF_MD_TEMPLATE _field("tabBarRect", &D::ClassType::tabBarRect);
    _d.CPGF_MD_TEMPLATE _field("selectedTabRect", &D::ClassType::selectedTabRect);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
}


template <typename D>
void buildMetaClass_QStyleOptionTitleBar(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionTitleBar &)>();
    _d.CPGF_MD_TEMPLATE _field("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _field("icon", &D::ClassType::icon);
    _d.CPGF_MD_TEMPLATE _field("titleBarState", &D::ClassType::titleBarState);
    _d.CPGF_MD_TEMPLATE _field("titleBarFlags", &D::ClassType::titleBarFlags);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
}


template <typename D>
void buildMetaClass_QStyleOptionToolBar(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionToolBar &)>();
    _d.CPGF_MD_TEMPLATE _field("positionOfLine", &D::ClassType::positionOfLine);
    _d.CPGF_MD_TEMPLATE _field("positionWithinLine", &D::ClassType::positionWithinLine);
    _d.CPGF_MD_TEMPLATE _field("toolBarArea", &D::ClassType::toolBarArea);
    _d.CPGF_MD_TEMPLATE _field("features", &D::ClassType::features);
    _d.CPGF_MD_TEMPLATE _field("lineWidth", &D::ClassType::lineWidth);
    _d.CPGF_MD_TEMPLATE _field("midLineWidth", &D::ClassType::midLineWidth);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ToolBarPosition>("ToolBarPosition")
        ._element("Beginning", D::ClassType::Beginning)
        ._element("Middle", D::ClassType::Middle)
        ._element("End", D::ClassType::End)
        ._element("OnlyOne", D::ClassType::OnlyOne)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ToolBarFeature>("ToolBarFeature")
        ._element("None", D::ClassType::None)
        ._element("Movable", D::ClassType::Movable)
    ;
    {
        GDefineMetaClass<QFlags<typename D::ClassType::ToolBarFeature > > _t_d = GDefineMetaClass<QFlags<typename D::ClassType::ToolBarFeature > >::lazyDeclare("ToolBarFeatures", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename D::ClassType::ToolBarFeature > >, typename D::ClassType::ToolBarFeature >);
        _d._class(_t_d);
    }
}


template <typename D>
void buildMetaClass_QStyleOptionToolBox(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionToolBox &)>();
    _d.CPGF_MD_TEMPLATE _field("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _field("icon", &D::ClassType::icon);
    _d.CPGF_MD_TEMPLATE _field("position", &D::ClassType::position);
    _d.CPGF_MD_TEMPLATE _field("selectedPosition", &D::ClassType::selectedPosition);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::TabPosition>("TabPosition")
        ._element("Beginning", D::ClassType::Beginning)
        ._element("Middle", D::ClassType::Middle)
        ._element("End", D::ClassType::End)
        ._element("OnlyOneTab", D::ClassType::OnlyOneTab)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SelectedPosition>("SelectedPosition")
        ._element("NotAdjacent", D::ClassType::NotAdjacent)
        ._element("NextIsSelected", D::ClassType::NextIsSelected)
        ._element("PreviousIsSelected", D::ClassType::PreviousIsSelected)
    ;
}


template <typename D>
void buildMetaClass_QStyleOptionToolButton(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionToolButton &)>();
    _d.CPGF_MD_TEMPLATE _field("features", &D::ClassType::features);
    _d.CPGF_MD_TEMPLATE _field("icon", &D::ClassType::icon);
    _d.CPGF_MD_TEMPLATE _field("iconSize", &D::ClassType::iconSize);
    _d.CPGF_MD_TEMPLATE _field("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _field("arrowType", &D::ClassType::arrowType);
    _d.CPGF_MD_TEMPLATE _field("toolButtonStyle", &D::ClassType::toolButtonStyle);
    _d.CPGF_MD_TEMPLATE _field("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _field("font", &D::ClassType::font);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ToolButtonFeature>("ToolButtonFeature")
        ._element("None", D::ClassType::None)
        ._element("Arrow", D::ClassType::Arrow)
        ._element("Menu", D::ClassType::Menu)
        ._element("MenuButtonPopup", D::ClassType::MenuButtonPopup)
        ._element("PopupDelay", D::ClassType::PopupDelay)
        ._element("HasMenu", D::ClassType::HasMenu)
    ;
    {
        GDefineMetaClass<QFlags<typename D::ClassType::ToolButtonFeature > > _t_d = GDefineMetaClass<QFlags<typename D::ClassType::ToolButtonFeature > >::lazyDeclare("ToolButtonFeatures", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename D::ClassType::ToolButtonFeature > >, typename D::ClassType::ToolButtonFeature >);
        _d._class(_t_d);
    }
}


template <typename D>
void buildMetaClass_QStyleOptionViewItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStyleOptionViewItem &)>();
    _d.CPGF_MD_TEMPLATE _field("displayAlignment", &D::ClassType::displayAlignment);
    _d.CPGF_MD_TEMPLATE _field("decorationAlignment", &D::ClassType::decorationAlignment);
    _d.CPGF_MD_TEMPLATE _field("textElideMode", &D::ClassType::textElideMode);
    _d.CPGF_MD_TEMPLATE _field("decorationPosition", &D::ClassType::decorationPosition);
    _d.CPGF_MD_TEMPLATE _field("decorationSize", &D::ClassType::decorationSize);
    _d.CPGF_MD_TEMPLATE _field("font", &D::ClassType::font);
    _d.CPGF_MD_TEMPLATE _field("showDecorationSelected", &D::ClassType::showDecorationSelected);
    _d.CPGF_MD_TEMPLATE _field("features", &D::ClassType::features);
    _d.CPGF_MD_TEMPLATE _field("locale", &D::ClassType::locale);
    _d.CPGF_MD_TEMPLATE _field("widget", &D::ClassType::widget);
    _d.CPGF_MD_TEMPLATE _field("index", &D::ClassType::index);
    _d.CPGF_MD_TEMPLATE _field("checkState", &D::ClassType::checkState);
    _d.CPGF_MD_TEMPLATE _field("icon", &D::ClassType::icon);
    _d.CPGF_MD_TEMPLATE _field("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _field("viewItemPosition", &D::ClassType::viewItemPosition);
    _d.CPGF_MD_TEMPLATE _field("backgroundBrush", &D::ClassType::backgroundBrush);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionType>("StyleOptionType")
        ._element("Type", D::ClassType::Type)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleOptionVersion>("StyleOptionVersion")
        ._element("Version", D::ClassType::Version)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Position>("Position")
        ._element("Left", D::ClassType::Left)
        ._element("Right", D::ClassType::Right)
        ._element("Top", D::ClassType::Top)
        ._element("Bottom", D::ClassType::Bottom)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ViewItemFeature>("ViewItemFeature")
        ._element("None", D::ClassType::None)
        ._element("WrapText", D::ClassType::WrapText)
        ._element("Alternate", D::ClassType::Alternate)
        ._element("HasCheckIndicator", D::ClassType::HasCheckIndicator)
        ._element("HasDisplay", D::ClassType::HasDisplay)
        ._element("HasDecoration", D::ClassType::HasDecoration)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ViewItemPosition>("ViewItemPosition")
        ._element("Invalid", D::ClassType::Invalid)
        ._element("Beginning", D::ClassType::Beginning)
        ._element("Middle", D::ClassType::Middle)
        ._element("End", D::ClassType::End)
        ._element("OnlyOne", D::ClassType::OnlyOne)
    ;
    {
        GDefineMetaClass<QFlags<typename D::ClassType::ViewItemFeature > > _t_d = GDefineMetaClass<QFlags<typename D::ClassType::ViewItemFeature > >::lazyDeclare("ViewItemFeatures", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename D::ClassType::ViewItemFeature > >, typename D::ClassType::ViewItemFeature >);
        _d._class(_t_d);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
