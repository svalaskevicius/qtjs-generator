#include "signalConnector.h"
#include "callInfo.h"
#include "QMetaMethod"

namespace qtjs_binder {

SignalConnector::~SignalConnector()
{
    for (CallInfo * p : callbacks) {
        delete p;
    }
    callbacks.clear();
}

bool SignalConnector::connectToSignal(QObject *obj, const char *signal, cpgf::IScriptFunction * callback)
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

int SignalConnector::qt_metacall(QMetaObject::Call call, int id, void **data)
{
    id = QObject::qt_metacall(call, id, data);
    if (id == -1 || call != QMetaObject::InvokeMetaMethod) {
        return id;
    }

    Q_ASSERT(id < callbacks.count());

    callbacks[id]->invoke(data);

    return -1;
}

void SignalConnectorBinder::connect(QObject *obj, const char * signal, cpgf::IScriptFunction *callback) {
    Q_ASSERT(connector);
    connector->connectToSignal(obj, signal, callback);
}
void SignalConnectorBinder::reset(SignalConnector *newConnector) {
    if (connector) {
        delete connector;
    }
    connector = newConnector;
}

SignalConnector* SignalConnectorBinder::connector = nullptr;

}

