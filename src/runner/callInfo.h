#pragma once

#include "_base.h"

#include "cpgf/gmetadefine.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptbindapi.h"

#include <QObject>
#include <QVector>

#include <QMetaObject>
#include <QMetaMethod>


namespace qtjs_binder {

struct CallInfo {
    QVector<int> parameterTypeIds;
    int returnTypeId;
    cpgf::IScriptFunction * callback;
    void invoke(void **);
    void invokeOnObject(void **);
    ~CallInfo();
};

QVector<int> metaMethodParamTypeIds(QMetaMethod m);


}
