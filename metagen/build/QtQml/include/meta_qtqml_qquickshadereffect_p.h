// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQUICKSHADEREFFECT_P_H
#define CPGF_META_QTQML_QQUICKSHADEREFFECT_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qquickshadereffect_p(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


template <typename D>
void buildMetaClass_QQuickShaderEffect(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQuickItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("fragmentShader", &D::ClassType::fragmentShader);
    _d.CPGF_MD_TEMPLATE _method("setFragmentShader", &D::ClassType::setFragmentShader, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("vertexShader", &D::ClassType::vertexShader);
    _d.CPGF_MD_TEMPLATE _method("setVertexShader", &D::ClassType::setVertexShader, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("blending", &D::ClassType::blending);
    _d.CPGF_MD_TEMPLATE _method("setBlending", &D::ClassType::setBlending);
    _d.CPGF_MD_TEMPLATE _method("mesh", &D::ClassType::mesh);
    _d.CPGF_MD_TEMPLATE _method("setMesh", &D::ClassType::setMesh, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("cullMode", &D::ClassType::cullMode);
    _d.CPGF_MD_TEMPLATE _method("setCullMode", &D::ClassType::setCullMode);
    _d.CPGF_MD_TEMPLATE _method("log", &D::ClassType::log);
    _d.CPGF_MD_TEMPLATE _method("status", &D::ClassType::status);
    _d.CPGF_MD_TEMPLATE _method("parseLog", &D::ClassType::parseLog);
    _d.CPGF_MD_TEMPLATE _method("event", &D::ClassType::event);
    _d.CPGF_MD_TEMPLATE _method("fragmentShaderChanged", &D::ClassType::fragmentShaderChanged);
    _d.CPGF_MD_TEMPLATE _method("vertexShaderChanged", &D::ClassType::vertexShaderChanged);
    _d.CPGF_MD_TEMPLATE _method("blendingChanged", &D::ClassType::blendingChanged);
    _d.CPGF_MD_TEMPLATE _method("meshChanged", &D::ClassType::meshChanged);
    _d.CPGF_MD_TEMPLATE _method("cullModeChanged", &D::ClassType::cullModeChanged);
    _d.CPGF_MD_TEMPLATE _method("logChanged", &D::ClassType::logChanged);
    _d.CPGF_MD_TEMPLATE _method("statusChanged", &D::ClassType::statusChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::CullMode>("CullMode")
        ._element("NoCulling", D::ClassType::NoCulling)
        ._element("BackFaceCulling", D::ClassType::BackFaceCulling)
        ._element("FrontFaceCulling", D::ClassType::FrontFaceCulling)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Status>("Status")
        ._element("Compiled", D::ClassType::Compiled)
        ._element("Uncompiled", D::ClassType::Uncompiled)
        ._element("Error", D::ClassType::Error)
    ;
}


template <typename D>
void buildMetaClass_QQuickShaderEffectCommon(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("source", &D::ClassType::source);
    _d.CPGF_MD_TEMPLATE _field("attributes", &D::ClassType::attributes);
    _d.CPGF_MD_TEMPLATE _field("uniformData", &D::ClassType::uniformData);
    _d.CPGF_MD_TEMPLATE _field("signalMappers", &D::ClassType::signalMappers);
    _d.CPGF_MD_TEMPLATE _field("parseLog", &D::ClassType::parseLog);
    _d.CPGF_MD_TEMPLATE _method("disconnectPropertySignals", &D::ClassType::disconnectPropertySignals);
    _d.CPGF_MD_TEMPLATE _method("connectPropertySignals", &D::ClassType::connectPropertySignals);
    _d.CPGF_MD_TEMPLATE _method("updateParseLog", &D::ClassType::updateParseLog);
    _d.CPGF_MD_TEMPLATE _method("lookThroughShaderCode", &D::ClassType::lookThroughShaderCode, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("updateShader", &D::ClassType::updateShader);
    _d.CPGF_MD_TEMPLATE _method("updateMaterial", &D::ClassType::updateMaterial);
    _d.CPGF_MD_TEMPLATE _method("updateWindow", &D::ClassType::updateWindow);
    _d.CPGF_MD_TEMPLATE _method("sourceDestroyed", &D::ClassType::sourceDestroyed);
    _d.CPGF_MD_TEMPLATE _method("propertyChanged", &D::ClassType::propertyChanged);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
