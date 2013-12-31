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
    +"#include <QtWidgets/QGraphicsSceneContextMenuEvent>\n"
    +"#include <QtWidgets/QGraphicsSceneDragDropEvent>\n"
    +"#include <QtWidgets/QGraphicsSceneHoverEvent>\n"
    +"#include <QtWidgets/QGraphicsSceneMouseEvent>\n"
    +"#include <QtWidgets/QGraphicsSceneWheelEvent>\n"
    +"#include <QtWidgets/QMdiArea>\n"
    +"#include <QtWidgets/QMdiSubWindow>\n"
    +"#include <QtWidgets/QMenuBar>\n"
    +"#include <QtWidgets/QStatusBar>\n"
    +"#include <QtWidgets/QCheckBox>\n"
    +"#include <QtWidgets/QToolBar>\n"
    +"#include <QtWidgets/QDockWidget>\n"
    +"#include <QtWidgets/QHeaderView>\n"
    +"#include <QtWidgets/QTreeWidgetItem>\n"
    +"#include <QtWidgets/QTreeWidget>\n"
    +"#include <QtWidgets/QUndoStack>\n"
    +"#include <QtWidgets/QUndoGroup>\n"
    +"#include <QtWidgets/QGraphicsProxyWidget>\n"
    +"#include <QtWidgets/QLayout>\n"
    +"#include <QtWidgets/QLabel>\n"
    +"#include <QtWidgets/QProgressBar>\n"
  ,
  //	sourceHeaderReplacer : [ "!.*Box2D[^/]*/Box2D!i", "Box2D" ],
//	metaHeaderPath : "cpgf/metadata/box2d/",
  parameterTypeReplacer : [
    "Q_DECL_CONSTEXPR", "",
    "Q_CORE_EXPORT", "",
  ]
};

function classHasInheritedVirtualMethods(item) {
  var methods = item.getMethodList();
  for(var i = 0; i < methods.size(); i++) {
    if (methods.get(i).isVirtual()) {
      return true;
    }
  }
  var bases = item.getBaseClassList();
  for(var i = 0; i < bases.size(); i++) {
    var baseClass = bases.get(i).getCppClass()
    if (baseClass && classHasInheritedVirtualMethods(baseClass) ) {
      return true;
    }
  }
  return false;
}


function shouldAllowClassWrapper(item) {
  if (!item.isClass() || ((""+item.getLiteralName()).length == 0)) {
    return false;
  }
  if (item.isTemplate()) {
    return false;
  }

  if (!classHasInheritedVirtualMethods(item)) {
    print("skip wrapper as no virtual methods: "+item.getLiteralName()+"\n");
    return false;
  }

  switch(""+item.getLiteralName()) {
    case 'QApplication':
    case 'QScroller':
    case 'QGraphicsLayout': // inherited pure virtual still fails
    case 'QGraphicsLayoutItem': // private constructor fails
    case 'QLayout': // inherited pure virtual still fails
    case 'QListWidgetItem': // private constructor fails in read method for QDataStream
    case 'QTableWidgetItem': // private constructor fails in read method for QDataStream
    case 'QTreeWidgetItem': // private constructor fails in read method for QDataStream
      return false;
    default:
      ;
  }
  return true;
}

