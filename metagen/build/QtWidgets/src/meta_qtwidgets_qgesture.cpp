// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtCore/QMimeData>
#include <QtCore/QAbstractProxyModel>
#include <QtCore/QTimeLine>
#include <QtGui/QHelpEvent>
#include <QtGui/QPainter>
#include <QtGui/QWindow>
#include <QtGui/QTextCharFormat>
#include <QtGui/QTextDocument>
#include <QtGui/QMovie>
#include <QtGui/QPicture>
#include <QtGui/QTextBlock>
#include <QtGui/QTextFrame>
#include <QtGui/QPagedPaintDevice>
#include <QtGui/QBitmap>
#include <QtGui/QPaintEngine>
#include <QtGui/QBackingStore>
#include <QtWidgets/QMenu>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QAbstractItemView>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QAbstractItemView>
#include <QtWidgets/QDesktopWidget>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QCompleter>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QItemEditorFactory>
#include <QtWidgets/QGraphicsLayout>
#include <QtWidgets/QGesture>
#include <QtWidgets/QFileIconProvider>
#include <QtWidgets/QGraphicsScene>
#include <QtWidgets/QGraphicsWidget>
#include <QtWidgets/QGraphicsEffect>
#include <QtWidgets/QGraphicsSceneContextMenuEvent>
#include <QtWidgets/QGraphicsSceneDragDropEvent>
#include <QtWidgets/QGraphicsSceneHoverEvent>
#include <QtWidgets/QGraphicsSceneMouseEvent>
#include <QtWidgets/QGraphicsSceneWheelEvent>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMdiSubWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidgetItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QUndoStack>
#include <QtWidgets/QUndoGroup>
#include <QtWidgets/QGraphicsProxyWidget>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>

#include <QtWidgets/qgesture.h>

#include "meta_qtwidgets_qgesture.h"

using namespace cpgf;

namespace meta_qtwidgets { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QGesture()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QGesture, QObject> _nd = GDefineMetaClass<QGesture, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QGesture", &buildMetaClass_QGesture);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QGestureWrapper, QGesture> _nd = GDefineMetaClass<QGestureWrapper, QGesture>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QGestureWrapper", &buildMetaClass_QGestureWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QGestureEvent()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QGestureEvent, QEvent> _nd = GDefineMetaClass<QGestureEvent, QEvent>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent> >::lazyDeclare("QGestureEvent", &buildMetaClass_QGestureEvent);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QPanGesture()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QPanGesture, QGesture> _nd = GDefineMetaClass<QPanGesture, QGesture>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QPanGesture", &buildMetaClass_QPanGesture);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QPanGestureWrapper, QPanGesture> _nd = GDefineMetaClass<QPanGestureWrapper, QPanGesture>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QPanGestureWrapper", &buildMetaClass_QPanGestureWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QPinchGesture()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QPinchGesture, QGesture> _nd = GDefineMetaClass<QPinchGesture, QGesture>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QPinchGesture", &buildMetaClass_QPinchGesture);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QPinchGestureWrapper, QPinchGesture> _nd = GDefineMetaClass<QPinchGestureWrapper, QPinchGesture>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QPinchGestureWrapper", &buildMetaClass_QPinchGestureWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QSwipeGesture()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QSwipeGesture, QGesture> _nd = GDefineMetaClass<QSwipeGesture, QGesture>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QSwipeGesture", &buildMetaClass_QSwipeGesture);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QSwipeGestureWrapper, QSwipeGesture> _nd = GDefineMetaClass<QSwipeGestureWrapper, QSwipeGesture>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QSwipeGestureWrapper", &buildMetaClass_QSwipeGestureWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QTapAndHoldGesture()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QTapAndHoldGesture, QGesture> _nd = GDefineMetaClass<QTapAndHoldGesture, QGesture>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QTapAndHoldGesture", &buildMetaClass_QTapAndHoldGesture);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QTapAndHoldGestureWrapper, QTapAndHoldGesture> _nd = GDefineMetaClass<QTapAndHoldGestureWrapper, QTapAndHoldGesture>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QTapAndHoldGestureWrapper", &buildMetaClass_QTapAndHoldGestureWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QTapGesture()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QTapGesture, QGesture> _nd = GDefineMetaClass<QTapGesture, QGesture>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QTapGesture", &buildMetaClass_QTapGesture);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QTapGestureWrapper, QTapGesture> _nd = GDefineMetaClass<QTapGestureWrapper, QTapGesture>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QTapGestureWrapper", &buildMetaClass_QTapGestureWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtwidgets


