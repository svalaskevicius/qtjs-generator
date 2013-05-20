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
    +"#include <QtGui/QHelpEvent>\n"
    +"#include <QtGui/QPainter>\n"
    +"#include <QtGui/QWindow>\n"
    +"#include <QtGui/QTextCharFormat>\n"
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
    'QColorDialog',
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
  if (item.isMethod() || item.isConstructor()) {
    var params = item.getParameterList();
    for(var i = 0; i < params.size(); i++) {
      switch (""+params.get(i).getType().getLiteralType()) {
        case '...':
          data.skipBind = true;
        break;
      }

      switch (""+params.get(i).getDefaultValue()) {
        case "EnsureVisible":
          params.get(i).setDefaultValue("QAbstractItemView::EnsureVisible");
          break;
        case "ApplicationFlags":
          params.get(i).setDefaultValue("QCoreApplication::ApplicationFlags");
          break;
      }

    }
  }
}

