
#include <qqmlprivate.h>
#include <QQmlComponent>
#include "dynamic_qobject.h"

namespace qtjs_binder {

int qmlRegisterDynamicType(int classIdx, const char *uri, int versionMajor, int versionMinor, const char *qmlName);
void finalizeAndRegisterMetaObjectBuilderToQml(DynamicMetaObjectBuilder *builder, const char *uri, int versionMajor, int versionMinor, const char *qmlName);

}

