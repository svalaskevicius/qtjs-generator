// Auto generated file, don't modify.

#include <qtWidgets_cpgf_compat.h>
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

#include "QtWidgets/qwidget.h"

#include "meta_qtwidgets_qwidget.h"

using namespace cpgf;

namespace qt_metadata { 


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_Global_qwidget()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qwidget(_d);
    return _d.getMetaInfo();
}


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_QWidget()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QWidget, QObject, QPaintDevice> _nd = GDefineMetaClass<QWidget, QObject, QPaintDevice>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QWidget", &buildMetaClass_QWidget);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QWidgetWrapper, QWidget> _nd = GDefineMetaClass<QWidgetWrapper, QWidget>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QWidgetWrapper", &buildMetaClass_QWidgetWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_QWidgetData()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QWidgetData> _nd = GDefineMetaClass<QWidgetData>::lazyDeclare("QWidgetData", &buildMetaClass_QWidgetData);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace qt_metadata


