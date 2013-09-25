
#include <QApplication>
#include <QStringList>

#include "cpgf/gmetadefine.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/gscopedinterface.h"
#include "cpgf/scriptbind/gv8runner.h"
#include "cpgf/scriptbind/gv8bind.h"

#include <iostream>
#include <string.h>
#include "v8.h"

#include "register_meta_qtcore.h"
#include "register_meta_qtgui.h"
#include "register_meta_qtwidgets.h"
#include "register_meta_qtqml.h"

#include <QtCore/QObject>
#include <QtCore/QSharedPointer>

#include "QtSignalConnector.h"


#include <QQmlComponent>


#include <QFile>
#include <QProcess>
#include <QDebug>
#include <private/qmetaobjectbuilder_p.h>

using namespace cpgf;
using namespace std;

namespace {

QStringList __programArguments;
int __exitCode = 1;

QStringList programArguments() 
{
    return __programArguments;
}

void setExitCode(int code)
{
    __exitCode = code;
}





/*

struct qt_meta_stringdata_KeyGenerator_t {
    QByteArrayData data[13];
    char stringdata[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_KeyGenerator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_KeyGenerator_t qt_meta_stringdata_KeyGenerator = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 11),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 12),
QT_MOC_LITERAL(4, 39, 15),
QT_MOC_LITERAL(5, 55, 17),
QT_MOC_LITERAL(6, 73, 12),
QT_MOC_LITERAL(7, 86, 7),
QT_MOC_LITERAL(8, 94, 11),
QT_MOC_LITERAL(9, 106, 4),
QT_MOC_LITERAL(10, 111, 5),
QT_MOC_LITERAL(11, 117, 8),
QT_MOC_LITERAL(12, 126, 10)
    },
    "KeyGenerator\0typeChanged\0\0typesChanged\0"
    "filenameChanged\0passphraseChanged\0"
    "keyGenerated\0success\0generateKey\0type\0"
    "types\0filename\0passphrase\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KeyGenerator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x05,
       3,    0,   45,    2, 0x05,
       4,    0,   46,    2, 0x05,
       5,    0,   47,    2, 0x05,
       6,    1,   48,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       8,    0,   51,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00495103,
      10, QMetaType::QStringList, 0x00495001,
      11, QMetaType::QString, 0x00495103,
      12, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

*/

class KeyGenerator : public QObject
{
public:
    KeyGenerator();
    ~KeyGenerator();

    QString type();
    void setType(const QString &t);

    QStringList types();

    QString filename();
    void setFilename(const QString &f);

