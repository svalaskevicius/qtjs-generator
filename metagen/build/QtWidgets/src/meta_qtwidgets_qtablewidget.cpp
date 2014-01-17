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

#include <QtWidgets/qtablewidget.h>

#include "meta_qtwidgets_qtablewidget.h"

using namespace cpgf;

namespace meta_qtwidgets { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_Global_qtablewidget()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qtablewidget(0, _d);
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QTableWidget()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QTableWidget, QTableView> _nd = GDefineMetaClass<QTableWidget, QTableView>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QTableWidget");
        buildMetaClass_QTableWidget(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QTableWidgetWrapper, QTableWidget> _nd = GDefineMetaClass<QTableWidgetWrapper, QTableWidget>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QTableWidgetWrapper");
        buildMetaClass_QTableWidgetWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QTableWidgetItem()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QTableWidgetItem> _nd = GDefineMetaClass<QTableWidgetItem>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent> >::declare("QTableWidgetItem");
        buildMetaClass_QTableWidgetItem(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QTableWidgetSelectionRange()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QTableWidgetSelectionRange> _nd = GDefineMetaClass<QTableWidgetSelectionRange>::declare("QTableWidgetSelectionRange");
        buildMetaClass_QTableWidgetSelectionRange(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtwidgets


