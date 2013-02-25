

#include <vu8/Module.hpp>
#include <vu8/Class.hpp>

#include <QObject>
#include <QVector>

#include <QMetaObject>
#include <QMetaMethod>

#include <QJSEngine>

namespace qtjs_binder {

class QtSignalConnector : public QObject {
    QJSEngine *engine;
public:
    QtSignalConnector(QJSEngine *engine) : engine(engine) {}
    bool connectToSignal(QObject *obj, const char *signal, v8::Handle<v8::Function> callback);

protected:
    struct CallInfo {
        QMetaMethod metaMethod;
        v8::Persistent<v8::Function> callback;
        void invoke(QJSEngine *engine, void **);
    };
    QVector<CallInfo> callbacks;
public:
    virtual int qt_metacall(QMetaObject::Call, int, void **);
};

}

