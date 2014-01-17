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

#include <QtWidgets/qundostack.h>

#include "meta_qtwidgets_qundostack.h"

using namespace cpgf;

namespace meta_qtwidgets { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QUndoCommand()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QUndoCommand> _nd = GDefineMetaClass<QUndoCommand>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QUndoCommand");
        buildMetaClass_QUndoCommand(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QUndoCommandWrapper, QUndoCommand> _nd = GDefineMetaClass<QUndoCommandWrapper, QUndoCommand>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QUndoCommandWrapper");
        buildMetaClass_QUndoCommandWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QUndoStack()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QUndoStack, QObject> _nd = GDefineMetaClass<QUndoStack, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QUndoStack");
        buildMetaClass_QUndoStack(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QUndoStackWrapper, QUndoStack> _nd = GDefineMetaClass<QUndoStackWrapper, QUndoStack>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QUndoStackWrapper");
        buildMetaClass_QUndoStackWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtwidgets


