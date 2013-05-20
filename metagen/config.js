var config = {
  projectID : "QtCore",

  headerOutput : "build/QtCore/include",
  sourceOutput : "build/QtCore/src",

  metaItemCallback : processCallback,

  cppNamespace : "meta_qtcore",

  metaClassFunctionPrefix : "buildMetaClass_",
  metaClassCreatePrefix : "createMetaClass_",

  metaClassMainRegisterPrefix : "registerMain_",

  sourceFilePrefix : "meta_qtcore_",
  mainSourceFile : "register_meta_qtcore",

  wrapBitField : true, // default is true
  wrapOperator : true, // default is true

  autoRegisterToGlobal : false,

  metaNamespace : "qtcore",
  headerHeaderCode : "#include \"../../../qtcompat.h\"\n",
  sourceHeaderCode :
     "#include <QtCore/qglobal.h>\n#include <QtCore/QString>\n#include <QtCore/QDataStream>\n"
    +"#include <QtCore/QDateTime>\n"
    +"#include <QtCore/QTranslator>\n"
    +"#include <QtCore/QAbstractEventDispatcher>\n"
    +"#include <QtCore/QRegularExpression>\n"
    +"#include <QtCore/QUrl>\n"
    +"#include <QtCore/QAbstractNativeEventFilter>\n"
    +"#include <QtCore/QItemSelection>\n"
    +"#include <QtCore/QTextCodec>\n"
    +"#include <QtCore/qabstractanimation.h>\n"
    +"#include <QtCore/QDebug>\n"
    +"#include <QtCore/QThread>\n"
    +"#include <QtCore/QEvent>\n"
    +"#include <QtCore/QStringList>\n"
    +"#include <QtCore/QPointF>\n"
    +"#include <QtCore/QBitArray>\n"
    +"#include <QtCore/QAbstractTransition>\n"
    +"#include <QtCore/QSignalTransition>\n"
    +"#include <QtCore/QJsonDocument>\n"
    +"#include <QtCore/QJsonArray>\n"
    +"#include <QtCore/QJsonObject>\n"
    +"#include <QtCore/QJsonValue>\n"
    +"#include <QtCore/QUuid>\n"
    +"#include <QtCore/QEasingCurve>\n"
    +"#include <QtCore/QRectF>\n"
    +"#include <QtCore/QLineF>\n"
    +"#include <QtCore/QSizeF>\n"
    +"#include <QtCore/QRect>\n"
    +"#include <QtCore/QLine>\n"
    +"#include <QtCore/QSize>\n"
    +"#include <QtCore/QDir>\n"
    +"#include <QtCore/QMutex>\n"
    +"#include <QtCore/QReadWriteLock>\n"
    +"#include <QtCore/QPauseAnimation>\n"
    +"#include <QtCore/qmetaobject.h>\n"
    +"#include <QtCore/QState>\n",
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
    'qobject_impl',
    'qatomic_sparc.h',
    'qatomic_cxx11.h',
    'qatomic_x86.h',
    '_impl.h',
    '/qatomic_',
    '/qoldbasicatomic',
    'windows.h',
    'qglobal',
    'qobjectdefs',
    'qcompilerdetection',
    'qexception',

    'qfuture',
    'cache',
    'qflags',
    'qsignalmapper',
    'qstringbuilder',

    'qarraydatapointer',

    'qmap',
    'qidentityproxymodel',
    'qregularexpression',
    'qgenericatomic',
    'qabstract',
    'qlinkedlist',
    'qtextcodec',
    'pointer',
    'refcount'
  ];

  var skipByNamePart = [
    'Private',
    'Q_DECLARE_TYPEINFO',
    'QT_EDITION',
    'Q_EXTERN_C',
    'QTypeInfo',

    'QUrl',
    'QAnimationGroup',
    'QAbstractState',
    'QDynamicMetaObjectData',
    'QRegularExpression',
    'QByteArray',
    'QDataStream',
    'QNoImplicitBoolCast',
    'QResource',
    'QSortFilterProxyModel',
    'QTranslator',
    'QMimeData',
    'Q_PID',
    'RefCount',
    'QListData',
    'QXmlStream',
    'QStringListModel',
    'QBitArray',
    'QNoDebug'
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
    case "qErrnoWarning":
    case "qDebug":
    case "qWarning":
    case "qCritical":
    case "qFatal":
    case "QT_NO_QDEBUG_MACRO":
    case "QT_NO_QWARNING_MACRO":
    case "QMessageLogContext":
    case "QString::vsprintf":
    case "QString::fromStdString":
    case "QString::fromStdWString":
    case "qvsnprintf":
    case "QArrayData::ref":
    case "QHashData::ref":
    case "QHash": // hash templates are disabled, qHash function should be used
    case "QHashData":
    case "QHashNode":
    case "QMultiHash":
    case "QJsonValue::ui":
    case "QJsonValue::b":
    case "QJsonValue::dbl":
    case "QJsonValue::stringData":
    case "QJsonValue::base":
    case "QJsonValueRef::a":
    case "QJsonValueRef::o":
    case "QJsonDocument::BinaryFormatTag":
    case "QStringMatcher::q_data":
    case "QStringMatcher::p":
    case "QProcess::error":
    case "QObjectData::dynamicMetaObject":
    case "QObjectData::metaObject":
    case "TreatAsQObjectBeforeMetaType":
    case "QMetaType":
    case "QMetaTypeIdQObject":
    case "QMetaTypeIdQObject< T *, true >":
    case "QObjectCleanupHandler":
    case "MetaObjectForType":
    case "qt_metatype_id":
      data.skipBind = true;
      break;

    case "QArrayData":
    case "QHashData":
    case "QBasicMutex":
    case "QBasicAtomicPointer":
      item.getTraits().setDefaultConstructorHidden(true);
      item.getTraits().setCopyConstructorHidden(true);
      break;

    case "QTypedArrayData::begin":
    case "QTypedArrayData::end":
    case "QTypedArrayData::constBegin":
    case "QTypedArrayData::constEnd":
    case "QTypedArrayData::allocate":
    case "QTypedArrayData::fromRawData":
      if (item.getParameterList().size() > 0) {
        item.getParameterList().get(item.getParameterList().size()-1).setDefaultValue("QTypedArrayData<T>::"+item.getParameterList().get(0).getDefaultValue());
    }
    break;

    case "QFile::open":
      if (item.getParameterList().size() > 0) {
        var currentValue = item.getParameterList().get(item.getParameterList().size()-1).getDefaultValue();
        if ("DontCloseHandle" == currentValue) {
          item.getParameterList().get(item.getParameterList().size()-1).setDefaultValue("QFileDevice::DontCloseHandle");
        }
      }
      break;

    case "QExplicitlySharedDataPointer::=":
      item.getResultType().setLiteralType("QExplicitlySharedDataPointer<T> &");
      break;

    case "QSharedDataPointer::=":
      item.getResultType().setLiteralType("QSharedDataPointer<T> &");
      break;

    case "QFile::permissions":
      item.getResultType().setLiteralType("QFileDevice::Permissions");
      break;
  }

  if (item.isMethod() || item.isConstructor()) {
    var params = item.getParameterList();
    for(var i = 0; i < params.size(); i++) {
      switch (""+params.get(i).getType().getLiteralType()) {
        case '...':
        case 'const QMimeTypePrivate &':
        case 'QFileInfoPrivate *':
        data.skipBind = true;
        break;
        case 'Type':
          params.get(i).getType().setLiteralType('QEvent::Type');
          break;
        case 'OpenMode':
          params.get(i).getType().setLiteralType('QIODevice::OpenMode');
          break;
        case 'Permissions':
          params.get(i).getType().setLiteralType('QFileDevice::Permissions');
          break;
        case 'FileHandleFlags':
          params.get(i).getType().setLiteralType('QFileDevice::FileHandleFlags');
          break;
        case 'State':
          params.get(i).getType().setLiteralType('QFutureInterfaceBase::State');
          break;
        default:
          print("TYPE: "+params.get(i).getType().getLiteralType()+"\n");
      }
      switch (""+params.get(i).getDefaultValue()) {
        case "ReadWrite":
          params.get(i).setDefaultValue("QIODevice::ReadWrite");
          break;
        case "Truncate":
          params.get(i).setDefaultValue("QIODevice::Truncate");
          break;
        case "SortFlags(Name|IgnoreCase)":
          params.get(i).setDefaultValue("QDir::SortFlags(QDir::Name|QDir::IgnoreCase)");
          break;
        case "NoState":
          params.get(i).setDefaultValue("QFutureInterfaceBase::NoState");
          break;
      }

    }
  }
}

