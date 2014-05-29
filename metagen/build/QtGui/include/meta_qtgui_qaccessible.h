// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QACCESSIBLE_H
#define CPGF_META_QTGUI_QACCESSIBLE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qaccessible(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qAccessibleRoleString", (const char * (*) (QAccessible::Role))&qAccessibleRoleString);
    _d.CPGF_MD_TEMPLATE _method("qAccessibleEventString", (const char * (*) (QAccessible::Event))&qAccessibleEventString);
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtGui_15")
        ._element("QAccessibleInterface_iid", QAccessibleInterface_iid)
    ;
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QAccessible::State &, const QAccessible::State &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QAccessibleInterface *)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QAccessibleEvent &)>(mopHolder << mopHolder);
}


inline quint64 bItFiEldWrapper_QAccessible_State_disabled_getter(QAccessible::State * self) {
    return self->disabled;
}

inline void bItFiEldWrapper_QAccessible_State_disabled_setter(QAccessible::State * self, quint64 value) {
    self->disabled = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_selected_getter(QAccessible::State * self) {
    return self->selected;
}

inline void bItFiEldWrapper_QAccessible_State_selected_setter(QAccessible::State * self, quint64 value) {
    self->selected = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_focusable_getter(QAccessible::State * self) {
    return self->focusable;
}

inline void bItFiEldWrapper_QAccessible_State_focusable_setter(QAccessible::State * self, quint64 value) {
    self->focusable = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_focused_getter(QAccessible::State * self) {
    return self->focused;
}

inline void bItFiEldWrapper_QAccessible_State_focused_setter(QAccessible::State * self, quint64 value) {
    self->focused = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_pressed_getter(QAccessible::State * self) {
    return self->pressed;
}

inline void bItFiEldWrapper_QAccessible_State_pressed_setter(QAccessible::State * self, quint64 value) {
    self->pressed = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_checkable_getter(QAccessible::State * self) {
    return self->checkable;
}

inline void bItFiEldWrapper_QAccessible_State_checkable_setter(QAccessible::State * self, quint64 value) {
    self->checkable = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_checked_getter(QAccessible::State * self) {
    return self->checked;
}

inline void bItFiEldWrapper_QAccessible_State_checked_setter(QAccessible::State * self, quint64 value) {
    self->checked = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_checkStateMixed_getter(QAccessible::State * self) {
    return self->checkStateMixed;
}

inline void bItFiEldWrapper_QAccessible_State_checkStateMixed_setter(QAccessible::State * self, quint64 value) {
    self->checkStateMixed = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_readOnly_getter(QAccessible::State * self) {
    return self->readOnly;
}

inline void bItFiEldWrapper_QAccessible_State_readOnly_setter(QAccessible::State * self, quint64 value) {
    self->readOnly = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_hotTracked_getter(QAccessible::State * self) {
    return self->hotTracked;
}

inline void bItFiEldWrapper_QAccessible_State_hotTracked_setter(QAccessible::State * self, quint64 value) {
    self->hotTracked = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_defaultButton_getter(QAccessible::State * self) {
    return self->defaultButton;
}

inline void bItFiEldWrapper_QAccessible_State_defaultButton_setter(QAccessible::State * self, quint64 value) {
    self->defaultButton = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_expanded_getter(QAccessible::State * self) {
    return self->expanded;
}

inline void bItFiEldWrapper_QAccessible_State_expanded_setter(QAccessible::State * self, quint64 value) {
    self->expanded = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_collapsed_getter(QAccessible::State * self) {
    return self->collapsed;
}

inline void bItFiEldWrapper_QAccessible_State_collapsed_setter(QAccessible::State * self, quint64 value) {
    self->collapsed = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_busy_getter(QAccessible::State * self) {
    return self->busy;
}

inline void bItFiEldWrapper_QAccessible_State_busy_setter(QAccessible::State * self, quint64 value) {
    self->busy = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_expandable_getter(QAccessible::State * self) {
    return self->expandable;
}

inline void bItFiEldWrapper_QAccessible_State_expandable_setter(QAccessible::State * self, quint64 value) {
    self->expandable = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_marqueed_getter(QAccessible::State * self) {
    return self->marqueed;
}

inline void bItFiEldWrapper_QAccessible_State_marqueed_setter(QAccessible::State * self, quint64 value) {
    self->marqueed = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_animated_getter(QAccessible::State * self) {
    return self->animated;
}

inline void bItFiEldWrapper_QAccessible_State_animated_setter(QAccessible::State * self, quint64 value) {
    self->animated = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_invisible_getter(QAccessible::State * self) {
    return self->invisible;
}

inline void bItFiEldWrapper_QAccessible_State_invisible_setter(QAccessible::State * self, quint64 value) {
    self->invisible = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_offscreen_getter(QAccessible::State * self) {
    return self->offscreen;
}

inline void bItFiEldWrapper_QAccessible_State_offscreen_setter(QAccessible::State * self, quint64 value) {
    self->offscreen = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_sizeable_getter(QAccessible::State * self) {
    return self->sizeable;
}

inline void bItFiEldWrapper_QAccessible_State_sizeable_setter(QAccessible::State * self, quint64 value) {
    self->sizeable = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_movable_getter(QAccessible::State * self) {
    return self->movable;
}

inline void bItFiEldWrapper_QAccessible_State_movable_setter(QAccessible::State * self, quint64 value) {
    self->movable = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_selfVoicing_getter(QAccessible::State * self) {
    return self->selfVoicing;
}

inline void bItFiEldWrapper_QAccessible_State_selfVoicing_setter(QAccessible::State * self, quint64 value) {
    self->selfVoicing = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_selectable_getter(QAccessible::State * self) {
    return self->selectable;
}

inline void bItFiEldWrapper_QAccessible_State_selectable_setter(QAccessible::State * self, quint64 value) {
    self->selectable = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_linked_getter(QAccessible::State * self) {
    return self->linked;
}

inline void bItFiEldWrapper_QAccessible_State_linked_setter(QAccessible::State * self, quint64 value) {
    self->linked = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_traversed_getter(QAccessible::State * self) {
    return self->traversed;
}

inline void bItFiEldWrapper_QAccessible_State_traversed_setter(QAccessible::State * self, quint64 value) {
    self->traversed = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_multiSelectable_getter(QAccessible::State * self) {
    return self->multiSelectable;
}

inline void bItFiEldWrapper_QAccessible_State_multiSelectable_setter(QAccessible::State * self, quint64 value) {
    self->multiSelectable = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_extSelectable_getter(QAccessible::State * self) {
    return self->extSelectable;
}

inline void bItFiEldWrapper_QAccessible_State_extSelectable_setter(QAccessible::State * self, quint64 value) {
    self->extSelectable = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_passwordEdit_getter(QAccessible::State * self) {
    return self->passwordEdit;
}

inline void bItFiEldWrapper_QAccessible_State_passwordEdit_setter(QAccessible::State * self, quint64 value) {
    self->passwordEdit = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_hasPopup_getter(QAccessible::State * self) {
    return self->hasPopup;
}

inline void bItFiEldWrapper_QAccessible_State_hasPopup_setter(QAccessible::State * self, quint64 value) {
    self->hasPopup = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_modal_getter(QAccessible::State * self) {
    return self->modal;
}

inline void bItFiEldWrapper_QAccessible_State_modal_setter(QAccessible::State * self, quint64 value) {
    self->modal = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_active_getter(QAccessible::State * self) {
    return self->active;
}

inline void bItFiEldWrapper_QAccessible_State_active_setter(QAccessible::State * self, quint64 value) {
    self->active = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_invalid_getter(QAccessible::State * self) {
    return self->invalid;
}

inline void bItFiEldWrapper_QAccessible_State_invalid_setter(QAccessible::State * self, quint64 value) {
    self->invalid = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_editable_getter(QAccessible::State * self) {
    return self->editable;
}

inline void bItFiEldWrapper_QAccessible_State_editable_setter(QAccessible::State * self, quint64 value) {
    self->editable = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_multiLine_getter(QAccessible::State * self) {
    return self->multiLine;
}

inline void bItFiEldWrapper_QAccessible_State_multiLine_setter(QAccessible::State * self, quint64 value) {
    self->multiLine = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_selectableText_getter(QAccessible::State * self) {
    return self->selectableText;
}

inline void bItFiEldWrapper_QAccessible_State_selectableText_setter(QAccessible::State * self, quint64 value) {
    self->selectableText = value;
}
inline quint64 bItFiEldWrapper_QAccessible_State_supportsAutoCompletion_getter(QAccessible::State * self) {
    return self->supportsAutoCompletion;
}

inline void bItFiEldWrapper_QAccessible_State_supportsAutoCompletion_setter(QAccessible::State * self, quint64 value) {
    self->supportsAutoCompletion = value;
}


template <typename D>
void buildMetaClass_QAccessible(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("installFactory", &D::ClassType::installFactory);
    _d.CPGF_MD_TEMPLATE _method("removeFactory", &D::ClassType::removeFactory);
    _d.CPGF_MD_TEMPLATE _method("installUpdateHandler", &D::ClassType::installUpdateHandler);
    _d.CPGF_MD_TEMPLATE _method("installRootObjectHandler", &D::ClassType::installRootObjectHandler);
    _d.CPGF_MD_TEMPLATE _method("queryAccessibleInterface", &D::ClassType::queryAccessibleInterface);
    _d.CPGF_MD_TEMPLATE _method("uniqueId", &D::ClassType::uniqueId);
    _d.CPGF_MD_TEMPLATE _method("accessibleInterface", &D::ClassType::accessibleInterface);
    _d.CPGF_MD_TEMPLATE _method("registerAccessibleInterface", &D::ClassType::registerAccessibleInterface);
    _d.CPGF_MD_TEMPLATE _method("deleteAccessibleInterface", &D::ClassType::deleteAccessibleInterface);
    _d.CPGF_MD_TEMPLATE _method("updateAccessibility", &D::ClassType::updateAccessibility);
    _d.CPGF_MD_TEMPLATE _method("isActive", &D::ClassType::isActive);
    _d.CPGF_MD_TEMPLATE _method("setRootObject", &D::ClassType::setRootObject);
    _d.CPGF_MD_TEMPLATE _method("cleanup", &D::ClassType::cleanup);
    _d.CPGF_MD_TEMPLATE _method("qAccessibleTextBoundaryHelper", &D::ClassType::qAccessibleTextBoundaryHelper, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Event>("Event")
        ._element("SoundPlayed", D::ClassType::SoundPlayed)
        ._element("Alert", D::ClassType::Alert)
        ._element("ForegroundChanged", D::ClassType::ForegroundChanged)
        ._element("MenuStart", D::ClassType::MenuStart)
        ._element("MenuEnd", D::ClassType::MenuEnd)
        ._element("PopupMenuStart", D::ClassType::PopupMenuStart)
        ._element("PopupMenuEnd", D::ClassType::PopupMenuEnd)
        ._element("ContextHelpStart", D::ClassType::ContextHelpStart)
        ._element("ContextHelpEnd", D::ClassType::ContextHelpEnd)
        ._element("DragDropStart", D::ClassType::DragDropStart)
        ._element("DragDropEnd", D::ClassType::DragDropEnd)
        ._element("DialogStart", D::ClassType::DialogStart)
        ._element("DialogEnd", D::ClassType::DialogEnd)
        ._element("ScrollingStart", D::ClassType::ScrollingStart)
        ._element("ScrollingEnd", D::ClassType::ScrollingEnd)
        ._element("MenuCommand", D::ClassType::MenuCommand)
        ._element("ActionChanged", D::ClassType::ActionChanged)
        ._element("ActiveDescendantChanged", D::ClassType::ActiveDescendantChanged)
        ._element("AttributeChanged", D::ClassType::AttributeChanged)
        ._element("DocumentContentChanged", D::ClassType::DocumentContentChanged)
        ._element("DocumentLoadComplete", D::ClassType::DocumentLoadComplete)
        ._element("DocumentLoadStopped", D::ClassType::DocumentLoadStopped)
        ._element("DocumentReload", D::ClassType::DocumentReload)
        ._element("HyperlinkEndIndexChanged", D::ClassType::HyperlinkEndIndexChanged)
        ._element("HyperlinkNumberOfAnchorsChanged", D::ClassType::HyperlinkNumberOfAnchorsChanged)
        ._element("HyperlinkSelectedLinkChanged", D::ClassType::HyperlinkSelectedLinkChanged)
        ._element("HypertextLinkActivated", D::ClassType::HypertextLinkActivated)
        ._element("HypertextLinkSelected", D::ClassType::HypertextLinkSelected)
        ._element("HyperlinkStartIndexChanged", D::ClassType::HyperlinkStartIndexChanged)
        ._element("HypertextChanged", D::ClassType::HypertextChanged)
        ._element("HypertextNLinksChanged", D::ClassType::HypertextNLinksChanged)
        ._element("ObjectAttributeChanged", D::ClassType::ObjectAttributeChanged)
        ._element("PageChanged", D::ClassType::PageChanged)
        ._element("SectionChanged", D::ClassType::SectionChanged)
        ._element("TableCaptionChanged", D::ClassType::TableCaptionChanged)
        ._element("TableColumnDescriptionChanged", D::ClassType::TableColumnDescriptionChanged)
        ._element("TableColumnHeaderChanged", D::ClassType::TableColumnHeaderChanged)
        ._element("TableModelChanged", D::ClassType::TableModelChanged)
        ._element("TableRowDescriptionChanged", D::ClassType::TableRowDescriptionChanged)
        ._element("TableRowHeaderChanged", D::ClassType::TableRowHeaderChanged)
        ._element("TableSummaryChanged", D::ClassType::TableSummaryChanged)
        ._element("TextAttributeChanged", D::ClassType::TextAttributeChanged)
        ._element("TextCaretMoved", D::ClassType::TextCaretMoved)
        ._element("TextColumnChanged", D::ClassType::TextColumnChanged)
        ._element("TextInserted", D::ClassType::TextInserted)
        ._element("TextRemoved", D::ClassType::TextRemoved)
        ._element("TextUpdated", D::ClassType::TextUpdated)
        ._element("TextSelectionChanged", D::ClassType::TextSelectionChanged)
        ._element("VisibleDataChanged", D::ClassType::VisibleDataChanged)
        ._element("ObjectCreated", D::ClassType::ObjectCreated)
        ._element("ObjectDestroyed", D::ClassType::ObjectDestroyed)
        ._element("ObjectShow", D::ClassType::ObjectShow)
        ._element("ObjectHide", D::ClassType::ObjectHide)
        ._element("ObjectReorder", D::ClassType::ObjectReorder)
        ._element("Focus", D::ClassType::Focus)
        ._element("Selection", D::ClassType::Selection)
        ._element("SelectionAdd", D::ClassType::SelectionAdd)
        ._element("SelectionRemove", D::ClassType::SelectionRemove)
        ._element("SelectionWithin", D::ClassType::SelectionWithin)
        ._element("StateChanged", D::ClassType::StateChanged)
        ._element("LocationChanged", D::ClassType::LocationChanged)
        ._element("NameChanged", D::ClassType::NameChanged)
        ._element("DescriptionChanged", D::ClassType::DescriptionChanged)
        ._element("ValueChanged", D::ClassType::ValueChanged)
        ._element("ParentChanged", D::ClassType::ParentChanged)
        ._element("HelpChanged", D::ClassType::HelpChanged)
        ._element("DefaultActionChanged", D::ClassType::DefaultActionChanged)
        ._element("AcceleratorChanged", D::ClassType::AcceleratorChanged)
        ._element("InvalidEvent", D::ClassType::InvalidEvent)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Role>("Role")
        ._element("NoRole", D::ClassType::NoRole)
        ._element("TitleBar", D::ClassType::TitleBar)
        ._element("MenuBar", D::ClassType::MenuBar)
        ._element("ScrollBar", D::ClassType::ScrollBar)
        ._element("Grip", D::ClassType::Grip)
        ._element("Sound", D::ClassType::Sound)
        ._element("Cursor", D::ClassType::Cursor)
        ._element("Caret", D::ClassType::Caret)
        ._element("AlertMessage", D::ClassType::AlertMessage)
        ._element("Window", D::ClassType::Window)
        ._element("Client", D::ClassType::Client)
        ._element("PopupMenu", D::ClassType::PopupMenu)
        ._element("MenuItem", D::ClassType::MenuItem)
        ._element("ToolTip", D::ClassType::ToolTip)
        ._element("Application", D::ClassType::Application)
        ._element("Document", D::ClassType::Document)
        ._element("Pane", D::ClassType::Pane)
        ._element("Chart", D::ClassType::Chart)
        ._element("Dialog", D::ClassType::Dialog)
        ._element("Border", D::ClassType::Border)
        ._element("Grouping", D::ClassType::Grouping)
        ._element("Separator", D::ClassType::Separator)
        ._element("ToolBar", D::ClassType::ToolBar)
        ._element("StatusBar", D::ClassType::StatusBar)
        ._element("Table", D::ClassType::Table)
        ._element("ColumnHeader", D::ClassType::ColumnHeader)
        ._element("RowHeader", D::ClassType::RowHeader)
        ._element("Column", D::ClassType::Column)
        ._element("Row", D::ClassType::Row)
        ._element("Cell", D::ClassType::Cell)
        ._element("Link", D::ClassType::Link)
        ._element("HelpBalloon", D::ClassType::HelpBalloon)
        ._element("Assistant", D::ClassType::Assistant)
        ._element("List", D::ClassType::List)
        ._element("ListItem", D::ClassType::ListItem)
        ._element("Tree", D::ClassType::Tree)
        ._element("TreeItem", D::ClassType::TreeItem)
        ._element("PageTab", D::ClassType::PageTab)
        ._element("PropertyPage", D::ClassType::PropertyPage)
        ._element("Indicator", D::ClassType::Indicator)
        ._element("Graphic", D::ClassType::Graphic)
        ._element("StaticText", D::ClassType::StaticText)
        ._element("EditableText", D::ClassType::EditableText)
        ._element("Button", D::ClassType::Button)
        ._element("PushButton", D::ClassType::PushButton)
        ._element("CheckBox", D::ClassType::CheckBox)
        ._element("RadioButton", D::ClassType::RadioButton)
        ._element("ComboBox", D::ClassType::ComboBox)
        ._element("ProgressBar", D::ClassType::ProgressBar)
        ._element("Dial", D::ClassType::Dial)
        ._element("HotkeyField", D::ClassType::HotkeyField)
        ._element("Slider", D::ClassType::Slider)
        ._element("SpinBox", D::ClassType::SpinBox)
        ._element("Canvas", D::ClassType::Canvas)
        ._element("Animation", D::ClassType::Animation)
        ._element("Equation", D::ClassType::Equation)
        ._element("ButtonDropDown", D::ClassType::ButtonDropDown)
        ._element("ButtonMenu", D::ClassType::ButtonMenu)
        ._element("ButtonDropGrid", D::ClassType::ButtonDropGrid)
        ._element("Whitespace", D::ClassType::Whitespace)
        ._element("PageTabList", D::ClassType::PageTabList)
        ._element("Clock", D::ClassType::Clock)
        ._element("Splitter", D::ClassType::Splitter)
        ._element("LayeredPane", D::ClassType::LayeredPane)
        ._element("Terminal", D::ClassType::Terminal)
        ._element("Desktop", D::ClassType::Desktop)
        ._element("UserRole", D::ClassType::UserRole)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Text>("Text")
        ._element("Name", D::ClassType::Name)
        ._element("Description", D::ClassType::Description)
        ._element("Value", D::ClassType::Value)
        ._element("Help", D::ClassType::Help)
        ._element("Accelerator", D::ClassType::Accelerator)
        ._element("DebugDescription", D::ClassType::DebugDescription)
        ._element("UserText", D::ClassType::UserText)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::RelationFlag>("RelationFlag")
        ._element("Label", D::ClassType::Label)
        ._element("Labelled", D::ClassType::Labelled)
        ._element("Controller", D::ClassType::Controller)
        ._element("Controlled", D::ClassType::Controlled)
        ._element("AllRelations", D::ClassType::AllRelations)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::InterfaceType>("InterfaceType")
        ._element("TextInterface", D::ClassType::TextInterface)
        ._element("EditableTextInterface", D::ClassType::EditableTextInterface)
        ._element("ValueInterface", D::ClassType::ValueInterface)
        ._element("ActionInterface", D::ClassType::ActionInterface)
        ._element("ImageInterface", D::ClassType::ImageInterface)
        ._element("TableInterface", D::ClassType::TableInterface)
        ._element("TableCellInterface", D::ClassType::TableCellInterface)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::TextBoundaryType>("TextBoundaryType")
        ._element("CharBoundary", D::ClassType::CharBoundary)
        ._element("WordBoundary", D::ClassType::WordBoundary)
        ._element("SentenceBoundary", D::ClassType::SentenceBoundary)
        ._element("ParagraphBoundary", D::ClassType::ParagraphBoundary)
        ._element("LineBoundary", D::ClassType::LineBoundary)
        ._element("NoBoundary", D::ClassType::NoBoundary)
    ;
    {
        GDefineMetaClass<QFlags<typename QAccessible::RelationFlag > > _t_d = GDefineMetaClass<QFlags<typename QAccessible::RelationFlag > >::lazyDeclare("Relation", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QAccessible::RelationFlag > >, typename QAccessible::RelationFlag >);
        _d._class(_t_d);
    }
    {
        GDefineMetaClass<QAccessible::State> _nd = GDefineMetaClass<QAccessible::State>::declare("State");
        _nd.CPGF_MD_TEMPLATE _constructor<void * ()>();
        _nd.CPGF_MD_TEMPLATE _property("disabled", &bItFiEldWrapper_QAccessible_State_disabled_getter, &bItFiEldWrapper_QAccessible_State_disabled_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("selected", &bItFiEldWrapper_QAccessible_State_selected_getter, &bItFiEldWrapper_QAccessible_State_selected_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("focusable", &bItFiEldWrapper_QAccessible_State_focusable_getter, &bItFiEldWrapper_QAccessible_State_focusable_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("focused", &bItFiEldWrapper_QAccessible_State_focused_getter, &bItFiEldWrapper_QAccessible_State_focused_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("pressed", &bItFiEldWrapper_QAccessible_State_pressed_getter, &bItFiEldWrapper_QAccessible_State_pressed_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("checkable", &bItFiEldWrapper_QAccessible_State_checkable_getter, &bItFiEldWrapper_QAccessible_State_checkable_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("checked", &bItFiEldWrapper_QAccessible_State_checked_getter, &bItFiEldWrapper_QAccessible_State_checked_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("checkStateMixed", &bItFiEldWrapper_QAccessible_State_checkStateMixed_getter, &bItFiEldWrapper_QAccessible_State_checkStateMixed_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("readOnly", &bItFiEldWrapper_QAccessible_State_readOnly_getter, &bItFiEldWrapper_QAccessible_State_readOnly_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("hotTracked", &bItFiEldWrapper_QAccessible_State_hotTracked_getter, &bItFiEldWrapper_QAccessible_State_hotTracked_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("defaultButton", &bItFiEldWrapper_QAccessible_State_defaultButton_getter, &bItFiEldWrapper_QAccessible_State_defaultButton_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("expanded", &bItFiEldWrapper_QAccessible_State_expanded_getter, &bItFiEldWrapper_QAccessible_State_expanded_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("collapsed", &bItFiEldWrapper_QAccessible_State_collapsed_getter, &bItFiEldWrapper_QAccessible_State_collapsed_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("busy", &bItFiEldWrapper_QAccessible_State_busy_getter, &bItFiEldWrapper_QAccessible_State_busy_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("expandable", &bItFiEldWrapper_QAccessible_State_expandable_getter, &bItFiEldWrapper_QAccessible_State_expandable_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("marqueed", &bItFiEldWrapper_QAccessible_State_marqueed_getter, &bItFiEldWrapper_QAccessible_State_marqueed_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("animated", &bItFiEldWrapper_QAccessible_State_animated_getter, &bItFiEldWrapper_QAccessible_State_animated_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("invisible", &bItFiEldWrapper_QAccessible_State_invisible_getter, &bItFiEldWrapper_QAccessible_State_invisible_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("offscreen", &bItFiEldWrapper_QAccessible_State_offscreen_getter, &bItFiEldWrapper_QAccessible_State_offscreen_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("sizeable", &bItFiEldWrapper_QAccessible_State_sizeable_getter, &bItFiEldWrapper_QAccessible_State_sizeable_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("movable", &bItFiEldWrapper_QAccessible_State_movable_getter, &bItFiEldWrapper_QAccessible_State_movable_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("selfVoicing", &bItFiEldWrapper_QAccessible_State_selfVoicing_getter, &bItFiEldWrapper_QAccessible_State_selfVoicing_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("selectable", &bItFiEldWrapper_QAccessible_State_selectable_getter, &bItFiEldWrapper_QAccessible_State_selectable_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("linked", &bItFiEldWrapper_QAccessible_State_linked_getter, &bItFiEldWrapper_QAccessible_State_linked_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("traversed", &bItFiEldWrapper_QAccessible_State_traversed_getter, &bItFiEldWrapper_QAccessible_State_traversed_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("multiSelectable", &bItFiEldWrapper_QAccessible_State_multiSelectable_getter, &bItFiEldWrapper_QAccessible_State_multiSelectable_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("extSelectable", &bItFiEldWrapper_QAccessible_State_extSelectable_getter, &bItFiEldWrapper_QAccessible_State_extSelectable_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("passwordEdit", &bItFiEldWrapper_QAccessible_State_passwordEdit_getter, &bItFiEldWrapper_QAccessible_State_passwordEdit_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("hasPopup", &bItFiEldWrapper_QAccessible_State_hasPopup_getter, &bItFiEldWrapper_QAccessible_State_hasPopup_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("modal", &bItFiEldWrapper_QAccessible_State_modal_getter, &bItFiEldWrapper_QAccessible_State_modal_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("active", &bItFiEldWrapper_QAccessible_State_active_getter, &bItFiEldWrapper_QAccessible_State_active_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("invalid", &bItFiEldWrapper_QAccessible_State_invalid_getter, &bItFiEldWrapper_QAccessible_State_invalid_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("editable", &bItFiEldWrapper_QAccessible_State_editable_getter, &bItFiEldWrapper_QAccessible_State_editable_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("multiLine", &bItFiEldWrapper_QAccessible_State_multiLine_getter, &bItFiEldWrapper_QAccessible_State_multiLine_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("selectableText", &bItFiEldWrapper_QAccessible_State_selectableText_getter, &bItFiEldWrapper_QAccessible_State_selectableText_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("supportsAutoCompletion", &bItFiEldWrapper_QAccessible_State_supportsAutoCompletion_getter, &bItFiEldWrapper_QAccessible_State_supportsAutoCompletion_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


template <typename D>
void buildMetaClass_QAccessibleActionInterface(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("actionNames", &D::ClassType::actionNames);
    _d.CPGF_MD_TEMPLATE _method("localizedActionName", &D::ClassType::localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("localizedActionDescription", &D::ClassType::localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("doAction", &D::ClassType::doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("keyBindingsForAction", &D::ClassType::keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("pressAction", &D::ClassType::pressAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("increaseAction", &D::ClassType::increaseAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("decreaseAction", &D::ClassType::decreaseAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("showMenuAction", &D::ClassType::showMenuAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("setFocusAction", &D::ClassType::setFocusAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("toggleAction", &D::ClassType::toggleAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
}


class QAccessibleActionInterfaceWrapper : public QAccessibleActionInterface, public cpgf::GScriptWrapper {
public:
    
    QString localizedActionDescription(const QString & name) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("localizedActionDescription"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, name).getValue());
        }
        return QAccessibleActionInterface::localizedActionDescription(name);
    }
    QString super_localizedActionDescription(const QString & name) const
    {
        return QAccessibleActionInterface::localizedActionDescription(name);
    }
    
    void doAction(const QString & actionName)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("doAction"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, actionName);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_doAction(const QString & actionName)
    {
        throw std::runtime_error("Abstract method");
    }
    
    QStringList keyBindingsForAction(const QString & actionName) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyBindingsForAction"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this, actionName).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QStringList super_keyBindingsForAction(const QString & actionName) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QStringList actionNames() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("actionNames"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QStringList super_actionNames() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QString localizedActionName(const QString & name) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("localizedActionName"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, name).getValue());
        }
        return QAccessibleActionInterface::localizedActionName(name);
    }
    QString super_localizedActionName(const QString & name) const
    {
        return QAccessibleActionInterface::localizedActionName(name);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionDescription", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_doAction", (void (D::ClassType::*) (const QString &))&D::ClassType::super_doAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_keyBindingsForAction", (QStringList (D::ClassType::*) (const QString &) const)&D::ClassType::super_keyBindingsForAction, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_actionNames", (QStringList (D::ClassType::*) () const)&D::ClassType::super_actionNames);
        _d.CPGF_MD_TEMPLATE _method("super_localizedActionName", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_localizedActionName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    }
};


template <typename D>
void buildMetaClass_QAccessibleActionInterfaceWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleActionInterfaceWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleActionInterface<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleEditableTextInterface(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("deleteText", &D::ClassType::deleteText);
    _d.CPGF_MD_TEMPLATE _method("insertText", &D::ClassType::insertText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("replaceText", &D::ClassType::replaceText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
}


class QAccessibleEditableTextInterfaceWrapper : public QAccessibleEditableTextInterface, public cpgf::GScriptWrapper {
public:
    
    void replaceText(int startOffset, int endOffset, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("replaceText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset, text);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_replaceText(int startOffset, int endOffset, const QString & text)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void insertText(int offset, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("insertText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, text);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_insertText(int offset, const QString & text)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void deleteText(int startOffset, int endOffset)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("deleteText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_deleteText(int startOffset, int endOffset)
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_replaceText", (void (D::ClassType::*) (int, int, const QString &))&D::ClassType::super_replaceText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
        _d.CPGF_MD_TEMPLATE _method("super_insertText", (void (D::ClassType::*) (int, const QString &))&D::ClassType::super_insertText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_deleteText", (void (D::ClassType::*) (int, int))&D::ClassType::super_deleteText);
    }
};


template <typename D>
void buildMetaClass_QAccessibleEditableTextInterfaceWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleEditableTextInterfaceWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleEditableTextInterface<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *, QAccessible::Event)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QAccessibleInterface *, QAccessible::Event)>();
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("object", &D::ClassType::object);
    _d.CPGF_MD_TEMPLATE _method("uniqueId", &D::ClassType::uniqueId);
    _d.CPGF_MD_TEMPLATE _method("setChild", &D::ClassType::setChild);
    _d.CPGF_MD_TEMPLATE _method("child", &D::ClassType::child);
    _d.CPGF_MD_TEMPLATE _method("accessibleInterface", &D::ClassType::accessibleInterface);
}


class QAccessibleEventWrapper : public QAccessibleEvent, public cpgf::GScriptWrapper {
public:
    
    QAccessibleEventWrapper(QObject * obj, QAccessible::Event typ)
        : QAccessibleEvent(obj, typ) {}
    
    QAccessibleEventWrapper(QAccessibleInterface * iface, QAccessible::Event typ)
        : QAccessibleEvent(iface, typ) {}
    
    QAccessibleInterface * accessibleInterface() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("accessibleInterface"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleEvent::accessibleInterface();
    }
    QAccessibleInterface * super_accessibleInterface() const
    {
        return QAccessibleEvent::accessibleInterface();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_accessibleInterface", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_accessibleInterface);
    }
};


template <typename D>
void buildMetaClass_QAccessibleEventWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleEventWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleEvent<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleImageInterface(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("imageDescription", &D::ClassType::imageDescription);
    _d.CPGF_MD_TEMPLATE _method("imageSize", &D::ClassType::imageSize);
    _d.CPGF_MD_TEMPLATE _method("imagePosition", &D::ClassType::imagePosition);
}


class QAccessibleImageInterfaceWrapper : public QAccessibleImageInterface, public cpgf::GScriptWrapper {
public:
    
    QString imageDescription() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("imageDescription"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QString super_imageDescription() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QPoint imagePosition() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("imagePosition"));
        if(func)
        {
            return cpgf::fromVariant<QPoint >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QPoint super_imagePosition() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QSize imageSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("imageSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QSize super_imageSize() const
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_imageDescription", (QString (D::ClassType::*) () const)&D::ClassType::super_imageDescription);
        _d.CPGF_MD_TEMPLATE _method("super_imagePosition", (QPoint (D::ClassType::*) () const)&D::ClassType::super_imagePosition);
        _d.CPGF_MD_TEMPLATE _method("super_imageSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_imageSize);
    }
};


template <typename D>
void buildMetaClass_QAccessibleImageInterfaceWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleImageInterfaceWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleImageInterface<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleStateChangeEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *, QAccessible::State)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QAccessibleInterface *, QAccessible::State)>();
    _d.CPGF_MD_TEMPLATE _method("changedStates", &D::ClassType::changedStates);
}


class QAccessibleStateChangeEventWrapper : public QAccessibleStateChangeEvent, public cpgf::GScriptWrapper {
public:
    
    QAccessibleStateChangeEventWrapper(QObject * obj, QAccessible::State state)
        : QAccessibleStateChangeEvent(obj, state) {}
    
    QAccessibleStateChangeEventWrapper(QAccessibleInterface * iface, QAccessible::State state)
        : QAccessibleStateChangeEvent(iface, state) {}
    
    QAccessibleInterface * accessibleInterface() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("accessibleInterface"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleEvent::accessibleInterface();
    }
    QAccessibleInterface * super_accessibleInterface() const
    {
        return QAccessibleEvent::accessibleInterface();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_accessibleInterface", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_accessibleInterface);
    }
};


template <typename D>
void buildMetaClass_QAccessibleStateChangeEventWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleStateChangeEventWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleStateChangeEvent<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleTableCellInterface(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("isSelected", &D::ClassType::isSelected);
    _d.CPGF_MD_TEMPLATE _method("columnHeaderCells", &D::ClassType::columnHeaderCells);
    _d.CPGF_MD_TEMPLATE _method("rowHeaderCells", &D::ClassType::rowHeaderCells);
    _d.CPGF_MD_TEMPLATE _method("columnIndex", &D::ClassType::columnIndex);
    _d.CPGF_MD_TEMPLATE _method("rowIndex", &D::ClassType::rowIndex);
    _d.CPGF_MD_TEMPLATE _method("columnExtent", &D::ClassType::columnExtent);
    _d.CPGF_MD_TEMPLATE _method("rowExtent", &D::ClassType::rowExtent);
    _d.CPGF_MD_TEMPLATE _method("table", &D::ClassType::table);
}


class QAccessibleTableCellInterfaceWrapper : public QAccessibleTableCellInterface, public cpgf::GScriptWrapper {
public:
    
    QList< QAccessibleInterface * > rowHeaderCells() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rowHeaderCells"));
        if(func)
        {
            return cpgf::fromVariant<QList< QAccessibleInterface * > >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QList< QAccessibleInterface * > super_rowHeaderCells() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QList< QAccessibleInterface * > columnHeaderCells() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("columnHeaderCells"));
        if(func)
        {
            return cpgf::fromVariant<QList< QAccessibleInterface * > >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QList< QAccessibleInterface * > super_columnHeaderCells() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    int columnIndex() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("columnIndex"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_columnIndex() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    int columnExtent() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("columnExtent"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_columnExtent() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    int rowIndex() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rowIndex"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_rowIndex() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QAccessibleInterface * table() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("table"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QAccessibleInterface * super_table() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    int rowExtent() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rowExtent"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_rowExtent() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool isSelected() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isSelected"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_isSelected() const
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_rowHeaderCells", (QList< QAccessibleInterface * > (D::ClassType::*) () const)&D::ClassType::super_rowHeaderCells);
        _d.CPGF_MD_TEMPLATE _method("super_columnHeaderCells", (QList< QAccessibleInterface * > (D::ClassType::*) () const)&D::ClassType::super_columnHeaderCells);
        _d.CPGF_MD_TEMPLATE _method("super_columnIndex", (int (D::ClassType::*) () const)&D::ClassType::super_columnIndex);
        _d.CPGF_MD_TEMPLATE _method("super_columnExtent", (int (D::ClassType::*) () const)&D::ClassType::super_columnExtent);
        _d.CPGF_MD_TEMPLATE _method("super_rowIndex", (int (D::ClassType::*) () const)&D::ClassType::super_rowIndex);
        _d.CPGF_MD_TEMPLATE _method("super_table", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_table);
        _d.CPGF_MD_TEMPLATE _method("super_rowExtent", (int (D::ClassType::*) () const)&D::ClassType::super_rowExtent);
        _d.CPGF_MD_TEMPLATE _method("super_isSelected", (bool (D::ClassType::*) () const)&D::ClassType::super_isSelected);
    }
};


template <typename D>
void buildMetaClass_QAccessibleTableCellInterfaceWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleTableCellInterfaceWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleTableCellInterface<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleTableInterface(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("caption", &D::ClassType::caption);
    _d.CPGF_MD_TEMPLATE _method("summary", &D::ClassType::summary);
    _d.CPGF_MD_TEMPLATE _method("cellAt", &D::ClassType::cellAt);
    _d.CPGF_MD_TEMPLATE _method("selectedCellCount", &D::ClassType::selectedCellCount);
    _d.CPGF_MD_TEMPLATE _method("selectedCells", &D::ClassType::selectedCells);
    _d.CPGF_MD_TEMPLATE _method("columnDescription", &D::ClassType::columnDescription);
    _d.CPGF_MD_TEMPLATE _method("rowDescription", &D::ClassType::rowDescription);
    _d.CPGF_MD_TEMPLATE _method("selectedColumnCount", &D::ClassType::selectedColumnCount);
    _d.CPGF_MD_TEMPLATE _method("selectedRowCount", &D::ClassType::selectedRowCount);
    _d.CPGF_MD_TEMPLATE _method("columnCount", &D::ClassType::columnCount);
    _d.CPGF_MD_TEMPLATE _method("rowCount", &D::ClassType::rowCount);
    _d.CPGF_MD_TEMPLATE _method("selectedColumns", &D::ClassType::selectedColumns);
    _d.CPGF_MD_TEMPLATE _method("selectedRows", &D::ClassType::selectedRows);
    _d.CPGF_MD_TEMPLATE _method("isColumnSelected", &D::ClassType::isColumnSelected);
    _d.CPGF_MD_TEMPLATE _method("isRowSelected", &D::ClassType::isRowSelected);
    _d.CPGF_MD_TEMPLATE _method("selectRow", &D::ClassType::selectRow);
    _d.CPGF_MD_TEMPLATE _method("selectColumn", &D::ClassType::selectColumn);
    _d.CPGF_MD_TEMPLATE _method("unselectRow", &D::ClassType::unselectRow);
    _d.CPGF_MD_TEMPLATE _method("unselectColumn", &D::ClassType::unselectColumn);
    _d.CPGF_MD_TEMPLATE _method("modelChange", &D::ClassType::modelChange);
}


class QAccessibleTableInterfaceWrapper : public QAccessibleTableInterface, public cpgf::GScriptWrapper {
public:
    
    bool selectRow(int row)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectRow"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, row).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_selectRow(int row)
    {
        throw std::runtime_error("Abstract method");
    }
    
    QAccessibleInterface * caption() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("caption"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QAccessibleInterface * super_caption() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool unselectColumn(int column)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("unselectColumn"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, column).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_unselectColumn(int column)
    {
        throw std::runtime_error("Abstract method");
    }
    
    int rowCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rowCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_rowCount() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QList< int > selectedColumns() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectedColumns"));
        if(func)
        {
            return cpgf::fromVariant<QList< int > >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QList< int > super_selectedColumns() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool selectColumn(int column)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectColumn"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, column).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_selectColumn(int column)
    {
        throw std::runtime_error("Abstract method");
    }
    
    QList< int > selectedRows() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectedRows"));
        if(func)
        {
            return cpgf::fromVariant<QList< int > >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QList< int > super_selectedRows() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QString columnDescription(int column) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("columnDescription"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, column).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QString super_columnDescription(int column) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool unselectRow(int row)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("unselectRow"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, row).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_unselectRow(int row)
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool isRowSelected(int row) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isRowSelected"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, row).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_isRowSelected(int row) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    int selectedColumnCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectedColumnCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_selectedColumnCount() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QList< QAccessibleInterface * > selectedCells() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectedCells"));
        if(func)
        {
            return cpgf::fromVariant<QList< QAccessibleInterface * > >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QList< QAccessibleInterface * > super_selectedCells() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void modelChange(QAccessibleTableModelChangeEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("modelChange"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_modelChange(QAccessibleTableModelChangeEvent * event)
    {
        throw std::runtime_error("Abstract method");
    }
    
    QString rowDescription(int row) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rowDescription"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, row).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QString super_rowDescription(int row) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QAccessibleInterface * summary() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("summary"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QAccessibleInterface * super_summary() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    int selectedCellCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectedCellCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_selectedCellCount() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool isColumnSelected(int column) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isColumnSelected"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, column).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_isColumnSelected(int column) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QAccessibleInterface * cellAt(int row, int column) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("cellAt"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, row, column).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QAccessibleInterface * super_cellAt(int row, int column) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    int selectedRowCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectedRowCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_selectedRowCount() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    int columnCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("columnCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_columnCount() const
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_selectRow", (bool (D::ClassType::*) (int))&D::ClassType::super_selectRow);
        _d.CPGF_MD_TEMPLATE _method("super_caption", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_caption);
        _d.CPGF_MD_TEMPLATE _method("super_unselectColumn", (bool (D::ClassType::*) (int))&D::ClassType::super_unselectColumn);
        _d.CPGF_MD_TEMPLATE _method("super_rowCount", (int (D::ClassType::*) () const)&D::ClassType::super_rowCount);
        _d.CPGF_MD_TEMPLATE _method("super_selectedColumns", (QList< int > (D::ClassType::*) () const)&D::ClassType::super_selectedColumns);
        _d.CPGF_MD_TEMPLATE _method("super_selectColumn", (bool (D::ClassType::*) (int))&D::ClassType::super_selectColumn);
        _d.CPGF_MD_TEMPLATE _method("super_selectedRows", (QList< int > (D::ClassType::*) () const)&D::ClassType::super_selectedRows);
        _d.CPGF_MD_TEMPLATE _method("super_columnDescription", (QString (D::ClassType::*) (int) const)&D::ClassType::super_columnDescription);
        _d.CPGF_MD_TEMPLATE _method("super_unselectRow", (bool (D::ClassType::*) (int))&D::ClassType::super_unselectRow);
        _d.CPGF_MD_TEMPLATE _method("super_isRowSelected", (bool (D::ClassType::*) (int) const)&D::ClassType::super_isRowSelected);
        _d.CPGF_MD_TEMPLATE _method("super_selectedColumnCount", (int (D::ClassType::*) () const)&D::ClassType::super_selectedColumnCount);
        _d.CPGF_MD_TEMPLATE _method("super_selectedCells", (QList< QAccessibleInterface * > (D::ClassType::*) () const)&D::ClassType::super_selectedCells);
        _d.CPGF_MD_TEMPLATE _method("super_modelChange", (void (D::ClassType::*) (QAccessibleTableModelChangeEvent *))&D::ClassType::super_modelChange);
        _d.CPGF_MD_TEMPLATE _method("super_rowDescription", (QString (D::ClassType::*) (int) const)&D::ClassType::super_rowDescription);
        _d.CPGF_MD_TEMPLATE _method("super_summary", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_summary);
        _d.CPGF_MD_TEMPLATE _method("super_selectedCellCount", (int (D::ClassType::*) () const)&D::ClassType::super_selectedCellCount);
        _d.CPGF_MD_TEMPLATE _method("super_isColumnSelected", (bool (D::ClassType::*) (int) const)&D::ClassType::super_isColumnSelected);
        _d.CPGF_MD_TEMPLATE _method("super_cellAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_cellAt);
        _d.CPGF_MD_TEMPLATE _method("super_selectedRowCount", (int (D::ClassType::*) () const)&D::ClassType::super_selectedRowCount);
        _d.CPGF_MD_TEMPLATE _method("super_columnCount", (int (D::ClassType::*) () const)&D::ClassType::super_columnCount);
    }
};


template <typename D>
void buildMetaClass_QAccessibleTableInterfaceWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleTableInterfaceWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleTableInterface<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleTableModelChangeEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *, QAccessibleTableModelChangeEvent::ModelChangeType)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QAccessibleInterface *, QAccessibleTableModelChangeEvent::ModelChangeType)>();
    _d.CPGF_MD_TEMPLATE _method("setModelChangeType", &D::ClassType::setModelChangeType);
    _d.CPGF_MD_TEMPLATE _method("modelChangeType", &D::ClassType::modelChangeType);
    _d.CPGF_MD_TEMPLATE _method("setFirstRow", &D::ClassType::setFirstRow);
    _d.CPGF_MD_TEMPLATE _method("setFirstColumn", &D::ClassType::setFirstColumn);
    _d.CPGF_MD_TEMPLATE _method("setLastRow", &D::ClassType::setLastRow);
    _d.CPGF_MD_TEMPLATE _method("setLastColumn", &D::ClassType::setLastColumn);
    _d.CPGF_MD_TEMPLATE _method("firstRow", &D::ClassType::firstRow);
    _d.CPGF_MD_TEMPLATE _method("firstColumn", &D::ClassType::firstColumn);
    _d.CPGF_MD_TEMPLATE _method("lastRow", &D::ClassType::lastRow);
    _d.CPGF_MD_TEMPLATE _method("lastColumn", &D::ClassType::lastColumn);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ModelChangeType>("ModelChangeType")
        ._element("ModelReset", D::ClassType::ModelReset)
        ._element("DataChanged", D::ClassType::DataChanged)
        ._element("RowsInserted", D::ClassType::RowsInserted)
        ._element("ColumnsInserted", D::ClassType::ColumnsInserted)
        ._element("RowsRemoved", D::ClassType::RowsRemoved)
        ._element("ColumnsRemoved", D::ClassType::ColumnsRemoved)
    ;
}


class QAccessibleTableModelChangeEventWrapper : public QAccessibleTableModelChangeEvent, public cpgf::GScriptWrapper {
public:
    
    QAccessibleTableModelChangeEventWrapper(QObject * obj, QAccessibleTableModelChangeEvent::ModelChangeType changeType)
        : QAccessibleTableModelChangeEvent(obj, changeType) {}
    
    QAccessibleTableModelChangeEventWrapper(QAccessibleInterface * iface, QAccessibleTableModelChangeEvent::ModelChangeType changeType)
        : QAccessibleTableModelChangeEvent(iface, changeType) {}
    
    QAccessibleInterface * accessibleInterface() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("accessibleInterface"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleEvent::accessibleInterface();
    }
    QAccessibleInterface * super_accessibleInterface() const
    {
        return QAccessibleEvent::accessibleInterface();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_accessibleInterface", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_accessibleInterface);
    }
};


template <typename D>
void buildMetaClass_QAccessibleTableModelChangeEventWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleTableModelChangeEventWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleTableModelChangeEvent<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleTextCursorEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *, int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QAccessibleInterface *, int)>();
    _d.CPGF_MD_TEMPLATE _method("setCursorPosition", &D::ClassType::setCursorPosition);
    _d.CPGF_MD_TEMPLATE _method("cursorPosition", &D::ClassType::cursorPosition);
}


class QAccessibleTextCursorEventWrapper : public QAccessibleTextCursorEvent, public cpgf::GScriptWrapper {
public:
    
    QAccessibleTextCursorEventWrapper(QObject * obj, int cursorPos)
        : QAccessibleTextCursorEvent(obj, cursorPos) {}
    
    QAccessibleTextCursorEventWrapper(QAccessibleInterface * iface, int cursorPos)
        : QAccessibleTextCursorEvent(iface, cursorPos) {}
    
    QAccessibleInterface * accessibleInterface() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("accessibleInterface"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleEvent::accessibleInterface();
    }
    QAccessibleInterface * super_accessibleInterface() const
    {
        return QAccessibleEvent::accessibleInterface();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_accessibleInterface", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_accessibleInterface);
    }
};


template <typename D>
void buildMetaClass_QAccessibleTextCursorEventWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleTextCursorEventWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleTextCursorEvent<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleTextInsertEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *, int, const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QAccessibleInterface *, int, const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("textInserted", &D::ClassType::textInserted);
    _d.CPGF_MD_TEMPLATE _method("changePosition", &D::ClassType::changePosition);
}


class QAccessibleTextInsertEventWrapper : public QAccessibleTextInsertEvent, public cpgf::GScriptWrapper {
public:
    
    QAccessibleTextInsertEventWrapper(QObject * obj, int position, const QString & text)
        : QAccessibleTextInsertEvent(obj, position, text) {}
    
    QAccessibleTextInsertEventWrapper(QAccessibleInterface * iface, int position, const QString & text)
        : QAccessibleTextInsertEvent(iface, position, text) {}
    
    QAccessibleInterface * accessibleInterface() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("accessibleInterface"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleEvent::accessibleInterface();
    }
    QAccessibleInterface * super_accessibleInterface() const
    {
        return QAccessibleEvent::accessibleInterface();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_accessibleInterface", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_accessibleInterface);
    }
};


template <typename D>
void buildMetaClass_QAccessibleTextInsertEventWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleTextInsertEventWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleTextInsertEvent<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleTextInterface(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("selection", &D::ClassType::selection);
    _d.CPGF_MD_TEMPLATE _method("selectionCount", &D::ClassType::selectionCount);
    _d.CPGF_MD_TEMPLATE _method("addSelection", &D::ClassType::addSelection);
    _d.CPGF_MD_TEMPLATE _method("removeSelection", &D::ClassType::removeSelection);
    _d.CPGF_MD_TEMPLATE _method("setSelection", &D::ClassType::setSelection);
    _d.CPGF_MD_TEMPLATE _method("cursorPosition", &D::ClassType::cursorPosition);
    _d.CPGF_MD_TEMPLATE _method("setCursorPosition", &D::ClassType::setCursorPosition);
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("textBeforeOffset", &D::ClassType::textBeforeOffset);
    _d.CPGF_MD_TEMPLATE _method("textAfterOffset", &D::ClassType::textAfterOffset);
    _d.CPGF_MD_TEMPLATE _method("textAtOffset", &D::ClassType::textAtOffset);
    _d.CPGF_MD_TEMPLATE _method("characterCount", &D::ClassType::characterCount);
    _d.CPGF_MD_TEMPLATE _method("characterRect", &D::ClassType::characterRect);
    _d.CPGF_MD_TEMPLATE _method("offsetAtPoint", &D::ClassType::offsetAtPoint);
    _d.CPGF_MD_TEMPLATE _method("scrollToSubstring", &D::ClassType::scrollToSubstring);
    _d.CPGF_MD_TEMPLATE _method("attributes", &D::ClassType::attributes);
}


class QAccessibleTextInterfaceWrapper : public QAccessibleTextInterface, public cpgf::GScriptWrapper {
public:
    
    void selection(int selectionIndex, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex, startOffset, endOffset);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_selection(int selectionIndex, int * startOffset, int * endOffset) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void addSelection(int startOffset, int endOffset)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("addSelection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_addSelection(int startOffset, int endOffset)
    {
        throw std::runtime_error("Abstract method");
    }
    
    QString text(int startOffset, int endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, startOffset, endOffset).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QString super_text(int startOffset, int endOffset) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    int offsetAtPoint(const QPoint & point) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("offsetAtPoint"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, point).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_offsetAtPoint(const QPoint & point) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QRect characterRect(int offset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("characterRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QRect super_characterRect(int offset) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QString textAfterOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textAfterOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleTextInterface::textAfterOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textAfterOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleTextInterface::textAfterOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    int characterCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("characterCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_characterCount() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QString attributes(int offset, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("attributes"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, startOffset, endOffset).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QString super_attributes(int offset, int * startOffset, int * endOffset) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QString textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textAtOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleTextInterface::textAtOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleTextInterface::textAtOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    void setSelection(int selectionIndex, int startOffset, int endOffset)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setSelection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex, startOffset, endOffset);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setSelection(int selectionIndex, int startOffset, int endOffset)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setCursorPosition(int position)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCursorPosition"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, position);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setCursorPosition(int position)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void removeSelection(int selectionIndex)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("removeSelection"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selectionIndex);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_removeSelection(int selectionIndex)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void scrollToSubstring(int startIndex, int endIndex)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scrollToSubstring"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, startIndex, endIndex);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_scrollToSubstring(int startIndex, int endIndex)
    {
        throw std::runtime_error("Abstract method");
    }
    
    QString textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("textBeforeOffset"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset, boundaryType, startOffset, endOffset).getValue());
        }
        return QAccessibleTextInterface::textBeforeOffset(offset, boundaryType, startOffset, endOffset);
    }
    QString super_textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int * startOffset, int * endOffset) const
    {
        return QAccessibleTextInterface::textBeforeOffset(offset, boundaryType, startOffset, endOffset);
    }
    
    int selectionCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectionCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_selectionCount() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    int cursorPosition() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("cursorPosition"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_cursorPosition() const
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_selection", (void (D::ClassType::*) (int, int *, int *) const)&D::ClassType::super_selection);
        _d.CPGF_MD_TEMPLATE _method("super_addSelection", (void (D::ClassType::*) (int, int))&D::ClassType::super_addSelection);
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (int, int) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_offsetAtPoint", (int (D::ClassType::*) (const QPoint &) const)&D::ClassType::super_offsetAtPoint);
        _d.CPGF_MD_TEMPLATE _method("super_characterRect", (QRect (D::ClassType::*) (int) const)&D::ClassType::super_characterRect);
        _d.CPGF_MD_TEMPLATE _method("super_textAfterOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textAfterOffset);
        _d.CPGF_MD_TEMPLATE _method("super_characterCount", (int (D::ClassType::*) () const)&D::ClassType::super_characterCount);
        _d.CPGF_MD_TEMPLATE _method("super_attributes", (QString (D::ClassType::*) (int, int *, int *) const)&D::ClassType::super_attributes);
        _d.CPGF_MD_TEMPLATE _method("super_textAtOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textAtOffset);
        _d.CPGF_MD_TEMPLATE _method("super_setSelection", (void (D::ClassType::*) (int, int, int))&D::ClassType::super_setSelection);
        _d.CPGF_MD_TEMPLATE _method("super_setCursorPosition", (void (D::ClassType::*) (int))&D::ClassType::super_setCursorPosition);
        _d.CPGF_MD_TEMPLATE _method("super_removeSelection", (void (D::ClassType::*) (int))&D::ClassType::super_removeSelection);
        _d.CPGF_MD_TEMPLATE _method("super_scrollToSubstring", (void (D::ClassType::*) (int, int))&D::ClassType::super_scrollToSubstring);
        _d.CPGF_MD_TEMPLATE _method("super_textBeforeOffset", (QString (D::ClassType::*) (int, QAccessible::TextBoundaryType, int *, int *) const)&D::ClassType::super_textBeforeOffset);
        _d.CPGF_MD_TEMPLATE _method("super_selectionCount", (int (D::ClassType::*) () const)&D::ClassType::super_selectionCount);
        _d.CPGF_MD_TEMPLATE _method("super_cursorPosition", (int (D::ClassType::*) () const)&D::ClassType::super_cursorPosition);
    }
};


template <typename D>
void buildMetaClass_QAccessibleTextInterfaceWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleTextInterfaceWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleTextInterface<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleTextRemoveEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *, int, const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QAccessibleInterface *, int, const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("textRemoved", &D::ClassType::textRemoved);
    _d.CPGF_MD_TEMPLATE _method("changePosition", &D::ClassType::changePosition);
}


class QAccessibleTextRemoveEventWrapper : public QAccessibleTextRemoveEvent, public cpgf::GScriptWrapper {
public:
    
    QAccessibleTextRemoveEventWrapper(QObject * obj, int position, const QString & text)
        : QAccessibleTextRemoveEvent(obj, position, text) {}
    
    QAccessibleTextRemoveEventWrapper(QAccessibleInterface * iface, int position, const QString & text)
        : QAccessibleTextRemoveEvent(iface, position, text) {}
    
    QAccessibleInterface * accessibleInterface() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("accessibleInterface"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleEvent::accessibleInterface();
    }
    QAccessibleInterface * super_accessibleInterface() const
    {
        return QAccessibleEvent::accessibleInterface();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_accessibleInterface", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_accessibleInterface);
    }
};


template <typename D>
void buildMetaClass_QAccessibleTextRemoveEventWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleTextRemoveEventWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleTextRemoveEvent<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleTextSelectionEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *, int, int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QAccessibleInterface *, int, int)>();
    _d.CPGF_MD_TEMPLATE _method("setSelection", &D::ClassType::setSelection);
    _d.CPGF_MD_TEMPLATE _method("selectionStart", &D::ClassType::selectionStart);
    _d.CPGF_MD_TEMPLATE _method("selectionEnd", &D::ClassType::selectionEnd);
}


class QAccessibleTextSelectionEventWrapper : public QAccessibleTextSelectionEvent, public cpgf::GScriptWrapper {
public:
    
    QAccessibleTextSelectionEventWrapper(QObject * obj, int start, int end)
        : QAccessibleTextSelectionEvent(obj, start, end) {}
    
    QAccessibleTextSelectionEventWrapper(QAccessibleInterface * iface, int start, int end)
        : QAccessibleTextSelectionEvent(iface, start, end) {}
    
    QAccessibleInterface * accessibleInterface() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("accessibleInterface"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleEvent::accessibleInterface();
    }
    QAccessibleInterface * super_accessibleInterface() const
    {
        return QAccessibleEvent::accessibleInterface();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_accessibleInterface", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_accessibleInterface);
    }
};


template <typename D>
void buildMetaClass_QAccessibleTextSelectionEventWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleTextSelectionEventWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleTextSelectionEvent<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleTextUpdateEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *, int, const QString &, const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QAccessibleInterface *, int, const QString &, const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3> >());
    _d.CPGF_MD_TEMPLATE _method("textRemoved", &D::ClassType::textRemoved);
    _d.CPGF_MD_TEMPLATE _method("textInserted", &D::ClassType::textInserted);
    _d.CPGF_MD_TEMPLATE _method("changePosition", &D::ClassType::changePosition);
}


class QAccessibleTextUpdateEventWrapper : public QAccessibleTextUpdateEvent, public cpgf::GScriptWrapper {
public:
    
    QAccessibleTextUpdateEventWrapper(QObject * obj, int position, const QString & oldText, const QString & text)
        : QAccessibleTextUpdateEvent(obj, position, oldText, text) {}
    
    QAccessibleTextUpdateEventWrapper(QAccessibleInterface * iface, int position, const QString & oldText, const QString & text)
        : QAccessibleTextUpdateEvent(iface, position, oldText, text) {}
    
    QAccessibleInterface * accessibleInterface() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("accessibleInterface"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleEvent::accessibleInterface();
    }
    QAccessibleInterface * super_accessibleInterface() const
    {
        return QAccessibleEvent::accessibleInterface();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_accessibleInterface", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_accessibleInterface);
    }
};


template <typename D>
void buildMetaClass_QAccessibleTextUpdateEventWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleTextUpdateEventWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleTextUpdateEvent<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleValueChangeEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *, const QVariant &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QAccessibleInterface *, const QVariant &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("setValue", &D::ClassType::setValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("value", &D::ClassType::value);
}


class QAccessibleValueChangeEventWrapper : public QAccessibleValueChangeEvent, public cpgf::GScriptWrapper {
public:
    
    QAccessibleValueChangeEventWrapper(QObject * obj, const QVariant & val)
        : QAccessibleValueChangeEvent(obj, val) {}
    
    QAccessibleValueChangeEventWrapper(QAccessibleInterface * iface, const QVariant & val)
        : QAccessibleValueChangeEvent(iface, val) {}
    
    QAccessibleInterface * accessibleInterface() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("accessibleInterface"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleEvent::accessibleInterface();
    }
    QAccessibleInterface * super_accessibleInterface() const
    {
        return QAccessibleEvent::accessibleInterface();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_accessibleInterface", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_accessibleInterface);
    }
};


template <typename D>
void buildMetaClass_QAccessibleValueChangeEventWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleValueChangeEventWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleValueChangeEvent<D>(_d);
}


template <typename D>
void buildMetaClass_QAccessibleValueInterface(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("currentValue", &D::ClassType::currentValue);
    _d.CPGF_MD_TEMPLATE _method("setCurrentValue", &D::ClassType::setCurrentValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("maximumValue", &D::ClassType::maximumValue);
    _d.CPGF_MD_TEMPLATE _method("minimumValue", &D::ClassType::minimumValue);
    _d.CPGF_MD_TEMPLATE _method("minimumStepSize", &D::ClassType::minimumStepSize);
}


class QAccessibleValueInterfaceWrapper : public QAccessibleValueInterface, public cpgf::GScriptWrapper {
public:
    
    QVariant minimumStepSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumStepSize"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QVariant super_minimumStepSize() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setCurrentValue(const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCurrentValue"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, value);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setCurrentValue(const QVariant & value)
    {
        throw std::runtime_error("Abstract method");
    }
    
    QVariant minimumValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QVariant super_minimumValue() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QVariant maximumValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("maximumValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QVariant super_maximumValue() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QVariant currentValue() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("currentValue"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QVariant super_currentValue() const
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_minimumStepSize", (QVariant (D::ClassType::*) () const)&D::ClassType::super_minimumStepSize);
        _d.CPGF_MD_TEMPLATE _method("super_setCurrentValue", (void (D::ClassType::*) (const QVariant &))&D::ClassType::super_setCurrentValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_minimumValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_minimumValue);
        _d.CPGF_MD_TEMPLATE _method("super_maximumValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_maximumValue);
        _d.CPGF_MD_TEMPLATE _method("super_currentValue", (QVariant (D::ClassType::*) () const)&D::ClassType::super_currentValue);
    }
};


template <typename D>
void buildMetaClass_QAccessibleValueInterfaceWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleValueInterfaceWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleValueInterface<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
