var config = {
  projectID : "QtQml",

  headerOutput : "build/QtQml/include",
  sourceOutput : "build/QtQml/src",

  metaItemCallback : processCallback,

  cppNamespace : "meta_qtqml",

  metaClassFunctionPrefix : "buildMetaClass_",
  metaClassCreatePrefix : "createMetaClass_",

  metaClassMainRegisterPrefix : "registerMain_",

  sourceFilePrefix : "meta_qtqml_",
  mainSourceFile : "register_meta_qtqml",

  wrapBitField : true, // default is true
  wrapOperator : true, // default is true

  autoRegisterToGlobal : false,

  metaNamespace : "qtqml",
  headerHeaderCode : "#include <qtQml_cpgf_compat.h>\n",
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
    "Q_QML_EXPORT", "",
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
    case 'QJSValueIterator':
      return false;
    default:
      ;
  }
  return true;
}

function processCallback(item, data)
{
  if((item.getLocation().indexOf('/QtQml/') == -1) && (item.getLocation().indexOf('/QtQuick') == -1)) {
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
    case "QJSEngine::handle":
    case "QML_GETTYPENAMES":
    case "Q_DECLARE_TYPEINFO":
    case "QQmlComponent::qmlAttachedProperties":
    case "QQmlEngine::urlInterceptor":
    case "QQmlEngine::setUrlInterceptor":
    case "QQmlListProperty::==":
      data.skipBind = true;
      return;
    case "xx":
      item.getTraits().setDefaultConstructorHidden(true);
      item.getTraits().setCopyConstructorHidden(true);
      break;
  }

  if (shouldAllowClassWrapper(item)) {
    data.getWrapperConfig().setWrapClass(true);
    print("setting wrapper: "+item.getLiteralName()+"\n");
  }
}

