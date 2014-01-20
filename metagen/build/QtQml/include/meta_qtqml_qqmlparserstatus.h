// Auto generated file, don't modify.

#ifndef __META_QTQML_QQMLPARSERSTATUS_H
#define __META_QTQML_QQMLPARSERSTATUS_H


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
void buildMetaClass_Global_qqmlparserstatus(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtQml_15")
        ._element("QQmlParserStatus_iid", QQmlParserStatus_iid)
    ;
}


template <typename D>
void buildMetaClass_QQmlParserStatus(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("classBegin", &D::ClassType::classBegin);
    _d.CPGF_MD_TEMPLATE _method("componentComplete", &D::ClassType::componentComplete);
}


class QQmlParserStatusWrapper : public QQmlParserStatus, public cpgf::GScriptWrapper {
public:
    
    QQmlParserStatusWrapper()
        : QQmlParserStatus() {}
    
    void classBegin()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("classBegin"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_classBegin()
    {
        throw std::runtime_error("Abstract method");
    }
    
    void componentComplete()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("componentComplete"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_componentComplete()
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(const cpgf::GMetaDataConfigFlags & config, D _d)
    {
        (void)config; (void)_d; (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_classBegin", (void (D::ClassType::*) ())&D::ClassType::super_classBegin);
        _d.CPGF_MD_TEMPLATE _method("super_componentComplete", (void (D::ClassType::*) ())&D::ClassType::super_componentComplete);
    }
};


template <typename D>
void buildMetaClass_QQmlParserStatusWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    
    QQmlParserStatusWrapper::cpgf__register(config, _d);
    
    buildMetaClass_QQmlParserStatus<D>(config, _d);
}


} // namespace meta_qtqml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
