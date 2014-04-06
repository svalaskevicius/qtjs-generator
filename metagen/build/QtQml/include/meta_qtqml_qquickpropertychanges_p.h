// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQUICKPROPERTYCHANGES_P_H
#define CPGF_META_QTQML_QQUICKPROPERTYCHANGES_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QQuickPropertyChanges(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("object", &D::ClassType::object);
    _d.CPGF_MD_TEMPLATE _method("setObject", &D::ClassType::setObject);
    _d.CPGF_MD_TEMPLATE _method("restoreEntryValues", &D::ClassType::restoreEntryValues);
    _d.CPGF_MD_TEMPLATE _method("setRestoreEntryValues", &D::ClassType::setRestoreEntryValues);
    _d.CPGF_MD_TEMPLATE _method("isExplicit", &D::ClassType::isExplicit);
    _d.CPGF_MD_TEMPLATE _method("setIsExplicit", &D::ClassType::setIsExplicit);
    _d.CPGF_MD_TEMPLATE _method("actions", &D::ClassType::actions);
    _d.CPGF_MD_TEMPLATE _method("containsProperty", &D::ClassType::containsProperty, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("containsValue", &D::ClassType::containsValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("containsExpression", &D::ClassType::containsExpression, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("changeValue", &D::ClassType::changeValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("changeExpression", &D::ClassType::changeExpression, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("removeProperty", &D::ClassType::removeProperty, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("value", &D::ClassType::value, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("expression", &D::ClassType::expression, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("detachFromState", &D::ClassType::detachFromState);
    _d.CPGF_MD_TEMPLATE _method("attachToState", &D::ClassType::attachToState);
    _d.CPGF_MD_TEMPLATE _method("property", &D::ClassType::property, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
