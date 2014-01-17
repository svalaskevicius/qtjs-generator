// Auto generated file, don't modify.

#ifndef __META_QTQML_QQMLNETWORKACCESSMANAGERFACTORY_H
#define __META_QTQML_QQMLNETWORKACCESSMANAGERFACTORY_H


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
void buildMetaClass_QQmlNetworkAccessManagerFactory(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
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
            return cpgf::fromVariant<QNetworkAccessManager * >(cpgf::invokeScriptFunction(func.get(), this, parent));
        }
        throw "Abstract method";
    }
    QNetworkAccessManager * super_create(QObject * parent)
    {
        throw "Abstract method";
    }
};


template <typename D>
void buildMetaClass_QQmlNetworkAccessManagerFactoryWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    
    _d.CPGF_MD_TEMPLATE _method("super_create", (QNetworkAccessManager * (D::ClassType::*) (QObject *))&D::ClassType::super_create);
    
    buildMetaClass_QQmlNetworkAccessManagerFactory<D>(config, _d);
}


} // namespace meta_qtqml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
