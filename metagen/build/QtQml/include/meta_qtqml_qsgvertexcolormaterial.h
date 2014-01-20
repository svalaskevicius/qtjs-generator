// Auto generated file, don't modify.

#ifndef __META_QTQML_QSGVERTEXCOLORMATERIAL_H
#define __META_QTQML_QSGVERTEXCOLORMATERIAL_H


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
void buildMetaClass_QSGVertexColorMaterial(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("compare", &D::ClassType::compare);
}


class QSGVertexColorMaterialWrapper : public QSGVertexColorMaterial, public cpgf::GScriptWrapper {
public:
    
    QSGVertexColorMaterialWrapper()
        : QSGVertexColorMaterial() {}
    
    int compare(const QSGMaterial * other) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("compare"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, other));
        }
        return QSGVertexColorMaterial::compare(other);
    }
    int super_compare(const QSGMaterial * other) const
    {
        return QSGVertexColorMaterial::compare(other);
    }
    
    QSGMaterialType * type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialType * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QSGVertexColorMaterial::type();
    }
    QSGMaterialType * super_type() const
    {
        return QSGVertexColorMaterial::type();
    }
    
    QSGMaterialShader * createShader() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createShader"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialShader * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QSGVertexColorMaterial::createShader();
    }
    QSGMaterialShader * super_createShader() const
    {
        return QSGVertexColorMaterial::createShader();
    }
    template <typename D>
    static void cpgf__register(const cpgf::GMetaDataConfigFlags & config, D _d)
    {
        (void)config; (void)_d; (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("type", (QSGMaterialType * (D::ClassType::*) () const)&D::ClassType::type);
        _d.CPGF_MD_TEMPLATE _method("createShader", (QSGMaterialShader * (D::ClassType::*) () const)&D::ClassType::createShader);
        _d.CPGF_MD_TEMPLATE _method("super_compare", (int (D::ClassType::*) (const QSGMaterial *) const)&D::ClassType::super_compare);
        _d.CPGF_MD_TEMPLATE _method("super_type", (QSGMaterialType * (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_createShader", (QSGMaterialShader * (D::ClassType::*) () const)&D::ClassType::super_createShader);
    }
};


template <typename D>
void buildMetaClass_QSGVertexColorMaterialWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    
    QSGVertexColorMaterialWrapper::cpgf__register(config, _d);
    
    buildMetaClass_QSGVertexColorMaterial<D>(config, _d);
}


} // namespace meta_qtqml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
