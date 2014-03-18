// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QEVENT_H
#define CPGF_META_QTGUI_QEVENT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qevent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QEvent *)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(QKeyEvent *, QKeySequence::StandardKey)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(QKeySequence::StandardKey, QKeyEvent *)>(mopHolder == mopHolder);
}


template <typename D>
void buildMetaClass_QActionEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, QAction *, QAction *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("action", &D::ClassType::action);
    _d.CPGF_MD_TEMPLATE _method("before", &D::ClassType::before);
}


template <typename D>
void buildMetaClass_QApplicationStateChangeEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (Qt::ApplicationState)>();
    _d.CPGF_MD_TEMPLATE _method("applicationState", &D::ClassType::applicationState);
}


template <typename D>
void buildMetaClass_QCloseEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
}


template <typename D>
void buildMetaClass_QContextMenuEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QContextMenuEvent::Reason, const QPoint &, const QPoint &, Qt::KeyboardModifiers)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QContextMenuEvent::Reason, const QPoint &, const QPoint &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QContextMenuEvent::Reason, const QPoint &)>();
    _d.CPGF_MD_TEMPLATE _method("x", &D::ClassType::x);
    _d.CPGF_MD_TEMPLATE _method("y", &D::ClassType::y);
    _d.CPGF_MD_TEMPLATE _method("globalX", &D::ClassType::globalX);
    _d.CPGF_MD_TEMPLATE _method("globalY", &D::ClassType::globalY);
    _d.CPGF_MD_TEMPLATE _method("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("globalPos", &D::ClassType::globalPos);
    _d.CPGF_MD_TEMPLATE _method("reason", &D::ClassType::reason);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Reason>("Reason")
        ._element("Mouse", D::ClassType::Mouse)
        ._element("Keyboard", D::ClassType::Keyboard)
        ._element("Other", D::ClassType::Other)
    ;
}


template <typename D>
void buildMetaClass_QDragEnterEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPoint &, Qt::DropActions, const QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers)>();
}


template <typename D>
void buildMetaClass_QDragLeaveEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
}


template <typename D>
void buildMetaClass_QDragMoveEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPoint &, Qt::DropActions, const QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers, QEvent::Type)>()
        ._default(copyVariantFromCopyable(QEvent::DragMove))
    ;
    _d.CPGF_MD_TEMPLATE _method("answerRect", &D::ClassType::answerRect);
    _d.CPGF_MD_TEMPLATE _method("accept", (void (D::ClassType::*) ())&D::ClassType::accept);
    _d.CPGF_MD_TEMPLATE _method("ignore", (void (D::ClassType::*) ())&D::ClassType::ignore);
    _d.CPGF_MD_TEMPLATE _method("accept", (void (D::ClassType::*) (const QRect &))&D::ClassType::accept);
    _d.CPGF_MD_TEMPLATE _method("ignore", (void (D::ClassType::*) (const QRect &))&D::ClassType::ignore);
}


template <typename D>
void buildMetaClass_QDropEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &, Qt::DropActions, const QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers, QEvent::Type)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QEvent::Drop))
    ;
    _d.CPGF_MD_TEMPLATE _method("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("posF", &D::ClassType::posF, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("mouseButtons", &D::ClassType::mouseButtons);
    _d.CPGF_MD_TEMPLATE _method("keyboardModifiers", &D::ClassType::keyboardModifiers);
    _d.CPGF_MD_TEMPLATE _method("possibleActions", &D::ClassType::possibleActions);
    _d.CPGF_MD_TEMPLATE _method("proposedAction", &D::ClassType::proposedAction);
    _d.CPGF_MD_TEMPLATE _method("acceptProposedAction", &D::ClassType::acceptProposedAction);
    _d.CPGF_MD_TEMPLATE _method("dropAction", &D::ClassType::dropAction);
    _d.CPGF_MD_TEMPLATE _method("setDropAction", &D::ClassType::setDropAction);
    _d.CPGF_MD_TEMPLATE _method("source", &D::ClassType::source);
    _d.CPGF_MD_TEMPLATE _method("mimeData", &D::ClassType::mimeData);
}


