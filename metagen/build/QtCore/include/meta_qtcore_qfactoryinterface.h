// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QFACTORYINTERFACE_H
#define CPGF_META_QTCORE_QFACTORYINTERFACE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QFactoryInterface(D _d)
{
    (void)_d;
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
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QStringList super_keys() const
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_keys", (QStringList (D::ClassType::*) () const)&D::ClassType::super_keys);
    }
};


template <typename D>
void buildMetaClass_QFactoryInterfaceWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QFactoryInterfaceWrapper::cpgf__register(_d);
    
    buildMetaClass_QFactoryInterface<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
