// Auto generated file, don't modify.

#ifndef __META_QTCORE_QFACTORYINTERFACE_H
#define __META_QTCORE_QFACTORYINTERFACE_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_QFactoryInterface(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("keys", &D::ClassType::keys);
}


class QFactoryInterfaceWrapper : public QFactoryInterface, public cpgf::GScriptWrapper {
public:
    
    QStringList keys() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keys"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunction(func.get(), this));
        }
        throw std::runtime_error("Abstract method");
    }
    QStringList super_keys() const
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(const cpgf::GMetaDataConfigFlags & config, D _d)
    {
        (void)config; (void)_d; (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_keys", (QStringList (D::ClassType::*) () const)&D::ClassType::super_keys);
    }
};


template <typename D>
void buildMetaClass_QFactoryInterfaceWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    
    QFactoryInterfaceWrapper::cpgf__register(config, _d);
    
    buildMetaClass_QFactoryInterface<D>(config, _d);
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