    QString passphrase();
    void setPassphrase(const QString &p);

public:
    void generateKey();

private:
    QString _type;
    QString _filename;
    QString _passphrase;
    QStringList _types;





public:

void static qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        qDebug() << "static invoke mete method: "<<_id;
        KeyGenerator *_t = static_cast<KeyGenerator *>(_o);
        switch (_id) {
        case 0: _t->typeChanged(); break;
        case 1: _t->typesChanged(); break;
        case 2: _t->filenameChanged(); break;
        case 3: _t->passphraseChanged(); break;
        case 4: _t->keyGenerated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->generateKey(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        qDebug() << "static indexof method: "<<func;
        {
            typedef void (KeyGenerator::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KeyGenerator::typeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (KeyGenerator::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KeyGenerator::typesChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (KeyGenerator::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KeyGenerator::filenameChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (KeyGenerator::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KeyGenerator::passphraseChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (KeyGenerator::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KeyGenerator::keyGenerated)) {
                *result = 4;
            }
        }
    }
}

static QMetaObject *X_staticMetaObject;


const QMetaObject *metaObject() const
{
    return X_staticMetaObject;
}


virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        qDebug() << "metacall: "<<_id;
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        qDebug() << "register method argument metatype: "<<_id;
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        qDebug() << "read property: "<<_id;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = type(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = types(); break;
        case 2: *reinterpret_cast< QString*>(_v) = filename(); break;
        case 3: *reinterpret_cast< QString*>(_v) = filename(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        qDebug() << "write property: "<<_id;
        void *_v = _a[0];
        switch (_id) {
        case 0: setType(*reinterpret_cast< QString*>(_v)); break;
        case 2: setFilename(*reinterpret_cast< QString*>(_v)); break;
        case 3: setPassphrase(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void typeChanged()
{
    QMetaObject::activate(this, metaObject(), 0, 0);
}

// SIGNAL 1
void typesChanged()
{
    QMetaObject::activate(this, metaObject(), 1, 0);
}

// SIGNAL 2
void filenameChanged()
{
    QMetaObject::activate(this, metaObject(), 2, 0);
}

// SIGNAL 3
void passphraseChanged()
{
    QMetaObject::activate(this, metaObject(), 3, 0);
}

// SIGNAL 4
void keyGenerated(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, metaObject(), 4, _a);
}
};


KeyGenerator::KeyGenerator()
    : _type("rsa"), _types{"dsa", "ecdsa", "rsa", "rsa1"}
{
}

KeyGenerator::~KeyGenerator()
{
}

QString KeyGenerator::type()
{
    return _type;
}

void KeyGenerator::setType(const QString &t)
{
    // Check for valid type.
    if (!_types.contains(t))
        return;

    if (t != _type) {
        _type = t;
        emit typeChanged();
    }
}

QStringList KeyGenerator::types()
{
    return _types;
}

QString KeyGenerator::filename()
{
    return _filename;
}

void KeyGenerator::setFilename(const QString &f)
{
    if (f != _filename) {
        _filename = f;
        emit filenameChanged();
    }
}

QString KeyGenerator::passphrase()
{
    return _passphrase;
}

void KeyGenerator::setPassphrase(const QString &p)
{
    if (p != _passphrase) {
        _passphrase = p;
        emit passphraseChanged();
    }
}

void KeyGenerator::generateKey()
{
    qDebug() << "generating: "<< _passphrase;
        emit keyGenerated(false);
        return;

    // Sanity check on arguments
    if (_type.isEmpty() or _filename.isEmpty() or
        (_passphrase.length() > 0 and _passphrase.length() < 5)) {
        emit keyGenerated(false);
        return;
    }

    // Remove key file if it already exists
    if (QFile::exists(_filename)) {
        QFile::remove(_filename);
    }

    // Execute ssh-keygen -t type -N passphrase -f keyfileq
    QProcess *proc = new QProcess;
    QString prog = "ssh-keygen";
    QStringList args{"-t", _type, "-N", _passphrase, "-f", _filename};
    proc->start(prog, args);
    proc->waitForFinished();
    emit keyGenerated(proc->exitCode() == 0);
    delete proc;
}


QMetaObject *KeyGenerator::X_staticMetaObject = nullptr;





QObject * newKeyGenerator() {
    return new KeyGenerator();
}




void registerQt(GDefineMetaNamespace &define)
{
    meta_qtcore::registerMain_QtCore(define);
    meta_qtgui::registerMain_QtGui(define);
    meta_qtwidgets::registerMain_QtWidgets(define);
    meta_qtqml::registerMain_QtQml(define);

    qtjs_binder::QtSignalConnectorBinder::reset(new qtjs_binder::QtSignalConnector());
    define._method("connect", &qtjs_binder::QtSignalConnectorBinder::connect);
    define._method("programArguments", &programArguments);
    define._method("setExitCode", &setExitCode);
    define._method("newKeyGenerator", &newKeyGenerator);
}

bool executeJs(const char *fileName)
{
    GDefineMetaNamespace define = GDefineMetaNamespace::declare("qt");
    registerQt(define);

    GScopedPointer<GScriptRunner> runner;
    GScopedInterface<IMetaService> service(createDefaultMetaService());
    runner.reset(createV8ScriptRunner(service.get()));
    GScopedInterface<IScriptObject> scriptObject(runner->getScripeObject());

    scriptObject->bindCoreService("cpgf", NULL);
    GScopedInterface<IMetaClass> metaClass(static_cast<IMetaClass *>(metaItemToInterface(define.getMetaClass())));
    scriptSetValue(scriptObject.get(), "qt", GScriptValue::fromClass(metaClass.get()));

    bool ret = runner->executeFile(fileName);

    while (!v8::V8::IdleNotification()); // run GC
    clearV8DataPool();
    qtjs_binder::QtSignalConnectorBinder::reset();

    return ret;
}


#define X_QML_GETTYPENAMES \
    const char *className = metaObject->className(); \
    const int nameLen = int(strlen(className)); \
    QVarLengthArray<char,48> pointerName(nameLen+2); \
    memcpy(pointerName.data(), className, nameLen); \
    pointerName[nameLen] = '*'; \
    pointerName[nameLen+1] = '\0'; \
    const int listLen = int(strlen("QQmlListProperty<")); \
    QVarLengthArray<char,64> listName(listLen + nameLen + 2); \
    memcpy(listName.data(), "QQmlListProperty<", listLen); \
    memcpy(listName.data()+listLen, className, nameLen); \
    listName[listLen+nameLen] = '>'; \
    listName[listLen+nameLen+1] = '\0';


template<typename T>
int X_qmlRegisterType(const QMetaObject *metaObject, const char *uri, int versionMajor, int versionMinor, const char *qmlName)
{
    X_QML_GETTYPENAMES

    QQmlPrivate::RegisterType type = {
        0, 

        qRegisterNormalizedMetaType<T *>(pointerName.constData()),
        qRegisterNormalizedMetaType<QQmlListProperty<T> >(listName.constData()),
        sizeof(T), QQmlPrivate::createInto<T>,
        QString(),

        uri, versionMajor, versionMinor, qmlName, metaObject,

        QQmlPrivate::attachedPropertiesFunc<T>(),
        QQmlPrivate::attachedPropertiesMetaObject<T>(),

        QQmlPrivate::StaticCastSelector<T,QQmlParserStatus>::cast(), 
        QQmlPrivate::StaticCastSelector<T,QQmlPropertyValueSource>::cast(),
        QQmlPrivate::StaticCastSelector<T,QQmlPropertyValueInterceptor>::cast(),

        0, 0,

        0,
        0
    };

    return QQmlPrivate::qmlregister(QQmlPrivate::TypeRegistration, &type);
}

#undef X_QML_GETTYPENAMES

} // namespace

int main(int argc, char * argv[])
{
    QApplication app(argc, argv);

    QMetaObjectBuilder builder;
    builder.setSuperClass(&QObject::staticMetaObject);
    builder.setStaticMetacallFunction(KeyGenerator::qt_static_metacall);
    builder.addSignal("typeChanged()");
    builder.addSignal("typesChanged()");
    builder.addSignal("filenameChanged()");
    builder.addSignal("passphraseChanged()");
    builder.addSignal("keyGenerated(bool)").setParameterNames(QList<QByteArray>{"success"});
    builder.addSlot("generateKey()");
    builder.addProperty("type", "QString", builder.indexOfSignal("typeChanged"));
    builder.addProperty("types", "QStringList", builder.indexOfSignal("typesChanged"));
    builder.addProperty("filename", "QString", builder.indexOfSignal("filenameChanged"));
    builder.addProperty("passphrase", "QString", builder.indexOfSignal("passphraseChanged"));

    KeyGenerator::X_staticMetaObject = builder.toMetaObject();
//QMetaObject KeyGenerator::X_staticMetaObject = {
//    { &QObject::staticMetaObject, qt_meta_stringdata_KeyGenerator.data,
//      qt_meta_data_KeyGenerator,  qt_static_metacall, 0, 0}
//};

    X_qmlRegisterType<KeyGenerator>(KeyGenerator::X_staticMetaObject, "com.ics.demo", 1, 0, "KeyGenerator");

    const char * fileName = "main.js";
    if (argc > 1) {
        fileName = argv[1];
    }
    for (int i = 2; i < argc; i++) {
        __programArguments.append(argv[i]);
    }

    if (!executeJs(fileName)) {
        cerr << "Failed to execute " << fileName << ", maybe it doesn't exist?" << endl;
    }

    v8::V8::Dispose();

    free(KeyGenerator::X_staticMetaObject);
    return __exitCode;
}

