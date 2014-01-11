
#include "dynamic_qobject.h"

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

#include <private/qmetaobjectbuilder_p.h>

#include "llvmapi.h"

// for QVariant - cpgf interop ->
#include <qtCore_cpgf_compat.h>
#include <qtGui_cpgf_compat.h>
#include <qtQml_cpgf_compat.h>
#include <qtWidgets_cpgf_compat.h>

#include <QUuid>
#include <QJsonArray>
#include <QJsonDocument>
// <- for QVariant - cpgf interop


namespace qtjs_binder {


namespace {

QVector<int> metaMethodParamTypeIds(QMetaMethod m) {
    QVector<int> ret;
    int maxCnt = m.parameterCount();
    for (int i = 0; i < maxCnt; i++) {
        ret.push_back(m.parameterType(i));
    }
    return ret;
}


void convertQtDataToGVariantData(int type, void *data, cpgf::GVariantData *dest)
{
#define CONV_TYPED_VARIANT_DATA(cl) *dest = cpgf::createTypedVariant(static_cast<const cl *>(data)).takeData()
    if (type == qMetaTypeId<DynamicQObject>()) {
        *dest = cpgf::createTypedVariant((DynamicQObject *)data).takeData();
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
            *dest = cpgf::createTypedVariant((QObject *)data).takeData();
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



QtSignalConnector::~QtSignalConnector()
{
    for (CallInfo * p : callbacks) {
        delete p;
    }
    callbacks.clear();
}

bool QtSignalConnector::connectToSignal(QObject *obj, const char *signal, cpgf::IScriptFunction * callback)
{
    QByteArray normalised_signal = QMetaObject::normalizedSignature(signal);
    int signal_idx = obj->metaObject()->indexOfSignal(normalised_signal);
    if (signal_idx < 0) {
        return false;
    }
    QMetaObject::connect(
                obj,
                signal_idx,
                this,
                callbacks.count() + QObject::metaObject()->methodCount()
                );
    callback->addReference();
    callbacks.push_back(
                new CallInfo({
                                 metaMethodParamTypeIds( obj->metaObject()->method(signal_idx) ),
                                 -1,
                                 callback
                             })
                );

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
    callback->invoke(&result.refData(), params, maxCnt);
    cpgf::metaCheckError(callback);
    for (int i = 0; i < maxCnt; i++) {
        releaseVariantData(&params[i]);
    }
}

void QtSignalConnectorBinder::connect(QObject *obj, const char * signal, cpgf::IScriptFunction *callback) {
    Q_ASSERT(connector);
    connector->connectToSignal(obj, signal, callback);
}
void QtSignalConnectorBinder::reset(QtSignalConnector *newConnector) {
    if (connector) {
        delete connector;
    }
    connector = newConnector;
}

QtSignalConnector* QtSignalConnectorBinder::connector = nullptr;




struct DynamicMetaObjectBuilderPrivate
{
    QMetaObjectBuilder builder;
    std::map<int, cpgf::IScriptFunction *> callbacks;
    cpgf::IScriptFunction *initCallback;
};

DynamicMetaObjectBuilder::DynamicMetaObjectBuilder()
{
    _p = new DynamicMetaObjectBuilderPrivate();
}

DynamicMetaObjectBuilder::~DynamicMetaObjectBuilder()
{
    delete _p;
}

void DynamicMetaObjectBuilder::setClassName(const char * name)
{
    _p->builder.setClassName(name);
}

void DynamicMetaObjectBuilder::setInit(cpgf::IScriptFunction *callback)
{
    callback->addReference();
    _p->initCallback = callback;
}

void DynamicMetaObjectBuilder::addSignal(const char * signature, QStringList argumentNames)
{
    QList<QByteArray> arguments;
    for (auto name : argumentNames) {
        arguments.push_back(name.toLatin1());
    }
    _p->builder.addSignal(signature).setParameterNames(arguments);
}

void DynamicMetaObjectBuilder::addSlot(const char * signature, cpgf::IScriptFunction *callback)
{
    int idx = _p->builder.addSlot(signature).index();
    assert(_p->callbacks.find(idx) == _p->callbacks.end());

    callback->addReference();
    _p->callbacks[idx] = callback;
}

void DynamicMetaObjectBuilder::addProperty(const char * name, const char * type)
{
    int idx = _p->builder.addSignal((QString(name)+"Changed()").toLatin1()).index();
    _p->builder.addProperty(name, type, idx);
}

QMetaObject *DynamicMetaObjectBuilder::toMetaObject(int classId)
{
    _p->builder.setStaticMetacallFunction(
        llvmApi.generateDynamicObjectStaticMetaCall(classId)
    );
    return _p->builder.toMetaObject();
}

cpgf::IScriptFunction * DynamicMetaObjectBuilder::getInitCallback()
{
    return _p->initCallback;
}

std::map<int, cpgf::IScriptFunction *> DynamicMetaObjectBuilder::getCallbacks()
{
    return _p->callbacks;
}


DynamicMetaObjects::DynamicMetaObjects()
{
    nextId = 0;
    allocated = 10;
    metaObjects = (QMetaObject **) malloc(sizeof(QMetaObject *) * allocated);
}

DynamicMetaObjects::~DynamicMetaObjects()
{
    dispose();
}

void DynamicMetaObjects::dispose()
{
    if (metaObjects) {
        for (unsigned int i = 0; i < nextId; i++) {
            free(metaObjects[i]);
        }
        free(metaObjects);
        metaObjects = nullptr;
    }
    for (auto ci : classesInfo) {
        if (ci.second.initCallback) {
            delete ci.second.initCallback;
        }
        for (auto callback : ci.second.callbacks) {
            delete callback.second;
        }
        ci.second.callbacks.clear();
    }
    classesInfo.clear();
    nextId = 0;
    allocated = 0;
}

unsigned int DynamicMetaObjects::finalizeBuild(DynamicMetaObjectBuilder &builder)
{
    if (nextId >= allocated) {
        allocated *= 2;
        metaObjects = (QMetaObject **) realloc(metaObjects, sizeof(QMetaObject *) * allocated);
    }
    unsigned int currentId = nextId;
    nextId++;

    metaObjects[currentId] = builder.toMetaObject(currentId);

    auto initFnc = builder.getInitCallback();
    if (initFnc) {
        classesInfo[currentId].initCallback =
                new CallInfo({
                                 {qMetaTypeId<DynamicQObject>()},
                                 -1,
                                 initFnc
                             });
    } else {
        classesInfo[currentId].initCallback = nullptr;
    }
    classesInfo[currentId].callbacks.clear();
    for (auto it : builder.getCallbacks()) {
        classesInfo[currentId].callbacks[it.first] =
                new CallInfo({
                                 QVector<int>({qMetaTypeId<DynamicQObject>()}) << metaMethodParamTypeIds( metaObjects[currentId]->method(it.first) ),
                                 -1,
                                 it.second
                             });
    }

    return currentId;
}

QMetaObject *DynamicMetaObjects::getMetaObject(unsigned int id) 
{
    if (id >= nextId) {
        return nullptr;
    }
    return metaObjects[id];
}

DynamicQObject *DynamicMetaObjects::construct(unsigned int id, QObject *parent)
{
    DynamicQObject *ret = new DynamicQObject(parent);
    ret->__setClassIdx(id);
    return ret;
}

void DynamicMetaObjects::callInit(size_t classIdx, DynamicQObject *obj)
{
    if (classesInfo[classIdx].initCallback) {
        void **data = new void*[2];
        data[0] = 0;
        data[1] = obj;
        classesInfo[classIdx].initCallback->invoke(data);
        delete [] data;
    }
}

void DynamicMetaObjects::metacall(size_t classIdx, DynamicQObject *obj, QMetaObject::Call _c, int _id, void **_a)
{
    auto metaObject = getMetaObject(classIdx);
    assert(metaObject);

    if (_c == QMetaObject::InvokeMetaMethod) {
        assert(classesInfo[classIdx].callbacks.find(_id) != classesInfo[classIdx].callbacks.end());
        int paramCnt = classesInfo[classIdx].callbacks[_id]->parameterTypeIds.count();
        void **data = new void*[paramCnt+2];
        data[0] = _a[0];
        data[1] = obj;
        for (int i = 0; i < paramCnt; i++) {
            data[i+2] = _a[i+1];
        }
        classesInfo[classIdx].callbacks[_id]->invoke(data);
        delete [] data;
    } else if (_c == QMetaObject::IndexOfMethod) {
        throw std::runtime_error("IndexOfMethod support is not implemented for DynamicQObject");
    }
}


DynamicMetaObjects &dynamicMetaObjects()
{
    static DynamicMetaObjects _dynamicMetaObjects;
    return _dynamicMetaObjects;
}






void DynamicQObject::__setClassIdx(int classIdx) 
{
    this->classIdx = classIdx;
    dynamicMetaObjects().callInit(classIdx, this);
}

const QMetaObject * DynamicQObject::metaObject() const
{
    auto ret = dynamicMetaObjects().getMetaObject(classIdx);
    assert(ret);
    return ret;
}

int DynamicQObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    int origId = _id;
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0) {
        return _id;
    }

    if (_c == QMetaObject::InvokeMetaMethod) {
        dynamicMetaObjects().metacall(classIdx, this, _c, _id, _a);
        return -1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        *reinterpret_cast<int*>(_a[0]) = -1;
        return -1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        auto prop = metaObject()->property(origId);
        QVariant & data = propertyStorage[_id];
        switch ((QMetaType::Type)prop.type()) {
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
        return -1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];

        auto prop = metaObject()->property(origId);
        switch ((QMetaType::Type)prop.type()) {
        case QVariant::String:
            propertyStorage[_id] = *reinterpret_cast< QString*>(_v);
            break;
        case QVariant::Char:
            propertyStorage[_id] = *reinterpret_cast< QChar*>(_v);
            break;
        case QVariant::StringList:
            propertyStorage[_id] = *reinterpret_cast< QStringList*>(_v);
            break;
        case QVariant::Map:
            propertyStorage[_id] = *reinterpret_cast< QVariantMap*>(_v);
            break;
        case QVariant::Hash:
            propertyStorage[_id] = *reinterpret_cast< QVariantHash*>(_v);
            break;
        case QVariant::List:
            propertyStorage[_id] = *reinterpret_cast< QVariantList*>(_v);
            break;
        case QVariant::Date:
            propertyStorage[_id] = *reinterpret_cast< QDate*>(_v);
            break;
        case QVariant::Time:
            propertyStorage[_id] = *reinterpret_cast< QTime*>(_v);
            break;
        case QVariant::DateTime:
            propertyStorage[_id] = *reinterpret_cast< QDateTime*>(_v);
            break;
        case QVariant::ByteArray:
            propertyStorage[_id] = *reinterpret_cast< QByteArray*>(_v);
            break;
        case QVariant::BitArray:
            propertyStorage[_id] = *reinterpret_cast< QBitArray*>(_v);
            break;
        case QVariant::Size:
            propertyStorage[_id] = *reinterpret_cast< QSize*>(_v);
            break;
        case QVariant::SizeF:
            propertyStorage[_id] = *reinterpret_cast< QSizeF*>(_v);
            break;
        case QVariant::Rect:
            propertyStorage[_id] = *reinterpret_cast< QRect*>(_v);
            break;
        case QVariant::LineF:
            propertyStorage[_id] = *reinterpret_cast< QLineF*>(_v);
            break;
        case QVariant::Line:
            propertyStorage[_id] = *reinterpret_cast< QLine*>(_v);
            break;
        case QVariant::RectF:
            propertyStorage[_id] = *reinterpret_cast< QRectF*>(_v);
            break;
        case QVariant::Point:
            propertyStorage[_id] = *reinterpret_cast< QPoint*>(_v);
            break;
        case QVariant::PointF:
            propertyStorage[_id] = *reinterpret_cast< QPointF*>(_v);
            break;
        case QVariant::Url:
            propertyStorage[_id] = *reinterpret_cast< QUrl*>(_v);
            break;
        case QVariant::Locale:
            propertyStorage[_id] = *reinterpret_cast< QLocale*>(_v);
            break;
        case QVariant::RegExp:
            propertyStorage[_id] = *reinterpret_cast< QRegExp*>(_v);
            break;
        case QVariant::EasingCurve:
            propertyStorage[_id] = *reinterpret_cast< QEasingCurve*>(_v);
            break;
        case QVariant::Int:
            propertyStorage[_id] = *reinterpret_cast< int*>(_v);
            break;
        case QVariant::UInt:
            propertyStorage[_id] = *reinterpret_cast< uint*>(_v);
            break;
        case QVariant::Bool:
            propertyStorage[_id] = *reinterpret_cast< bool*>(_v);
            break;
        case QVariant::Double:
            propertyStorage[_id] = *reinterpret_cast< double*>(_v);
            break;
        case QMetaType::Float:
            propertyStorage[_id] = *reinterpret_cast< float*>(_v);
            break;
        case QVariant::LongLong:
            propertyStorage[_id] = *reinterpret_cast< qlonglong*>(_v);
            break;
        case QVariant::ULongLong:
            propertyStorage[_id] = *reinterpret_cast< qulonglong*>(_v);
            break;
        case QMetaType::Long:
            propertyStorage[_id] = QVariant::fromValue<long>(*reinterpret_cast< long*>(_v));
            break;
        case QMetaType::Short:
            propertyStorage[_id] = *reinterpret_cast< short*>(_v);
            break;
        case QMetaType::Char:
            propertyStorage[_id] = *reinterpret_cast< char*>(_v);
            break;
        case QMetaType::ULong:
            propertyStorage[_id] = QVariant::fromValue<unsigned long>(*reinterpret_cast< ulong*>(_v));
            break;
        case QMetaType::UShort:
            propertyStorage[_id] = *reinterpret_cast< ushort*>(_v);
            break;
        case QMetaType::UChar:
            propertyStorage[_id] = *reinterpret_cast< uchar*>(_v);
            break;
        case QMetaType::SChar:
            propertyStorage[_id] = *reinterpret_cast< signed char*>(_v);
            break;
        case QMetaType::QUuid:
            propertyStorage[_id] = *reinterpret_cast< QUuid*>(_v);
            break;
        case QMetaType::QVariant:
            propertyStorage[_id] = *reinterpret_cast< QVariant*>(_v);
            break;
        case QMetaType::QModelIndex:
            propertyStorage[_id] = *reinterpret_cast< QModelIndex*>(_v);
            break;
        case QMetaType::QRegularExpression:
            propertyStorage[_id] = *reinterpret_cast< QRegularExpression*>(_v);
            break;
        case QMetaType::QJsonValue:
            propertyStorage[_id] = *reinterpret_cast< QJsonValue*>(_v);
            break;
        case QMetaType::QJsonObject:
            propertyStorage[_id] = *reinterpret_cast< QJsonObject*>(_v);
            break;
        case QMetaType::QJsonArray:
            propertyStorage[_id] = *reinterpret_cast< QJsonArray*>(_v);
            break;
        case QMetaType::QJsonDocument:
            propertyStorage[_id] = *reinterpret_cast< QJsonDocument*>(_v);
            break;
        case QMetaType::QObjectStar:
            propertyStorage[_id] = QVariant::fromValue<QObject*>(*reinterpret_cast< QObject**>(_v));
            break;
        case QMetaType::QFont:
            propertyStorage[_id] = *reinterpret_cast< QFont*>(_v);
            break;
        case QMetaType::QPixmap:
            propertyStorage[_id] = *reinterpret_cast< QPixmap*>(_v);
            break;
        case QMetaType::QBrush:
            propertyStorage[_id] = *reinterpret_cast< QBrush*>(_v);
            break;
        case QMetaType::QColor:
            propertyStorage[_id] = *reinterpret_cast< QColor*>(_v);
            break;
        case QMetaType::QPalette:
            propertyStorage[_id] = *reinterpret_cast< QPalette*>(_v);
            break;
        case QMetaType::QIcon:
            propertyStorage[_id] = *reinterpret_cast< QIcon*>(_v);
            break;
        case QMetaType::QImage:
            propertyStorage[_id] = *reinterpret_cast< QImage*>(_v);
            break;
        case QMetaType::QPolygon:
            propertyStorage[_id] = *reinterpret_cast< QPolygon*>(_v);
            break;
        case QMetaType::QRegion:
            propertyStorage[_id] = *reinterpret_cast< QRegion*>(_v);
            break;
        case QMetaType::QBitmap:
            propertyStorage[_id] = *reinterpret_cast< QBitmap*>(_v);
            break;
        case QMetaType::QCursor:
            propertyStorage[_id] = *reinterpret_cast< QCursor*>(_v);
            break;
        case QMetaType::QKeySequence:
            propertyStorage[_id] = *reinterpret_cast< QKeySequence*>(_v);
            break;
        case QMetaType::QPen:
            propertyStorage[_id] = *reinterpret_cast< QPen*>(_v);
            break;
        case QMetaType::QTextLength:
            propertyStorage[_id] = *reinterpret_cast< QTextLength*>(_v);
            break;
        case QMetaType::QTextFormat:
            propertyStorage[_id] = *reinterpret_cast< QTextFormat*>(_v);
            break;
        case QMetaType::QMatrix:
            propertyStorage[_id] = *reinterpret_cast< QMatrix*>(_v);
            break;
        case QMetaType::QTransform:
            propertyStorage[_id] = *reinterpret_cast< QTransform*>(_v);
            break;
        case QMetaType::QMatrix4x4:
            propertyStorage[_id] = *reinterpret_cast< QMatrix4x4*>(_v);
            break;
        case QMetaType::QVector2D:
            propertyStorage[_id] = *reinterpret_cast< QVector2D*>(_v);
            break;
        case QMetaType::QVector3D:
            propertyStorage[_id] = *reinterpret_cast< QVector3D*>(_v);
            break;
        case QMetaType::QVector4D:
            propertyStorage[_id] = *reinterpret_cast< QVector4D*>(_v);
            break;
        case QMetaType::QQuaternion:
            propertyStorage[_id] = *reinterpret_cast< QQuaternion*>(_v);
            break;
        case QMetaType::QPolygonF:
            propertyStorage[_id] = *reinterpret_cast< QPolygonF*>(_v);
            break;
        case QMetaType::QSizePolicy:
            propertyStorage[_id] = *reinterpret_cast< QSizePolicy*>(_v);
            break;
        case QMetaType::VoidStar:
        case QMetaType::Void:
        case QMetaType::User:
        case QMetaType::UnknownType:
            throw std::runtime_error("Unsupported Qt type is used in DynamicQObject");
            ;

        }
        if (prop.hasNotifySignal()) {
            int signal = prop.notifySignalIndex();
            QMetaObject::activate(this, signal, 0);
        }
        return -1;
    } else if (_c == QMetaObject::ResetProperty) {
        return -1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        return -1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        return -1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        return -1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        return -1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        return -1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        *reinterpret_cast<int*>(_a[0]) = -1;
        return -1;
    }
#endif // QT_NO_PROPERTIES                                                     
    return _id;
}

void DynamicQObject::emitSignal(char *signature,
                                  QVariant arg1,
                                  QVariant arg2,
                                  QVariant arg3,
                                  QVariant arg4,
                                  QVariant arg5,
                                  QVariant arg6,
                                  QVariant arg7,
                                  QVariant arg8,
                                  QVariant arg9
                                  )
{
    int idx = metaObject()->indexOfSignal(signature);
    int paramCount = metaObject()->method(idx).parameterCount();
    if (paramCount > 9) {
        throw std::runtime_error("dynamic signals with more than 9 parameters are not supported");
    }
    void **argv = new void*[paramCount+1];
    switch (paramCount) {
        case 9: argv[9] = arg9.data();
        case 8: argv[8] = arg8.data();
        case 7: argv[7] = arg7.data();
        case 6: argv[6] = arg6.data();
        case 5: argv[5] = arg5.data();
        case 4: argv[4] = arg4.data();
        case 3: argv[3] = arg3.data();
        case 2: argv[2] = arg2.data();
        case 1: argv[1] = arg1.data();
        case 0: argv[0] = 0;
        break;
        default: throw std::logic_error("unexpected paramCount");
    }
    QMetaObject::activate(this, idx, argv);
    delete [] argv;
}

}

#include "qtQml_cpgf_compat.h"

namespace qtjs_binder {

cpgf::GDefineMetaInfo createDynamicObjectsMetaClasses()
{
    using namespace cpgf;

    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<DynamicMetaObjectBuilder> _nd = GDefineMetaClass<DynamicMetaObjectBuilder>::declare("DynamicMetaObjectBuilder");
        _nd._method("setClassName", &DynamicMetaObjectBuilder::setClassName);
        _nd._method("setInit", &DynamicMetaObjectBuilder::setInit);
        _nd._method("addSignal", &DynamicMetaObjectBuilder::addSignal);
        _nd._method("addSlot", &DynamicMetaObjectBuilder::addSlot);
        _nd._method("addProperty", &DynamicMetaObjectBuilder::addProperty);

        _d._class(_nd);
    }
    {
        GDefineMetaClass<DynamicMetaObjects> _nd = GDefineMetaClass<DynamicMetaObjects>::declare("DynamicMetaObjects");
        _nd._method("finalizeBuild", &DynamicMetaObjects::finalizeBuild);
        _nd._method("getMetaObject", &DynamicMetaObjects::getMetaObject);
        _nd._method("construct", &DynamicMetaObjects::construct)
            ._default(copyVariantFromCopyable(0));

        _d._class(_nd);
    }
    {
        GDefineMetaClass<DynamicQObject, QObject> _nd = GDefineMetaClass<DynamicQObject, QObject>::declare("DynamicQObject");
        _nd._method("emitSignal", &DynamicQObject::emitSignal)
                ._default(copyVariantFromCopyable(0))
                ._default(copyVariantFromCopyable(0))
                ._default(copyVariantFromCopyable(0))
                ._default(copyVariantFromCopyable(0))
                ._default(copyVariantFromCopyable(0))
                ._default(copyVariantFromCopyable(0))
                ._default(copyVariantFromCopyable(0))
                ._default(copyVariantFromCopyable(0))
                ._default(copyVariantFromCopyable(0))
                ;
        _d._class(_nd);
    }

    return _d.getMetaInfo();
}

}