template <typename D>
void buildMetaClass_QEnterEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &, const QPointF &, const QPointF &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("globalPos", &D::ClassType::globalPos);
    _d.CPGF_MD_TEMPLATE _method("x", &D::ClassType::x);
    _d.CPGF_MD_TEMPLATE _method("y", &D::ClassType::y);
    _d.CPGF_MD_TEMPLATE _method("globalX", &D::ClassType::globalX);
    _d.CPGF_MD_TEMPLATE _method("globalY", &D::ClassType::globalY);
    _d.CPGF_MD_TEMPLATE _method("localPos", &D::ClassType::localPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("windowPos", &D::ClassType::windowPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("screenPos", &D::ClassType::screenPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
}


template <typename D>
void buildMetaClass_QExposeEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QRegion &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("region", &D::ClassType::region, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
}


template <typename D>
void buildMetaClass_QFileOpenEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QUrl &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("file", &D::ClassType::file);
    _d.CPGF_MD_TEMPLATE _method("url", &D::ClassType::url);
    _d.CPGF_MD_TEMPLATE _method("openFile", &D::ClassType::openFile, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
}


template <typename D>
void buildMetaClass_QFocusEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEvent::Type, Qt::FocusReason)>()
        ._default(copyVariantFromCopyable(Qt::OtherFocusReason))
    ;
    _d.CPGF_MD_TEMPLATE _method("gotFocus", &D::ClassType::gotFocus);
    _d.CPGF_MD_TEMPLATE _method("lostFocus", &D::ClassType::lostFocus);
    _d.CPGF_MD_TEMPLATE _method("reason", &D::ClassType::reason);
}


template <typename D>
void buildMetaClass_QHelpEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEvent::Type, const QPoint &, const QPoint &)>();
    _d.CPGF_MD_TEMPLATE _method("x", &D::ClassType::x);
    _d.CPGF_MD_TEMPLATE _method("y", &D::ClassType::y);
    _d.CPGF_MD_TEMPLATE _method("globalX", &D::ClassType::globalX);
    _d.CPGF_MD_TEMPLATE _method("globalY", &D::ClassType::globalY);
    _d.CPGF_MD_TEMPLATE _method("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("globalPos", &D::ClassType::globalPos);
}


template <typename D>
void buildMetaClass_QHideEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
}


template <typename D>
void buildMetaClass_QHoverEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEvent::Type, const QPointF &, const QPointF &, Qt::KeyboardModifiers)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(Qt::NoModifier))
    ;
    _d.CPGF_MD_TEMPLATE _method("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("oldPos", &D::ClassType::oldPos);
    _d.CPGF_MD_TEMPLATE _method("posF", &D::ClassType::posF, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("oldPosF", &D::ClassType::oldPosF, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
}


template <typename D>
void buildMetaClass_QIconDragEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
}


template <typename D>
void buildMetaClass_QInputEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEvent::Type, Qt::KeyboardModifiers)>()
        ._default(copyVariantFromCopyable(Qt::NoModifier))
    ;
    _d.CPGF_MD_TEMPLATE _method("modifiers", &D::ClassType::modifiers);
    _d.CPGF_MD_TEMPLATE _method("setModifiers", &D::ClassType::setModifiers);
    _d.CPGF_MD_TEMPLATE _method("timestamp", &D::ClassType::timestamp);
    _d.CPGF_MD_TEMPLATE _method("setTimestamp", &D::ClassType::setTimestamp);
}


