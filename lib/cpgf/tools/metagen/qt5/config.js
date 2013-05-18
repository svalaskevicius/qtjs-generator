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

  autoRegisterToGlobal : true,

  metaNamespace : "qtcore",
  headerHeaderCode : "#include \"../../../qtcompat.h\"\n",
  sourceHeaderCode : "#include <QtCore/qglobal.h>\n#include <QtCore/QString>\n#include <QtCore/QDataStream>\n"
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
  var name = item.getPrimaryName();
  print (">>>> "+item.getLocation()+"\n");

  if(item.isClass() && (name.indexOf('Private') >= 0)) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('/private/') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qobject_impl') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qatomic_sparc.h') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qatomic_cxx11.h') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qatomic_x86.h') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('_impl.h') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('/qatomic_') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('/qoldbasicatomic') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('windows.h') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qglobal') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qobjectdefs') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qcompilerdetection') >= 0) {		data.skipBind = true;	}

  if(item.getLocation().indexOf('qfuture') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('settings') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('cache') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qflags') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qplugin') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qmetatype') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qsignalmapper') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qstringbuilder') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qarraydatapointer') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qhistorystate') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qstringmatcher') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qwaitcondition') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qmap') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qidentityproxymodel') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qregularexpression') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qexception') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qgenericatomic') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qabstract') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qlinkedlist') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('qtextcodec') >= 0) {		data.skipBind = true;	}
    if(item.getLocation().indexOf('qeventtransition') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('pointer') >= 0) {		data.skipBind = true;	}
  if(item.getLocation().indexOf('refcount') >= 0) {		data.skipBind = true;	}
  if(name.indexOf('Q_DECLARE_TYPEINFO') >= 0) {		data.skipBind = true;	}
  if(name.indexOf('QT_EDITION') >= 0) {		data.skipBind = true;	}
  if(name.indexOf('QTypeInfo') >= 0) {		data.skipBind = true;	}
  if(name.indexOf('QUrl') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QFinalState') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('Animation') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QTimer') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('Semaphore') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QAbstractState') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QStateMachine') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QObject') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QDynamicMetaObjectData') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QRegularExpression') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QByteArray') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QDataStream') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QNoImplicitBoolCast') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QMeta') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('qmeta') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QResource') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QSortFilterProxyModel') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QTranslator') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QMimeData') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QProcess') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QThread') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('Q_PID') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('RefCount') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QListData') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QXmlStream') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QStringListModel') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QBitArray') >= 0) { // fails
    data.skipBind = true;
  }
  if(name.indexOf('QNoDebug') >= 0) { // fails
    data.skipBind = true;
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
    default:
      print("#"+item.getQualifiedName()+"\n");
  }
  if(item.isMethod() || item.isConstructor()) {
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
        default:
          print("TYPE: "+params.get(i).getType().getLiteralType()+"\n");
      }
      switch (""+params.get(i).getDefaultValue()) {
        case "SortFlags(Name|IgnoreCase)":
          params.get(i).setDefaultValue("QDir::SortFlags(QDir::Name|QDir::IgnoreCase)");
          break;
      }

    }
  }
}

