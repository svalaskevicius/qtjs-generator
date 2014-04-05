// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQMLNETWORKACCESSMANAGERFACTORY_H
#define CPGF_META_QTQML_QQMLNETWORKACCESSMANAGERFACTORY_H


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
void buildMetaClass_QQmlNetworkAccessManagerFactory(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("create", &D::ClassType::create);
}


class QQmlNetworkAccessManagerFactoryWrapper : public QQmlNetworkAccessManagerFactory, public cpgf::GScriptWrapper {
public:
    
    QNetworkAccessManager * create(QObject * parent)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("create"));
        if(func)
        {
            return cpgf::fromVariant<QNetworkAccessManager * >(cpgf::invokeScriptFunction(func.get(), this, parent).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QNetworkAccessManager * super_create(QObject * parent)
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_create", (QNetworkAccessManager * (D::ClassType::*) (QObject *))&D::ClassType::super_create);
    }
};


template <typename D>
void buildMetaClass_QQmlNetworkAccessManagerFactoryWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QQmlNetworkAccessManagerFactoryWrapper::cpgf__register(_d);
    
    buildMetaClass_QQmlNetworkAccessManagerFactory<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
