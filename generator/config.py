
def should_skip_class(classname):
    return classname in [
        '::QAbstractAnimation',
        '::QAbstractItemModel',
        '::QAbstractListModel',
        '::QAbstractProxyModel',
        '::QAbstractTableModel',
        '::QAbstractState',
        '::QAbstractTransition',
        '::QObjectData',
        '::QStaticAssertFailure<true>',
        '::QList<T>::iterator',
        '::QList<T>::const_iterator',
        '::QLinkedList<T>::iterator',
        '::QLinkedList<T>::const_iterator',
        '::QMap<Key, T>::iterator',
        '::QMap<Key, T>::const_iterator',
        '::QHash<Key, T>::iterator',
        '::QHash<Key, T>::const_iterator',
        '::QSet<T>::iterator',
        '::QSet<T>::const_iterator',
        '::QFuture<T>::const_iterator',
        '::QtPrivate::QSlotObjectBase',
        '::QtPrivate::RefCount',
        '::QtPrivate::ExceptionHolder',
        '::QtPrivate::ExceptionStore',
        '::QtPrivate::ResultItem',
        '::QtPrivate::ResultIteratorBase',
        '::QtPrivate::ResultStoreBase',
        '::QTypedArrayData<T>::AlignmentDummy',
        '::QProcess::QPrivateSignal',
        '::QVector<T>::AlignmentDummy',
        '::QWinEventNotifier',
        '::QTimer::startTimer',
        '::QTimer::killTimer',
        # TODO
        '::QThreadStorageData',
        "::QTextStream",
        "::QTextStreamManipulator",
        "::QMessageLogContext",
        "::QAnimationGroup",
        #pure virtuals
        "::QIODevice",
        "::QAbstractEventDispatcher",
        "::QAbstractNativeEventFilter",
        "::QAnimationGroup",
        "::QRunnable",
        "::QFutureWatcherBase",
        #privates
        "::QUrlPrivate",
        "::QUrlQueryPrivate",
        "::QSharedDataPointer<QUrlQueryPrivate>",
        #misc
        "::QTextDecoder",
        "::QTextEncoder",
        "::QTextCodec",
        "::QStandardPaths",
        "::QRegularExpressionMatchIterator",
        "::QRegularExpressionMatch",
        "::QPointerBase",
        "::QMimeDatabase",
        "::QLibraryInfo",
        "::QFileDevice",
        "::QDataStream",
        "::QMessageLogger",
        "::QBitRef",
        "::QCharRef",
        "::QByteRef",
        "::QMetaObject::Connection",
        "::QTemporaryFile",
        "::QSettings",
        "::QSocketNotifier",
        "::QFutureInterface<void>",
        "::QItemSelectionModel",


        # widgets
        # abstract classes
        "::QStylePrivate",
        "::QAbstractButton",
        "::QGraphicsItem",
        "::QGraphicsObject",
        "::QAbstractGraphicsShapeItem",
        "::QAbstractItemDelegate",
        "::QAbstractItemView",
        "::QLayoutItem",
        "::QLayout",
        "::QGestureRecognizer",
        "::QGraphicsLayoutItem",
        "::QGraphicsLayout",
        "::QGraphicsEffect",
        "::QGraphicsTransform",
        "::QItemEditorCreatorBase",
        "::QStylePlugin",
        "::QStyle",
        #deleted constructor
        "::QWidgetItem",
        "::QGraphicsSceneResizeEvent",
        "::QGraphicsSceneMoveEvent",
        "::QToolTip",
        "::QWhatsThis",
        # no matching constructor for initialization
        "::QTreeWidgetItemIterator",
        # privates
        "::QAbstractItemModel::QPrivateSignal",
        # private constr/destructor
        "::QAccessibleWidget",
        "::QColormap",
        "::QGraphicsAnchor",
        "::QScroller",
    ]

def should_skip_class_method(classname, method):
    return classname+"::"+method in [
        # private signals
        "::QObject::objectNameChanged",
        "::QProcess::started",
        "::QProcess::stateChanged",
        "::QProcess::readyReadStandardOutput",
        "::QProcess::readyReadStandardError",
        "::QTimeLine::valueChanged",
        "::QTimeLine::frameChanged",
        "::QTimeLine::stateChanged",
        "::QTimeLine::finished",
        "::QThread::started",
        "::QThread::finished",
        "::QTimer::timeout",
        "::QStateMachine::started",
        "::QStateMachine::stopped",
        "::QStateMachine::finished",
        "::QStateMachine::propertiesAssigned",
        "::QState::finished",
        "::QState::propertiesAssigned",
        "::QState::entered",
        "::QState::exited",
        "::QSortFilterProxyModel::sourceModelChanged",
        "::QSocketNotifier::activated",
        "::QSignalTransition::triggered",
        "::QAbstractTransition::triggered",
        "::QIdentityProxyModel::sourceModelChanged",
        "::QHistoryState::entered",
        "::QHistoryState::exited",
        "::QFileSystemWatcher::fileChanged",
        "::QFileSystemWatcher::directoryChanged",
        "::QEventTransition::triggered",
        "::QCoreApplication::aboutToQuit",
        "::QAbstractState::entered",
        "::QAbstractState::exited",
        "::QAbstractProxyModel::sourceModelChanged",
        # private methods (TODO)
        "::QCoreApplication::event",
        "::QSocketNotifier::event",
        "::QSettings::event",
        # func proto (TODO)
        "::QLibrary::resolve",
        "::QEasingCurve::setCustomType",
        "::QEasingCurve::customType",
        # misc
        "::QString::sprintf",
        "::QEvent::operator=",
        "::QDebug::operator<<",
        "::QNoDebug::operator<<",
        "::QBasicMutex::tryLock",
        "::QObject::event",
    ]

def get_class_includes(classname):
    cfg = {
        '::QVariant' : '''
#include<QByteArray>
#include<QBitArray>
#include<QString>
#include<QStringList>
#include<QChar>
#include<QDate>
#include<QTime>
#include<QDateTime>
#include<QList<QVariant>>
#include<QMap<QString, QVariant>>
#include<QHash<QString, QVariant>>
#include<QPoint>
#include<QPointF>
#include<QRect>
#include<QSize>
#include<QSizeF>
#include<QLine>
#include<QLineF>
#include<QRectF>
#include<QLocale>
#include<QRegExp>
#include<QRegularExpression>
#include<QUrl>
#include<QEasingCurve>
#include<QUuid>
#include<QModelIndex>
#include<QJsonValue>
#include<QJsonObject>
#include<QJsonArray>
#include<QJsonDocument>
'''
    }
    if classname in cfg:
        return cfg[classname]
    return ''

