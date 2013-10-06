

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
    } else if (type == qMetaTypeId<DynamicQObject>()) {
        *dest = cpgf::createTypedVariant((DynamicQObject *)data).takeData();
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
            *dest = cpgf::createTypedVariant((QObject *)data).takeData();
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

void DynamicMetaObjectBuilder::setClassName(QString name)
{
    _p->builder.setClassName(name.toLatin1());
}

void DynamicMetaObjectBuilder::setInit(cpgf::IScriptFunction *callback)
{
    callback->addReference();
    _p->initCallback = callback;
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

    callback->addReference();
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
        qDebug()<<"register callback "<<currentId<< " " << it.first;
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
    if (id >= lastId) {
        return nullptr;
    }
    return metaObjects[id];
}

void DynamicMetaObjects::callInit(size_t classIdx, DynamicQObject *obj)
{
    if (classesInfo[classIdx].initCallback) {
        void **data = new void*[2];
        data[0] = 0;
        data[1] = obj;
        classesInfo[classIdx].initCallback->invoke(data);
        delete data;
    }
}

void DynamicMetaObjects::metacall(size_t classIdx, DynamicQObject *obj, QMetaObject::Call _c, int _id, void **_a)
{
    auto metaObject = getMetaObject(classIdx);
    assert(metaObject);
#pragma message "remove debug lines"

    if (_c == QMetaObject::InvokeMetaMethod) {
        qDebug() << "static invoke mete method: "<<_id;
        assert(classesInfo[classIdx].callbacks.find(_id) != classesInfo[classIdx].callbacks.end());
        int paramCnt = classesInfo[classIdx].callbacks[_id]->parameterTypeIds.count();
        void **data = new void*[paramCnt+2];
        data[0] = _a[0];
        data[1] = obj;
        for (int i = 0; i < paramCnt; i++) {
            data[i+2] = _a[i+1];
        }
        classesInfo[classIdx].callbacks[_id]->invoke(data);
        delete data;
    } else if (_c == QMetaObject::IndexOfMethod) {
        throw std::runtime_error("IndexOfMethod support is not implemented for DynamicQObject");
    }
}

DynamicMetaObjects dynamicMetaObjects;







void DynamicQObject::__setClassIdx(int classIdx) 
{
    this->classIdx = classIdx;
    qDebug() << "calling init with; "<<(void*)this;
    dynamicMetaObjects.callInit(classIdx, this);
}

const QMetaObject * DynamicQObject::metaObject() const
{
    auto ret = dynamicMetaObjects.getMetaObject(classIdx);
    assert(ret);
    return ret;
}

int DynamicQObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    int origId = _id;
    qDebug() << "orig id: "<<_id;
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
        qDebug() << "read property: "<<origId;
        void *_v = _a[0];
        auto prop = metaObject()->property(origId);
        QVariant data = propertyStorage[_id];
#pragma message "TODO: try out the void * functionality of QVariant instead of the switch"
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
        case QVariant::LongLong:
            *reinterpret_cast< qlonglong*>(_v) = data.toLongLong();
            break;
        case QVariant::ULongLong:
            *reinterpret_cast< qulonglong*>(_v) = data.toULongLong();
            break;
        }
        return -1;
    } else if (_c == QMetaObject::WriteProperty) {
        qDebug() << "write property: "<<origId;
        void *_v = _a[0];

        auto prop = metaObject()->property(origId);
        qDebug() << "prop type: "<<prop.type()<<" name: "<<prop.name();
        switch (prop.type()) {
        case QVariant::String:
            qDebug()<<"writing a string: "<<*reinterpret_cast< QString*>(_v);
            propertyStorage[_id] = *reinterpret_cast< QString*>(_v);
            break;
        case QVariant::Char:
            propertyStorage[_id] = *reinterpret_cast< QChar*>(_v);
            break;
        case QVariant::StringList:
            qDebug()<<"writing a string list: "<<reinterpret_cast< QVariant*>(_v)->toStringList();
            qDebug()<<"writing a string list: "<<*reinterpret_cast< QStringList*>(_v);
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
        }
        if (prop.hasNotifySignal()) {
            int signal = prop.notifySignalIndex();
            qDebug() << "emitting notify signal: "<< signal;
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
    qDebug() << "emit signal: "<<idx<<" "<<arg1.toBool();
    QMetaObject::activate(this, idx, argv);
    delete argv;
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

