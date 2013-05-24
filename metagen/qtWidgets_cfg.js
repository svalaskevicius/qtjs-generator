var config = {
  projectID : "QtWidgets",

  headerOutput : "build/QtWidgets/include",
  sourceOutput : "build/QtWidgets/src",

  metaItemCallback : processCallback,

  cppNamespace : "meta_qtwidgets",

  metaClassFunctionPrefix : "buildMetaClass_",
  metaClassCreatePrefix : "createMetaClass_",

  metaClassMainRegisterPrefix : "registerMain_",

  sourceFilePrefix : "meta_qtwidgets_",
  mainSourceFile : "register_meta_qtwidgets",

  wrapBitField : true, // default is true
  wrapOperator : true, // default is true

  autoRegisterToGlobal : false,

  metaNamespace : "qtwidgets",
  headerHeaderCode : "#include <qtWidgets_cpgf_compat.h>\n",
  sourceHeaderCode :
     "#include <QtCore/qglobal.h>\n"
    +"#include <QtCore/QEvent>\n"
    +"#include <QtCore/QDebug>\n"
    +"#include <QtCore/QState>\n"
    +"#include <QtCore/QMimeData>\n"
    +"#include <QtCore/QAbstractProxyModel>\n"
    +"#include <QtCore/QTimeLine>\n"
    +"#include <QtGui/QHelpEvent>\n"
    +"#include <QtGui/QPainter>\n"
    +"#include <QtGui/QWindow>\n"
    +"#include <QtGui/QTextCharFormat>\n"
    +"#include <QtGui/QTextDocument>\n"
    +"#include <QtGui/QMovie>\n"
    +"#include <QtGui/QPicture>\n"
    +"#include <QtGui/QTextBlock>\n"
    +"#include <QtGui/QTextFrame>\n"
    +"#include <QtGui/QPagedPaintDevice>\n"
    +"#include <QtGui/QBitmap>\n"
    +"#include <QtGui/QPaintEngine>\n"
    +"#include <QtGui/QBackingStore>\n"
    +"#include <QtWidgets/QMenu>\n"
    +"#include <QtWidgets/QButtonGroup>\n"
    +"#include <QtWidgets/QAbstractItemView>\n"
    +"#include <QtWidgets/QScrollBar>\n"
    +"#include <QtWidgets/QAbstractItemView>\n"
    +"#include <QtWidgets/QDesktopWidget>\n"
    +"#include <QtWidgets/QAbstractButton>\n"
    +"#include <QtWidgets/QLineEdit>\n"
    +"#include <QtWidgets/QCompleter>\n"
    +"#include <QtWidgets/QCalendarWidget>\n"
    +"#include <QtWidgets/QApplication>\n"
    +"#include <QtWidgets/QPushButton>\n"
    +"#include <QtWidgets/QItemEditorFactory>\n"
    +"#include <QtWidgets/QGraphicsLayout>\n"
    +"#include <QtWidgets/QGesture>\n"
    +"#include <QtWidgets/QFileIconProvider>\n"
    +"#include <QtWidgets/QGraphicsScene>\n"
    +"#include <QtWidgets/QGraphicsWidget>\n"
    +"#include <QtWidgets/QGraphicsEffect>\n"
    +"#include <QtWidgets/QMdiArea>\n"
    +"#include <QtWidgets/QMdiSubWindow>\n"
    +"#include <QtWidgets/QMenuBar>\n"
    +"#include <QtWidgets/QStatusBar>\n"
    +"#include <QtWidgets/QToolBar>\n"
    +"#include <QtWidgets/QDockWidget>\n"
    +"#include <QtWidgets/QHeaderView>\n"
    +"#include <QtWidgets/QTreeWidgetItem>\n"
    +"#include <QtWidgets/QTreeWidget>\n"
    +"#include <QtWidgets/QUndoStack>\n"
    +"#include <QtWidgets/QUndoGroup>\n"
    +"#include <QtWidgets/QGraphicsProxyWidget>\n"
    +"#include <QtWidgets/QLayout>\n"
  ,
  //	sourceHeaderReplacer : [ "!.*Box2D[^/]*/Box2D!i", "Box2D" ],
//	metaHeaderPath : "cpgf/metadata/box2d/",
  parameterTypeReplacer : [
    "Q_DECL_CONSTEXPR", "",
    "Q_CORE_EXPORT", "",
  ]
};


function processCallback(item, data)
{
  if(item.getLocation().indexOf('/QtWidgets/') == -1) {
    data.skipBind = true;
    return;
  }

  print (item.getLocation()+" OOOOW !!!\n");
  var skipByLocationPart = [
    '/private/',
    '_impl.h',
  ];

  var skipByNamePart = [
    'Private',
    'Dialog',
    'QDirModel',
    'QHeaderView',
  ];

  for (var i in skipByLocationPart) {
    if(item.getLocation().indexOf(skipByLocationPart[i]) >= 0) {
      data.skipBind = true;
      return;
    }
  }
  for (var i in skipByNamePart) {
    if(item.getPrimaryName().indexOf(skipByNamePart[i]) >= 0) {
      data.skipBind = true;
      return;
    }
  }

  switch (""+item.getQualifiedName()) {
    case "QGraphicsEffect::source":
    case "QAbstractGraphicsShapeItem":
    case "QGraphicsObject":
    case "QMenu::platformMenu":
    case "QMenuBar::platformMenuBar":
    case "QMessageBox::open":
    case "QStackedLayout::widget":
    case "QTableView::sortByColumn":
    case "QTreeView::sortByColumn":
    case "QWidget::setFocus":
    case "QSizePolicy::bits":
    case "QSizePolicy::data":
    case "QSizePolicy::horStretch":
    case "QSizePolicy::verStretch":
    case "QSizePolicy::horPolicy":
    case "QSizePolicy::verPolicy":
    case "QSizePolicy::ctype":
    case "QSizePolicy::hfw":
    case "QSizePolicy::wfh":
    case "QSizePolicy::padding":
    case "QGraphicsScene::update":
    case "QGraphicsScene::invalidate":
    case "QMacNativeWidget":
    case "QMacCocoaViewContainer":
    case "QAbstractItemView::update":
      data.skipBind = true;
      return;
  }
  if (item.isMethod() || item.isConstructor()) {
    var params = item.getParameterList();
    for(var i = 0; i < params.size(); i++) {
      switch (""+params.get(i).getType().getLiteralType()) {
        case '...':
          data.skipBind = true;
          break;

        case 'Type':
          params.get(i).getType().setLiteralType('QEvent::Type');
          break;
      }
      switch (""+params.get(i).getDefaultValue()) {
        case "EnsureVisible":
          params.get(i).setDefaultValue("QAbstractItemView::EnsureVisible");
          break;
        case "ApplicationFlags":
          params.get(i).setDefaultValue("QCoreApplication::ApplicationFlags");
          break;
        case "StandardButtons(Yes|No)":
          params.get(i).setDefaultValue("QMessageBox::StandardButtons(QMessageBox::Yes|QMessageBox::No)");
          break;
        case "RenderFlags(DrawWindowBackground|DrawChildren)":
          params.get(i).setDefaultValue("QWidget::RenderFlags(QWidget::DrawWindowBackground|QWidget::DrawChildren)");
          break;
        case "SO_Complex":
          params.get(i).setDefaultValue("QStyleOption::SO_Complex");
          break;
        case "None":
          params.get(i).setDefaultValue("QEvent::None");
          break;
      }

    }
  }
}

