

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

namespace qtjs_binder {

DynamicClassSpecification* dynamicClass = new DynamicClassSpecificationImpl<QObject>();

void metaCallReadPropertyFromVariant(void *_v, QMetaType::Type type, const QVariant & data)
{
    switch (type) {
    case QVariant::String:
        *reinterpret_cast< QString*>(_v) = data.toString();
        break;
    case QVariant::Char:
        *reinterpret_cast< QChar*>(_v) = data.toChar();
        break;
    case QVariant::StringList:
        *reinterpret_cast< QStringList*>(_v) = data.toStringList();
        break;
    case QVariant::Map:
        *reinterpret_cast< QVariantMap*>(_v) = data.toMap();
        break;
    case QVariant::Hash:
        *reinterpret_cast< QVariantHash*>(_v) = data.toHash();
        break;
    case QVariant::List:
        *reinterpret_cast< QVariantList*>(_v) = data.toList();
        break;
    case QVariant::Date:
        *reinterpret_cast< QDate*>(_v) = data.toDate();
        break;
    case QVariant::Time:
        *reinterpret_cast< QTime*>(_v) = data.toTime();
        break;
    case QVariant::DateTime:
        *reinterpret_cast< QDateTime*>(_v) = data.toDateTime();
        break;
    case QVariant::ByteArray:
        *reinterpret_cast< QByteArray*>(_v) = data.toByteArray();
        break;
    case QVariant::BitArray:
        *reinterpret_cast< QBitArray*>(_v) = data.toBitArray();
        break;
    case QVariant::Size:
        *reinterpret_cast< QSize*>(_v) = data.toSize();
        break;
    case QVariant::SizeF:
        *reinterpret_cast< QSizeF*>(_v) = data.toSizeF();
        break;
    case QVariant::Rect:
        *reinterpret_cast< QRect*>(_v) = data.toRect();
        break;
    case QVariant::LineF:
        *reinterpret_cast< QLineF*>(_v) = data.toLineF();
        break;
    case QVariant::Line:
        *reinterpret_cast< QLine*>(_v) = data.toLine();
        break;
    case QVariant::RectF:
        *reinterpret_cast< QRectF*>(_v) = data.toRectF();
        break;
    case QVariant::Point:
        *reinterpret_cast< QPoint*>(_v) = data.toPoint();
        break;
    case QVariant::PointF:
        *reinterpret_cast< QPointF*>(_v) = data.toPointF();
        break;
    case QVariant::Url:
        *reinterpret_cast< QUrl*>(_v) = data.toUrl();
        break;
    case QVariant::Locale:
        *reinterpret_cast< QLocale*>(_v) = data.toLocale();
        break;
    case QVariant::RegExp:
        *reinterpret_cast< QRegExp*>(_v) = data.toRegExp();
        break;
    case QVariant::EasingCurve:
        *reinterpret_cast< QEasingCurve*>(_v) = data.toEasingCurve();
        break;
    case QVariant::Int:
        *reinterpret_cast< int*>(_v) = data.toInt();
        break;
    case QVariant::UInt:
        *reinterpret_cast< uint*>(_v) = data.toUInt();
        break;
    case QVariant::Bool:
        *reinterpret_cast< bool*>(_v) = data.toBool();
        break;
    case QVariant::Double:
        *reinterpret_cast< double*>(_v) = data.toDouble();
        break;
    case QMetaType::Float:
        *reinterpret_cast< float*>(_v) = data.toFloat();
        break;
    case QVariant::LongLong:
        *reinterpret_cast< qlonglong*>(_v) = data.toLongLong();
        break;
    case QVariant::ULongLong:
        *reinterpret_cast< qulonglong*>(_v) = data.toULongLong();
        break;
    case QMetaType::Long:
        *reinterpret_cast< long*>(_v) = data.value<long>();
        break;
    case QMetaType::Short:
        *reinterpret_cast< short*>(_v) = data.value<short>();
        break;
    case QMetaType::Char:
        *reinterpret_cast< char*>(_v) = data.value<char>();
        break;
    case QMetaType::ULong:
        *reinterpret_cast< ulong*>(_v) = data.value<ulong>();
        break;
    case QMetaType::UShort:
        *reinterpret_cast< ushort*>(_v) = data.value<ushort>();
        break;
    case QMetaType::UChar:
        *reinterpret_cast< uchar*>(_v) = data.value<uchar>();
        break;
    case QMetaType::SChar:
        *reinterpret_cast< signed char*>(_v) = data.value<signed char>();
        break;
    case QMetaType::VoidStar:
        *reinterpret_cast< void**>(_v) = data.value<void *>();
        break;
    case QMetaType::QUuid:
        *reinterpret_cast< QUuid*>(_v) = data.value<QUuid>();
        break;
    case QMetaType::QVariant:
        *reinterpret_cast< QVariant*>(_v) = data.value<QVariant>();
        break;
    case QMetaType::QModelIndex:
        *reinterpret_cast< QModelIndex*>(_v) = data.value<QModelIndex>();
        break;
    case QMetaType::QRegularExpression:
        *reinterpret_cast< QRegularExpression*>(_v) = data.value<QRegularExpression>();
        break;
    case QMetaType::QJsonValue:
        *reinterpret_cast< QJsonValue*>(_v) = data.value<QJsonValue>();
        break;
    case QMetaType::QJsonObject:
        *reinterpret_cast< QJsonObject*>(_v) = data.value<QJsonObject>();
        break;
    case QMetaType::QJsonArray:
        *reinterpret_cast< QJsonArray*>(_v) = data.value<QJsonArray>();
        break;
    case QMetaType::QJsonDocument:
        *reinterpret_cast< QJsonDocument*>(_v) = data.value<QJsonDocument>();
        break;
    case QMetaType::QObjectStar:
        *reinterpret_cast< QObject**>(_v) = data.value<QObject*>();
        break;
    case QMetaType::QFont:
        *reinterpret_cast< QFont*>(_v) = data.value<QFont>();
        break;
    case QMetaType::QPixmap:
        *reinterpret_cast< QPixmap*>(_v) = data.value<QPixmap>();
        break;
    case QMetaType::QBrush:
        *reinterpret_cast< QBrush*>(_v) = data.value<QBrush>();
        break;
    case QMetaType::QColor:
        *reinterpret_cast< QColor*>(_v) = data.value<QColor>();
        break;
    case QMetaType::QPalette:
        *reinterpret_cast< QPalette*>(_v) = data.value<QPalette>();
        break;
    case QMetaType::QIcon:
        *reinterpret_cast< QIcon*>(_v) = data.value<QIcon>();
        break;
    case QMetaType::QImage:
        *reinterpret_cast< QImage*>(_v) = data.value<QImage>();
        break;
    case QMetaType::QPolygon:
        *reinterpret_cast< QPolygon*>(_v) = data.value<QPolygon>();
        break;
    case QMetaType::QRegion:
        *reinterpret_cast< QRegion*>(_v) = data.value<QRegion>();
        break;
    case QMetaType::QBitmap:
        *reinterpret_cast< QBitmap*>(_v) = data.value<QBitmap>();
        break;
    case QMetaType::QCursor:
        *reinterpret_cast< QCursor*>(_v) = data.value<QCursor>();
        break;
    case QMetaType::QKeySequence:
        *reinterpret_cast< QKeySequence*>(_v) = data.value<QKeySequence>();
        break;
    case QMetaType::QPen:
        *reinterpret_cast< QPen*>(_v) = data.value<QPen>();
        break;
    case QMetaType::QTextLength:
        *reinterpret_cast< QTextLength*>(_v) = data.value<QTextLength>();
        break;
    case QMetaType::QTextFormat:
        *reinterpret_cast< QTextFormat*>(_v) = data.value<QTextFormat>();
        break;
    case QMetaType::QMatrix:
        *reinterpret_cast< QMatrix*>(_v) = data.value<QMatrix>();
        break;
    case QMetaType::QTransform:
        *reinterpret_cast< QTransform*>(_v) = data.value<QTransform>();
        break;
    case QMetaType::QMatrix4x4:
        *reinterpret_cast< QMatrix4x4*>(_v) = data.value<QMatrix4x4>();
        break;
    case QMetaType::QVector2D:
        *reinterpret_cast< QVector2D*>(_v) = data.value<QVector2D>();
        break;
    case QMetaType::QVector3D:
        *reinterpret_cast< QVector3D*>(_v) = data.value<QVector3D>();
        break;
    case QMetaType::QVector4D:
        *reinterpret_cast< QVector4D*>(_v) = data.value<QVector4D>();
        break;
    case QMetaType::QQuaternion:
        *reinterpret_cast< QQuaternion*>(_v) = data.value<QQuaternion>();
        break;
    case QMetaType::QPolygonF:
        *reinterpret_cast< QPolygonF*>(_v) = data.value<QPolygonF>();
        break;
    case QMetaType::QSizePolicy:
        *reinterpret_cast< QSizePolicy*>(_v) = data.value<QSizePolicy>();
        break;
    case QMetaType::Void:
    case QMetaType::User:
    case QMetaType::UnknownType:
        throw std::runtime_error("Unsupported Qt type is used in DynamicQObject");
        ;

    }
}

void metaCallWritePropertyToVariant(void *_v, QMetaType::Type type, QVariant & data)
{
    switch (type) {
    case QVariant::String:
        data = *reinterpret_cast< QString*>(_v);
        break;
    case QVariant::Char:
        data = *reinterpret_cast< QChar*>(_v);
        break;
    case QVariant::StringList:
        data = *reinterpret_cast< QStringList*>(_v);
        break;
    case QVariant::Map:
        data = *reinterpret_cast< QVariantMap*>(_v);
        break;
    case QVariant::Hash:
        data = *reinterpret_cast< QVariantHash*>(_v);
        break;
    case QVariant::List:
        data = *reinterpret_cast< QVariantList*>(_v);
        break;
    case QVariant::Date:
        data = *reinterpret_cast< QDate*>(_v);
        break;
    case QVariant::Time:
        data = *reinterpret_cast< QTime*>(_v);
        break;
    case QVariant::DateTime:
        data = *reinterpret_cast< QDateTime*>(_v);
        break;
    case QVariant::ByteArray:
        data = *reinterpret_cast< QByteArray*>(_v);
        break;
    case QVariant::BitArray:
        data = *reinterpret_cast< QBitArray*>(_v);
        break;
    case QVariant::Size:
        data = *reinterpret_cast< QSize*>(_v);
        break;
    case QVariant::SizeF:
        data = *reinterpret_cast< QSizeF*>(_v);
        break;
    case QVariant::Rect:
        data = *reinterpret_cast< QRect*>(_v);
        break;
    case QVariant::LineF:
        data = *reinterpret_cast< QLineF*>(_v);
        break;
    case QVariant::Line:
        data = *reinterpret_cast< QLine*>(_v);
        break;
    case QVariant::RectF:
        data = *reinterpret_cast< QRectF*>(_v);
        break;
    case QVariant::Point:
        data = *reinterpret_cast< QPoint*>(_v);
        break;
    case QVariant::PointF:
        data = *reinterpret_cast< QPointF*>(_v);
        break;
    case QVariant::Url:
        data = *reinterpret_cast< QUrl*>(_v);
        break;
    case QVariant::Locale:
        data = *reinterpret_cast< QLocale*>(_v);
        break;
    case QVariant::RegExp:
        data = *reinterpret_cast< QRegExp*>(_v);
        break;
    case QVariant::EasingCurve:
        data = *reinterpret_cast< QEasingCurve*>(_v);
        break;
    case QVariant::Int:
        data = *reinterpret_cast< int*>(_v);
        break;
    case QVariant::UInt:
        data = *reinterpret_cast< uint*>(_v);
        break;
    case QVariant::Bool:
        data = *reinterpret_cast< bool*>(_v);
        break;
    case QVariant::Double:
        data = *reinterpret_cast< double*>(_v);
        break;
    case QMetaType::Float:
        data = *reinterpret_cast< float*>(_v);
        break;
    case QVariant::LongLong:
        data = *reinterpret_cast< qlonglong*>(_v);
        break;
    case QVariant::ULongLong:
        data = *reinterpret_cast< qulonglong*>(_v);
        break;
    case QMetaType::Long:
        data = QVariant::fromValue<long>(*reinterpret_cast< long*>(_v));
        break;
    case QMetaType::Short:
        data = *reinterpret_cast< short*>(_v);
        break;
    case QMetaType::Char:
        data = *reinterpret_cast< char*>(_v);
        break;
    case QMetaType::ULong:
        data = QVariant::fromValue<unsigned long>(*reinterpret_cast< ulong*>(_v));
        break;
    case QMetaType::UShort:
        data = *reinterpret_cast< ushort*>(_v);
        break;
    case QMetaType::UChar:
        data = *reinterpret_cast< uchar*>(_v);
        break;
    case QMetaType::SChar:
        data = *reinterpret_cast< signed char*>(_v);
        break;
    case QMetaType::QUuid:
        data = *reinterpret_cast< QUuid*>(_v);
        break;
    case QMetaType::QVariant:
        data = *reinterpret_cast< QVariant*>(_v);
        break;
    case QMetaType::QModelIndex:
        data = *reinterpret_cast< QModelIndex*>(_v);
        break;
    case QMetaType::QRegularExpression:
        data = *reinterpret_cast< QRegularExpression*>(_v);
        break;
    case QMetaType::QJsonValue:
        data = *reinterpret_cast< QJsonValue*>(_v);
        break;
    case QMetaType::QJsonObject:
        data = *reinterpret_cast< QJsonObject*>(_v);
        break;
    case QMetaType::QJsonArray:
        data = *reinterpret_cast< QJsonArray*>(_v);
        break;
    case QMetaType::QJsonDocument:
        data = *reinterpret_cast< QJsonDocument*>(_v);
        break;
    case QMetaType::QObjectStar:
        data = QVariant::fromValue<QObject*>(*reinterpret_cast< QObject**>(_v));
        break;
    case QMetaType::QFont:
        data = *reinterpret_cast< QFont*>(_v);
        break;
    case QMetaType::QPixmap:
        data = *reinterpret_cast< QPixmap*>(_v);
        break;
    case QMetaType::QBrush:
        data = *reinterpret_cast< QBrush*>(_v);
        break;
    case QMetaType::QColor:
        data = *reinterpret_cast< QColor*>(_v);
        break;
    case QMetaType::QPalette:
        data = *reinterpret_cast< QPalette*>(_v);
        break;
    case QMetaType::QIcon:
        data = *reinterpret_cast< QIcon*>(_v);
        break;
    case QMetaType::QImage:
        data = *reinterpret_cast< QImage*>(_v);
        break;
    case QMetaType::QPolygon:
        data = *reinterpret_cast< QPolygon*>(_v);
        break;
    case QMetaType::QRegion:
        data = *reinterpret_cast< QRegion*>(_v);
        break;
    case QMetaType::QBitmap:
        data = *reinterpret_cast< QBitmap*>(_v);
        break;
    case QMetaType::QCursor:
        data = *reinterpret_cast< QCursor*>(_v);
        break;
    case QMetaType::QKeySequence:
        data = *reinterpret_cast< QKeySequence*>(_v);
        break;
    case QMetaType::QPen:
        data = *reinterpret_cast< QPen*>(_v);
        break;
    case QMetaType::QTextLength:
        data = *reinterpret_cast< QTextLength*>(_v);
        break;
    case QMetaType::QTextFormat:
        data = *reinterpret_cast< QTextFormat*>(_v);
        break;
    case QMetaType::QMatrix:
        data = *reinterpret_cast< QMatrix*>(_v);
        break;
    case QMetaType::QTransform:
        data = *reinterpret_cast< QTransform*>(_v);
        break;
    case QMetaType::QMatrix4x4:
        data = *reinterpret_cast< QMatrix4x4*>(_v);
        break;
    case QMetaType::QVector2D:
        data = *reinterpret_cast< QVector2D*>(_v);
        break;
    case QMetaType::QVector3D:
        data = *reinterpret_cast< QVector3D*>(_v);
        break;
    case QMetaType::QVector4D:
        data = *reinterpret_cast< QVector4D*>(_v);
        break;
    case QMetaType::QQuaternion:
        data = *reinterpret_cast< QQuaternion*>(_v);
        break;
    case QMetaType::QPolygonF:
        data = *reinterpret_cast< QPolygonF*>(_v);
        break;
    case QMetaType::QSizePolicy:
        data = *reinterpret_cast< QSizePolicy*>(_v);
        break;
    case QMetaType::VoidStar:
    case QMetaType::Void:
    case QMetaType::User:
    case QMetaType::UnknownType:
        throw std::runtime_error("Unsupported Qt type is used in DynamicQObject");
        ;

    }
}

}
