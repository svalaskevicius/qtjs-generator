#pragma once

#include "cpgf/gmetadefine.h"

namespace qtjs_binder {

class DynamicMetaObjectBuilder;

int qmlRegisterDynamicType(int classIdx, const char *uri, int versionMajor, int versionMinor, const char *qmlName);
void finalizeAndRegisterMetaObjectBuilderToQml(DynamicMetaObjectBuilder *builder, const char *uri, int versionMajor, int versionMinor, const char *qmlName);
cpgf::GDefineMetaInfo createDynamicObjectsMetaClasses();

}
