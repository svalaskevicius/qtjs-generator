#pragma once

#include <QObject>
#include "dynamicQObjects.h"

namespace qtjs_binder {

class DynamicQObject {
public:
    virtual void __setClassIdx(int classIdx) = 0;
};

void metaCallReadPropertyFromVariant(void *_v, QMetaType::Type type, const QVariant & data);
void metaCallWritePropertyToVariant(void *_v, QMetaType::Type type, QVariant & data);

template <typename ParentClass>
class DynamicQObjectImpl : public ParentClass, public DynamicQObject
{
private:
    int classIdx;
    std::map<int, QVariant> propertyStorage;
public:
    void __setClassIdx(int classIdx) override
    {
        this->classIdx = classIdx;
        dynamicQObjects().callInit(classIdx, this);
    }

    DynamicQObjectImpl(QObject *parent = nullptr)
        : ParentClass(parent), classIdx(-1)
    {
    }

    DynamicQObjectImpl(const DynamicQObjectImpl &other)
        : QObject()
    {
        classIdx = other.classIdx;
        propertyStorage = other.propertyStorage;
    }

    DynamicQObjectImpl & operator=(const DynamicQObjectImpl &other)
    {
        classIdx = other.classIdx;
        propertyStorage = other.propertyStorage;
        return *this;
    }

    const QMetaObject *metaObject() const
    {
        auto ret = dynamicQObjects().getMetaObject(classIdx);
        assert(ret);
        return ret;
    }

    virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a)
    {
        int origId = _id;
        _id = ParentClass::qt_metacall(_c, _id, _a);
        if (_id < 0) {
            return _id;
        }

        if (_c == QMetaObject::InvokeMetaMethod) {
            dynamicQObjects().metacall(classIdx, this, _c, _id, _a);
            return -1;
        } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
            *reinterpret_cast<int*>(_a[0]) = -1;
            return -1;
        }
#ifndef QT_NO_PROPERTIES
        else if (_c == QMetaObject::ReadProperty) {
            auto prop = metaObject()->property(origId);
            QVariant & data = propertyStorage[_id];
            metaCallReadPropertyFromVariant(_a[0], (QMetaType::Type)prop.type(), data);
            return -1;
        } else if (_c == QMetaObject::WriteProperty) {
            auto prop = metaObject()->property(origId);
            metaCallWritePropertyToVariant(_a[0], (QMetaType::Type)prop.type(), propertyStorage[_id]);

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
};


}

Q_DECLARE_METATYPE(qtjs_binder::DynamicQObjectImpl<QObject>)
