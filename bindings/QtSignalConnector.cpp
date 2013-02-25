

#include "QtSignalConnector.h"
#include <QDebug>
#include <private/v8.h>

QT_BEGIN_NAMESPACE
extern Q_QML_EXPORT v8::Local<v8::Context> qt_QJSEngineV8Context(QJSEngine *);
extern Q_QML_EXPORT v8::Local<v8::Value> qt_QJSValueV8Value(const QJSValue &);
QT_END_NAMESPACE

namespace qtjs_binder {

bool QtSignalConnector::connectToSignal(QObject *obj, const char *signal, v8::Handle<v8::Function> callback) {
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
    callbacks.push_back({obj->metaObject()->method(signal_idx), v8::Persistent<v8::Function>::New(callback)});
    return true;
}

int QtSignalConnector::qt_metacall(QMetaObject::Call call, int id, void **data) {
    qDebug() << "qt_metacall: " << id;

    id = QObject::qt_metacall(call, id, data);
    if (id == -1 || call != QMetaObject::InvokeMetaMethod) {
        return id;
    }
    
    Q_ASSERT(id < callbacks.count());

    callbacks[id].invoke(engine, data);

    return -1;
}

void QtSignalConnector::CallInfo::invoke(QJSEngine *engine, void **data) {
    v8::HandleScope handleScope;
    v8::Local<v8::Context> context = qt_QJSEngineV8Context(engine);
    v8::Context::Scope contextScope(context);

    QJSValue globalQJS = engine->globalObject();
    v8::Local<v8::Value> globalV8Value = qt_QJSValueV8Value(globalQJS);
    v8::Local<v8::Object> globalV8 = globalV8Value.As<v8::Object>();

    int maxCnt = metaMethod.parameterCount();
    v8::Handle<v8::Value> *args = new v8::Handle<v8::Value>[maxCnt];
    for (int i=0;i<maxCnt;i++) {
        int type = metaMethod.parameterType(i);
        if (type == qMetaTypeId<QVariant>()) {
            args[i] = qt_QJSValueV8Value(engine->toScriptValue(*((QVariant *)data[i + 1])));
        } else {
            args[i] = qt_QJSValueV8Value(engine->toScriptValue(QVariant(type, data[i + 1])));
        }
    }
    callback->Call(globalV8, maxCnt, args);
    delete [] args;
}


}

