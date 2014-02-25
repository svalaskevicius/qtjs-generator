#pragma once

#include <QObject>

namespace qtjs_binder {

class DynamicQObject : public QObject
{
private:
    int classIdx;
    std::map<int, QVariant> propertyStorage;
public:
    void __setClassIdx(int classIdx);

    DynamicQObject(QObject *parent = nullptr)
        : QObject(parent), classIdx(-1)
    {
    }

    DynamicQObject(const DynamicQObject &other)
        : QObject()
    {
        classIdx = other.classIdx;
        propertyStorage = other.propertyStorage;
    }

    DynamicQObject & operator=(const DynamicQObject &other)
    {
        classIdx = other.classIdx;
        propertyStorage = other.propertyStorage;
        return *this;
    }

    const QMetaObject *metaObject() const;

    virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a);
};

}

Q_DECLARE_METATYPE(qtjs_binder::DynamicQObject)
