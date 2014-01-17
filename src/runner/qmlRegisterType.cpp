
#include "qmlRegisterType.h"
#include "llvmapi.h"

namespace qtjs_binder {

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

int qmlRegisterDynamicType(int classIdx, const char *uri, int versionMajor, int versionMinor, const char *qmlName)
{
    const QMetaObject *metaObject = dynamicQObjectManager().getMetaObject(classIdx);

    X_QML_GETTYPENAMES;

    QQmlPrivate::RegisterType type = {
        0,

        qRegisterNormalizedMetaType<DynamicQObject *>(pointerName.constData()),
        qRegisterNormalizedMetaType<QQmlListProperty<DynamicQObject> >(listName.constData()),
        sizeof(DynamicQObject), llvmApi.generateDynamicObjectCreateInto(classIdx),
        QString(),

        uri, versionMajor, versionMinor, qmlName, metaObject,

        QQmlPrivate::attachedPropertiesFunc<DynamicQObject>(),
        QQmlPrivate::attachedPropertiesMetaObject<DynamicQObject>(),

        QQmlPrivate::StaticCastSelector<DynamicQObject, QQmlParserStatus>::cast(),
        QQmlPrivate::StaticCastSelector<DynamicQObject, QQmlPropertyValueSource>::cast(),
        QQmlPrivate::StaticCastSelector<DynamicQObject, QQmlPropertyValueInterceptor>::cast(),

        0, 0,

        0,
        0
    };

    return QQmlPrivate::qmlregister(QQmlPrivate::TypeRegistration, &type);
}

#undef X_QML_GETTYPENAMES

void finalizeAndRegisterMetaObjectBuilderToQml(DynamicMetaObjectBuilder *builder, const char *uri, int versionMajor, int versionMinor, const char *qmlName)
{
    size_t id = dynamicQObjectManager().finalizeBuild(*builder);
    qmlRegisterDynamicType(id, uri, versionMajor, versionMinor, qmlName);
}

}
