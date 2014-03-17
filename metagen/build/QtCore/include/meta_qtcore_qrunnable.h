// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QRUNNABLE_H
#define CPGF_META_QTCORE_QRUNNABLE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QRunnable(D _d)
{
    (void)_d;
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
        throw std::runtime_error("Abstract method");
    }
    void super_run()
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_run", (void (D::ClassType::*) ())&D::ClassType::super_run);
    }
};


template <typename D>
void buildMetaClass_QRunnableWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    
    QRunnableWrapper::cpgf__register(_d);
    
    buildMetaClass_QRunnable<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
