// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QSGTEXTUREMATERIAL_H
#define CPGF_META_QTQML_QSGTEXTUREMATERIAL_H


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
void buildMetaClass_QSGOpaqueTextureMaterial(D _d)
{
    (void)_d;
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
    
    QSGMaterialShader * createShader() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createShader"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialShader * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGOpaqueTextureMaterial::createShader();
    }
    QSGMaterialShader * super_createShader() const
    {
        return QSGOpaqueTextureMaterial::createShader();
    }
    
    QSGMaterialType * type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialType * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGOpaqueTextureMaterial::type();
    }
    QSGMaterialType * super_type() const
    {
        return QSGOpaqueTextureMaterial::type();
    }
    
    int compare(const QSGMaterial * other) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("compare"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, other).getValue());
        }
        return QSGOpaqueTextureMaterial::compare(other);
    }
    int super_compare(const QSGMaterial * other) const
    {
        return QSGOpaqueTextureMaterial::compare(other);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_createShader", (QSGMaterialShader * (D::ClassType::*) () const)&D::ClassType::super_createShader);
        _d.CPGF_MD_TEMPLATE _method("super_type", (QSGMaterialType * (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_compare", (int (D::ClassType::*) (const QSGMaterial *) const)&D::ClassType::super_compare);
    }
};


template <typename D>
void buildMetaClass_QSGOpaqueTextureMaterialWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGOpaqueTextureMaterialWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGOpaqueTextureMaterial<D>(_d);
}


template <typename D>
void buildMetaClass_QSGTextureMaterial(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("createShader", &D::ClassType::createShader);
}


class QSGTextureMaterialWrapper : public QSGTextureMaterial, public cpgf::GScriptWrapper {
public:
    
    QSGMaterialShader * createShader() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createShader"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialShader * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGTextureMaterial::createShader();
    }
    QSGMaterialShader * super_createShader() const
    {
        return QSGTextureMaterial::createShader();
    }
    
    QSGMaterialType * type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialType * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGTextureMaterial::type();
    }
    QSGMaterialType * super_type() const
    {
        return QSGTextureMaterial::type();
    }
    
    int compare(const QSGMaterial * other) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("compare"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, other).getValue());
        }
        return QSGOpaqueTextureMaterial::compare(other);
    }
    int super_compare(const QSGMaterial * other) const
    {
        return QSGOpaqueTextureMaterial::compare(other);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_createShader", (QSGMaterialShader * (D::ClassType::*) () const)&D::ClassType::super_createShader);
        _d.CPGF_MD_TEMPLATE _method("super_type", (QSGMaterialType * (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_compare", (int (D::ClassType::*) (const QSGMaterial *) const)&D::ClassType::super_compare);
    }
};


template <typename D>
void buildMetaClass_QSGTextureMaterialWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGTextureMaterialWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGTextureMaterial<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
