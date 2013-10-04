

#include <dynamic_qobject.h>
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

#include <private/qmetaobjectbuilder_p.h>

#include "llvmapi.h"




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
    if (type == qMetaTypeId<QVariant>()) {
        *dest = cpgf::createTypedVariant(((QVariant *)data)).takeData();
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
};

DynamicMetaObjectBuilder::DynamicMetaObjectBuilder()
{
    _p = new DynamicMetaObjectBuilderPrivate();
}

DynamicMetaObjectBuilder::~DynamicMetaObjectBuilder()
{
    delete _p;
}

void DynamicMetaObjectBuilder::setClassName(QString name)
{
    _p->builder.setClassName(name.toLatin1());
}

void DynamicMetaObjectBuilder::addSignal(QString signature, QStringList argumentNames)
{
    QList<QByteArray> arguments;
    for (auto name : argumentNames) {
        arguments.push_back(name.toLatin1());
    }
    qDebug() << "adding signal "<<signature<<arguments;
    _p->builder.addSignal(signature.toLatin1()).setParameterNames(arguments);
}

void DynamicMetaObjectBuilder::addSlot(QString signature, cpgf::IScriptFunction *callback)
{
    int idx = _p->builder.addSlot(signature.toLatin1()).index();
    assert(_p->callbacks.find(idx) == _p->callbacks.end());

    _p->callbacks[idx] = callback;
}

void DynamicMetaObjectBuilder::addProperty(QString name, QString type)
{
    int idx = _p->builder.addSignal((name+"Changed()").toLatin1()).index();
    _p->builder.addProperty(name.toLatin1(), type.toLatin1(), idx);
}

QMetaObject *DynamicMetaObjectBuilder::toMetaObject(int classId)
{
    _p->builder.setStaticMetacallFunction(
        llvmApi.generateDynamicObjectStaticMetaCall(classId)
    );
    return _p->builder.toMetaObject();
}

std::map<int, cpgf::IScriptFunction *> DynamicMetaObjectBuilder::getCallbacks()
{
    return _p->callbacks;
}


DynamicMetaObjects::DynamicMetaObjects()
{
    lastId = 0;
    allocated = 10;
    metaObjects = (QMetaObject **) malloc(sizeof(QMetaObject *) * allocated);
}

DynamicMetaObjects::~DynamicMetaObjects()
{
    for (unsigned int i = 0; i < lastId; i++) {
        delete metaObjects[i];
    }
    free(metaObjects);
}

unsigned int DynamicMetaObjects::finalizeBuild(DynamicMetaObjectBuilder &builder)
{
    if (lastId >= allocated) {
        allocated *= 2;
        metaObjects = (QMetaObject **) realloc(metaObjects, sizeof(QMetaObject *) * allocated);
    }
    unsigned int currentId = lastId;
    lastId++;

    metaObjects[currentId] = builder.toMetaObject(currentId);
    classesInfo[currentId].clear();
    for (auto it : builder.getCallbacks()) {
        classesInfo[currentId][it.first] =
                new CallInfo({
                                 metaMethodParamTypeIds( metaObjects[currentId]->method(it.first) ),
                                 -1,
                                 it.second
                             });
    }

    return currentId;
}

QMetaObject *DynamicMetaObjects::getMetaObject(unsigned int id) 
{
    if (id >= lastId) {
        return nullptr;
    }
    return metaObjects[id];
}


void DynamicMetaObjects::metacall(size_t classIdx, QObject *obj, QMetaObject::Call _c, int _id, void **_a)
{
    auto metaObject = getMetaObject(classIdx);
    assert(metaObject);
#pragma message "remove debug lines"

    if (_c == QMetaObject::InvokeMetaMethod) {
        qDebug() << "static invoke mete method: "<<_id;
        assert(classesInfo[classIdx].find(_id) != classesInfo[classIdx].end());
        classesInfo[classIdx][_id]->invoke(_a);
    } else if (_c == QMetaObject::IndexOfMethod) {
        throw std::runtime_error("IndexOfMethod support is not implemented for DynamicQObject");
    }
}

DynamicMetaObjects dynamicMetaObjects;







void DynamicQObject::__setClassIdx(int classIdx) 
{
    this->classIdx = classIdx;
}

const QMetaObject * DynamicQObject::metaObject() const
{
    auto ret = dynamicMetaObjects.getMetaObject(classIdx);
    assert(ret);
    return ret;
}

int DynamicQObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0) {
        return _id;
    }
