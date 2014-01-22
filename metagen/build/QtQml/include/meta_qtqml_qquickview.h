// Auto generated file, don't modify.

#ifndef __META_QTQML_QQUICKVIEW_H
#define __META_QTQML_QQUICKVIEW_H


#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtqml { 


template <typename D>
void buildMetaClass_QQuickView(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWindow *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQmlEngine *, QWindow *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QUrl &, QWindow *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("source", &D::ClassType::source);
    _d.CPGF_MD_TEMPLATE _method("engine", &D::ClassType::engine);
    _d.CPGF_MD_TEMPLATE _method("rootContext", &D::ClassType::rootContext);
    _d.CPGF_MD_TEMPLATE _method("rootObject", &D::ClassType::rootObject);
    _d.CPGF_MD_TEMPLATE _method("resizeMode", &D::ClassType::resizeMode);
    _d.CPGF_MD_TEMPLATE _method("setResizeMode", &D::ClassType::setResizeMode);
    _d.CPGF_MD_TEMPLATE _method("status", &D::ClassType::status);
    _d.CPGF_MD_TEMPLATE _method("errors", &D::ClassType::errors);
    _d.CPGF_MD_TEMPLATE _method("sizeHint", &D::ClassType::sizeHint);
    _d.CPGF_MD_TEMPLATE _method("initialSize", &D::ClassType::initialSize);
    _d.CPGF_MD_TEMPLATE _method("setSource", &D::ClassType::setSource, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setContent", &D::ClassType::setContent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("statusChanged", &D::ClassType::statusChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ResizeMode>("ResizeMode")
        ._element("SizeViewToRootObject", D::ClassType::SizeViewToRootObject)
        ._element("SizeRootObjectToView", D::ClassType::SizeRootObjectToView)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Status>("Status")
        ._element("Null", D::ClassType::Null)
        ._element("Ready", D::ClassType::Ready)
        ._element("Loading", D::ClassType::Loading)
        ._element("Error", D::ClassType::Error)
    ;
}


} // namespace meta_qtqml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