template <typename D>
void buildMetaClass_QInputMethodEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, const QList<QInputMethodEvent::Attribute>&)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QInputMethodEvent &)>();
    _d.CPGF_MD_TEMPLATE _method("setCommitString", &D::ClassType::setCommitString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("attributes", &D::ClassType::attributes);
    _d.CPGF_MD_TEMPLATE _method("preeditString", &D::ClassType::preeditString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("commitString", &D::ClassType::commitString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("replacementStart", &D::ClassType::replacementStart);
    _d.CPGF_MD_TEMPLATE _method("replacementLength", &D::ClassType::replacementLength);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::AttributeType>("AttributeType")
        ._element("TextFormat", D::ClassType::TextFormat)
        ._element("Cursor", D::ClassType::Cursor)
        ._element("Language", D::ClassType::Language)
        ._element("Ruby", D::ClassType::Ruby)
        ._element("Selection", D::ClassType::Selection)
    ;
    {
        GDefineMetaClass<QInputMethodEvent::Attribute> _nd = GDefineMetaClass<QInputMethodEvent::Attribute>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent> >::declare("Attribute");
        _nd.CPGF_MD_TEMPLATE _constructor<void * (QInputMethodEvent::AttributeType, int, int, QVariant)>();
        _nd.CPGF_MD_TEMPLATE _field("type", &QInputMethodEvent::Attribute::type);
        _nd.CPGF_MD_TEMPLATE _field("start", &QInputMethodEvent::Attribute::start);
        _nd.CPGF_MD_TEMPLATE _field("length", &QInputMethodEvent::Attribute::length);
        _nd.CPGF_MD_TEMPLATE _field("value", &QInputMethodEvent::Attribute::value);
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


template <typename D>
void buildMetaClass_QInputMethodQueryEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (Qt::InputMethodQueries)>();
    _d.CPGF_MD_TEMPLATE _method("queries", &D::ClassType::queries);
    _d.CPGF_MD_TEMPLATE _method("setValue", &D::ClassType::setValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("value", &D::ClassType::value);
}


template <typename D>
void buildMetaClass_QKeyEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEvent::Type, int, Qt::KeyboardModifiers, const QString &, bool, ushort)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<3> >())
        ._default(copyVariantFromCopyable(1))
        ._default(copyVariantFromCopyable(false))
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEvent::Type, int, Qt::KeyboardModifiers, quint32, quint32, quint32, const QString &, bool, ushort)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<6> >())
        ._default(copyVariantFromCopyable(1))
        ._default(copyVariantFromCopyable(false))
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _method("key", &D::ClassType::key);
    _d.CPGF_MD_TEMPLATE _method("matches", &D::ClassType::matches);
    _d.CPGF_MD_TEMPLATE _method("modifiers", &D::ClassType::modifiers);
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("isAutoRepeat", &D::ClassType::isAutoRepeat);
    _d.CPGF_MD_TEMPLATE _method("count", &D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("nativeScanCode", &D::ClassType::nativeScanCode);
    _d.CPGF_MD_TEMPLATE _method("nativeVirtualKey", &D::ClassType::nativeVirtualKey);
    _d.CPGF_MD_TEMPLATE _method("nativeModifiers", &D::ClassType::nativeModifiers);
}