#pragma message "remove debug lines"
    if (_c == QMetaObject::InvokeMetaMethod) {
        dynamicMetaObjects.metacall(classIdx, this, _c, _id, _a);
        return -1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        qDebug() << "register method argument metatype: "<<_id;
        *reinterpret_cast<int*>(_a[0]) = -1;
        return -1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        qDebug() << "read property: "<<_id;
        void *_v = _a[0];
        auto prop = metaObject()->property(_id);
        QVariant data = prop.read(this);
        switch (prop.type()) {
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
            //            case QMetaType::QObjectStar:
            //                *reinterpret_cast< QObject * const*>(_v) = data.();
            //                break;
        case QVariant::LongLong:
            *reinterpret_cast< qlonglong*>(_v) = data.toLongLong();
            break;
        case QVariant::ULongLong:
            *reinterpret_cast< qulonglong*>(_v) = data.toULongLong();
            break;
        }
        return -1;
    } else if (_c == QMetaObject::WriteProperty) {
        qDebug() << "write property: "<<_id;
        void *_v = _a[0];

        auto prop = metaObject()->property(_id);
        switch (prop.type()) {
        case QVariant::String:
            prop.write(this, *reinterpret_cast< QString*>(_v));
            break;
        case QVariant::Char:
            prop.write(this, *reinterpret_cast< QChar*>(_v));
            break;
        case QVariant::StringList:
            prop.write(this, *reinterpret_cast< QStringList*>(_v));
            break;
        case QVariant::Map:
            prop.write(this, *reinterpret_cast< QVariantMap*>(_v));
            break;
        case QVariant::Hash:
            prop.write(this, *reinterpret_cast< QVariantHash*>(_v));
            break;
        case QVariant::List:
            prop.write(this, *reinterpret_cast< QVariantList*>(_v));
            break;
        case QVariant::Date:
            prop.write(this, *reinterpret_cast< QDate*>(_v));
            break;
        case QVariant::Time:
            prop.write(this, *reinterpret_cast< QTime*>(_v));
            break;
        case QVariant::DateTime:
            prop.write(this, *reinterpret_cast< QDateTime*>(_v));
            break;
        case QVariant::ByteArray:
            prop.write(this, *reinterpret_cast< QByteArray*>(_v));
            break;
        case QVariant::BitArray:
            prop.write(this, *reinterpret_cast< QBitArray*>(_v));
            break;
        case QVariant::Size:
            prop.write(this, *reinterpret_cast< QSize*>(_v));
            break;
        case QVariant::SizeF:
            prop.write(this, *reinterpret_cast< QSizeF*>(_v));
            break;
        case QVariant::Rect:
            prop.write(this, *reinterpret_cast< QRect*>(_v));
            break;
        case QVariant::LineF:
            prop.write(this, *reinterpret_cast< QLineF*>(_v));
            break;
        case QVariant::Line:
            prop.write(this, *reinterpret_cast< QLine*>(_v));
            break;
        case QVariant::RectF:
            prop.write(this, *reinterpret_cast< QRectF*>(_v));
            break;
        case QVariant::Point:
            prop.write(this, *reinterpret_cast< QPoint*>(_v));
            break;
        case QVariant::PointF:
            prop.write(this, *reinterpret_cast< QPointF*>(_v));
            break;
        case QVariant::Url:
            prop.write(this, *reinterpret_cast< QUrl*>(_v));
            break;
        case QVariant::Locale:
            prop.write(this, *reinterpret_cast< QLocale*>(_v));
            break;
        case QVariant::RegExp:
            prop.write(this, *reinterpret_cast< QRegExp*>(_v));
            break;
        case QVariant::EasingCurve:
            prop.write(this, *reinterpret_cast< QEasingCurve*>(_v));
            break;
        case QVariant::Int:
            prop.write(this, *reinterpret_cast< int*>(_v));
            break;
        case QVariant::UInt:
            prop.write(this, *reinterpret_cast< uint*>(_v));
            break;
        case QVariant::Bool:
            prop.write(this, *reinterpret_cast< bool*>(_v));
            break;
        case QVariant::Double:
            prop.write(this, *reinterpret_cast< double*>(_v));
            break;
        case QMetaType::Float:
            prop.write(this, *reinterpret_cast< float*>(_v));
            break;
            //            case QMetaType::QObjectStar:
            //                *reinterpret_cast< QObject * const*>(_v) = data.();
            //                break;
        case QVariant::LongLong:
            prop.write(this, *reinterpret_cast< qlonglong*>(_v));
            break;
        case QVariant::ULongLong:
            prop.write(this, *reinterpret_cast< qulonglong*>(_v));
            break;
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
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        return -1;
    }
#endif // QT_NO_PROPERTIES                                                     
    return _id;
}

cpgf::GDefineMetaInfo createMetaClass_DynamicMetaObjectBuilder()
{
    using namespace cpgf;

    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<DynamicMetaObjectBuilder> _nd = GDefineMetaClass<DynamicMetaObjectBuilder>::declare("DynamicMetaObjectBuilder");
        _nd._method("setClassName", &DynamicMetaObjectBuilder::setClassName);
        _nd._method("addSignal", &DynamicMetaObjectBuilder::addSignal);
        _nd._method("addSlot", &DynamicMetaObjectBuilder::addSlot);
        _nd._method("addProperty", &DynamicMetaObjectBuilder::addProperty);

        _d._class(_nd);
    }

    return _d.getMetaInfo();
}

}