function processCallback(item, data)
{
  if(item.getLocation().indexOf('/QtWidgets/') == -1) {
    data.skipBind = true;
    return;
  }

  var skipByLocationPart = [
    '/private/',
    '_impl.h',
  ];

  var skipByNamePart = [
    'Private',
    'QSizePolicy::Bits',
  ];

  for (var i in skipByLocationPart) {
    if(item.getLocation().indexOf(skipByLocationPart[i]) >= 0) {
      data.skipBind = true;
    print("skip by location: " + item.getLiteralName() + " " + skipByLocationPart[i] + "\n");
      return;
    }
  }
  for (var i in skipByNamePart) {
    if(item.getQualifiedName().indexOf(skipByNamePart[i]) >= 0) {
      data.skipBind = true;
    print("skip by name part: " + item.getQualifiedName() + " " + skipByNamePart[i] + "\n");
      return;
    }
  }
  switch (""+item.getQualifiedName()) {
    case "Q_FORWARD_DECLARE_OBJC_CLASS":
    case "QGraphicsEffect::source":
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
    print("skip directly: " + item.getLiteralName()+ "\n");
      return;
    case "QAbstractGraphicsShapeItem":
    case "QGraphicsObject":
      item.getTraits().setDefaultConstructorHidden(true);
      item.getTraits().setCopyConstructorHidden(true);
      break;
  }
  if (item.isConstructor() && (item.getQualifiedName().indexOf('QGraphicsObject::') > -1)) {
      data.skipBind = true;
      return;
  }
  if (item.isConstructor() && (item.getQualifiedName().indexOf('QAbstractGraphicsShapeItem::') > -1)) {
      data.skipBind = true;
      return;
  }
  if (typeof item.getResultType !== 'undefined' && item.getResultType()) {
    switch (""+item.getResultType().getLiteralType()) {
      case 'StepEnabled':
        item.getResultType().setLiteralType("QAbstractSpinBox::StepEnabled");
        break;
      case 'SubControl':
        item.getResultType().setLiteralType('QStyle::SubControl');
        break;
    }
  }
  if (item.isMethod() || item.isConstructor() || item.isOperator()) {
    var params = item.getParameterList();
    for(var i = 0; i < params.size(); i++) {
      if (params.get(i).getType().getLiteralType().indexOf('[]') > -1) {
        params.get(i).getType().setLiteralType(
          params.get(i).getType().getLiteralType().replace('[]', '*')
        );
      }
      switch (""+params.get(i).getType().getLiteralType()) {
        case '...':
          data.skipBind = true;
          break;

        case 'Type':
          params.get(i).getType().setLiteralType('QEvent::Type');
          break;
        case 'ScrollHint':
          params.get(i).getType().setLiteralType('QAbstractItemView::ScrollHint');
          break;
        case 'CursorAction':
          params.get(i).getType().setLiteralType('QAbstractItemView::CursorAction');
          break;
        case 'SliderChange':
          params.get(i).getType().setLiteralType('QAbstractSlider::SliderChange');
          break;
        case 'StepEnabled':
          params.get(i).getType().setLiteralType('QAbstractSpinBox::StepEnabled');
          break;
        case 'PrimitiveElement':
          params.get(i).getType().setLiteralType('QStyle::PrimitiveElement');
          break;
        case 'ControlElement':
          params.get(i).getType().setLiteralType('QStyle::ControlElement');
          break;
        case 'SubElement':
          params.get(i).getType().setLiteralType('QStyle::SubElement');
          break;
        case 'ComplexControl':
          params.get(i).getType().setLiteralType('QStyle::ComplexControl');
          break;
        case 'SubControl':
          params.get(i).getType().setLiteralType('QStyle::SubControl');
          break;
        case 'ContentsType':
          params.get(i).getType().setLiteralType('QStyle::ContentsType');
          break;
        case 'PixelMetric':
          params.get(i).getType().setLiteralType('QStyle::PixelMetric');
          break;
        case 'StyleHint':
          params.get(i).getType().setLiteralType('QStyle::StyleHint');
          break;
        case 'StandardPixmap':
          params.get(i).getType().setLiteralType('QStyle::StandardPixmap');
          break;
        case 'Extension':
          params.get(i).getType().setLiteralType('QGraphicsItem::Extension');
          break;
        case 'GraphicsItemChange':
          params.get(i).getType().setLiteralType('QGraphicsItem::GraphicsItemChange');
          break;
        case 'const PaintContext &':
          params.get(i).getType().setLiteralType('const QAbstractTextDocumentLayout::PaintContext &');
          break;
        case 'PaintDeviceMetric':
          params.get(i).getType().setLiteralType('QPaintDevice::PaintDeviceMetric');
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

    print("USE: " + item.getLiteralName()+ " : " + item.getQualifiedName() + "\n");
  if (shouldAllowClassWrapper(item)) {
    data.getWrapperConfig().setWrapClass(true);
    print("setting wrapper: "+item.getLiteralName()+"\n");
  }
}

