var config = {
  projectID : "QtQml",

  headerOutput : "build/QtQml/include",
  sourceOutput : "build/QtQml/src",

  metaItemCallback : processCallback,

  cppNamespace : "qt_metadata",

  metaClassFunctionPrefix : "buildMetaClass_",
  metaClassCreatePrefix : "createMetaClass_",

  metaClassMainRegisterPrefix : "registerMain_",

  sourceFilePrefix : "meta_qtqml_",
  mainSourceFile : "register_meta_qtqml",

  wrapBitField : true, // default is true
  wrapOperator : true, // default is true

  autoRegisterToGlobal : false,

  metaNamespace : "qtqml",
  headerHeaderCode : ""
    +"#include <QtCore/include/meta_qtcore_qflags.h>\n"
    +"#include <QtCore/include/meta_qtcore_qcontainerfwd.h>\n"
    +"#include <qtQml_cpgf_compat.h>\n"
  ,
  sourceHeaderCode :
     "#include <QtCore/qglobal.h>\n"
    +"#include <QtCore/QEvent>\n"
    +"#include <QtCore/QDebug>\n"
    +"#include <QtCore/QFileSelector>\n"
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
    case "QQuickWindow":
    case "QQuickView":
    case "QQmlFileSelector":
    case "QQmlComponent":
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
    case "Q_QML_EXPORT":
    case "Q_QUICK_EXPORT":
    case "Q_QUICK_TEST_EXPORT":
    case "QQmlComponent::qmlAttachedProperties":
    case "QQmlEngine::urlInterceptor":
    case "QQmlEngine::setUrlInterceptor":
    case "QQmlListProperty::==":
    case "QQuickItem::mapFromItem":
    case "QQuickItem::mapToItem":
    case "QQuickWindow::closing":
    case "quick_test_main":
    case "QQuickTransform": // fails to link
      data.skipBind = true;
      return;
    case "QSGMaterialShader":
    case "QSGSimpleRectNode":
    case "QSGFlatColorMaterial":
    case "QSGSimpleTextureNode":
    case "QSGOpaqueTextureMaterial":
    case "QSGNode":
    case "QSGBasicGeometryNode":
    case "QSGGeometryNode":
    case "QSGClipNode":
    case "QSGOpacityNode":
    case "QSGRootNode":
    case "QSGTransformNode":
      item.getTraits().setDefaultConstructorHidden(true);
      item.getTraits().setCopyConstructorHidden(true);
      break;
    case "QQmlComponent::create":
      item.setTransferResultOwnership(true);
      break;
  }
  if (item.isMethod() || item.isConstructor() || item.isOperator()) {
    if (typeof item.getResultType !== 'undefined' && item.getResultType()) {
      switch (""+item.getResultType().getLiteralType()) {
        case 'Flags':
          item.getResultType().setLiteralType('QQmlImageProviderBase::Flags');
          break;
        case 'ImageType':
          item.getResultType().setLiteralType('QQmlImageProviderBase::ImageType');
          break;
        case 'UpdatePaintNodeData *':
          item.getResultType().setLiteralType('QQuickItem::UpdatePaintNodeData *');
          break;
        case 'SurfaceType':
          item.getResultType().setLiteralType('QSurface::SurfaceType');
          break;
      }
    }
    var params = item.getParameterList();
    for(var i = 0; i < params.size(); i++) {
    print("TYPE: "+params.get(i).getType().getLiteralType()+"\n");
      switch (""+params.get(i).getType().getLiteralType()) {
        case '...':
        case 'QJSEnginePrivate &':
        case 'QQmlComponentPrivate &':
        case 'QQmlEnginePrivate &':
        case 'QQuickItemPrivate &':
        case 'QQuickPaintedItemPrivate &':
        case 'QQuickTransformPrivate &':
        case 'QQuickWindowPrivate &':
        case 'QSGBasicGeometryNodePrivate &':
        case 'QSGGeometryNodePrivate &':
        case 'QSGNodePrivate &':
        case 'QSGTexturePrivate &':
        case 'QJSValuePrivate *':
        case 'QQmlInfoPrivate *':
          data.skipBind = true;
          return;
        case 'Flags':
          params.get(i).getType().setLiteralType('QQmlImageProviderBase::Flags');
          break;
        case 'ImageType':
          params.get(i).getType().setLiteralType('QQmlImageProviderBase::ImageType');
          break;
        case 'UpdatePaintNodeData *':
          params.get(i).getType().setLiteralType('QQuickItem::UpdatePaintNodeData *');
          break;
        case 'CreateTextureOption':
          params.get(i).getType().setLiteralType('QQuickWindow::CreateTextureOption');
          break;
      }
      switch (""+params.get(i).getDefaultValue()) {
        case "CreateTextureOption(0)":
          params.get(i).setDefaultValue('QQuickWindow::CreateTextureOption(0)');
          break;
      }
    }
  }
  if (item.isTypedef()) {
    switch (""+item.getType().getQualifiedBaseType()) {
      case "QFlags": break;
      default:
        data.skipBind = true;
        print("skipping typedef name: " + item.getLiteralName()+"\n");
        print("skipping typedef type: " + item.getType().getLiteralType()+"\n");
        print("skipping typedef basetype: " + item.getType().getQualifiedBaseType()+"\n");
        return;
    }
  }

  if (shouldAllowClassWrapper(item)) {
    data.getWrapperConfig().setWrapClass(true);
    print("setting wrapper: "+item.getLiteralName()+"\n");
  }
}

