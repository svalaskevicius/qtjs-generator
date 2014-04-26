#pragma once

#include "cpgf/gmetadefine.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/gscopedinterface.h"
#include "cpgf/scriptbind/gv8runner.h"
#include "cpgf/glifecycle.h"


namespace qtjs_binder {

class DynamicMetaObjectBuilder;

int qmlRegisterDynamicType(int classIdx, const char *uri, int versionMajor, int versionMinor, const char *qmlName);
void finalizeAndRegisterMetaObjectBuilderToQml(DynamicMetaObjectBuilder *builder, const char *uri, int versionMajor, int versionMinor, const char *qmlName);
cpgf::GDefineMetaInfo createDynamicObjectsMetaClasses();

void registerQt(cpgf::GDefineMetaNamespace &define);
void unregisterQt();


using namespace cpgf;

struct CpgfBinder {
    GDefineMetaNamespace define;
    GScopedInterface<IMetaService> service;
    GScopedPointer<GScriptRunner> runner;
    GScopedInterface<IScriptObject> scriptObject;
    GScopedInterface<IMetaClass> metaClass;

    CpgfBinder(v8::Handle<v8::Context> ctx);
    ~CpgfBinder();
};
}

