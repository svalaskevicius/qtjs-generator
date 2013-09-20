

#include <QtSignalConnector.h>
#include <QDebug>

#include <QStringList>
#include <QDate>
#include <QTime>
#include <QDateTime>
#include <QBitArray>
#include <QSize>
#include <QSizeF>
#include <QRect>
#include <QRectF>
#include <QLine>
#include <QLineF>
#include <QPoint>
#include <QPointF>
#include <QUrl>
#include <QEasingCurve>


namespace qtjs_binder {

using namespace cpgf;

void convertQtDataToGVariantData(int type, void *data, GVariantData *dest)
{
#define CONV_TYPED_VARIANT_DATA(cl) *dest = createTypedVariant(static_cast<const cl *>(data)).takeData()
    if (type == qMetaTypeId<QVariant>()) {
        *dest = createTypedVariant(((QVariant *)data)).takeData();
    } else {
        switch (type) {
            case QVariant::String:
                CONV_TYPED_VARIANT_DATA(QString);
                break;
            case QVariant::Char:
                CONV_TYPED_VARIANT_DATA(QChar);
                break;
            case QVariant::StringList:
                CONV_TYPED_VARIANT_DATA(QStringList);
                break;
            case QVariant::Map:
                CONV_TYPED_VARIANT_DATA(QVariantMap);
                break;
            case QVariant::Hash:
                CONV_TYPED_VARIANT_DATA(QVariantHash);
                break;
            case QVariant::List:
                CONV_TYPED_VARIANT_DATA(QVariantList);
                break;
            case QVariant::Date:
                CONV_TYPED_VARIANT_DATA(QDate);
                break;
            case QVariant::Time:
                CONV_TYPED_VARIANT_DATA(QTime);
                break;
            case QVariant::DateTime:
                CONV_TYPED_VARIANT_DATA(QDateTime);
                break;
            case QVariant::ByteArray:
                CONV_TYPED_VARIANT_DATA(QByteArray);
                break;
            case QVariant::BitArray:
                CONV_TYPED_VARIANT_DATA(QBitArray);
                break;
            case QVariant::Size:
                CONV_TYPED_VARIANT_DATA(QSize);
                break;
            case QVariant::SizeF:
                CONV_TYPED_VARIANT_DATA(QSizeF);
                break;
            case QVariant::Rect:
                CONV_TYPED_VARIANT_DATA(QRect);
                break;
            case QVariant::LineF:
                CONV_TYPED_VARIANT_DATA(QLineF);
                break;
            case QVariant::Line:
                CONV_TYPED_VARIANT_DATA(QLine);
                break;
            case QVariant::RectF:
                CONV_TYPED_VARIANT_DATA(QRectF);
                break;
            case QVariant::Point:
                CONV_TYPED_VARIANT_DATA(QPoint);
                break;
            case QVariant::PointF:
                CONV_TYPED_VARIANT_DATA(QPointF);
                break;
            case QVariant::Url:
                CONV_TYPED_VARIANT_DATA(QUrl);
                break;
            case QVariant::Locale:
                CONV_TYPED_VARIANT_DATA(QLocale);
                break;
            case QVariant::RegExp:
                CONV_TYPED_VARIANT_DATA(QRegExp);
                break;
            case QVariant::EasingCurve:
                CONV_TYPED_VARIANT_DATA(QEasingCurve);
                break;
            case QVariant::Int:
                CONV_TYPED_VARIANT_DATA(int);
                break;
            case QVariant::UInt:
                CONV_TYPED_VARIANT_DATA(uint);
                break;
            case QVariant::Bool:
                CONV_TYPED_VARIANT_DATA(bool);
                break;
            case QVariant::Double:
                CONV_TYPED_VARIANT_DATA(double);
                break;
            case QMetaType::Float:
                CONV_TYPED_VARIANT_DATA(float);
                break;
            case QMetaType::QObjectStar:
                CONV_TYPED_VARIANT_DATA(QObject * const);
                break;
            case QVariant::LongLong:
                CONV_TYPED_VARIANT_DATA(qlonglong);
                break;
            case QVariant::ULongLong:
                CONV_TYPED_VARIANT_DATA(qulonglong);
                break;
        }
    }
#undef CONV_TYPED_VARIANT_DATA
}

QtSignalConnector::~QtSignalConnector()
{
    for (CallInfo * p : callbacks) {
        delete p;
    }
    callbacks.clear();
}

bool QtSignalConnector::connectToSignal(QObject *obj, const char *signal, IScriptFunction * callback)
{
    QByteArray normalised_signal = QMetaObject::normalizedSignature(signal);
    int signal_idx = obj->metaObject()->indexOfSignal(normalised_signal);
    if (signal_idx < 0) {
        qDebug() << "no signal found: " << normalised_signal;
        return false;
    }
    QMetaObject::connect(
        obj,
        signal_idx,
        this,
        callbacks.count() + QObject::metaObject()->methodCount()
    );
    callback->addReference();
    callbacks.push_back(new CallInfo( {obj->metaObject()->method(signal_idx), callback}));

    return true;
}

int QtSignalConnector::qt_metacall(QMetaObject::Call call, int id, void **data)
{
    id = QObject::qt_metacall(call, id, data);
    if (id == -1 || call != QMetaObject::InvokeMetaMethod) {
        return id;
    }

    Q_ASSERT(id < callbacks.count());

    callbacks[id]->invoke(data);

    return -1;
}

QtSignalConnector::CallInfo::~CallInfo()
{
    if (callback) {
        callback->releaseReference();
    }
}

void QtSignalConnector::CallInfo::invoke(void **data)
{
    int maxCnt = metaMethod.parameterCount();
    cpgf::GVariantData params[REF_MAX_ARITY];
    GVariant result;
    for (int i = 0; i < maxCnt; i++) {
        convertQtDataToGVariantData(metaMethod.parameterType(i), data[i + 1], &params[i]);
    }
    callback->invoke(&result.refData(), params, maxCnt);
    for (int i = 0; i < maxCnt; i++) {
        releaseVariantData(&params[i]);
    }
}

}