template <typename D>
void buildMetaClass_QMouseEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEvent::Type, const QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEvent::Type, const QPointF &, const QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEvent::Type, const QPointF &, const QPointF &, const QPointF &, Qt::MouseButton, Qt::MouseButtons, Qt::KeyboardModifiers)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3> >());
    _d.CPGF_MD_TEMPLATE _method("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("globalPos", &D::ClassType::globalPos);
    _d.CPGF_MD_TEMPLATE _method("x", &D::ClassType::x);
    _d.CPGF_MD_TEMPLATE _method("y", &D::ClassType::y);
    _d.CPGF_MD_TEMPLATE _method("globalX", &D::ClassType::globalX);
    _d.CPGF_MD_TEMPLATE _method("globalY", &D::ClassType::globalY);
    _d.CPGF_MD_TEMPLATE _method("localPos", &D::ClassType::localPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("windowPos", &D::ClassType::windowPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("screenPos", &D::ClassType::screenPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("button", &D::ClassType::button);
    _d.CPGF_MD_TEMPLATE _method("buttons", &D::ClassType::buttons);
}


template <typename D>
void buildMetaClass_QMoveEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPoint &, const QPoint &)>();
    _d.CPGF_MD_TEMPLATE _method("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("oldPos", &D::ClassType::oldPos);
}


template <typename D>
void buildMetaClass_QNativeGestureEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (Qt::NativeGestureType, const QPointF &, const QPointF &, const QPointF &, qreal, ulong, quint64)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3> >());
    _d.CPGF_MD_TEMPLATE _method("gestureType", &D::ClassType::gestureType);
    _d.CPGF_MD_TEMPLATE _method("value", &D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _method("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("globalPos", &D::ClassType::globalPos);
    _d.CPGF_MD_TEMPLATE _method("localPos", &D::ClassType::localPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("windowPos", &D::ClassType::windowPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("screenPos", &D::ClassType::screenPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
}


template <typename D>
void buildMetaClass_QPaintEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QRegion &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QRect &)>();
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("region", &D::ClassType::region, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
}


template <typename D>
void buildMetaClass_QResizeEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QSize &, const QSize &)>();
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("oldSize", &D::ClassType::oldSize);
}


template <typename D>
void buildMetaClass_QScreenOrientationChangeEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QScreen *, Qt::ScreenOrientation)>();
    _d.CPGF_MD_TEMPLATE _method("screen", &D::ClassType::screen);
    _d.CPGF_MD_TEMPLATE _method("orientation", &D::ClassType::orientation);
}


template <typename D>
void buildMetaClass_QScrollEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &, const QPointF &, QScrollEvent::ScrollState)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("contentPos", &D::ClassType::contentPos);
    _d.CPGF_MD_TEMPLATE _method("overshootDistance", &D::ClassType::overshootDistance);
    _d.CPGF_MD_TEMPLATE _method("scrollState", &D::ClassType::scrollState);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ScrollState>("ScrollState")
        ._element("ScrollStarted", D::ClassType::ScrollStarted)
        ._element("ScrollUpdated", D::ClassType::ScrollUpdated)
        ._element("ScrollFinished", D::ClassType::ScrollFinished)
    ;
}


template <typename D>
void buildMetaClass_QScrollPrepareEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("startPos", &D::ClassType::startPos);
    _d.CPGF_MD_TEMPLATE _method("viewportSize", &D::ClassType::viewportSize);
    _d.CPGF_MD_TEMPLATE _method("contentPosRange", &D::ClassType::contentPosRange);
    _d.CPGF_MD_TEMPLATE _method("contentPos", &D::ClassType::contentPos);
    _d.CPGF_MD_TEMPLATE _method("setViewportSize", &D::ClassType::setViewportSize);
    _d.CPGF_MD_TEMPLATE _method("setContentPosRange", &D::ClassType::setContentPosRange);
    _d.CPGF_MD_TEMPLATE _method("setContentPos", &D::ClassType::setContentPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


template <typename D>
void buildMetaClass_QShortcutEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QKeySequence &, int, bool)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("key", &D::ClassType::key, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("shortcutId", &D::ClassType::shortcutId);
    _d.CPGF_MD_TEMPLATE _method("isAmbiguous", &D::ClassType::isAmbiguous);
}


template <typename D>
void buildMetaClass_QShowEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
}


template <typename D>
void buildMetaClass_QStatusTipEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("tip", &D::ClassType::tip);
}


