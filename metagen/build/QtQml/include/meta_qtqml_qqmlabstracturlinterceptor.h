// Auto generated file, don't modify.

#ifndef __META_QTQML_QQMLABSTRACTURLINTERCEPTOR_H
#define __META_QTQML_QQMLABSTRACTURLINTERCEPTOR_H


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
void buildMetaClass_QQmlAbstractUrlInterceptor(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("intercept", &D::ClassType::intercept, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::DataType>("DataType")
        ._element("QmlFile", D::ClassType::QmlFile)
        ._element("JavaScriptFile", D::ClassType::JavaScriptFile)
        ._element("QmldirFile", D::ClassType::QmldirFile)
        ._element("UrlString", D::ClassType::UrlString)
    ;
}


class QQmlAbstractUrlInterceptorWrapper : public QQmlAbstractUrlInterceptor, public cpgf::GScriptWrapper {
public:
    
    QQmlAbstractUrlInterceptorWrapper()
        : QQmlAbstractUrlInterceptor() {}
    
    QUrl intercept(const QUrl & path, QQmlAbstractUrlInterceptor::DataType type)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("intercept"));
        if(func)
        {
            return cpgf::fromVariant<QUrl >(cpgf::invokeScriptFunction(func.get(), this, path, type));
        }
        throw "Abstract method";
    }
    QUrl super_intercept(const QUrl & path, QQmlAbstractUrlInterceptor::DataType type)
    {
        throw "Abstract method";
    }
};


template <typename D>
void buildMetaClass_QQmlAbstractUrlInterceptorWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    
    _d.CPGF_MD_TEMPLATE _method("super_intercept", (QUrl (D::ClassType::*) (const QUrl &, QQmlAbstractUrlInterceptor::DataType))&D::ClassType::super_intercept, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    
    buildMetaClass_QQmlAbstractUrlInterceptor<D>(config, _d);
}


} // namespace meta_qtqml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
