// Auto generated file, don't modify.

#ifndef __META_QTQML_QQMLEXTENSIONINTERFACE_H
#define __META_QTQML_QQMLEXTENSIONINTERFACE_H


#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace meta_qtqml { 


template <typename D>
void buildMetaClass_Global_qqmlextensioninterface(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtQml_16")
        ._element("QQmlTypesExtensionInterface_iid", QQmlTypesExtensionInterface_iid)
        ._element("QQmlExtensionInterface_iid", QQmlExtensionInterface_iid)
    ;
}


template <typename D>
void buildMetaClass_QQmlExtensionInterface(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("initializeEngine", &D::ClassType::initializeEngine);
}


class QQmlExtensionInterfaceWrapper : public QQmlExtensionInterface, public cpgf::GScriptWrapper {
public:
    
    void registerTypes(const char * uri)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("registerTypes"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, uri);
            return;
        }
        throw "Abstract method";
    }
    void super_registerTypes(const char * uri)
    {
        throw "Abstract method";
    }
    
    void initializeEngine(QQmlEngine * engine, const char * uri)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("initializeEngine"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, engine, uri);
            return;
        }
        throw "Abstract method";
    }
    void super_initializeEngine(QQmlEngine * engine, const char * uri)
    {
        throw "Abstract method";
    }
};


template <typename D>
void buildMetaClass_QQmlExtensionInterfaceWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    
    _d.CPGF_MD_TEMPLATE _method("super_registerTypes", (void (D::ClassType::*) (const char *))&D::ClassType::super_registerTypes);
    _d.CPGF_MD_TEMPLATE _method("super_initializeEngine", (void (D::ClassType::*) (QQmlEngine *, const char *))&D::ClassType::super_initializeEngine);
    
    buildMetaClass_QQmlExtensionInterface<D>(config, _d);
}


template <typename D>
void buildMetaClass_QQmlTypesExtensionInterface(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("registerTypes", &D::ClassType::registerTypes);
}


class QQmlTypesExtensionInterfaceWrapper : public QQmlTypesExtensionInterface, public cpgf::GScriptWrapper {
public:
    
    void registerTypes(const char * uri)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("registerTypes"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, uri);
            return;
        }
        throw "Abstract method";
    }
    void super_registerTypes(const char * uri)
    {
        throw "Abstract method";
    }
};


template <typename D>
void buildMetaClass_QQmlTypesExtensionInterfaceWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    
    _d.CPGF_MD_TEMPLATE _method("super_registerTypes", (void (D::ClassType::*) (const char *))&D::ClassType::super_registerTypes);
    
    buildMetaClass_QQmlTypesExtensionInterface<D>(config, _d);
}


} // namespace meta_qtqml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
