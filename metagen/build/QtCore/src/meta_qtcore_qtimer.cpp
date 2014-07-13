// Auto generated file, don't modify.

#include <qtCore_cpgf_compat.h>
#include <QtCore/qglobal.h>
#include <QtCore/QString>
#include <QtCore/QDataStream>
#include <QtCore/QDateTime>
#include <QtCore/QTranslator>
#include <QtCore/QAbstractEventDispatcher>
#include <QtCore/QRegularExpression>
#include <QtCore/QUrl>
#include <QtCore/QAbstractNativeEventFilter>
#include <QtCore/QItemSelection>
#include <QtCore/QTextCodec>
#include <QtCore/qabstractanimation.h>
#include <QtCore/QDebug>
#include <QtCore/QThread>
#include <QtCore/QEvent>
#include <QtCore/QStringList>
#include <QtCore/QPointF>
#include <QtCore/QBitArray>
#include <QtCore/QAbstractTransition>
#include <QtCore/QSignalTransition>
#include <QtCore/QJsonDocument>
#include <QtCore/QJsonArray>
#include <QtCore/QJsonObject>
#include <QtCore/QJsonValue>
#include <QtCore/QUuid>
#include <QtCore/QEasingCurve>
#include <QtCore/QRectF>
#include <QtCore/QMargins>
#include <QtCore/QLineF>
#include <QtCore/QSizeF>
#include <QtCore/QRect>
#include <QtCore/QLine>
#include <QtCore/QSize>
#include <QtCore/QDir>
#include <QtCore/QMutex>
#include <QtCore/QReadWriteLock>
#include <QtCore/QPauseAnimation>
#include <QtCore/qmetaobject.h>
#include <QtCore/QState>
#include <QtCore/QTimeZone>

#include "QtCore/qtimer.h"

#include "meta_qtcore_qtimer.h"

using namespace cpgf;

namespace qt_metadata { 


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_QTimer()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QTimer, QObject> _nd = GDefineMetaClass<QTimer, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QTimer", &buildMetaClass_QTimer);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QTimerWrapper, QTimer> _nd = GDefineMetaClass<QTimerWrapper, QTimer>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QTimerWrapper", &buildMetaClass_QTimerWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace qt_metadata


