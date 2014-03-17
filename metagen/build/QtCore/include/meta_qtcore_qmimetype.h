// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QMIMETYPE_H
#define CPGF_META_QTCORE_QMIMETYPE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


inline QMimeType & opErAToRWrapper_QMimeType__opAssign(QMimeType * self, const QMimeType & other) {
    return (*self) = other;
}
inline bool opErAToRWrapper_QMimeType__opEqual(const QMimeType * self, const QMimeType & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QMimeType__opNotEqual(const QMimeType * self, const QMimeType & other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QMimeType(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QMimeType &)>();
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("isDefault", &D::ClassType::isDefault);
    _d.CPGF_MD_TEMPLATE _method("name", &D::ClassType::name);
    _d.CPGF_MD_TEMPLATE _method("comment", &D::ClassType::comment);
    _d.CPGF_MD_TEMPLATE _method("genericIconName", &D::ClassType::genericIconName);
    _d.CPGF_MD_TEMPLATE _method("iconName", &D::ClassType::iconName);
    _d.CPGF_MD_TEMPLATE _method("globPatterns", &D::ClassType::globPatterns);
    _d.CPGF_MD_TEMPLATE _method("parentMimeTypes", &D::ClassType::parentMimeTypes);
    _d.CPGF_MD_TEMPLATE _method("allAncestors", &D::ClassType::allAncestors);
    _d.CPGF_MD_TEMPLATE _method("aliases", &D::ClassType::aliases);
    _d.CPGF_MD_TEMPLATE _method("suffixes", &D::ClassType::suffixes);
    _d.CPGF_MD_TEMPLATE _method("preferredSuffix", &D::ClassType::preferredSuffix);
    _d.CPGF_MD_TEMPLATE _method("inherits", &D::ClassType::inherits, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("filterString", &D::ClassType::filterString);
    _d.CPGF_MD_TEMPLATE _operator<QMimeType & (*)(cpgf::GMetaSelf, const QMimeType &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QMimeType & (*) (QMimeType *, const QMimeType &))&opErAToRWrapper_QMimeType__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QMimeType &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QMimeType *, const QMimeType &))&opErAToRWrapper_QMimeType__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QMimeType &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QMimeType *, const QMimeType &))&opErAToRWrapper_QMimeType__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
