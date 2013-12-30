var config = {
  projectID : "QtGui",

  headerOutput : "build/QtGui/include",
  sourceOutput : "build/QtGui/src",

  metaItemCallback : processCallback,

  cppNamespace : "meta_qtgui",

  metaClassFunctionPrefix : "buildMetaClass_",
  metaClassCreatePrefix : "createMetaClass_",

  metaClassMainRegisterPrefix : "registerMain_",

  sourceFilePrefix : "meta_qtgui_",
  mainSourceFile : "register_meta_qtgui",

  wrapBitField : true, // default is true
  wrapOperator : true, // default is true

  autoRegisterToGlobal : false,

  metaNamespace : "qtgui",
  headerHeaderCode : "#include <qtGui_cpgf_compat.h>\n",
  sourceHeaderCode :
     "#include <QtCore/qglobal.h>\n"
    +"#include <QtCore/QEvent>\n"
    +"#include <QtCore/QDebug>\n"
    +"#include <QtCore/QState>\n"
    +"#include <QtGui/QOpenGLPixelTransferOptions>\n"
  ,
  //	sourceHeaderReplacer : [ "!.*Box2D[^/]*/Box2D!i", "Box2D" ],
//	metaHeaderPath : "cpgf/metadata/box2d/",
  parameterTypeReplacer : [
    "Q_DECL_CONSTEXPR", "",
    "Q_CORE_EXPORT", "",
    "Q_GUI_EXPORT", "",
    "Q_DECLARE_TYPEINFO", "",
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
    case 'QGuiApplication':
    case 'QBitmap':
    case 'QClipboard':
    case 'QIconEngine':
    case 'QImage':
    case 'QInputMethod':
    case 'QOffscreenSurface':
    case 'QOpenGLShaderProgram':
    case 'QPdfWriter':
    case 'QPicture':
    case 'QPixmap':
    case 'QSessionManager':
    case 'QStandardItem':
    case 'QSurface':
    case 'QWindow':
      return false;
    default:
      ;
  }
  return true;
}

function processCallback(item, data)
{
  if(item.getLocation().indexOf('/QtGui/') == -1) {
    data.skipBind = true;
    return;
  }

  var skipByLocationPart = [
    '/private/',
    'private.h',
    '_impl.h',
    'qopengles2ext.h',
    'qopenglext.h',
    'qopenglfunctions_',
    'qopenglversionfunctions.h',
    'qplatform',
    'qwindowdefs_',
    'qwindowsysteminterface',
  ];

  var skipByNamePart = [
    'Private',
    'data_ptr',
    'QPalette::Data',
  ];

  for (var i in skipByLocationPart) {
    if(item.getLocation().indexOf(skipByLocationPart[i]) >= 0) {
      data.skipBind = true;
      return;
    }
  }
  for (var i in skipByNamePart) {
    if(item.getQualifiedName().indexOf(skipByNamePart[i]) >= 0) {
      data.skipBind = true;
      return;
    }
  }
  switch (""+item.getQualifiedName()) {
    case "Q_DECLARE_TYPEINFO":
    case "void":
    case "APIENTRYP":
    case "GLAPI":
    case "QOPENGLF_APIENTRY":
    case "QOPENGLF_APIENTRYP":
    case "QT_PREPEND_NAMESPACE":
    case "QBackingStore::handle":
    case "QAccessibleInterface":
    case "QAccessibleBridge":
    case "QAccessibleObject":
    case "QColor::pad":
    case "QColor::argb":
    case "QColor::ahsv":
    case "QColor::acmyk":
    case "QColor::ahsl":
    case "QColor::array":
    case "QGradient::x1":
    case "QGradient::x2":
    case "QGradient::y1":
    case "QGradient::y2":
    case "QGradient::cx":
    case "QGradient::cy":
    case "QGradient::fx":
    case "QGradient::fy":
    case "QGradient::cradius":
    case "QGradient::radial":
    case "QGradient::angle":
    case "QGradient::conical":
    case "QGradient::linear":
    case "QIcon::data_ptr":
    case "QImage::data_ptr":
    case "QKeySequence::data_ptr":
    case "QGuiApplication::platformNativeInterface":
    case "QOffscreenSurface::handle":
    case "QOpenGLContext::functions":
    case "QOpenGLContext::handle":
    case "QOpenGLContext::shareHandle":
    case "QOpenGLShaderProgram::setUniformValue":
    case "QPalette::data":
    case "QPalette::resolve_mask":
    case "QPalette::current_group":
    case "QPalette::for_faster_swapping_dont_use":
    case "QRgb":
    case "QStandardItemModel::parent":
    case "QScreen::handle":
    case "QSurface::surfaceHandle":
    case "QTextDocument::docHandle":
    case "QTextLayout::engine":
    case "QTextObject::docHandle":
    case "QTextBlock::docHandle":
    case "QTextBlock::iterator::p":
    case "QWindow::handle":
    case "QOpenGLContext::versionFunctions": //does not link due to AbstractOpenGlFunctions symbol not found
    case "QAccessibleEvent::m_child":
    case "QAccessibleEvent::m_uniqueId":
      data.skipBind = true;
      return;
    case "QColor::alpha":
    case "QColor::red":
    case "QColor::green":
    case "QColor::blue":
    case "QColor::hue":
    case "QColor::saturation":
    case "QColor::value":
    case "QColor::cyan":
    case "QColor::magenta":
    case "QColor::yellow":
    case "QColor::black":
    case "QColor::lightness":
      if (item.isField()) {
        data.skipBind = true;
      }
      break;
    case "QBackingStore":
      item.getTraits().setDefaultConstructorHidden(true);
      item.getTraits().setCopyConstructorHidden(true);
      break;
  }
  if (item.isMethod() || item.isConstructor() || item.isOperator()) {
    if (typeof item.getResultType !== 'undefined' && item.getResultType()) {
      switch (""+item.getResultType().getLiteralType()) {
        case 'xxx':
          item.getResultType().setLiteralType('QGuiImageProviderBase::Flags');
          break;
      }
    }
    var params = item.getParameterList();
    for(var i = 0; i < params.size(); i++) {
      if (params.get(i).getType().getLiteralType().indexOf('[]') > -1) {
        params.get(i).getType().setLiteralType(
          params.get(i).getType().getLiteralType().replace('[]', '*')
        );
      }
      switch (""+params.get(i).getType().getLiteralType()) {
        case '...':
        case 'QTextDocumentPrivate *':
        case 'const QTextDocumentPrivate *':
        case 'QTextCursorPrivate *':
        case 'QPagedPaintDevice *':
        case 'QTextEngine *':
          data.skipBind = true;
          return;
        case 'Type':
          params.get(i).getType().setLiteralType('QEvent::Type');
          break;
      }
      switch (""+params.get(i).getDefaultValue()) {
        case "DragMove":
          params.get(i).setDefaultValue('QEvent::DragMove');
          break;
        case "Drop":
          params.get(i).setDefaultValue('QEvent::Drop');
          break;
        case 'ApplicationFlags':
          params.get(i).setDefaultValue('QCoreApplication::ApplicationFlags');
          break;
        case 'QVector< FormatRange >()':
          params.get(i).setDefaultValue('QVector<QTextLayout::FormatRange>()');
          break;
      }
    }
  }

  if (shouldAllowClassWrapper(item)) {
    data.getWrapperConfig().setWrapClass(true);
    print("setting wrapper: "+item.getLiteralName()+"\n");
  }
}