template <typename D>
void buildMetaClass_QTabletEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEvent::Type, const QPointF &, const QPointF &, int, int, qreal, int, int, qreal, qreal, int, Qt::KeyboardModifiers, qint64)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("globalPos", &D::ClassType::globalPos);
    _d.CPGF_MD_TEMPLATE _method("posF", &D::ClassType::posF, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("globalPosF", &D::ClassType::globalPosF, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("x", &D::ClassType::x);
    _d.CPGF_MD_TEMPLATE _method("y", &D::ClassType::y);
    _d.CPGF_MD_TEMPLATE _method("globalX", &D::ClassType::globalX);
    _d.CPGF_MD_TEMPLATE _method("globalY", &D::ClassType::globalY);
    _d.CPGF_MD_TEMPLATE _method("hiResGlobalX", &D::ClassType::hiResGlobalX);
    _d.CPGF_MD_TEMPLATE _method("hiResGlobalY", &D::ClassType::hiResGlobalY);
    _d.CPGF_MD_TEMPLATE _method("device", &D::ClassType::device);
    _d.CPGF_MD_TEMPLATE _method("pointerType", &D::ClassType::pointerType);
    _d.CPGF_MD_TEMPLATE _method("uniqueId", &D::ClassType::uniqueId);
    _d.CPGF_MD_TEMPLATE _method("pressure", &D::ClassType::pressure);
    _d.CPGF_MD_TEMPLATE _method("z", &D::ClassType::z);
    _d.CPGF_MD_TEMPLATE _method("tangentialPressure", &D::ClassType::tangentialPressure);
    _d.CPGF_MD_TEMPLATE _method("rotation", &D::ClassType::rotation);
    _d.CPGF_MD_TEMPLATE _method("xTilt", &D::ClassType::xTilt);
    _d.CPGF_MD_TEMPLATE _method("yTilt", &D::ClassType::yTilt);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::TabletDevice>("TabletDevice")
        ._element("NoDevice", D::ClassType::NoDevice)
        ._element("Puck", D::ClassType::Puck)
        ._element("Stylus", D::ClassType::Stylus)
        ._element("Airbrush", D::ClassType::Airbrush)
        ._element("FourDMouse", D::ClassType::FourDMouse)
        ._element("XFreeEraser", D::ClassType::XFreeEraser)
        ._element("RotationStylus", D::ClassType::RotationStylus)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::PointerType>("PointerType")
        ._element("UnknownPointer", D::ClassType::UnknownPointer)
        ._element("Pen", D::ClassType::Pen)
        ._element("Cursor", D::ClassType::Cursor)
        ._element("Eraser", D::ClassType::Eraser)
    ;
}


template <typename D>
void buildMetaClass_QToolBarChangeEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (bool)>();
    _d.CPGF_MD_TEMPLATE _method("toggle", &D::ClassType::toggle);
}


inline QTouchEvent::TouchPoint& opErAToRWrapper_QTouchEvent_TouchPoint__opAssign(QTouchEvent::TouchPoint * self, const QTouchEvent::TouchPoint& other) {
    return (*self) = other;
}


