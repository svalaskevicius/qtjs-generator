

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
#include <QLocale>

// for QVariant - cpgf interop ->
#include <qtCore_cpgf_compat.h>
#include <qtGui_cpgf_compat.h>
#include <qtQml_cpgf_compat.h>
#include <qtWidgets_cpgf_compat.h>

#include <QUuid>
#include <QJsonArray>
#include <QJsonDocument>
// <- for QVariant - cpgf interop


#include "dynamicQObject.h"
#include "autoCallback.h"

#include "callInfo.h"

namespace qtjs_binder {


namespace {


void convertQtDataToGVariantData(int type, void *data, cpgf::GVariantData *dest)
{
#define CONV_TYPED_VARIANT_DATA(cl) *dest = cpgf::createTypedVariant(static_cast<const cl *>(data)).takeData()
    if (type == dynamicClass->typeId()) {
        dynamicClass->convertQtDataToGVariantData(data, dest);
    } else {
        switch ((QMetaType::Type)type) {
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
            CONV_TYPED_VARIANT_DATA(QObject *);
            break;
        case QVariant::LongLong:
            CONV_TYPED_VARIANT_DATA(qlonglong);
            break;
        case QVariant::ULongLong:
            CONV_TYPED_VARIANT_DATA(qulonglong);
            break;
        case QMetaType::Long:
            CONV_TYPED_VARIANT_DATA(long);
            break;
        case QMetaType::Short:
            CONV_TYPED_VARIANT_DATA(short);
            break;
        case QMetaType::Char:
            CONV_TYPED_VARIANT_DATA(char);
            break;
        case QMetaType::ULong:
            CONV_TYPED_VARIANT_DATA(ulong);
            break;
        case QMetaType::UShort:
            CONV_TYPED_VARIANT_DATA(ushort);
            break;
        case QMetaType::UChar:
            CONV_TYPED_VARIANT_DATA(uchar);
            break;
        case QMetaType::SChar:
            CONV_TYPED_VARIANT_DATA(signed char);
            break;
        case QMetaType::QUuid:
            CONV_TYPED_VARIANT_DATA(QUuid);
            break;
        case QMetaType::QVariant:
            *dest = cpgf::createTypedVariant(((QVariant *)data)).takeData();
            break;
        case QMetaType::QModelIndex:
            CONV_TYPED_VARIANT_DATA(QModelIndex);
            break;
        case QMetaType::QRegularExpression:
            CONV_TYPED_VARIANT_DATA(QRegularExpression);
            break;
        case QMetaType::QJsonValue:
            CONV_TYPED_VARIANT_DATA(QJsonValue);
            break;
        case QMetaType::QJsonObject:
            CONV_TYPED_VARIANT_DATA(QJsonObject);
            break;
        case QMetaType::QJsonArray:
            CONV_TYPED_VARIANT_DATA(QJsonArray);
            break;
        case QMetaType::QJsonDocument:
            CONV_TYPED_VARIANT_DATA(QJsonDocument);
            break;
        case QMetaType::QFont:
            CONV_TYPED_VARIANT_DATA(QFont);
            break;
        case QMetaType::QPixmap:
            CONV_TYPED_VARIANT_DATA(QPixmap);
            break;
        case QMetaType::QBrush:
            CONV_TYPED_VARIANT_DATA(QBrush);
            break;
        case QMetaType::QColor:
            CONV_TYPED_VARIANT_DATA(QColor);
            break;
        case QMetaType::QPalette:
            CONV_TYPED_VARIANT_DATA(QPalette);
            break;
        case QMetaType::QIcon:
            CONV_TYPED_VARIANT_DATA(QIcon);
            break;
        case QMetaType::QImage:
            CONV_TYPED_VARIANT_DATA(QImage);
            break;
        case QMetaType::QPolygon:
            CONV_TYPED_VARIANT_DATA(QPolygon);
            break;
        case QMetaType::QRegion:
            CONV_TYPED_VARIANT_DATA(QRegion);
            break;
        case QMetaType::QBitmap:
            CONV_TYPED_VARIANT_DATA(QBitmap);
            break;
        case QMetaType::QCursor:
            CONV_TYPED_VARIANT_DATA(QCursor);
            break;
        case QMetaType::QKeySequence:
            CONV_TYPED_VARIANT_DATA(QKeySequence);
            break;
        case QMetaType::QPen:
            CONV_TYPED_VARIANT_DATA(QPen);
            break;
        case QMetaType::QTextLength:
            CONV_TYPED_VARIANT_DATA(QTextLength);
            break;
        case QMetaType::QTextFormat:
            CONV_TYPED_VARIANT_DATA(QTextFormat);
            break;
        case QMetaType::QMatrix:
            CONV_TYPED_VARIANT_DATA(QMatrix);
            break;
        case QMetaType::QTransform:
            CONV_TYPED_VARIANT_DATA(QTransform);
            break;
        case QMetaType::QMatrix4x4:
            CONV_TYPED_VARIANT_DATA(QMatrix4x4);
            break;
        case QMetaType::QVector2D:
            CONV_TYPED_VARIANT_DATA(QVector2D);
            break;
        case QMetaType::QVector3D:
            CONV_TYPED_VARIANT_DATA(QVector3D);
            break;
        case QMetaType::QVector4D:
            CONV_TYPED_VARIANT_DATA(QVector4D);
            break;
        case QMetaType::QQuaternion:
            CONV_TYPED_VARIANT_DATA(QQuaternion);
            break;
        case QMetaType::QPolygonF:
            CONV_TYPED_VARIANT_DATA(QPolygonF);
            break;
        case QMetaType::QSizePolicy:
            CONV_TYPED_VARIANT_DATA(QSizePolicy);
            break;
        case QMetaType::VoidStar:
        case QMetaType::Void:
        case QMetaType::User:
        case QMetaType::UnknownType:
            throw std::runtime_error("Unsupported Qt type is used in DynamicQObject");
            ;
        }
    }
#undef CONV_TYPED_VARIANT_DATA
}

}


CallInfo::~CallInfo()
{
    if (callback) {
        callback->releaseReference();
    }
}



void CallInfo::invoke(void **data)
{
    int maxCnt = parameterTypeIds.size();
    cpgf::GVariantData params[REF_MAX_ARITY];
    cpgf::GVariant result;
    for (int i = 0; i < maxCnt; i++) {
        convertQtDataToGVariantData(parameterTypeIds[i], data[i + 1], &params[i]);
    }
    AutoCallback paramDeleter([&]{
        for (int i = 0; i < maxCnt; i++) {
            releaseVariantData(&params[i]);
        }
    });
    Q_UNUSED(paramDeleter);

    callback->invoke(&result.refData(), params, maxCnt);
    cpgf::metaCheckError(callback);
}

QVector<int> metaMethodParamTypeIds(QMetaMethod m) {
    QVector<int> ret;
    int maxCnt = m.parameterCount();
    for (int i = 0; i < maxCnt; i++) {
        ret.push_back(m.parameterType(i));
    }
    return ret;
}


}
