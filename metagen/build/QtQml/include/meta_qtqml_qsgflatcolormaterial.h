// Auto generated file, don't modify.

#ifndef __META_QTQML_QSGFLATCOLORMATERIAL_H
#define __META_QTQML_QSGFLATCOLORMATERIAL_H


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
void buildMetaClass_QSGFlatColorMaterial(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("createShader", &D::ClassType::createShader);
    _d.CPGF_MD_TEMPLATE _method("setColor", &D::ClassType::setColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("color", &D::ClassType::color, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("compare", &D::ClassType::compare);
}


class QSGFlatColorMaterialWrapper : public QSGFlatColorMaterial, public cpgf::GScriptWrapper {
public:
    
    QSGFlatColorMaterialWrapper()
        : QSGFlatColorMaterial() {}
    
    int compare(const QSGMaterial * other) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("compare"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, other));
        }
        return QSGFlatColorMaterial::compare(other);
    }
    int super_compare(const QSGMaterial * other) const
    {
        return QSGFlatColorMaterial::compare(other);
    }
    
    QSGMaterialType * type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialType * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QSGFlatColorMaterial::type();
    }
    QSGMaterialType * super_type() const
    {
        return QSGFlatColorMaterial::type();
    }
    
    QSGMaterialShader * createShader() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createShader"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialShader * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QSGFlatColorMaterial::createShader();
    }
    QSGMaterialShader * super_createShader() const
    {
        return QSGFlatColorMaterial::createShader();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_compare", (int (D::ClassType::*) (const QSGMaterial *) const)&D::ClassType::super_compare);
        _d.CPGF_MD_TEMPLATE _method("super_type", (QSGMaterialType * (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_createShader", (QSGMaterialShader * (D::ClassType::*) () const)&D::ClassType::super_createShader);
    }
};


template <typename D>
void buildMetaClass_QSGFlatColorMaterialWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGFlatColorMaterialWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGFlatColorMaterial<D>(_d);
}


} // namespace meta_qtqml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