template <typename D>
void buildMetaClass_QTouchEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEvent::Type, QTouchDevice *, Qt::KeyboardModifiers, Qt::TouchPointStates, const QList< QTouchEvent::TouchPoint > &)>()
        ._default(copyVariantFromCopyable(QList< QTouchEvent::TouchPoint >()))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(Qt::NoModifier))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("window", &D::ClassType::window);
    _d.CPGF_MD_TEMPLATE _method("target", &D::ClassType::target);
    _d.CPGF_MD_TEMPLATE _method("touchPointStates", &D::ClassType::touchPointStates);
    _d.CPGF_MD_TEMPLATE _method("touchPoints", &D::ClassType::touchPoints);
    _d.CPGF_MD_TEMPLATE _method("device", &D::ClassType::device);
    _d.CPGF_MD_TEMPLATE _method("setWindow", &D::ClassType::setWindow);
    _d.CPGF_MD_TEMPLATE _method("setTarget", &D::ClassType::setTarget);
    _d.CPGF_MD_TEMPLATE _method("setTouchPointStates", &D::ClassType::setTouchPointStates);
    _d.CPGF_MD_TEMPLATE _method("setTouchPoints", &D::ClassType::setTouchPoints);
    _d.CPGF_MD_TEMPLATE _method("setDevice", &D::ClassType::setDevice);
    {
        GDefineMetaClass<QTouchEvent::TouchPoint> _nd = GDefineMetaClass<QTouchEvent::TouchPoint>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent> >::declare("TouchPoint");
        _nd.CPGF_MD_TEMPLATE _constructor<void * (int)>()
            ._default(copyVariantFromCopyable(-1))
        ;
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const QTouchEvent::TouchPoint&)>();
        _nd.CPGF_MD_TEMPLATE _method("swap", &QTouchEvent::TouchPoint::swap);
        _nd.CPGF_MD_TEMPLATE _method("id", &QTouchEvent::TouchPoint::id);
        _nd.CPGF_MD_TEMPLATE _method("state", &QTouchEvent::TouchPoint::state);
        _nd.CPGF_MD_TEMPLATE _method("pos", &QTouchEvent::TouchPoint::pos);
        _nd.CPGF_MD_TEMPLATE _method("startPos", &QTouchEvent::TouchPoint::startPos);
        _nd.CPGF_MD_TEMPLATE _method("lastPos", &QTouchEvent::TouchPoint::lastPos);
        _nd.CPGF_MD_TEMPLATE _method("scenePos", &QTouchEvent::TouchPoint::scenePos);
        _nd.CPGF_MD_TEMPLATE _method("startScenePos", &QTouchEvent::TouchPoint::startScenePos);
        _nd.CPGF_MD_TEMPLATE _method("lastScenePos", &QTouchEvent::TouchPoint::lastScenePos);
        _nd.CPGF_MD_TEMPLATE _method("screenPos", &QTouchEvent::TouchPoint::screenPos);
        _nd.CPGF_MD_TEMPLATE _method("startScreenPos", &QTouchEvent::TouchPoint::startScreenPos);
        _nd.CPGF_MD_TEMPLATE _method("lastScreenPos", &QTouchEvent::TouchPoint::lastScreenPos);
        _nd.CPGF_MD_TEMPLATE _method("normalizedPos", &QTouchEvent::TouchPoint::normalizedPos);
        _nd.CPGF_MD_TEMPLATE _method("startNormalizedPos", &QTouchEvent::TouchPoint::startNormalizedPos);
        _nd.CPGF_MD_TEMPLATE _method("lastNormalizedPos", &QTouchEvent::TouchPoint::lastNormalizedPos);
        _nd.CPGF_MD_TEMPLATE _method("rect", &QTouchEvent::TouchPoint::rect);
        _nd.CPGF_MD_TEMPLATE _method("sceneRect", &QTouchEvent::TouchPoint::sceneRect);
        _nd.CPGF_MD_TEMPLATE _method("screenRect", &QTouchEvent::TouchPoint::screenRect);
        _nd.CPGF_MD_TEMPLATE _method("pressure", &QTouchEvent::TouchPoint::pressure);
        _nd.CPGF_MD_TEMPLATE _method("velocity", &QTouchEvent::TouchPoint::velocity);
        _nd.CPGF_MD_TEMPLATE _method("flags", &QTouchEvent::TouchPoint::flags);
        _nd.CPGF_MD_TEMPLATE _method("rawScreenPositions", &QTouchEvent::TouchPoint::rawScreenPositions);
        _nd.CPGF_MD_TEMPLATE _method("setId", &QTouchEvent::TouchPoint::setId);
        _nd.CPGF_MD_TEMPLATE _method("setState", &QTouchEvent::TouchPoint::setState);
        _nd.CPGF_MD_TEMPLATE _method("setPos", &QTouchEvent::TouchPoint::setPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _method("setScenePos", &QTouchEvent::TouchPoint::setScenePos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _method("setScreenPos", &QTouchEvent::TouchPoint::setScreenPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _method("setNormalizedPos", &QTouchEvent::TouchPoint::setNormalizedPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _method("setStartPos", &QTouchEvent::TouchPoint::setStartPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _method("setStartScenePos", &QTouchEvent::TouchPoint::setStartScenePos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _method("setStartScreenPos", &QTouchEvent::TouchPoint::setStartScreenPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _method("setStartNormalizedPos", &QTouchEvent::TouchPoint::setStartNormalizedPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _method("setLastPos", &QTouchEvent::TouchPoint::setLastPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _method("setLastScenePos", &QTouchEvent::TouchPoint::setLastScenePos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _method("setLastScreenPos", &QTouchEvent::TouchPoint::setLastScreenPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _method("setLastNormalizedPos", &QTouchEvent::TouchPoint::setLastNormalizedPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _method("setRect", &QTouchEvent::TouchPoint::setRect);
        _nd.CPGF_MD_TEMPLATE _method("setSceneRect", &QTouchEvent::TouchPoint::setSceneRect);
        _nd.CPGF_MD_TEMPLATE _method("setScreenRect", &QTouchEvent::TouchPoint::setScreenRect);
        _nd.CPGF_MD_TEMPLATE _method("setPressure", &QTouchEvent::TouchPoint::setPressure);
        _nd.CPGF_MD_TEMPLATE _method("setVelocity", &QTouchEvent::TouchPoint::setVelocity, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _method("setFlags", &QTouchEvent::TouchPoint::setFlags);
        _nd.CPGF_MD_TEMPLATE _method("setRawScreenPositions", &QTouchEvent::TouchPoint::setRawScreenPositions, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _enum<typename QTouchEvent::TouchPoint::InfoFlag>("InfoFlag")
            ._element("Pen", QTouchEvent::TouchPoint::Pen)
        ;
        _nd.CPGF_MD_TEMPLATE _operator<QTouchEvent::TouchPoint& (*)(cpgf::GMetaSelf, const QTouchEvent::TouchPoint&)>(mopHolder = mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAssign", (QTouchEvent::TouchPoint& (*) (QTouchEvent::TouchPoint *, const QTouchEvent::TouchPoint&))&opErAToRWrapper_QTouchEvent_TouchPoint__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        {
            GDefineMetaClass<QFlags<typename QTouchEvent::TouchPoint::InfoFlag > > _t_nd = GDefineMetaClass<QFlags<typename QTouchEvent::TouchPoint::InfoFlag > >::lazyDeclare("InfoFlags", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QTouchEvent::TouchPoint::InfoFlag > >, typename QTouchEvent::TouchPoint::InfoFlag >);
            _d._class(_t_nd);
        }
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


template <typename D>
void buildMetaClass_QWhatsThisClickedEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("href", &D::ClassType::href);
}


template <typename D>
void buildMetaClass_QWheelEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &, int, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::Orientation)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::Vertical))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &, const QPointF &, int, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::Orientation)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(Qt::Vertical))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &, const QPointF &, QPoint, QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &, const QPointF &, QPoint, QPoint, int, Qt::Orientation, Qt::MouseButtons, Qt::KeyboardModifiers, Qt::ScrollPhase)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("pixelDelta", &D::ClassType::pixelDelta);
    _d.CPGF_MD_TEMPLATE _method("angleDelta", &D::ClassType::angleDelta);
    _d.CPGF_MD_TEMPLATE _method("delta", &D::ClassType::delta);
    _d.CPGF_MD_TEMPLATE _method("orientation", &D::ClassType::orientation);
    _d.CPGF_MD_TEMPLATE _method("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("globalPos", &D::ClassType::globalPos);
    _d.CPGF_MD_TEMPLATE _method("x", &D::ClassType::x);
    _d.CPGF_MD_TEMPLATE _method("y", &D::ClassType::y);
    _d.CPGF_MD_TEMPLATE _method("globalX", &D::ClassType::globalX);
    _d.CPGF_MD_TEMPLATE _method("globalY", &D::ClassType::globalY);
    _d.CPGF_MD_TEMPLATE _method("posF", &D::ClassType::posF, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("globalPosF", &D::ClassType::globalPosF, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("buttons", &D::ClassType::buttons);
    _d.CPGF_MD_TEMPLATE _method("phase", &D::ClassType::phase);
}


template <typename D>
void buildMetaClass_QWindowStateChangeEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (Qt::WindowStates, bool)>()
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("oldState", &D::ClassType::oldState);
    _d.CPGF_MD_TEMPLATE _method("isOverride", &D::ClassType::isOverride);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
