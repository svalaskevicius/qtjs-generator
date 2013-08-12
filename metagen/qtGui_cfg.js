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
  ,
  //	sourceHeaderReplacer : [ "!.*Box2D[^/]*/Box2D!i", "Box2D" ],
//	metaHeaderPath : "cpgf/metadata/box2d/",
  parameterTypeReplacer : [
    "Q_DECL_CONSTEXPR", "",
    "Q_CORE_EXPORT", "",
    "Q_GUI_EXPORT", "",
  ]
};


function shouldAllowClassWrapper(item) {
  if (!item.isClass() || ((""+item.getLiteralName()).length == 0)) {
    return false;
  }
  if (item.isTemplate()) {
    return false;
  }

  switch(""+item.getLiteralName()) {
    case 'QGuiApplication':
    case 'QBitmap':
    case 'QColor':
    case 'QGradient':
    case 'QClipboard':
    case 'QBackingStore':
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
  ];

  var skipByNamePart = [
    'Private',
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
    case "QBackingStore::handle":
    case "QAccessibleInterface":
    case "QAccessibleBridge":
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
      data.skipBind = true;
      return;
    case "xxxx":
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
      switch (""+params.get(i).getType().getLiteralType()) {
        case '...':
          data.skipBind = true;
          return;
      }
      switch (""+params.get(i).getDefaultValue()) {
        case "xxxxx":
          params.get(i).setDefaultValue('xxx');
          break;
      }
    }
  }

  if (shouldAllowClassWrapper(item)) {
    data.getWrapperConfig().setWrapClass(true);
    print("setting wrapper: "+item.getLiteralName()+"\n");
  }
}

