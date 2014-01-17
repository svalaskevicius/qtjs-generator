#pragma once

#include "_base.h"

#include "cpgf/scriptbind/gscriptbindutil.h"

#include <QObject>
#include <QVector>

namespace qtjs_binder {

struct CallInfo;

class DLL_PUBLIC SignalConnector : public QObject {
public:
    ~SignalConnector();
    bool connectToSignal(QObject *obj, const char *signal, cpgf::IScriptFunction * callback);
    virtual int qt_metacall(QMetaObject::Call, int, void **);
protected:
    QVector<CallInfo *> callbacks;
};

struct DLL_PUBLIC SignalConnectorBinder {
    static void connect(QObject *obj, const char * signal, cpgf::IScriptFunction *callback);
    static void reset(SignalConnector *newConnector = nullptr);
private:
    static SignalConnector *connector;
};

}
