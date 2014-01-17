// Auto generated file, don't modify.

#ifndef __META_QTQML_QSGTEXTUREMATERIAL_H
#define __META_QTQML_QSGTEXTUREMATERIAL_H


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
void buildMetaClass_QSGOpaqueTextureMaterial(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("createShader", &D::ClassType::createShader);
    _d.CPGF_MD_TEMPLATE _method("compare", &D::ClassType::compare);
    _d.CPGF_MD_TEMPLATE _method("setTexture", &D::ClassType::setTexture);
    _d.CPGF_MD_TEMPLATE _method("texture", &D::ClassType::texture);
    _d.CPGF_MD_TEMPLATE _method("setMipmapFiltering", &D::ClassType::setMipmapFiltering);
    _d.CPGF_MD_TEMPLATE _method("mipmapFiltering", &D::ClassType::mipmapFiltering);
    _d.CPGF_MD_TEMPLATE _method("setFiltering", &D::ClassType::setFiltering);
    _d.CPGF_MD_TEMPLATE _method("filtering", &D::ClassType::filtering);
    _d.CPGF_MD_TEMPLATE _method("setHorizontalWrapMode", &D::ClassType::setHorizontalWrapMode);
    _d.CPGF_MD_TEMPLATE _method("horizontalWrapMode", &D::ClassType::horizontalWrapMode);
    _d.CPGF_MD_TEMPLATE _method("setVerticalWrapMode", &D::ClassType::setVerticalWrapMode);
    _d.CPGF_MD_TEMPLATE _method("verticalWrapMode", &D::ClassType::verticalWrapMode);
}


class QSGOpaqueTextureMaterialWrapper : public QSGOpaqueTextureMaterial, public cpgf::GScriptWrapper {
public:
    
    QSGOpaqueTextureMaterialWrapper()
        : QSGOpaqueTextureMaterial() {}
    
    int compare(const QSGMaterial * other) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("compare"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, other));
        }
        return QSGOpaqueTextureMaterial::compare(other);
    }
    int super_compare(const QSGMaterial * other) const
    {
        return QSGOpaqueTextureMaterial::compare(other);
    }
    
    QSGMaterialType * type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialType * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QSGOpaqueTextureMaterial::type();
    }
    QSGMaterialType * super_type() const
    {
        return QSGOpaqueTextureMaterial::type();
    }
    
    QSGMaterialShader * createShader() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createShader"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialShader * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QSGOpaqueTextureMaterial::createShader();
    }
    QSGMaterialShader * super_createShader() const
    {
        return QSGOpaqueTextureMaterial::createShader();
    }
};


template <typename D>
void buildMetaClass_QSGOpaqueTextureMaterialWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    
    _d.CPGF_MD_TEMPLATE _method("super_compare", (int (D::ClassType::*) (const QSGMaterial *) const)&D::ClassType::super_compare);
    _d.CPGF_MD_TEMPLATE _method("super_type", (QSGMaterialType * (D::ClassType::*) () const)&D::ClassType::super_type);
    _d.CPGF_MD_TEMPLATE _method("super_createShader", (QSGMaterialShader * (D::ClassType::*) () const)&D::ClassType::super_createShader);
    
    buildMetaClass_QSGOpaqueTextureMaterial<D>(config, _d);
}


template <typename D>
void buildMetaClass_QSGTextureMaterial(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("createShader", &D::ClassType::createShader);
}


class QSGTextureMaterialWrapper : public QSGTextureMaterial, public cpgf::GScriptWrapper {
public:
    
    int compare(const QSGMaterial * other) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("compare"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, other));
        }
        return QSGOpaqueTextureMaterial::compare(other);
    }
    int super_compare(const QSGMaterial * other) const
    {
        return QSGOpaqueTextureMaterial::compare(other);
    }
    
    QSGMaterialType * type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialType * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QSGTextureMaterial::type();
    }
    QSGMaterialType * super_type() const
    {
        return QSGTextureMaterial::type();
    }
    
    QSGMaterialShader * createShader() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createShader"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialShader * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QSGTextureMaterial::createShader();
    }
    QSGMaterialShader * super_createShader() const
    {
        return QSGTextureMaterial::createShader();
    }
};


template <typename D>
void buildMetaClass_QSGTextureMaterialWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    
    _d.CPGF_MD_TEMPLATE _method("super_compare", (int (D::ClassType::*) (const QSGMaterial *) const)&D::ClassType::super_compare);
    _d.CPGF_MD_TEMPLATE _method("super_type", (QSGMaterialType * (D::ClassType::*) () const)&D::ClassType::super_type);
    _d.CPGF_MD_TEMPLATE _method("super_createShader", (QSGMaterialShader * (D::ClassType::*) () const)&D::ClassType::super_createShader);
    
    buildMetaClass_QSGTextureMaterial<D>(config, _d);
}


} // namespace meta_qtqml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
