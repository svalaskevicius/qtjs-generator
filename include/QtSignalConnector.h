
#include "_base.h"

#include "cpgf/gmetadefine.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptbindapi.h"

#include <QObject>
#include <QVector>

#include <QMetaObject>
#include <QMetaMethod>

namespace qtjs_binder {

class DLL_PUBLIC QtSignalConnector : public QObject {
public:
    ~QtSignalConnector();
    bool connectToSignal(QObject *obj, const char *signal, cpgf::IScriptFunction * callback);

protected:
    struct CallInfo {
        QMetaMethod metaMethod;
        cpgf::IScriptFunction * callback;
        void invoke(void **);
        ~CallInfo();
    };
    QVector<CallInfo *> callbacks;
public:
    virtual int qt_metacall(QMetaObject::Call, int, void **);
};

struct DLL_PUBLIC QtSignalConnectorBinder {
    static void connect(QObject *obj, const char * signal, cpgf::IScriptFunction *callback ) {
        Q_ASSERT(connector);
        connector->connectToSignal(obj, signal, callback);
    }
    static void reset(QtSignalConnector *newConnector = nullptr) {
        if (connector) { 
            delete connector;
        }
        connector = newConnector;
    }
private:
    static QtSignalConnector *connector;
};

QtSignalConnector* QtSignalConnectorBinder::connector = nullptr;

}

