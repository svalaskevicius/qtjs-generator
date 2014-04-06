// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQMLEXTENSIONINTERFACE_H
#define CPGF_META_QTQML_QQMLEXTENSIONINTERFACE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qqmlextensioninterface(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtQml_40")
        ._element("QQmlTypesExtensionInterface_iid", QQmlTypesExtensionInterface_iid)
        ._element("QQmlExtensionInterface_iid", QQmlExtensionInterface_iid)
    ;
}


template <typename D>
void buildMetaClass_QQmlExtensionInterface(D _d)
{
    (void)_d;
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
        throw std::runtime_error("Abstract method");
    }
    void super_registerTypes(const char * uri)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void initializeEngine(QQmlEngine * engine, const char * uri)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("initializeEngine"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, engine, uri);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_initializeEngine(QQmlEngine * engine, const char * uri)
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_registerTypes", (void (D::ClassType::*) (const char *))&D::ClassType::super_registerTypes);
        _d.CPGF_MD_TEMPLATE _method("super_initializeEngine", (void (D::ClassType::*) (QQmlEngine *, const char *))&D::ClassType::super_initializeEngine);
    }
};


template <typename D>
void buildMetaClass_QQmlExtensionInterfaceWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QQmlExtensionInterfaceWrapper::cpgf__register(_d);
    
    buildMetaClass_QQmlExtensionInterface<D>(_d);
}


template <typename D>
void buildMetaClass_QQmlTypesExtensionInterface(D _d)
{
    (void)_d;
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
        throw std::runtime_error("Abstract method");
    }
    void super_registerTypes(const char * uri)
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_registerTypes", (void (D::ClassType::*) (const char *))&D::ClassType::super_registerTypes);
    }
};


template <typename D>
void buildMetaClass_QQmlTypesExtensionInterfaceWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QQmlTypesExtensionInterfaceWrapper::cpgf__register(_d);
    
    buildMetaClass_QQmlTypesExtensionInterface<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
