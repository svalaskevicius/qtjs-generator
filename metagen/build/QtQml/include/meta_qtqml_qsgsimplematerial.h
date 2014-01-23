// Auto generated file, don't modify.

#ifndef __META_QTQML_QSGSIMPLEMATERIAL_H
#define __META_QTQML_QSGSIMPLEMATERIAL_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D, typename State>
void buildMetaClass_QSGSimpleMaterial(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const State &, PtrShaderCreateFunc)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (PtrShaderCreateFunc)>();
    _d.CPGF_MD_TEMPLATE _method("createShader", &D::ClassType::createShader);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("state", (State * (D::ClassType::*) ())&D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _method("state", (const State * (D::ClassType::*) () const)&D::ClassType::state);
}


template <typename D, typename State>
void buildMetaClass_QSGSimpleMaterialComparableMaterial(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const State &, PtrShaderCreateFunc)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (PtrShaderCreateFunc)>();
    _d.CPGF_MD_TEMPLATE _method("compare", &D::ClassType::compare);
}


template <typename D, typename State>
void buildMetaClass_QSGSimpleMaterialShader(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("initialize", &D::ClassType::initialize);
    _d.CPGF_MD_TEMPLATE _method("uniformMatrixName", &D::ClassType::uniformMatrixName);
    _d.CPGF_MD_TEMPLATE _method("uniformOpacityName", &D::ClassType::uniformOpacityName);
    _d.CPGF_MD_TEMPLATE _method("updateState", (void (D::ClassType::*) (const RenderState &, QSGMaterial *, QSGMaterial *))&D::ClassType::updateState);
    _d.CPGF_MD_TEMPLATE _method("updateState", (void (D::ClassType::*) (const State *, const State *))&D::ClassType::updateState);
    _d.CPGF_MD_TEMPLATE _method("resolveUniforms", &D::ClassType::resolveUniforms);
    _d.CPGF_MD_TEMPLATE _method("attributes", &D::ClassType::attributes);
    _d.CPGF_MD_TEMPLATE _method("attributeNames", &D::ClassType::attributeNames);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
