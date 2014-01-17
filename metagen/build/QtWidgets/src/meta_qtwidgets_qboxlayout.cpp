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

#include <QtWidgets/qboxlayout.h>

#include "meta_qtwidgets_qboxlayout.h"

using namespace cpgf;

namespace meta_qtwidgets { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QBoxLayout()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QBoxLayout, QLayout> _nd = GDefineMetaClass<QBoxLayout, QLayout>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QBoxLayout");
        buildMetaClass_QBoxLayout(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QBoxLayoutWrapper, QBoxLayout> _nd = GDefineMetaClass<QBoxLayoutWrapper, QBoxLayout>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QBoxLayoutWrapper");
        buildMetaClass_QBoxLayoutWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QHBoxLayout()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QHBoxLayout, QBoxLayout> _nd = GDefineMetaClass<QHBoxLayout, QBoxLayout>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::declare("QHBoxLayout");
        buildMetaClass_QHBoxLayout(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QHBoxLayoutWrapper, QHBoxLayout> _nd = GDefineMetaClass<QHBoxLayoutWrapper, QHBoxLayout>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::declare("QHBoxLayoutWrapper");
        buildMetaClass_QHBoxLayoutWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QVBoxLayout()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QVBoxLayout, QBoxLayout> _nd = GDefineMetaClass<QVBoxLayout, QBoxLayout>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::declare("QVBoxLayout");
        buildMetaClass_QVBoxLayout(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QVBoxLayoutWrapper, QVBoxLayout> _nd = GDefineMetaClass<QVBoxLayoutWrapper, QVBoxLayout>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::declare("QVBoxLayoutWrapper");
        buildMetaClass_QVBoxLayoutWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtwidgets


