// Auto generated file, don't modify.

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

#include <QtCore/qrunnable.h>

#include "meta_qtcore_qrunnable.h"

using namespace cpgf;

namespace meta_qtcore { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QRunnable()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QRunnable> _nd = GDefineMetaClass<QRunnable>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QRunnable");
        buildMetaClass_QRunnable(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QRunnableWrapper, QRunnable> _nd = GDefineMetaClass<QRunnableWrapper, QRunnable>::declare("QRunnableWrapper");
        buildMetaClass_QRunnableWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtcore


