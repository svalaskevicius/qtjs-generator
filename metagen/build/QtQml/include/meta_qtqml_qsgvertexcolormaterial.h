// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QSGVERTEXCOLORMATERIAL_H
#define CPGF_META_QTQML_QSGVERTEXCOLORMATERIAL_H


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
void buildMetaClass_QSGVertexColorMaterial(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("compare", &D::ClassType::compare);
}


class QSGVertexColorMaterialWrapper : public QSGVertexColorMaterial, public cpgf::GScriptWrapper {
public:
    
    QSGVertexColorMaterialWrapper()
        : QSGVertexColorMaterial() {}
    
    QSGMaterialShader * createShader() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createShader"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialShader * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGVertexColorMaterial::createShader();
    }
    QSGMaterialShader * super_createShader() const
    {
        return QSGVertexColorMaterial::createShader();
    }
    
    QSGMaterialType * type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialType * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGVertexColorMaterial::type();
    }
    QSGMaterialType * super_type() const
    {
        return QSGVertexColorMaterial::type();
    }
    
    int compare(const QSGMaterial * other) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("compare"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, other).getValue());
        }
        return QSGVertexColorMaterial::compare(other);
    }
    int super_compare(const QSGMaterial * other) const
    {
        return QSGVertexColorMaterial::compare(other);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("createShader", (QSGMaterialShader * (D::ClassType::*) () const)&D::ClassType::createShader);
        _d.CPGF_MD_TEMPLATE _method("type", (QSGMaterialType * (D::ClassType::*) () const)&D::ClassType::type);
        _d.CPGF_MD_TEMPLATE _method("super_createShader", (QSGMaterialShader * (D::ClassType::*) () const)&D::ClassType::super_createShader);
        _d.CPGF_MD_TEMPLATE _method("super_type", (QSGMaterialType * (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_compare", (int (D::ClassType::*) (const QSGMaterial *) const)&D::ClassType::super_compare);
    }
};


template <typename D>
void buildMetaClass_QSGVertexColorMaterialWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGVertexColorMaterialWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGVertexColorMaterial<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
