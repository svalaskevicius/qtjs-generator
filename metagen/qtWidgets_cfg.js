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
  headerHeaderCode : "#include \"../../../qtcompat.h\"\n",
  sourceHeaderCode :
     "#include <QtCore/qglobal.h>\n"
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
  var skipByLocationPart = [
    '/private/',
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
  }
}

