#pragma once

#include <QObject>
#include <QVector>
#include <QMetaObject>
#include <QMetaMethod>
#include <QStringList>

#include "cpgf/scriptbind/gscriptbindutil.h"

namespace qtjs_binder {


struct DynamicMetaObjectBuilderPrivate;

class DynamicMetaObjectBuilder {
public:
    DynamicMetaObjectBuilder();
    ~DynamicMetaObjectBuilder();

    void setClassName(const char * name);
    void setInit(cpgf::IScriptFunction *callback);
    void addSignal(const char * signature, QStringList argumentNames);
    void addSlot(const char * signature, cpgf::IScriptFunction *callback);
    void addProperty(const char * name, const char * type);

    QMetaObject *build(int classId);
    cpgf::IScriptFunction *getInitCallback();
    std::map<int, cpgf::IScriptFunction *> getCallbacks();
    QByteArray methodSignature(int id);
private:
    DynamicMetaObjectBuilderPrivate *_p;
};


}
