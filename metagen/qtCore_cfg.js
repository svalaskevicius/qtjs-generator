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
  headerHeaderCode : "#include <qtCore_cpgf_compat.h>\n",
  sourceHeaderCode :
     "#include <QtCore/qglobal.h>\n"
    +"#include <QtCore/QString>\n"
    +"#include <QtCore/QDataStream>\n"
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
    +"#include <QtCore/QMargins>\n"
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
    +"#include <QtCore/QState>\n"
    +"#include <QtCore/QTimeZone>\n", // required by qdatetime
  //	sourceHeaderReplacer : [ "!.*Box2D[^/]*/Box2D!i", "Box2D" ],
//	metaHeaderPath : "cpgf/metadata/box2d/",
  parameterTypeReplacer : [
    "Q_DECL_CONSTEXPR", "",
    "Q_CORE_EXPORT", "",
  ],

  predefinedTemplateInstances: [
    'QList<QString>', '',
    'QList<QObject*>', 'QList_QObject_ptr',
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
    case 'qLess':
    case 'qGreater':
    case 'QCoreApplication':
    case 'QFile': // TODO: need to fix binding generator for static methods
    case 'QPostEventList':
      return false;
    default:
      if (item.getQualifiedName().indexOf(/QPrivate/) >=0 ) {
        return false;
      }
  }
  return true;
}

function processCallback(item, data)
{
  if(item.getLocation().indexOf('/QtCore/') == -1) {
    data.skipBind = true;
    return;
  }
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
    'blackberry',
    'qobjectdefs',
    'qcompilerdetection',
    'qexception',

    'qfuture',
    'cache',
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
    'typedef',

    'QAnimationGroup',
    'QAbstractState',
    'QDynamicMetaObjectData',
    'QRegularExpression',
    'QDataStream',
    'QNoImplicitBoolCast',
    'QResource',
    'QSortFilterProxyModel',
    'QTranslator',
    'QMimeData',
    'Q_PID',
    'RefCount',
    'QArrayData',
    'QListData',
    'QXmlStream',
    'QStringListModel',
    'QNoDebug',
    'QByteArrayMatcher'
  ];

  for (var i in skipByLocationPart) {
    if(item.getLocation().indexOf(skipByLocationPart[i]) >= 0) {
      data.skipBind = true;
    print("skip by location: " + item.getQualifiedName() + " " + skipByLocationPart[i] + "\n");
      return;
    }
  }
  for (var i in skipByNamePart) {
    if(item.getPrimaryName().indexOf(skipByNamePart[i]) >= 0) {
      data.skipBind = true;
    print("skip by name part: " + item.getQualifiedName() + " " + skipByLocationPart[i] + "\n");
      return;
    }
  }

  if ((""+item.getQualifiedName()).indexOf('QtPrivate::') >= 0) {
      data.skipBind = true;
    print("skip: " + item.getQualifiedName() + "\n");
      return;
  }

  if ((""+item.getQualifiedName()).indexOf('QtMetaTypePrivate::') >= 0) {
      data.skipBind = true;
    print("skip: " + item.getQualifiedName() + "\n");
      return;
  }

  switch (""+item.getQualifiedName()) {
    case "qErrnoWarning":
    case "qDebug":
    case "qWarning":
    case "qCritical":
    case "qFatal":
    case "AbstractConverterFunction":
    case "AbstractComparatorFunction":
    case "AbstractDebugStreamFunction":
    case "AssociativeContainerAccessor":
    case "AssociativeContainerConverterHelper":
    case "AssociativeValueTypeIsMetaType":
    case "IsMetaTypePair":
    case "KeyAndValueTypeIsMetaType":
    case "SequentialContainerConverterHelper":
    case "SharedPointerMetaTypeIdHelper":
    case "StlStyleAssociativeContainerAccessor":
    case "ValueTypeIsMetaType":
    case "QT_NO_QDEBUG_MACRO":
    case "QT_NO_QWARNING_MACRO":
    case "Q_DECLARE_SEQUENTIAL_CONTAINER_METATYPE":
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
    case "QMetaTypeId2":
    case "QMetaTypeId2< const T & >":
    case "QMetaTypeIdQObject":
    case "QMetaTypeIdQObject< T *, true >":
    case "QObjectCleanupHandler":
    case "MetaObjectForType":
    case "qt_metatype_id":
    case "QFlags::Int":
    case "QList::p":
    case "QList::d":
    case "QUrlTwoFlags":
    case "QUrl::data_ptr":
    case "QUrlQuery::data_ptr":
    case "qt_sine_table":
      data.skipBind = true;
    print("skip directly: " + item.getQualifiedName()+ "\n");
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

    case "QMargins::+=":
    case "QMargins::-=":
      var params = item.getParameterList();
      if (params.size() == 1 && params.get(0).getType().getLiteralType() == 'int') {
        data.skipBind = true;
      }
      break;
  }

  if (typeof item.getResultType !== 'undefined' && item.getResultType()) {
    switch (""+item.getResultType().getLiteralType()) {
      case 'QFlags':
        item.getResultType().setLiteralType("QFlags<Enum >");
        break;
      case 'QFlags &':
        item.getResultType().setLiteralType("QFlags<Enum > &");
        break;
    }
  }
  if (item.isMethod() || item.isConstructor() || item.isOperator()) {
    var params = item.getParameterList();
    for(var i = 0; i < params.size(); i++) {
      switch (""+params.get(i).getType().getLiteralType()) {
        case '...':
        case 'const QMimeTypePrivate &':
        case 'QFileInfoPrivate *':
        case 'typename QList<T >::Node*':
        case 'const QSequentialIterableImpl &':
        case 'const QAssociativeIterableImpl &':
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
        case 'QFlags':
          params.get(i).getType().setLiteralType('QFlags<Enum >');
          break;
        case 'QFlags &':
          params.get(i).getType().setLiteralType('QFlags<Enum > &');
          break;
        case 'FormattingOptions':
          params.get(i).getType().setLiteralType('QUrl::FormattingOptions');
          break;
        case 'ComponentFormattingOptions':
          params.get(i).getType().setLiteralType('QUrl::ComponentFormattingOptions');
          break;
        default:
  if ((""+params.get(i).getType().getLiteralType()).indexOf('QtPrivate::') >= 0) {
      data.skipBind = true;
    print("skip: " + item.getQualifiedName() + "\n");
      return;
  }

  if ((""+params.get(i).getType().getLiteralType()).indexOf('QtMetaTypePrivate::') >= 0) {
      data.skipBind = true;
    print("skip: " + item.getQualifiedName() + "\n");
      return;
  }

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
        case "FormattingOptions(PrettyDecoded)":
          params.get(i).setDefaultValue("QUrl::FormattingOptions(QUrl::PrettyDecoded)");
          break;
      }

    }
  }
  if (shouldAllowClassWrapper(item)) {
    data.getWrapperConfig().setWrapClass(true);
    print("setting wrapper: "+item.getLiteralName()+"\n");
  }
}

