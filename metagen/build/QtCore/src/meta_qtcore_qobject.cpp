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

#include <QtCore/qobject.h>

#include "meta_qtcore_qobject.h"

using namespace cpgf;

namespace meta_qtcore { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_Global_qobject()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qobject(0, _d);
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QObject()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QObject> _nd = GDefineMetaClass<QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QObject");
        buildMetaClass_QObject(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QObjectWrapper, QObject> _nd = GDefineMetaClass<QObjectWrapper, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QObjectWrapper");
        buildMetaClass_QObjectWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QObjectData()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QObjectData> _nd = GDefineMetaClass<QObjectData>::declare("QObjectData");
        buildMetaClass_QObjectData(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QObjectUserData()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QObjectUserData> _nd = GDefineMetaClass<QObjectUserData>::declare("QObjectUserData");
        buildMetaClass_QObjectUserData(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtcore


