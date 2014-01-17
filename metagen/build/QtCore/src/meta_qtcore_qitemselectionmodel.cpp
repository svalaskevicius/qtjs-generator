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

#include <QtCore/qitemselectionmodel.h>

#include "meta_qtcore_qitemselectionmodel.h"

using namespace cpgf;

namespace meta_qtcore { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_Global_qitemselectionmodel()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qitemselectionmodel(0, _d);
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QItemSelection()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QItemSelection, QList< QItemSelectionRange >> _nd = GDefineMetaClass<QItemSelection, QList< QItemSelectionRange >>::declare("QItemSelection");
        buildMetaClass_QItemSelection(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QItemSelectionModel()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QItemSelectionModel, QObject> _nd = GDefineMetaClass<QItemSelectionModel, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QItemSelectionModel");
        buildMetaClass_QItemSelectionModel(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QItemSelectionModelWrapper, QItemSelectionModel> _nd = GDefineMetaClass<QItemSelectionModelWrapper, QItemSelectionModel>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QItemSelectionModelWrapper");
        buildMetaClass_QItemSelectionModelWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QItemSelectionRange()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QItemSelectionRange> _nd = GDefineMetaClass<QItemSelectionRange>::declare("QItemSelectionRange");
        buildMetaClass_QItemSelectionRange(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtcore


