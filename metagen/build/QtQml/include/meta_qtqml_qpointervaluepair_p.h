// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QPOINTERVALUEPAIR_P_H
#define CPGF_META_QTQML_QPOINTERVALUEPAIR_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename P, typename V>
inline QPointerValuePair< P, V > & opErAToRWrapper_QPointerValuePair__opAssign(QPointerValuePair<P, V > * self, P * __arg0) {
    return (*self) = __arg0;
}
template <typename P, typename V>
inline P * opErAToRWrapper_QPointerValuePair__opDerefer(const QPointerValuePair<P, V > * self) {
    return *(*self);
}


template <typename D, typename P, typename V>
void buildMetaClass_QPointerValuePair(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (P *)>();
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("flag", &D::ClassType::flag);
    _d.CPGF_MD_TEMPLATE _method("setFlag", &D::ClassType::setFlag);
    _d.CPGF_MD_TEMPLATE _method("clearFlag", &D::ClassType::clearFlag);
    _d.CPGF_MD_TEMPLATE _method("setFlagValue", &D::ClassType::setFlagValue);
    _d.CPGF_MD_TEMPLATE _method("hasValue", &D::ClassType::hasValue);
    _d.CPGF_MD_TEMPLATE _method("value", &D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _method("constValue", &D::ClassType::constValue);
    _d.CPGF_MD_TEMPLATE _operator<QPointerValuePair< P, V > & (*)(cpgf::GMetaSelf, P *)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QPointerValuePair< P, V > & (*) (QPointerValuePair<P, V > *, P *))&opErAToRWrapper_QPointerValuePair__opAssign<P, V>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<P * (*)(const cpgf::GMetaSelf &)>(mopHolder -> mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<P * (*)(const cpgf::GMetaSelf &)>(*mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDerefer", (P * (*) (const QPointerValuePair<P, V > *))&opErAToRWrapper_QPointerValuePair__opDerefer<P, V>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
