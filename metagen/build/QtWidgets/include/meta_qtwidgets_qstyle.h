// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QSTYLE_H
#define CPGF_META_QTWIDGETS_QSTYLE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qstyle(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, QStyle::State)>(mopHolder << mopHolder);
}


template <typename D>
void buildMetaClass_QStyle(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("polish", (void (D::ClassType::*) (QWidget *))&D::ClassType::polish);
    _d.CPGF_MD_TEMPLATE _method("unpolish", (void (D::ClassType::*) (QWidget *))&D::ClassType::unpolish);
    _d.CPGF_MD_TEMPLATE _method("polish", (void (D::ClassType::*) (QApplication *))&D::ClassType::polish);
    _d.CPGF_MD_TEMPLATE _method("unpolish", (void (D::ClassType::*) (QApplication *))&D::ClassType::unpolish);
    _d.CPGF_MD_TEMPLATE _method("polish", (void (D::ClassType::*) (QPalette &))&D::ClassType::polish);
    _d.CPGF_MD_TEMPLATE _method("itemTextRect", &D::ClassType::itemTextRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<4> >());
    _d.CPGF_MD_TEMPLATE _method("itemPixmapRect", &D::ClassType::itemPixmapRect);
    _d.CPGF_MD_TEMPLATE _method("drawItemText", &D::ClassType::drawItemText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<3>, cpgf::GMetaRuleCopyConstReference<5> >())
        ._default(copyVariantFromCopyable(QPalette::NoRole))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawItemPixmap", &D::ClassType::drawItemPixmap);
    _d.CPGF_MD_TEMPLATE _method("standardPalette", &D::ClassType::standardPalette);
    _d.CPGF_MD_TEMPLATE _method("drawPrimitive", &D::ClassType::drawPrimitive)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawControl", &D::ClassType::drawControl)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("subElementRect", &D::ClassType::subElementRect)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawComplexControl", &D::ClassType::drawComplexControl)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("hitTestComplexControl", &D::ClassType::hitTestComplexControl)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("subControlRect", &D::ClassType::subControlRect)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("pixelMetric", &D::ClassType::pixelMetric)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("sizeFromContents", &D::ClassType::sizeFromContents)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("styleHint", &D::ClassType::styleHint)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("standardPixmap", &D::ClassType::standardPixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("standardIcon", &D::ClassType::standardIcon)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("generatedIconPixmap", &D::ClassType::generatedIconPixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("layoutSpacing", &D::ClassType::layoutSpacing)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("combinedLayoutSpacing", &D::ClassType::combinedLayoutSpacing)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("proxy", &D::ClassType::proxy);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("visualRect", &D::ClassType::visualRect);
    _d.CPGF_MD_TEMPLATE _method("visualPos", &D::ClassType::visualPos);
    _d.CPGF_MD_TEMPLATE _method("sliderPositionFromValue", &D::ClassType::sliderPositionFromValue)
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("sliderValueFromPosition", &D::ClassType::sliderValueFromPosition)
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("visualAlignment", &D::ClassType::visualAlignment);
    _d.CPGF_MD_TEMPLATE _method("alignedRect", &D::ClassType::alignedRect);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StateFlag>("StateFlag")
        ._element("State_None", D::ClassType::State_None)
        ._element("State_Enabled", D::ClassType::State_Enabled)
        ._element("State_Raised", D::ClassType::State_Raised)
        ._element("State_Sunken", D::ClassType::State_Sunken)
        ._element("State_Off", D::ClassType::State_Off)
        ._element("State_NoChange", D::ClassType::State_NoChange)
        ._element("State_On", D::ClassType::State_On)
        ._element("State_DownArrow", D::ClassType::State_DownArrow)
        ._element("State_Horizontal", D::ClassType::State_Horizontal)
        ._element("State_HasFocus", D::ClassType::State_HasFocus)
        ._element("State_Top", D::ClassType::State_Top)
        ._element("State_Bottom", D::ClassType::State_Bottom)
        ._element("State_FocusAtBorder", D::ClassType::State_FocusAtBorder)
        ._element("State_AutoRaise", D::ClassType::State_AutoRaise)
        ._element("State_MouseOver", D::ClassType::State_MouseOver)
        ._element("State_UpArrow", D::ClassType::State_UpArrow)
        ._element("State_Selected", D::ClassType::State_Selected)
        ._element("State_Active", D::ClassType::State_Active)
        ._element("State_Window", D::ClassType::State_Window)
        ._element("State_Open", D::ClassType::State_Open)
        ._element("State_Children", D::ClassType::State_Children)
        ._element("State_Item", D::ClassType::State_Item)
        ._element("State_Sibling", D::ClassType::State_Sibling)
        ._element("State_Editing", D::ClassType::State_Editing)
        ._element("State_KeyboardFocusChange", D::ClassType::State_KeyboardFocusChange)
        ._element("State_ReadOnly", D::ClassType::State_ReadOnly)
        ._element("State_Small", D::ClassType::State_Small)
        ._element("State_Mini", D::ClassType::State_Mini)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::PrimitiveElement>("PrimitiveElement")
        ._element("PE_Frame", D::ClassType::PE_Frame)
        ._element("PE_FrameDefaultButton", D::ClassType::PE_FrameDefaultButton)
        ._element("PE_FrameDockWidget", D::ClassType::PE_FrameDockWidget)
        ._element("PE_FrameFocusRect", D::ClassType::PE_FrameFocusRect)
        ._element("PE_FrameGroupBox", D::ClassType::PE_FrameGroupBox)
        ._element("PE_FrameLineEdit", D::ClassType::PE_FrameLineEdit)
        ._element("PE_FrameMenu", D::ClassType::PE_FrameMenu)
        ._element("PE_FrameStatusBar", D::ClassType::PE_FrameStatusBar)
        ._element("PE_FrameStatusBarItem", D::ClassType::PE_FrameStatusBarItem)
        ._element("PE_FrameTabWidget", D::ClassType::PE_FrameTabWidget)
        ._element("PE_FrameWindow", D::ClassType::PE_FrameWindow)
        ._element("PE_FrameButtonBevel", D::ClassType::PE_FrameButtonBevel)
        ._element("PE_FrameButtonTool", D::ClassType::PE_FrameButtonTool)
        ._element("PE_FrameTabBarBase", D::ClassType::PE_FrameTabBarBase)
        ._element("PE_PanelButtonCommand", D::ClassType::PE_PanelButtonCommand)
        ._element("PE_PanelButtonBevel", D::ClassType::PE_PanelButtonBevel)
        ._element("PE_PanelButtonTool", D::ClassType::PE_PanelButtonTool)
        ._element("PE_PanelMenuBar", D::ClassType::PE_PanelMenuBar)
        ._element("PE_PanelToolBar", D::ClassType::PE_PanelToolBar)
        ._element("PE_PanelLineEdit", D::ClassType::PE_PanelLineEdit)
        ._element("PE_IndicatorArrowDown", D::ClassType::PE_IndicatorArrowDown)
        ._element("PE_IndicatorArrowLeft", D::ClassType::PE_IndicatorArrowLeft)
        ._element("PE_IndicatorArrowRight", D::ClassType::PE_IndicatorArrowRight)
        ._element("PE_IndicatorArrowUp", D::ClassType::PE_IndicatorArrowUp)
        ._element("PE_IndicatorBranch", D::ClassType::PE_IndicatorBranch)
        ._element("PE_IndicatorButtonDropDown", D::ClassType::PE_IndicatorButtonDropDown)
        ._element("PE_IndicatorViewItemCheck", D::ClassType::PE_IndicatorViewItemCheck)
        ._element("PE_IndicatorItemViewItemCheck", D::ClassType::PE_IndicatorItemViewItemCheck)
        ._element("PE_IndicatorCheckBox", D::ClassType::PE_IndicatorCheckBox)
        ._element("PE_IndicatorDockWidgetResizeHandle", D::ClassType::PE_IndicatorDockWidgetResizeHandle)
        ._element("PE_IndicatorHeaderArrow", D::ClassType::PE_IndicatorHeaderArrow)
        ._element("PE_IndicatorMenuCheckMark", D::ClassType::PE_IndicatorMenuCheckMark)
        ._element("PE_IndicatorProgressChunk", D::ClassType::PE_IndicatorProgressChunk)
        ._element("PE_IndicatorRadioButton", D::ClassType::PE_IndicatorRadioButton)
        ._element("PE_IndicatorSpinDown", D::ClassType::PE_IndicatorSpinDown)
        ._element("PE_IndicatorSpinMinus", D::ClassType::PE_IndicatorSpinMinus)
        ._element("PE_IndicatorSpinPlus", D::ClassType::PE_IndicatorSpinPlus)
        ._element("PE_IndicatorSpinUp", D::ClassType::PE_IndicatorSpinUp)
        ._element("PE_IndicatorToolBarHandle", D::ClassType::PE_IndicatorToolBarHandle)
        ._element("PE_IndicatorToolBarSeparator", D::ClassType::PE_IndicatorToolBarSeparator)
        ._element("PE_PanelTipLabel", D::ClassType::PE_PanelTipLabel)
        ._element("PE_IndicatorTabTear", D::ClassType::PE_IndicatorTabTear)
        ._element("PE_PanelScrollAreaCorner", D::ClassType::PE_PanelScrollAreaCorner)
        ._element("PE_Widget", D::ClassType::PE_Widget)
        ._element("PE_IndicatorColumnViewArrow", D::ClassType::PE_IndicatorColumnViewArrow)
        ._element("PE_IndicatorItemViewItemDrop", D::ClassType::PE_IndicatorItemViewItemDrop)
        ._element("PE_PanelItemViewItem", D::ClassType::PE_PanelItemViewItem)
        ._element("PE_PanelItemViewRow", D::ClassType::PE_PanelItemViewRow)
        ._element("PE_PanelStatusBar", D::ClassType::PE_PanelStatusBar)
        ._element("PE_IndicatorTabClose", D::ClassType::PE_IndicatorTabClose)
        ._element("PE_PanelMenu", D::ClassType::PE_PanelMenu)
        ._element("PE_CustomBase", D::ClassType::PE_CustomBase)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ControlElement>("ControlElement")
        ._element("CE_PushButton", D::ClassType::CE_PushButton)
        ._element("CE_PushButtonBevel", D::ClassType::CE_PushButtonBevel)
        ._element("CE_PushButtonLabel", D::ClassType::CE_PushButtonLabel)
        ._element("CE_CheckBox", D::ClassType::CE_CheckBox)
        ._element("CE_CheckBoxLabel", D::ClassType::CE_CheckBoxLabel)
        ._element("CE_RadioButton", D::ClassType::CE_RadioButton)
        ._element("CE_RadioButtonLabel", D::ClassType::CE_RadioButtonLabel)
        ._element("CE_TabBarTab", D::ClassType::CE_TabBarTab)
        ._element("CE_TabBarTabShape", D::ClassType::CE_TabBarTabShape)
        ._element("CE_TabBarTabLabel", D::ClassType::CE_TabBarTabLabel)
        ._element("CE_ProgressBar", D::ClassType::CE_ProgressBar)
        ._element("CE_ProgressBarGroove", D::ClassType::CE_ProgressBarGroove)
        ._element("CE_ProgressBarContents", D::ClassType::CE_ProgressBarContents)
        ._element("CE_ProgressBarLabel", D::ClassType::CE_ProgressBarLabel)
        ._element("CE_MenuItem", D::ClassType::CE_MenuItem)
        ._element("CE_MenuScroller", D::ClassType::CE_MenuScroller)
        ._element("CE_MenuVMargin", D::ClassType::CE_MenuVMargin)
        ._element("CE_MenuHMargin", D::ClassType::CE_MenuHMargin)
        ._element("CE_MenuTearoff", D::ClassType::CE_MenuTearoff)
        ._element("CE_MenuEmptyArea", D::ClassType::CE_MenuEmptyArea)
        ._element("CE_MenuBarItem", D::ClassType::CE_MenuBarItem)
        ._element("CE_MenuBarEmptyArea", D::ClassType::CE_MenuBarEmptyArea)
        ._element("CE_ToolButtonLabel", D::ClassType::CE_ToolButtonLabel)
        ._element("CE_Header", D::ClassType::CE_Header)
        ._element("CE_HeaderSection", D::ClassType::CE_HeaderSection)
        ._element("CE_HeaderLabel", D::ClassType::CE_HeaderLabel)
        ._element("CE_ToolBoxTab", D::ClassType::CE_ToolBoxTab)
        ._element("CE_SizeGrip", D::ClassType::CE_SizeGrip)
        ._element("CE_Splitter", D::ClassType::CE_Splitter)
        ._element("CE_RubberBand", D::ClassType::CE_RubberBand)
        ._element("CE_DockWidgetTitle", D::ClassType::CE_DockWidgetTitle)
        ._element("CE_ScrollBarAddLine", D::ClassType::CE_ScrollBarAddLine)
        ._element("CE_ScrollBarSubLine", D::ClassType::CE_ScrollBarSubLine)
        ._element("CE_ScrollBarAddPage", D::ClassType::CE_ScrollBarAddPage)
        ._element("CE_ScrollBarSubPage", D::ClassType::CE_ScrollBarSubPage)
        ._element("CE_ScrollBarSlider", D::ClassType::CE_ScrollBarSlider)
        ._element("CE_ScrollBarFirst", D::ClassType::CE_ScrollBarFirst)
        ._element("CE_ScrollBarLast", D::ClassType::CE_ScrollBarLast)
        ._element("CE_FocusFrame", D::ClassType::CE_FocusFrame)
        ._element("CE_ComboBoxLabel", D::ClassType::CE_ComboBoxLabel)
        ._element("CE_ToolBar", D::ClassType::CE_ToolBar)
        ._element("CE_ToolBoxTabShape", D::ClassType::CE_ToolBoxTabShape)
        ._element("CE_ToolBoxTabLabel", D::ClassType::CE_ToolBoxTabLabel)
        ._element("CE_HeaderEmptyArea", D::ClassType::CE_HeaderEmptyArea)
        ._element("CE_ColumnViewGrip", D::ClassType::CE_ColumnViewGrip)
        ._element("CE_ItemViewItem", D::ClassType::CE_ItemViewItem)
        ._element("CE_ShapedFrame", D::ClassType::CE_ShapedFrame)
        ._element("CE_CustomBase", D::ClassType::CE_CustomBase)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SubElement>("SubElement")
        ._element("SE_PushButtonContents", D::ClassType::SE_PushButtonContents)
        ._element("SE_PushButtonFocusRect", D::ClassType::SE_PushButtonFocusRect)
        ._element("SE_CheckBoxIndicator", D::ClassType::SE_CheckBoxIndicator)
        ._element("SE_CheckBoxContents", D::ClassType::SE_CheckBoxContents)
        ._element("SE_CheckBoxFocusRect", D::ClassType::SE_CheckBoxFocusRect)
        ._element("SE_CheckBoxClickRect", D::ClassType::SE_CheckBoxClickRect)
        ._element("SE_RadioButtonIndicator", D::ClassType::SE_RadioButtonIndicator)
        ._element("SE_RadioButtonContents", D::ClassType::SE_RadioButtonContents)
        ._element("SE_RadioButtonFocusRect", D::ClassType::SE_RadioButtonFocusRect)
        ._element("SE_RadioButtonClickRect", D::ClassType::SE_RadioButtonClickRect)
        ._element("SE_ComboBoxFocusRect", D::ClassType::SE_ComboBoxFocusRect)
        ._element("SE_SliderFocusRect", D::ClassType::SE_SliderFocusRect)
        ._element("SE_ProgressBarGroove", D::ClassType::SE_ProgressBarGroove)
        ._element("SE_ProgressBarContents", D::ClassType::SE_ProgressBarContents)
        ._element("SE_ProgressBarLabel", D::ClassType::SE_ProgressBarLabel)
        ._element("SE_ToolBoxTabContents", D::ClassType::SE_ToolBoxTabContents)
        ._element("SE_HeaderLabel", D::ClassType::SE_HeaderLabel)
        ._element("SE_HeaderArrow", D::ClassType::SE_HeaderArrow)
        ._element("SE_TabWidgetTabBar", D::ClassType::SE_TabWidgetTabBar)
        ._element("SE_TabWidgetTabPane", D::ClassType::SE_TabWidgetTabPane)
        ._element("SE_TabWidgetTabContents", D::ClassType::SE_TabWidgetTabContents)
        ._element("SE_TabWidgetLeftCorner", D::ClassType::SE_TabWidgetLeftCorner)
        ._element("SE_TabWidgetRightCorner", D::ClassType::SE_TabWidgetRightCorner)
        ._element("SE_ViewItemCheckIndicator", D::ClassType::SE_ViewItemCheckIndicator)
        ._element("SE_ItemViewItemCheckIndicator", D::ClassType::SE_ItemViewItemCheckIndicator)
        ._element("SE_TabBarTearIndicator", D::ClassType::SE_TabBarTearIndicator)
        ._element("SE_TreeViewDisclosureItem", D::ClassType::SE_TreeViewDisclosureItem)
        ._element("SE_LineEditContents", D::ClassType::SE_LineEditContents)
        ._element("SE_FrameContents", D::ClassType::SE_FrameContents)
        ._element("SE_DockWidgetCloseButton", D::ClassType::SE_DockWidgetCloseButton)
        ._element("SE_DockWidgetFloatButton", D::ClassType::SE_DockWidgetFloatButton)
        ._element("SE_DockWidgetTitleBarText", D::ClassType::SE_DockWidgetTitleBarText)
        ._element("SE_DockWidgetIcon", D::ClassType::SE_DockWidgetIcon)
        ._element("SE_CheckBoxLayoutItem", D::ClassType::SE_CheckBoxLayoutItem)
        ._element("SE_ComboBoxLayoutItem", D::ClassType::SE_ComboBoxLayoutItem)
        ._element("SE_DateTimeEditLayoutItem", D::ClassType::SE_DateTimeEditLayoutItem)
        ._element("SE_DialogButtonBoxLayoutItem", D::ClassType::SE_DialogButtonBoxLayoutItem)
        ._element("SE_LabelLayoutItem", D::ClassType::SE_LabelLayoutItem)
        ._element("SE_ProgressBarLayoutItem", D::ClassType::SE_ProgressBarLayoutItem)
        ._element("SE_PushButtonLayoutItem", D::ClassType::SE_PushButtonLayoutItem)
        ._element("SE_RadioButtonLayoutItem", D::ClassType::SE_RadioButtonLayoutItem)
        ._element("SE_SliderLayoutItem", D::ClassType::SE_SliderLayoutItem)
        ._element("SE_SpinBoxLayoutItem", D::ClassType::SE_SpinBoxLayoutItem)
        ._element("SE_ToolButtonLayoutItem", D::ClassType::SE_ToolButtonLayoutItem)
        ._element("SE_FrameLayoutItem", D::ClassType::SE_FrameLayoutItem)
        ._element("SE_GroupBoxLayoutItem", D::ClassType::SE_GroupBoxLayoutItem)
        ._element("SE_TabWidgetLayoutItem", D::ClassType::SE_TabWidgetLayoutItem)
        ._element("SE_ItemViewItemDecoration", D::ClassType::SE_ItemViewItemDecoration)
        ._element("SE_ItemViewItemText", D::ClassType::SE_ItemViewItemText)
        ._element("SE_ItemViewItemFocusRect", D::ClassType::SE_ItemViewItemFocusRect)
        ._element("SE_TabBarTabLeftButton", D::ClassType::SE_TabBarTabLeftButton)
        ._element("SE_TabBarTabRightButton", D::ClassType::SE_TabBarTabRightButton)
        ._element("SE_TabBarTabText", D::ClassType::SE_TabBarTabText)
        ._element("SE_ShapedFrameContents", D::ClassType::SE_ShapedFrameContents)
        ._element("SE_ToolBarHandle", D::ClassType::SE_ToolBarHandle)
        ._element("SE_CustomBase", D::ClassType::SE_CustomBase)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ComplexControl>("ComplexControl")
        ._element("CC_SpinBox", D::ClassType::CC_SpinBox)
        ._element("CC_ComboBox", D::ClassType::CC_ComboBox)
        ._element("CC_ScrollBar", D::ClassType::CC_ScrollBar)
        ._element("CC_Slider", D::ClassType::CC_Slider)
        ._element("CC_ToolButton", D::ClassType::CC_ToolButton)
        ._element("CC_TitleBar", D::ClassType::CC_TitleBar)
        ._element("CC_Dial", D::ClassType::CC_Dial)
        ._element("CC_GroupBox", D::ClassType::CC_GroupBox)
        ._element("CC_MdiControls", D::ClassType::CC_MdiControls)
        ._element("CC_CustomBase", D::ClassType::CC_CustomBase)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SubControl>("SubControl")
        ._element("SC_None", D::ClassType::SC_None)
        ._element("SC_ScrollBarAddLine", D::ClassType::SC_ScrollBarAddLine)
        ._element("SC_ScrollBarSubLine", D::ClassType::SC_ScrollBarSubLine)
        ._element("SC_ScrollBarAddPage", D::ClassType::SC_ScrollBarAddPage)
        ._element("SC_ScrollBarSubPage", D::ClassType::SC_ScrollBarSubPage)
        ._element("SC_ScrollBarFirst", D::ClassType::SC_ScrollBarFirst)
        ._element("SC_ScrollBarLast", D::ClassType::SC_ScrollBarLast)
        ._element("SC_ScrollBarSlider", D::ClassType::SC_ScrollBarSlider)
        ._element("SC_ScrollBarGroove", D::ClassType::SC_ScrollBarGroove)
        ._element("SC_SpinBoxUp", D::ClassType::SC_SpinBoxUp)
        ._element("SC_SpinBoxDown", D::ClassType::SC_SpinBoxDown)
        ._element("SC_SpinBoxFrame", D::ClassType::SC_SpinBoxFrame)
        ._element("SC_SpinBoxEditField", D::ClassType::SC_SpinBoxEditField)
        ._element("SC_ComboBoxFrame", D::ClassType::SC_ComboBoxFrame)
        ._element("SC_ComboBoxEditField", D::ClassType::SC_ComboBoxEditField)
        ._element("SC_ComboBoxArrow", D::ClassType::SC_ComboBoxArrow)
        ._element("SC_ComboBoxListBoxPopup", D::ClassType::SC_ComboBoxListBoxPopup)
        ._element("SC_SliderGroove", D::ClassType::SC_SliderGroove)
        ._element("SC_SliderHandle", D::ClassType::SC_SliderHandle)
        ._element("SC_SliderTickmarks", D::ClassType::SC_SliderTickmarks)
        ._element("SC_ToolButton", D::ClassType::SC_ToolButton)
        ._element("SC_ToolButtonMenu", D::ClassType::SC_ToolButtonMenu)
        ._element("SC_TitleBarSysMenu", D::ClassType::SC_TitleBarSysMenu)
        ._element("SC_TitleBarMinButton", D::ClassType::SC_TitleBarMinButton)
        ._element("SC_TitleBarMaxButton", D::ClassType::SC_TitleBarMaxButton)
        ._element("SC_TitleBarCloseButton", D::ClassType::SC_TitleBarCloseButton)
        ._element("SC_TitleBarNormalButton", D::ClassType::SC_TitleBarNormalButton)
        ._element("SC_TitleBarShadeButton", D::ClassType::SC_TitleBarShadeButton)
        ._element("SC_TitleBarUnshadeButton", D::ClassType::SC_TitleBarUnshadeButton)
        ._element("SC_TitleBarContextHelpButton", D::ClassType::SC_TitleBarContextHelpButton)
        ._element("SC_TitleBarLabel", D::ClassType::SC_TitleBarLabel)
        ._element("SC_DialGroove", D::ClassType::SC_DialGroove)
        ._element("SC_DialHandle", D::ClassType::SC_DialHandle)
        ._element("SC_DialTickmarks", D::ClassType::SC_DialTickmarks)
        ._element("SC_GroupBoxCheckBox", D::ClassType::SC_GroupBoxCheckBox)
        ._element("SC_GroupBoxLabel", D::ClassType::SC_GroupBoxLabel)
        ._element("SC_GroupBoxContents", D::ClassType::SC_GroupBoxContents)
        ._element("SC_GroupBoxFrame", D::ClassType::SC_GroupBoxFrame)
        ._element("SC_MdiMinButton", D::ClassType::SC_MdiMinButton)
        ._element("SC_MdiNormalButton", D::ClassType::SC_MdiNormalButton)
        ._element("SC_MdiCloseButton", D::ClassType::SC_MdiCloseButton)
        ._element("SC_CustomBase", D::ClassType::SC_CustomBase)
        ._element("SC_All", D::ClassType::SC_All)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::PixelMetric>("PixelMetric")
        ._element("PM_ButtonMargin", D::ClassType::PM_ButtonMargin)
        ._element("PM_ButtonDefaultIndicator", D::ClassType::PM_ButtonDefaultIndicator)
        ._element("PM_MenuButtonIndicator", D::ClassType::PM_MenuButtonIndicator)
        ._element("PM_ButtonShiftHorizontal", D::ClassType::PM_ButtonShiftHorizontal)
        ._element("PM_ButtonShiftVertical", D::ClassType::PM_ButtonShiftVertical)
        ._element("PM_DefaultFrameWidth", D::ClassType::PM_DefaultFrameWidth)
        ._element("PM_SpinBoxFrameWidth", D::ClassType::PM_SpinBoxFrameWidth)
        ._element("PM_ComboBoxFrameWidth", D::ClassType::PM_ComboBoxFrameWidth)
        ._element("PM_MaximumDragDistance", D::ClassType::PM_MaximumDragDistance)
        ._element("PM_ScrollBarExtent", D::ClassType::PM_ScrollBarExtent)
        ._element("PM_ScrollBarSliderMin", D::ClassType::PM_ScrollBarSliderMin)
        ._element("PM_SliderThickness", D::ClassType::PM_SliderThickness)
        ._element("PM_SliderControlThickness", D::ClassType::PM_SliderControlThickness)
        ._element("PM_SliderLength", D::ClassType::PM_SliderLength)
        ._element("PM_SliderTickmarkOffset", D::ClassType::PM_SliderTickmarkOffset)
        ._element("PM_SliderSpaceAvailable", D::ClassType::PM_SliderSpaceAvailable)
        ._element("PM_DockWidgetSeparatorExtent", D::ClassType::PM_DockWidgetSeparatorExtent)
        ._element("PM_DockWidgetHandleExtent", D::ClassType::PM_DockWidgetHandleExtent)
        ._element("PM_DockWidgetFrameWidth", D::ClassType::PM_DockWidgetFrameWidth)
        ._element("PM_TabBarTabOverlap", D::ClassType::PM_TabBarTabOverlap)
        ._element("PM_TabBarTabHSpace", D::ClassType::PM_TabBarTabHSpace)
        ._element("PM_TabBarTabVSpace", D::ClassType::PM_TabBarTabVSpace)
        ._element("PM_TabBarBaseHeight", D::ClassType::PM_TabBarBaseHeight)
        ._element("PM_TabBarBaseOverlap", D::ClassType::PM_TabBarBaseOverlap)
        ._element("PM_ProgressBarChunkWidth", D::ClassType::PM_ProgressBarChunkWidth)
        ._element("PM_SplitterWidth", D::ClassType::PM_SplitterWidth)
        ._element("PM_TitleBarHeight", D::ClassType::PM_TitleBarHeight)
        ._element("PM_MenuScrollerHeight", D::ClassType::PM_MenuScrollerHeight)
        ._element("PM_MenuHMargin", D::ClassType::PM_MenuHMargin)
        ._element("PM_MenuVMargin", D::ClassType::PM_MenuVMargin)
        ._element("PM_MenuPanelWidth", D::ClassType::PM_MenuPanelWidth)
        ._element("PM_MenuTearoffHeight", D::ClassType::PM_MenuTearoffHeight)
        ._element("PM_MenuDesktopFrameWidth", D::ClassType::PM_MenuDesktopFrameWidth)
        ._element("PM_MenuBarPanelWidth", D::ClassType::PM_MenuBarPanelWidth)
        ._element("PM_MenuBarItemSpacing", D::ClassType::PM_MenuBarItemSpacing)
        ._element("PM_MenuBarVMargin", D::ClassType::PM_MenuBarVMargin)
        ._element("PM_MenuBarHMargin", D::ClassType::PM_MenuBarHMargin)
        ._element("PM_IndicatorWidth", D::ClassType::PM_IndicatorWidth)
        ._element("PM_IndicatorHeight", D::ClassType::PM_IndicatorHeight)
        ._element("PM_ExclusiveIndicatorWidth", D::ClassType::PM_ExclusiveIndicatorWidth)
        ._element("PM_ExclusiveIndicatorHeight", D::ClassType::PM_ExclusiveIndicatorHeight)
        ._element("PM_DialogButtonsSeparator", D::ClassType::PM_DialogButtonsSeparator)
        ._element("PM_DialogButtonsButtonWidth", D::ClassType::PM_DialogButtonsButtonWidth)
        ._element("PM_DialogButtonsButtonHeight", D::ClassType::PM_DialogButtonsButtonHeight)
        ._element("PM_MdiSubWindowFrameWidth", D::ClassType::PM_MdiSubWindowFrameWidth)
        ._element("PM_MDIFrameWidth", D::ClassType::PM_MDIFrameWidth)
        ._element("PM_MdiSubWindowMinimizedWidth", D::ClassType::PM_MdiSubWindowMinimizedWidth)
        ._element("PM_MDIMinimizedWidth", D::ClassType::PM_MDIMinimizedWidth)
        ._element("PM_HeaderMargin", D::ClassType::PM_HeaderMargin)
        ._element("PM_HeaderMarkSize", D::ClassType::PM_HeaderMarkSize)
        ._element("PM_HeaderGripMargin", D::ClassType::PM_HeaderGripMargin)
        ._element("PM_TabBarTabShiftHorizontal", D::ClassType::PM_TabBarTabShiftHorizontal)
        ._element("PM_TabBarTabShiftVertical", D::ClassType::PM_TabBarTabShiftVertical)
        ._element("PM_TabBarScrollButtonWidth", D::ClassType::PM_TabBarScrollButtonWidth)
        ._element("PM_ToolBarFrameWidth", D::ClassType::PM_ToolBarFrameWidth)
        ._element("PM_ToolBarHandleExtent", D::ClassType::PM_ToolBarHandleExtent)
        ._element("PM_ToolBarItemSpacing", D::ClassType::PM_ToolBarItemSpacing)
        ._element("PM_ToolBarItemMargin", D::ClassType::PM_ToolBarItemMargin)
        ._element("PM_ToolBarSeparatorExtent", D::ClassType::PM_ToolBarSeparatorExtent)
        ._element("PM_ToolBarExtensionExtent", D::ClassType::PM_ToolBarExtensionExtent)
        ._element("PM_SpinBoxSliderHeight", D::ClassType::PM_SpinBoxSliderHeight)
        ._element("PM_DefaultTopLevelMargin", D::ClassType::PM_DefaultTopLevelMargin)
        ._element("PM_DefaultChildMargin", D::ClassType::PM_DefaultChildMargin)
        ._element("PM_DefaultLayoutSpacing", D::ClassType::PM_DefaultLayoutSpacing)
        ._element("PM_ToolBarIconSize", D::ClassType::PM_ToolBarIconSize)
        ._element("PM_ListViewIconSize", D::ClassType::PM_ListViewIconSize)
        ._element("PM_IconViewIconSize", D::ClassType::PM_IconViewIconSize)
        ._element("PM_SmallIconSize", D::ClassType::PM_SmallIconSize)
        ._element("PM_LargeIconSize", D::ClassType::PM_LargeIconSize)
        ._element("PM_FocusFrameVMargin", D::ClassType::PM_FocusFrameVMargin)
        ._element("PM_FocusFrameHMargin", D::ClassType::PM_FocusFrameHMargin)
        ._element("PM_ToolTipLabelFrameWidth", D::ClassType::PM_ToolTipLabelFrameWidth)
        ._element("PM_CheckBoxLabelSpacing", D::ClassType::PM_CheckBoxLabelSpacing)
        ._element("PM_TabBarIconSize", D::ClassType::PM_TabBarIconSize)
        ._element("PM_SizeGripSize", D::ClassType::PM_SizeGripSize)
        ._element("PM_DockWidgetTitleMargin", D::ClassType::PM_DockWidgetTitleMargin)
        ._element("PM_MessageBoxIconSize", D::ClassType::PM_MessageBoxIconSize)
        ._element("PM_ButtonIconSize", D::ClassType::PM_ButtonIconSize)
        ._element("PM_DockWidgetTitleBarButtonMargin", D::ClassType::PM_DockWidgetTitleBarButtonMargin)
        ._element("PM_RadioButtonLabelSpacing", D::ClassType::PM_RadioButtonLabelSpacing)
        ._element("PM_LayoutLeftMargin", D::ClassType::PM_LayoutLeftMargin)
        ._element("PM_LayoutTopMargin", D::ClassType::PM_LayoutTopMargin)
        ._element("PM_LayoutRightMargin", D::ClassType::PM_LayoutRightMargin)
        ._element("PM_LayoutBottomMargin", D::ClassType::PM_LayoutBottomMargin)
        ._element("PM_LayoutHorizontalSpacing", D::ClassType::PM_LayoutHorizontalSpacing)
        ._element("PM_LayoutVerticalSpacing", D::ClassType::PM_LayoutVerticalSpacing)
        ._element("PM_TabBar_ScrollButtonOverlap", D::ClassType::PM_TabBar_ScrollButtonOverlap)
        ._element("PM_TextCursorWidth", D::ClassType::PM_TextCursorWidth)
        ._element("PM_TabCloseIndicatorWidth", D::ClassType::PM_TabCloseIndicatorWidth)
        ._element("PM_TabCloseIndicatorHeight", D::ClassType::PM_TabCloseIndicatorHeight)
        ._element("PM_ScrollView_ScrollBarSpacing", D::ClassType::PM_ScrollView_ScrollBarSpacing)
        ._element("PM_ScrollView_ScrollBarOverlap", D::ClassType::PM_ScrollView_ScrollBarOverlap)
        ._element("PM_SubMenuOverlap", D::ClassType::PM_SubMenuOverlap)
        ._element("PM_CustomBase", D::ClassType::PM_CustomBase)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ContentsType>("ContentsType")
        ._element("CT_PushButton", D::ClassType::CT_PushButton)
        ._element("CT_CheckBox", D::ClassType::CT_CheckBox)
        ._element("CT_RadioButton", D::ClassType::CT_RadioButton)
        ._element("CT_ToolButton", D::ClassType::CT_ToolButton)
        ._element("CT_ComboBox", D::ClassType::CT_ComboBox)
        ._element("CT_Splitter", D::ClassType::CT_Splitter)
        ._element("CT_ProgressBar", D::ClassType::CT_ProgressBar)
        ._element("CT_MenuItem", D::ClassType::CT_MenuItem)
        ._element("CT_MenuBarItem", D::ClassType::CT_MenuBarItem)
        ._element("CT_MenuBar", D::ClassType::CT_MenuBar)
        ._element("CT_Menu", D::ClassType::CT_Menu)
        ._element("CT_TabBarTab", D::ClassType::CT_TabBarTab)
        ._element("CT_Slider", D::ClassType::CT_Slider)
        ._element("CT_ScrollBar", D::ClassType::CT_ScrollBar)
        ._element("CT_LineEdit", D::ClassType::CT_LineEdit)
        ._element("CT_SpinBox", D::ClassType::CT_SpinBox)
        ._element("CT_SizeGrip", D::ClassType::CT_SizeGrip)
        ._element("CT_TabWidget", D::ClassType::CT_TabWidget)
        ._element("CT_DialogButtons", D::ClassType::CT_DialogButtons)
        ._element("CT_HeaderSection", D::ClassType::CT_HeaderSection)
        ._element("CT_GroupBox", D::ClassType::CT_GroupBox)
        ._element("CT_MdiControls", D::ClassType::CT_MdiControls)
        ._element("CT_ItemViewItem", D::ClassType::CT_ItemViewItem)
        ._element("CT_CustomBase", D::ClassType::CT_CustomBase)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::RequestSoftwareInputPanel>("RequestSoftwareInputPanel")
        ._element("RSIP_OnMouseClickAndAlreadyFocused", D::ClassType::RSIP_OnMouseClickAndAlreadyFocused)
        ._element("RSIP_OnMouseClick", D::ClassType::RSIP_OnMouseClick)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StyleHint>("StyleHint")
        ._element("SH_EtchDisabledText", D::ClassType::SH_EtchDisabledText)
        ._element("SH_DitherDisabledText", D::ClassType::SH_DitherDisabledText)
        ._element("SH_ScrollBar_MiddleClickAbsolutePosition", D::ClassType::SH_ScrollBar_MiddleClickAbsolutePosition)
        ._element("SH_ScrollBar_ScrollWhenPointerLeavesControl", D::ClassType::SH_ScrollBar_ScrollWhenPointerLeavesControl)
        ._element("SH_TabBar_SelectMouseType", D::ClassType::SH_TabBar_SelectMouseType)
        ._element("SH_TabBar_Alignment", D::ClassType::SH_TabBar_Alignment)
        ._element("SH_Header_ArrowAlignment", D::ClassType::SH_Header_ArrowAlignment)
        ._element("SH_Slider_SnapToValue", D::ClassType::SH_Slider_SnapToValue)
        ._element("SH_Slider_SloppyKeyEvents", D::ClassType::SH_Slider_SloppyKeyEvents)
        ._element("SH_ProgressDialog_CenterCancelButton", D::ClassType::SH_ProgressDialog_CenterCancelButton)
        ._element("SH_ProgressDialog_TextLabelAlignment", D::ClassType::SH_ProgressDialog_TextLabelAlignment)
        ._element("SH_PrintDialog_RightAlignButtons", D::ClassType::SH_PrintDialog_RightAlignButtons)
        ._element("SH_MainWindow_SpaceBelowMenuBar", D::ClassType::SH_MainWindow_SpaceBelowMenuBar)
        ._element("SH_FontDialog_SelectAssociatedText", D::ClassType::SH_FontDialog_SelectAssociatedText)
        ._element("SH_Menu_AllowActiveAndDisabled", D::ClassType::SH_Menu_AllowActiveAndDisabled)
        ._element("SH_Menu_SpaceActivatesItem", D::ClassType::SH_Menu_SpaceActivatesItem)
        ._element("SH_Menu_SubMenuPopupDelay", D::ClassType::SH_Menu_SubMenuPopupDelay)
        ._element("SH_ScrollView_FrameOnlyAroundContents", D::ClassType::SH_ScrollView_FrameOnlyAroundContents)
        ._element("SH_MenuBar_AltKeyNavigation", D::ClassType::SH_MenuBar_AltKeyNavigation)
        ._element("SH_ComboBox_ListMouseTracking", D::ClassType::SH_ComboBox_ListMouseTracking)
        ._element("SH_Menu_MouseTracking", D::ClassType::SH_Menu_MouseTracking)
        ._element("SH_MenuBar_MouseTracking", D::ClassType::SH_MenuBar_MouseTracking)
        ._element("SH_ItemView_ChangeHighlightOnFocus", D::ClassType::SH_ItemView_ChangeHighlightOnFocus)
        ._element("SH_Widget_ShareActivation", D::ClassType::SH_Widget_ShareActivation)
        ._element("SH_Workspace_FillSpaceOnMaximize", D::ClassType::SH_Workspace_FillSpaceOnMaximize)
        ._element("SH_ComboBox_Popup", D::ClassType::SH_ComboBox_Popup)
        ._element("SH_TitleBar_NoBorder", D::ClassType::SH_TitleBar_NoBorder)
        ._element("SH_Slider_StopMouseOverSlider", D::ClassType::SH_Slider_StopMouseOverSlider)
        ._element("SH_ScrollBar_StopMouseOverSlider", D::ClassType::SH_ScrollBar_StopMouseOverSlider)
        ._element("SH_BlinkCursorWhenTextSelected", D::ClassType::SH_BlinkCursorWhenTextSelected)
        ._element("SH_RichText_FullWidthSelection", D::ClassType::SH_RichText_FullWidthSelection)
        ._element("SH_Menu_Scrollable", D::ClassType::SH_Menu_Scrollable)
        ._element("SH_GroupBox_TextLabelVerticalAlignment", D::ClassType::SH_GroupBox_TextLabelVerticalAlignment)
        ._element("SH_GroupBox_TextLabelColor", D::ClassType::SH_GroupBox_TextLabelColor)
        ._element("SH_Menu_SloppySubMenus", D::ClassType::SH_Menu_SloppySubMenus)
        ._element("SH_Table_GridLineColor", D::ClassType::SH_Table_GridLineColor)
        ._element("SH_LineEdit_PasswordCharacter", D::ClassType::SH_LineEdit_PasswordCharacter)
        ._element("SH_DialogButtons_DefaultButton", D::ClassType::SH_DialogButtons_DefaultButton)
        ._element("SH_ToolBox_SelectedPageTitleBold", D::ClassType::SH_ToolBox_SelectedPageTitleBold)
        ._element("SH_TabBar_PreferNoArrows", D::ClassType::SH_TabBar_PreferNoArrows)
        ._element("SH_ScrollBar_LeftClickAbsolutePosition", D::ClassType::SH_ScrollBar_LeftClickAbsolutePosition)
        ._element("SH_ListViewExpand_SelectMouseType", D::ClassType::SH_ListViewExpand_SelectMouseType)
        ._element("SH_UnderlineShortcut", D::ClassType::SH_UnderlineShortcut)
        ._element("SH_SpinBox_AnimateButton", D::ClassType::SH_SpinBox_AnimateButton)
        ._element("SH_SpinBox_KeyPressAutoRepeatRate", D::ClassType::SH_SpinBox_KeyPressAutoRepeatRate)
        ._element("SH_SpinBox_ClickAutoRepeatRate", D::ClassType::SH_SpinBox_ClickAutoRepeatRate)
        ._element("SH_Menu_FillScreenWithScroll", D::ClassType::SH_Menu_FillScreenWithScroll)
        ._element("SH_ToolTipLabel_Opacity", D::ClassType::SH_ToolTipLabel_Opacity)
        ._element("SH_DrawMenuBarSeparator", D::ClassType::SH_DrawMenuBarSeparator)
        ._element("SH_TitleBar_ModifyNotification", D::ClassType::SH_TitleBar_ModifyNotification)
        ._element("SH_Button_FocusPolicy", D::ClassType::SH_Button_FocusPolicy)
        ._element("SH_MessageBox_UseBorderForButtonSpacing", D::ClassType::SH_MessageBox_UseBorderForButtonSpacing)
        ._element("SH_TitleBar_AutoRaise", D::ClassType::SH_TitleBar_AutoRaise)
        ._element("SH_ToolButton_PopupDelay", D::ClassType::SH_ToolButton_PopupDelay)
        ._element("SH_FocusFrame_Mask", D::ClassType::SH_FocusFrame_Mask)
        ._element("SH_RubberBand_Mask", D::ClassType::SH_RubberBand_Mask)
        ._element("SH_WindowFrame_Mask", D::ClassType::SH_WindowFrame_Mask)
        ._element("SH_SpinControls_DisableOnBounds", D::ClassType::SH_SpinControls_DisableOnBounds)
        ._element("SH_Dial_BackgroundRole", D::ClassType::SH_Dial_BackgroundRole)
        ._element("SH_ComboBox_LayoutDirection", D::ClassType::SH_ComboBox_LayoutDirection)
        ._element("SH_ItemView_EllipsisLocation", D::ClassType::SH_ItemView_EllipsisLocation)
        ._element("SH_ItemView_ShowDecorationSelected", D::ClassType::SH_ItemView_ShowDecorationSelected)
        ._element("SH_ItemView_ActivateItemOnSingleClick", D::ClassType::SH_ItemView_ActivateItemOnSingleClick)
        ._element("SH_ScrollBar_ContextMenu", D::ClassType::SH_ScrollBar_ContextMenu)
        ._element("SH_ScrollBar_RollBetweenButtons", D::ClassType::SH_ScrollBar_RollBetweenButtons)
        ._element("SH_Slider_AbsoluteSetButtons", D::ClassType::SH_Slider_AbsoluteSetButtons)
        ._element("SH_Slider_PageSetButtons", D::ClassType::SH_Slider_PageSetButtons)
        ._element("SH_Menu_KeyboardSearch", D::ClassType::SH_Menu_KeyboardSearch)
        ._element("SH_TabBar_ElideMode", D::ClassType::SH_TabBar_ElideMode)
        ._element("SH_DialogButtonLayout", D::ClassType::SH_DialogButtonLayout)
        ._element("SH_ComboBox_PopupFrameStyle", D::ClassType::SH_ComboBox_PopupFrameStyle)
        ._element("SH_MessageBox_TextInteractionFlags", D::ClassType::SH_MessageBox_TextInteractionFlags)
        ._element("SH_DialogButtonBox_ButtonsHaveIcons", D::ClassType::SH_DialogButtonBox_ButtonsHaveIcons)
        ._element("SH_SpellCheckUnderlineStyle", D::ClassType::SH_SpellCheckUnderlineStyle)
        ._element("SH_MessageBox_CenterButtons", D::ClassType::SH_MessageBox_CenterButtons)
        ._element("SH_Menu_SelectionWrap", D::ClassType::SH_Menu_SelectionWrap)
        ._element("SH_ItemView_MovementWithoutUpdatingSelection", D::ClassType::SH_ItemView_MovementWithoutUpdatingSelection)
        ._element("SH_ToolTip_Mask", D::ClassType::SH_ToolTip_Mask)
        ._element("SH_FocusFrame_AboveWidget", D::ClassType::SH_FocusFrame_AboveWidget)
        ._element("SH_TextControl_FocusIndicatorTextCharFormat", D::ClassType::SH_TextControl_FocusIndicatorTextCharFormat)
        ._element("SH_WizardStyle", D::ClassType::SH_WizardStyle)
        ._element("SH_ItemView_ArrowKeysNavigateIntoChildren", D::ClassType::SH_ItemView_ArrowKeysNavigateIntoChildren)
        ._element("SH_Menu_Mask", D::ClassType::SH_Menu_Mask)
        ._element("SH_Menu_FlashTriggeredItem", D::ClassType::SH_Menu_FlashTriggeredItem)
        ._element("SH_Menu_FadeOutOnHide", D::ClassType::SH_Menu_FadeOutOnHide)
        ._element("SH_SpinBox_ClickAutoRepeatThreshold", D::ClassType::SH_SpinBox_ClickAutoRepeatThreshold)
        ._element("SH_ItemView_PaintAlternatingRowColorsForEmptyArea", D::ClassType::SH_ItemView_PaintAlternatingRowColorsForEmptyArea)
        ._element("SH_FormLayoutWrapPolicy", D::ClassType::SH_FormLayoutWrapPolicy)
        ._element("SH_TabWidget_DefaultTabPosition", D::ClassType::SH_TabWidget_DefaultTabPosition)
        ._element("SH_ToolBar_Movable", D::ClassType::SH_ToolBar_Movable)
        ._element("SH_FormLayoutFieldGrowthPolicy", D::ClassType::SH_FormLayoutFieldGrowthPolicy)
        ._element("SH_FormLayoutFormAlignment", D::ClassType::SH_FormLayoutFormAlignment)
        ._element("SH_FormLayoutLabelAlignment", D::ClassType::SH_FormLayoutLabelAlignment)
        ._element("SH_ItemView_DrawDelegateFrame", D::ClassType::SH_ItemView_DrawDelegateFrame)
        ._element("SH_TabBar_CloseButtonPosition", D::ClassType::SH_TabBar_CloseButtonPosition)
        ._element("SH_DockWidget_ButtonsHaveFrame", D::ClassType::SH_DockWidget_ButtonsHaveFrame)
        ._element("SH_ToolButtonStyle", D::ClassType::SH_ToolButtonStyle)
        ._element("SH_RequestSoftwareInputPanel", D::ClassType::SH_RequestSoftwareInputPanel)
        ._element("SH_ScrollBar_Transient", D::ClassType::SH_ScrollBar_Transient)
        ._element("SH_Menu_SupportsSections", D::ClassType::SH_Menu_SupportsSections)
        ._element("SH_ToolTip_WakeUpDelay", D::ClassType::SH_ToolTip_WakeUpDelay)
        ._element("SH_ToolTip_FallAsleepDelay", D::ClassType::SH_ToolTip_FallAsleepDelay)
        ._element("SH_Widget_Animate", D::ClassType::SH_Widget_Animate)
        ._element("SH_Splitter_OpaqueResize", D::ClassType::SH_Splitter_OpaqueResize)
        ._element("SH_CustomBase", D::ClassType::SH_CustomBase)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StandardPixmap>("StandardPixmap")
        ._element("SP_TitleBarMenuButton", D::ClassType::SP_TitleBarMenuButton)
        ._element("SP_TitleBarMinButton", D::ClassType::SP_TitleBarMinButton)
        ._element("SP_TitleBarMaxButton", D::ClassType::SP_TitleBarMaxButton)
        ._element("SP_TitleBarCloseButton", D::ClassType::SP_TitleBarCloseButton)
        ._element("SP_TitleBarNormalButton", D::ClassType::SP_TitleBarNormalButton)
        ._element("SP_TitleBarShadeButton", D::ClassType::SP_TitleBarShadeButton)
        ._element("SP_TitleBarUnshadeButton", D::ClassType::SP_TitleBarUnshadeButton)
        ._element("SP_TitleBarContextHelpButton", D::ClassType::SP_TitleBarContextHelpButton)
        ._element("SP_DockWidgetCloseButton", D::ClassType::SP_DockWidgetCloseButton)
        ._element("SP_MessageBoxInformation", D::ClassType::SP_MessageBoxInformation)
        ._element("SP_MessageBoxWarning", D::ClassType::SP_MessageBoxWarning)
        ._element("SP_MessageBoxCritical", D::ClassType::SP_MessageBoxCritical)
        ._element("SP_MessageBoxQuestion", D::ClassType::SP_MessageBoxQuestion)
        ._element("SP_DesktopIcon", D::ClassType::SP_DesktopIcon)
        ._element("SP_TrashIcon", D::ClassType::SP_TrashIcon)
        ._element("SP_ComputerIcon", D::ClassType::SP_ComputerIcon)
        ._element("SP_DriveFDIcon", D::ClassType::SP_DriveFDIcon)
        ._element("SP_DriveHDIcon", D::ClassType::SP_DriveHDIcon)
        ._element("SP_DriveCDIcon", D::ClassType::SP_DriveCDIcon)
        ._element("SP_DriveDVDIcon", D::ClassType::SP_DriveDVDIcon)
        ._element("SP_DriveNetIcon", D::ClassType::SP_DriveNetIcon)
        ._element("SP_DirOpenIcon", D::ClassType::SP_DirOpenIcon)
        ._element("SP_DirClosedIcon", D::ClassType::SP_DirClosedIcon)
        ._element("SP_DirLinkIcon", D::ClassType::SP_DirLinkIcon)
        ._element("SP_DirLinkOpenIcon", D::ClassType::SP_DirLinkOpenIcon)
        ._element("SP_FileIcon", D::ClassType::SP_FileIcon)
        ._element("SP_FileLinkIcon", D::ClassType::SP_FileLinkIcon)
        ._element("SP_ToolBarHorizontalExtensionButton", D::ClassType::SP_ToolBarHorizontalExtensionButton)
        ._element("SP_ToolBarVerticalExtensionButton", D::ClassType::SP_ToolBarVerticalExtensionButton)
        ._element("SP_FileDialogStart", D::ClassType::SP_FileDialogStart)
        ._element("SP_FileDialogEnd", D::ClassType::SP_FileDialogEnd)
        ._element("SP_FileDialogToParent", D::ClassType::SP_FileDialogToParent)
        ._element("SP_FileDialogNewFolder", D::ClassType::SP_FileDialogNewFolder)
        ._element("SP_FileDialogDetailedView", D::ClassType::SP_FileDialogDetailedView)
        ._element("SP_FileDialogInfoView", D::ClassType::SP_FileDialogInfoView)
        ._element("SP_FileDialogContentsView", D::ClassType::SP_FileDialogContentsView)
        ._element("SP_FileDialogListView", D::ClassType::SP_FileDialogListView)
        ._element("SP_FileDialogBack", D::ClassType::SP_FileDialogBack)
        ._element("SP_DirIcon", D::ClassType::SP_DirIcon)
        ._element("SP_DialogOkButton", D::ClassType::SP_DialogOkButton)
        ._element("SP_DialogCancelButton", D::ClassType::SP_DialogCancelButton)
        ._element("SP_DialogHelpButton", D::ClassType::SP_DialogHelpButton)
        ._element("SP_DialogOpenButton", D::ClassType::SP_DialogOpenButton)
        ._element("SP_DialogSaveButton", D::ClassType::SP_DialogSaveButton)
        ._element("SP_DialogCloseButton", D::ClassType::SP_DialogCloseButton)
        ._element("SP_DialogApplyButton", D::ClassType::SP_DialogApplyButton)
        ._element("SP_DialogResetButton", D::ClassType::SP_DialogResetButton)
        ._element("SP_DialogDiscardButton", D::ClassType::SP_DialogDiscardButton)
        ._element("SP_DialogYesButton", D::ClassType::SP_DialogYesButton)
        ._element("SP_DialogNoButton", D::ClassType::SP_DialogNoButton)
        ._element("SP_ArrowUp", D::ClassType::SP_ArrowUp)
        ._element("SP_ArrowDown", D::ClassType::SP_ArrowDown)
        ._element("SP_ArrowLeft", D::ClassType::SP_ArrowLeft)
        ._element("SP_ArrowRight", D::ClassType::SP_ArrowRight)
        ._element("SP_ArrowBack", D::ClassType::SP_ArrowBack)
        ._element("SP_ArrowForward", D::ClassType::SP_ArrowForward)
        ._element("SP_DirHomeIcon", D::ClassType::SP_DirHomeIcon)
        ._element("SP_CommandLink", D::ClassType::SP_CommandLink)
        ._element("SP_VistaShield", D::ClassType::SP_VistaShield)
        ._element("SP_BrowserReload", D::ClassType::SP_BrowserReload)
        ._element("SP_BrowserStop", D::ClassType::SP_BrowserStop)
        ._element("SP_MediaPlay", D::ClassType::SP_MediaPlay)
        ._element("SP_MediaStop", D::ClassType::SP_MediaStop)
        ._element("SP_MediaPause", D::ClassType::SP_MediaPause)
        ._element("SP_MediaSkipForward", D::ClassType::SP_MediaSkipForward)
        ._element("SP_MediaSkipBackward", D::ClassType::SP_MediaSkipBackward)
        ._element("SP_MediaSeekForward", D::ClassType::SP_MediaSeekForward)
        ._element("SP_MediaSeekBackward", D::ClassType::SP_MediaSeekBackward)
        ._element("SP_MediaVolume", D::ClassType::SP_MediaVolume)
        ._element("SP_MediaVolumeMuted", D::ClassType::SP_MediaVolumeMuted)
        ._element("SP_LineEditClearButton", D::ClassType::SP_LineEditClearButton)
        ._element("SP_CustomBase", D::ClassType::SP_CustomBase)
    ;
    {
        GDefineMetaClass<QFlags<typename QStyle::StateFlag > > _t_d = GDefineMetaClass<QFlags<typename QStyle::StateFlag > >::lazyDeclare("State", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QStyle::StateFlag > >, typename QStyle::StateFlag >);
        _d._class(_t_d);
    }
    {
        GDefineMetaClass<QFlags<typename QStyle::SubControl > > _t_d = GDefineMetaClass<QFlags<typename QStyle::SubControl > >::lazyDeclare("SubControls", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QStyle::SubControl > >, typename QStyle::SubControl >);
        _d._class(_t_d);
    }
}


class QStyleWrapper : public QStyle, public cpgf::GScriptWrapper {
public:
    
    QStyleWrapper()
        : QStyle() {}
    
    QRect subElementRect(QStyle::SubElement subElement, const QStyleOption * option, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("subElementRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunction(func.get(), this, subElement, option, widget).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QRect super_subElementRect(QStyle::SubElement subElement, const QStyleOption * option, const QWidget * widget = 0) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void polish(QApplication * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("polish"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QStyle::polish(__arg0);
    }
    void super_polish(QApplication * __arg0)
    {
        QStyle::polish(__arg0);
    }
    
    void connectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("connectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::connectNotify(signal);
    }
    void super_connectNotify(const QMetaMethod & signal)
    {
        QObject::connectNotify(signal);
    }
    
    void childEvent(QChildEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::childEvent(__arg0);
    }
    void super_childEvent(QChildEvent * __arg0)
    {
        QObject::childEvent(__arg0);
    }
    
    void drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption * opt, QPainter * p, const QWidget * w = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawPrimitive"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, pe, opt, p, w);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption * opt, QPainter * p, const QWidget * w = 0) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap & pixmap, const QStyleOption * opt) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("generatedIconPixmap"));
        if(func)
        {
            return cpgf::fromVariant<QPixmap >(cpgf::invokeScriptFunction(func.get(), this, iconMode, pixmap, opt).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QPixmap super_generatedIconPixmap(QIcon::Mode iconMode, const QPixmap & pixmap, const QStyleOption * opt) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0).getValue());
        }
        return QStyle::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QStyle::qt_metacast(__arg0);
    }
    
    void drawItemText(QPainter * painter, const QRect & rect, int flags, const QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole textRole = QPalette::NoRole) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawItemText"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, painter, rect, flags, pal, enabled, text, textRole);
            return;
        }
        QStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
    }
    void super_drawItemText(QPainter * painter, const QRect & rect, int flags, const QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole textRole = QPalette::NoRole) const
    {
        QStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
    }
    
    void polish(QWidget * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("polish"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QStyle::polish(__arg0);
    }
    void super_polish(QWidget * __arg0)
    {
        QStyle::polish(__arg0);
    }
    
    void drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QPainter * p, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawComplexControl"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, cc, opt, p, widget);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QPainter * p, const QWidget * widget = 0) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0).getValue());
        }
        return QObject::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QObject::event(__arg0);
    }
    
    void timerEvent(QTimerEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::timerEvent(__arg0);
    }
    void super_timerEvent(QTimerEvent * __arg0)
    {
        QObject::timerEvent(__arg0);
    }
    
    QIcon standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption * option = 0, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("standardIcon"));
        if(func)
        {
            return cpgf::fromVariant<QIcon >(cpgf::invokeScriptFunction(func.get(), this, standardIcon, option, widget).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QIcon super_standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption * option = 0, const QWidget * widget = 0) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, const QPoint & pt, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hitTestComplexControl"));
        if(func)
        {
            return cpgf::fromVariant<QStyle::SubControl >(cpgf::invokeScriptFunction(func.get(), this, cc, opt, pt, widget).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QStyle::SubControl super_hitTestComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, const QPoint & pt, const QWidget * widget = 0) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void unpolish(QApplication * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("unpolish"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QStyle::unpolish(__arg0);
    }
    void super_unpolish(QApplication * __arg0)
    {
        QStyle::unpolish(__arg0);
    }
    
    void polish(QPalette & __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("polish"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QStyle::polish(__arg0);
    }
    void super_polish(QPalette & __arg0)
    {
        QStyle::polish(__arg0);
    }
    
    void unpolish(QWidget * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("unpolish"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QStyle::unpolish(__arg0);
    }
    void super_unpolish(QWidget * __arg0)
    {
        QStyle::unpolish(__arg0);
    }
    
    int pixelMetric(QStyle::PixelMetric metric, const QStyleOption * option = 0, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("pixelMetric"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, metric, option, widget).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_pixelMetric(QStyle::PixelMetric metric, const QStyleOption * option = 0, const QWidget * widget = 0) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    int styleHint(QStyle::StyleHint stylehint, const QStyleOption * opt = 0, const QWidget * widget = 0, QStyleHintReturn * returnData = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("styleHint"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, stylehint, opt, widget, returnData).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_styleHint(QStyle::StyleHint stylehint, const QStyleOption * opt = 0, const QWidget * widget = 0, QStyleHintReturn * returnData = 0) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    void drawItemPixmap(QPainter * painter, const QRect & rect, int alignment, const QPixmap & pixmap) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawItemPixmap"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, painter, rect, alignment, pixmap);
            return;
        }
        QStyle::drawItemPixmap(painter, rect, alignment, pixmap);
    }
    void super_drawItemPixmap(QPainter * painter, const QRect & rect, int alignment, const QPixmap & pixmap) const
    {
        QStyle::drawItemPixmap(painter, rect, alignment, pixmap);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    QRect itemPixmapRect(const QRect & r, int flags, const QPixmap & pixmap) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemPixmapRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunction(func.get(), this, r, flags, pixmap).getValue());
        }
        return QStyle::itemPixmapRect(r, flags, pixmap);
    }
    QRect super_itemPixmapRect(const QRect & r, int flags, const QPixmap & pixmap) const
    {
        return QStyle::itemPixmapRect(r, flags, pixmap);
    }
    
    void drawControl(QStyle::ControlElement element, const QStyleOption * opt, QPainter * p, const QWidget * w = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawControl"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, element, opt, p, w);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_drawControl(QStyle::ControlElement element, const QStyleOption * opt, QPainter * p, const QWidget * w = 0) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option = 0, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("layoutSpacing"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, control1, control2, orientation, option, widget).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption * option = 0, const QWidget * widget = 0) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1).getValue());
        }
        return QObject::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QObject::eventFilter(__arg0, __arg1);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QStyle::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QStyle::metaObject();
    }
    
    QPixmap standardPixmap(QStyle::StandardPixmap standardPixmap, const QStyleOption * opt = 0, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("standardPixmap"));
        if(func)
        {
            return cpgf::fromVariant<QPixmap >(cpgf::invokeScriptFunction(func.get(), this, standardPixmap, opt, widget).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QPixmap super_standardPixmap(QStyle::StandardPixmap standardPixmap, const QStyleOption * opt = 0, const QWidget * widget = 0) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QRect itemTextRect(const QFontMetrics & fm, const QRect & r, int flags, bool enabled, const QString & text) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemTextRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunction(func.get(), this, fm, r, flags, enabled, text).getValue());
        }
        return QStyle::itemTextRect(fm, r, flags, enabled, text);
    }
    QRect super_itemTextRect(const QFontMetrics & fm, const QRect & r, int flags, bool enabled, const QString & text) const
    {
        return QStyle::itemTextRect(fm, r, flags, enabled, text);
    }
    
    void customEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("customEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::customEvent(__arg0);
    }
    void super_customEvent(QEvent * __arg0)
    {
        QObject::customEvent(__arg0);
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QStyle::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QStyle::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    void disconnectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("disconnectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::disconnectNotify(signal);
    }
    void super_disconnectNotify(const QMetaMethod & signal)
    {
        QObject::disconnectNotify(signal);
    }
    
    QSize sizeFromContents(QStyle::ContentsType ct, const QStyleOption * opt, const QSize & contentsSize, const QWidget * w = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeFromContents"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this, ct, opt, contentsSize, w).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QSize super_sizeFromContents(QStyle::ContentsType ct, const QStyleOption * opt, const QSize & contentsSize, const QWidget * w = 0) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QRect subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * widget = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("subControlRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunction(func.get(), this, cc, opt, sc, widget).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QRect super_subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex * opt, QStyle::SubControl sc, const QWidget * widget = 0) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QPalette standardPalette() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("standardPalette"));
        if(func)
        {
            return cpgf::fromVariant<QPalette >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QStyle::standardPalette();
    }
    QPalette super_standardPalette() const
    {
        return QStyle::standardPalette();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_subElementRect", (QRect (D::ClassType::*) (QStyle::SubElement, const QStyleOption *, const QWidget *) const)&D::ClassType::super_subElementRect)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_polish", (void (D::ClassType::*) (QApplication *))&D::ClassType::super_polish);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_drawPrimitive", (void (D::ClassType::*) (QStyle::PrimitiveElement, const QStyleOption *, QPainter *, const QWidget *) const)&D::ClassType::super_drawPrimitive)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_generatedIconPixmap", (QPixmap (D::ClassType::*) (QIcon::Mode, const QPixmap &, const QStyleOption *) const)&D::ClassType::super_generatedIconPixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_drawItemText", (void (D::ClassType::*) (QPainter *, const QRect &, int, const QPalette &, bool, const QString &, QPalette::ColorRole) const)&D::ClassType::super_drawItemText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<3>, cpgf::GMetaRuleCopyConstReference<5> >())
            ._default(copyVariantFromCopyable(QPalette::NoRole))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_polish", (void (D::ClassType::*) (QWidget *))&D::ClassType::super_polish);
        _d.CPGF_MD_TEMPLATE _method("super_drawComplexControl", (void (D::ClassType::*) (QStyle::ComplexControl, const QStyleOptionComplex *, QPainter *, const QWidget *) const)&D::ClassType::super_drawComplexControl)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_standardIcon", (QIcon (D::ClassType::*) (QStyle::StandardPixmap, const QStyleOption *, const QWidget *) const)&D::ClassType::super_standardIcon)
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_hitTestComplexControl", (QStyle::SubControl (D::ClassType::*) (QStyle::ComplexControl, const QStyleOptionComplex *, const QPoint &, const QWidget *) const)&D::ClassType::super_hitTestComplexControl)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_unpolish", (void (D::ClassType::*) (QApplication *))&D::ClassType::super_unpolish);
        _d.CPGF_MD_TEMPLATE _method("super_polish", (void (D::ClassType::*) (QPalette &))&D::ClassType::super_polish);
        _d.CPGF_MD_TEMPLATE _method("super_unpolish", (void (D::ClassType::*) (QWidget *))&D::ClassType::super_unpolish);
        _d.CPGF_MD_TEMPLATE _method("super_pixelMetric", (int (D::ClassType::*) (QStyle::PixelMetric, const QStyleOption *, const QWidget *) const)&D::ClassType::super_pixelMetric)
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_styleHint", (int (D::ClassType::*) (QStyle::StyleHint, const QStyleOption *, const QWidget *, QStyleHintReturn *) const)&D::ClassType::super_styleHint)
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_drawItemPixmap", (void (D::ClassType::*) (QPainter *, const QRect &, int, const QPixmap &) const)&D::ClassType::super_drawItemPixmap);
        _d.CPGF_MD_TEMPLATE _method("super_itemPixmapRect", (QRect (D::ClassType::*) (const QRect &, int, const QPixmap &) const)&D::ClassType::super_itemPixmapRect);
        _d.CPGF_MD_TEMPLATE _method("super_drawControl", (void (D::ClassType::*) (QStyle::ControlElement, const QStyleOption *, QPainter *, const QWidget *) const)&D::ClassType::super_drawControl)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_layoutSpacing", (int (D::ClassType::*) (QSizePolicy::ControlType, QSizePolicy::ControlType, Qt::Orientation, const QStyleOption *, const QWidget *) const)&D::ClassType::super_layoutSpacing)
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_standardPixmap", (QPixmap (D::ClassType::*) (QStyle::StandardPixmap, const QStyleOption *, const QWidget *) const)&D::ClassType::super_standardPixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
            ._default(copyVariantFromCopyable(0))
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_itemTextRect", (QRect (D::ClassType::*) (const QFontMetrics &, const QRect &, int, bool, const QString &) const)&D::ClassType::super_itemTextRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<4> >());
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_sizeFromContents", (QSize (D::ClassType::*) (QStyle::ContentsType, const QStyleOption *, const QSize &, const QWidget *) const)&D::ClassType::super_sizeFromContents)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_subControlRect", (QRect (D::ClassType::*) (QStyle::ComplexControl, const QStyleOptionComplex *, QStyle::SubControl, const QWidget *) const)&D::ClassType::super_subControlRect)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_standardPalette", (QPalette (D::ClassType::*) () const)&D::ClassType::super_standardPalette);
    }
};


template <typename D>
void buildMetaClass_QStyleWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    
    QStyleWrapper::cpgf__register(_d);
    
    buildMetaClass_QStyle<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
