// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQUICKTRANSITION_P_H
#define CPGF_META_QTQML_QQUICKTRANSITION_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QQuickTransition(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("fromState", &D::ClassType::fromState);
    _d.CPGF_MD_TEMPLATE _method("setFromState", &D::ClassType::setFromState, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("toState", &D::ClassType::toState);
    _d.CPGF_MD_TEMPLATE _method("setToState", &D::ClassType::setToState, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("reversible", &D::ClassType::reversible);
    _d.CPGF_MD_TEMPLATE _method("setReversible", &D::ClassType::setReversible);
    _d.CPGF_MD_TEMPLATE _method("enabled", &D::ClassType::enabled);
    _d.CPGF_MD_TEMPLATE _method("setEnabled", &D::ClassType::setEnabled);
    _d.CPGF_MD_TEMPLATE _method("running", &D::ClassType::running);
    _d.CPGF_MD_TEMPLATE _method("animations", &D::ClassType::animations);
    _d.CPGF_MD_TEMPLATE _method("setReversed", &D::ClassType::setReversed);
    _d.CPGF_MD_TEMPLATE _method("fromChanged", &D::ClassType::fromChanged);
    _d.CPGF_MD_TEMPLATE _method("toChanged", &D::ClassType::toChanged);
    _d.CPGF_MD_TEMPLATE _method("reversibleChanged", &D::ClassType::reversibleChanged);
    _d.CPGF_MD_TEMPLATE _method("enabledChanged", &D::ClassType::enabledChanged);
    _d.CPGF_MD_TEMPLATE _method("runningChanged", &D::ClassType::runningChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
