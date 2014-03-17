// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QCOREEVENT_H
#define CPGF_META_QTCORE_QCOREEVENT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QChildEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEvent::Type, QObject *)>();
    _d.CPGF_MD_TEMPLATE _method("child", &D::ClassType::child);
    _d.CPGF_MD_TEMPLATE _method("added", &D::ClassType::added);
    _d.CPGF_MD_TEMPLATE _method("polished", &D::ClassType::polished);
    _d.CPGF_MD_TEMPLATE _method("removed", &D::ClassType::removed);
}


template <typename D>
void buildMetaClass_QDeferredDeleteEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("loopLevel", &D::ClassType::loopLevel);
}


template <typename D>
void buildMetaClass_QDynamicPropertyChangeEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QByteArray &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("propertyName", &D::ClassType::propertyName);
}


inline QEvent & opErAToRWrapper_QEvent__opAssign(QEvent * self, const QEvent & other) {
    return (*self) = other;
}


template <typename D>
void buildMetaClass_QEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEvent::Type)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QEvent &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("spontaneous", &D::ClassType::spontaneous);
    _d.CPGF_MD_TEMPLATE _method("setAccepted", &D::ClassType::setAccepted);
    _d.CPGF_MD_TEMPLATE _method("isAccepted", &D::ClassType::isAccepted);
    _d.CPGF_MD_TEMPLATE _method("accept", &D::ClassType::accept);
    _d.CPGF_MD_TEMPLATE _method("ignore", &D::ClassType::ignore);
    _d.CPGF_MD_TEMPLATE _method("registerEventType", &D::ClassType::registerEventType)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Type>("Type")
        ._element("None", D::ClassType::None)
        ._element("Timer", D::ClassType::Timer)
        ._element("MouseButtonPress", D::ClassType::MouseButtonPress)
        ._element("MouseButtonRelease", D::ClassType::MouseButtonRelease)
        ._element("MouseButtonDblClick", D::ClassType::MouseButtonDblClick)
        ._element("MouseMove", D::ClassType::MouseMove)
        ._element("KeyPress", D::ClassType::KeyPress)
        ._element("KeyRelease", D::ClassType::KeyRelease)
        ._element("FocusIn", D::ClassType::FocusIn)
        ._element("FocusOut", D::ClassType::FocusOut)
        ._element("FocusAboutToChange", D::ClassType::FocusAboutToChange)
        ._element("Enter", D::ClassType::Enter)
        ._element("Leave", D::ClassType::Leave)
        ._element("Paint", D::ClassType::Paint)
        ._element("Move", D::ClassType::Move)
        ._element("Resize", D::ClassType::Resize)
        ._element("Create", D::ClassType::Create)
        ._element("Destroy", D::ClassType::Destroy)
        ._element("Show", D::ClassType::Show)
        ._element("Hide", D::ClassType::Hide)
        ._element("Close", D::ClassType::Close)
        ._element("Quit", D::ClassType::Quit)
        ._element("ParentChange", D::ClassType::ParentChange)
        ._element("ParentAboutToChange", D::ClassType::ParentAboutToChange)
        ._element("ThreadChange", D::ClassType::ThreadChange)
        ._element("WindowActivate", D::ClassType::WindowActivate)
        ._element("WindowDeactivate", D::ClassType::WindowDeactivate)
        ._element("ShowToParent", D::ClassType::ShowToParent)
        ._element("HideToParent", D::ClassType::HideToParent)
        ._element("Wheel", D::ClassType::Wheel)
        ._element("WindowTitleChange", D::ClassType::WindowTitleChange)
        ._element("WindowIconChange", D::ClassType::WindowIconChange)
        ._element("ApplicationWindowIconChange", D::ClassType::ApplicationWindowIconChange)
        ._element("ApplicationFontChange", D::ClassType::ApplicationFontChange)
        ._element("ApplicationLayoutDirectionChange", D::ClassType::ApplicationLayoutDirectionChange)
        ._element("ApplicationPaletteChange", D::ClassType::ApplicationPaletteChange)
        ._element("PaletteChange", D::ClassType::PaletteChange)
        ._element("Clipboard", D::ClassType::Clipboard)
        ._element("Speech", D::ClassType::Speech)
        ._element("MetaCall", D::ClassType::MetaCall)
        ._element("SockAct", D::ClassType::SockAct)
        ._element("WinEventAct", D::ClassType::WinEventAct)
        ._element("DeferredDelete", D::ClassType::DeferredDelete)
        ._element("DragEnter", D::ClassType::DragEnter)
        ._element("DragMove", D::ClassType::DragMove)
        ._element("DragLeave", D::ClassType::DragLeave)
        ._element("Drop", D::ClassType::Drop)
        ._element("DragResponse", D::ClassType::DragResponse)
        ._element("ChildAdded", D::ClassType::ChildAdded)
        ._element("ChildPolished", D::ClassType::ChildPolished)
        ._element("ChildRemoved", D::ClassType::ChildRemoved)
        ._element("ShowWindowRequest", D::ClassType::ShowWindowRequest)
        ._element("PolishRequest", D::ClassType::PolishRequest)
        ._element("Polish", D::ClassType::Polish)
        ._element("LayoutRequest", D::ClassType::LayoutRequest)
        ._element("UpdateRequest", D::ClassType::UpdateRequest)
        ._element("UpdateLater", D::ClassType::UpdateLater)
        ._element("EmbeddingControl", D::ClassType::EmbeddingControl)
        ._element("ActivateControl", D::ClassType::ActivateControl)
        ._element("DeactivateControl", D::ClassType::DeactivateControl)
        ._element("ContextMenu", D::ClassType::ContextMenu)
        ._element("InputMethod", D::ClassType::InputMethod)
        ._element("TabletMove", D::ClassType::TabletMove)
        ._element("LocaleChange", D::ClassType::LocaleChange)
        ._element("LanguageChange", D::ClassType::LanguageChange)
        ._element("LayoutDirectionChange", D::ClassType::LayoutDirectionChange)
        ._element("Style", D::ClassType::Style)
        ._element("TabletPress", D::ClassType::TabletPress)
        ._element("TabletRelease", D::ClassType::TabletRelease)
        ._element("OkRequest", D::ClassType::OkRequest)
        ._element("HelpRequest", D::ClassType::HelpRequest)
        ._element("IconDrag", D::ClassType::IconDrag)
        ._element("FontChange", D::ClassType::FontChange)
        ._element("EnabledChange", D::ClassType::EnabledChange)
        ._element("ActivationChange", D::ClassType::ActivationChange)
        ._element("StyleChange", D::ClassType::StyleChange)
        ._element("IconTextChange", D::ClassType::IconTextChange)
        ._element("ModifiedChange", D::ClassType::ModifiedChange)
        ._element("MouseTrackingChange", D::ClassType::MouseTrackingChange)
        ._element("WindowBlocked", D::ClassType::WindowBlocked)
        ._element("WindowUnblocked", D::ClassType::WindowUnblocked)
        ._element("WindowStateChange", D::ClassType::WindowStateChange)
        ._element("ToolTip", D::ClassType::ToolTip)
        ._element("WhatsThis", D::ClassType::WhatsThis)
        ._element("StatusTip", D::ClassType::StatusTip)
        ._element("ActionChanged", D::ClassType::ActionChanged)
        ._element("ActionAdded", D::ClassType::ActionAdded)
        ._element("ActionRemoved", D::ClassType::ActionRemoved)
        ._element("FileOpen", D::ClassType::FileOpen)
        ._element("Shortcut", D::ClassType::Shortcut)
        ._element("ShortcutOverride", D::ClassType::ShortcutOverride)
        ._element("WhatsThisClicked", D::ClassType::WhatsThisClicked)
        ._element("ToolBarChange", D::ClassType::ToolBarChange)
        ._element("ApplicationActivate", D::ClassType::ApplicationActivate)
        ._element("ApplicationActivated", D::ClassType::ApplicationActivated)
        ._element("ApplicationDeactivate", D::ClassType::ApplicationDeactivate)
        ._element("ApplicationDeactivated", D::ClassType::ApplicationDeactivated)
        ._element("QueryWhatsThis", D::ClassType::QueryWhatsThis)
        ._element("EnterWhatsThisMode", D::ClassType::EnterWhatsThisMode)
        ._element("LeaveWhatsThisMode", D::ClassType::LeaveWhatsThisMode)
        ._element("ZOrderChange", D::ClassType::ZOrderChange)
        ._element("HoverEnter", D::ClassType::HoverEnter)
        ._element("HoverLeave", D::ClassType::HoverLeave)
        ._element("HoverMove", D::ClassType::HoverMove)
        ._element("AcceptDropsChange", D::ClassType::AcceptDropsChange)
        ._element("ZeroTimerEvent", D::ClassType::ZeroTimerEvent)
        ._element("GraphicsSceneMouseMove", D::ClassType::GraphicsSceneMouseMove)
        ._element("GraphicsSceneMousePress", D::ClassType::GraphicsSceneMousePress)
        ._element("GraphicsSceneMouseRelease", D::ClassType::GraphicsSceneMouseRelease)
        ._element("GraphicsSceneMouseDoubleClick", D::ClassType::GraphicsSceneMouseDoubleClick)
        ._element("GraphicsSceneContextMenu", D::ClassType::GraphicsSceneContextMenu)
        ._element("GraphicsSceneHoverEnter", D::ClassType::GraphicsSceneHoverEnter)
        ._element("GraphicsSceneHoverMove", D::ClassType::GraphicsSceneHoverMove)
        ._element("GraphicsSceneHoverLeave", D::ClassType::GraphicsSceneHoverLeave)
        ._element("GraphicsSceneHelp", D::ClassType::GraphicsSceneHelp)
        ._element("GraphicsSceneDragEnter", D::ClassType::GraphicsSceneDragEnter)
        ._element("GraphicsSceneDragMove", D::ClassType::GraphicsSceneDragMove)
        ._element("GraphicsSceneDragLeave", D::ClassType::GraphicsSceneDragLeave)
        ._element("GraphicsSceneDrop", D::ClassType::GraphicsSceneDrop)
        ._element("GraphicsSceneWheel", D::ClassType::GraphicsSceneWheel)
        ._element("KeyboardLayoutChange", D::ClassType::KeyboardLayoutChange)
        ._element("DynamicPropertyChange", D::ClassType::DynamicPropertyChange)
        ._element("TabletEnterProximity", D::ClassType::TabletEnterProximity)
        ._element("TabletLeaveProximity", D::ClassType::TabletLeaveProximity)
        ._element("NonClientAreaMouseMove", D::ClassType::NonClientAreaMouseMove)
        ._element("NonClientAreaMouseButtonPress", D::ClassType::NonClientAreaMouseButtonPress)
        ._element("NonClientAreaMouseButtonRelease", D::ClassType::NonClientAreaMouseButtonRelease)
        ._element("NonClientAreaMouseButtonDblClick", D::ClassType::NonClientAreaMouseButtonDblClick)
        ._element("MacSizeChange", D::ClassType::MacSizeChange)
        ._element("ContentsRectChange", D::ClassType::ContentsRectChange)
        ._element("MacGLWindowChange", D::ClassType::MacGLWindowChange)
        ._element("FutureCallOut", D::ClassType::FutureCallOut)
        ._element("GraphicsSceneResize", D::ClassType::GraphicsSceneResize)
        ._element("GraphicsSceneMove", D::ClassType::GraphicsSceneMove)
        ._element("CursorChange", D::ClassType::CursorChange)
        ._element("ToolTipChange", D::ClassType::ToolTipChange)
        ._element("NetworkReplyUpdated", D::ClassType::NetworkReplyUpdated)
        ._element("GrabMouse", D::ClassType::GrabMouse)
        ._element("UngrabMouse", D::ClassType::UngrabMouse)
        ._element("GrabKeyboard", D::ClassType::GrabKeyboard)
        ._element("UngrabKeyboard", D::ClassType::UngrabKeyboard)
        ._element("MacGLClearDrawable", D::ClassType::MacGLClearDrawable)
        ._element("StateMachineSignal", D::ClassType::StateMachineSignal)
        ._element("StateMachineWrapped", D::ClassType::StateMachineWrapped)
        ._element("TouchBegin", D::ClassType::TouchBegin)
        ._element("TouchUpdate", D::ClassType::TouchUpdate)
        ._element("TouchEnd", D::ClassType::TouchEnd)
        ._element("NativeGesture", D::ClassType::NativeGesture)
        ._element("RequestSoftwareInputPanel", D::ClassType::RequestSoftwareInputPanel)
        ._element("CloseSoftwareInputPanel", D::ClassType::CloseSoftwareInputPanel)
        ._element("WinIdChange", D::ClassType::WinIdChange)
        ._element("Gesture", D::ClassType::Gesture)
        ._element("GestureOverride", D::ClassType::GestureOverride)
        ._element("ScrollPrepare", D::ClassType::ScrollPrepare)
        ._element("Scroll", D::ClassType::Scroll)
        ._element("Expose", D::ClassType::Expose)
        ._element("InputMethodQuery", D::ClassType::InputMethodQuery)
        ._element("OrientationChange", D::ClassType::OrientationChange)
        ._element("TouchCancel", D::ClassType::TouchCancel)
        ._element("ThemeChange", D::ClassType::ThemeChange)
        ._element("SockClose", D::ClassType::SockClose)
        ._element("PlatformPanel", D::ClassType::PlatformPanel)
        ._element("StyleAnimationUpdate", D::ClassType::StyleAnimationUpdate)
        ._element("ApplicationStateChange", D::ClassType::ApplicationStateChange)
        ._element("User", D::ClassType::User)
        ._element("MaxUser", D::ClassType::MaxUser)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QEvent & (*)(cpgf::GMetaSelf, const QEvent &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QEvent & (*) (QEvent *, const QEvent &))&opErAToRWrapper_QEvent__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


template <typename D>
void buildMetaClass_QTimerEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (int)>();
    _d.CPGF_MD_TEMPLATE _method("timerId", &D::ClassType::timerId);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
