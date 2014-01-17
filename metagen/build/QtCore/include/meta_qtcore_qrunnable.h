// Auto generated file, don't modify.

#ifndef __META_QTCORE_QRUNNABLE_H
#define __META_QTCORE_QRUNNABLE_H


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
void buildMetaClass_QRunnable(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("run", &D::ClassType::run);
    _d.CPGF_MD_TEMPLATE _method("autoDelete", &D::ClassType::autoDelete);
    _d.CPGF_MD_TEMPLATE _method("setAutoDelete", &D::ClassType::setAutoDelete);
}


class QRunnableWrapper : public QRunnable, public cpgf::GScriptWrapper {
public:
    
    QRunnableWrapper()
        : QRunnable() {}
    
    void run()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("run"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        throw "Abstract method";
    }
    void super_run()
    {
        throw "Abstract method";
    }
};


template <typename D>
void buildMetaClass_QRunnableWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    
    _d.CPGF_MD_TEMPLATE _method("super_run", (void (D::ClassType::*) ())&D::ClassType::super_run);
    
    buildMetaClass_QRunnable<D>(config, _d);
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
