// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQMLPROPERTYVALUESOURCE_H
#define CPGF_META_QTQML_QQMLPROPERTYVALUESOURCE_H


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
void buildMetaClass_Global_qqmlpropertyvaluesource(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtQml_46")
        ._element("QQmlPropertyValueSource_iid", QQmlPropertyValueSource_iid)
    ;
}


template <typename D>
void buildMetaClass_QQmlPropertyValueSource(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("setTarget", &D::ClassType::setTarget, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


class QQmlPropertyValueSourceWrapper : public QQmlPropertyValueSource, public cpgf::GScriptWrapper {
public:
    
    QQmlPropertyValueSourceWrapper()
        : QQmlPropertyValueSource() {}
    
    void setTarget(const QQmlProperty & __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setTarget"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setTarget(const QQmlProperty & __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_setTarget", (void (D::ClassType::*) (const QQmlProperty &))&D::ClassType::super_setTarget, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    }
};


template <typename D>
void buildMetaClass_QQmlPropertyValueSourceWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    
    QQmlPropertyValueSourceWrapper::cpgf__register(_d);
    
    buildMetaClass_QQmlPropertyValueSource<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
