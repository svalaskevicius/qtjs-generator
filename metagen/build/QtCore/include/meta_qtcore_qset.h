// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QSET_H
#define CPGF_META_QTCORE_QSET_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename T>
inline QMutableSetIterator & opErAToRWrapper_QMutableSetIterator__opAssign(QMutableSetIterator<T > * self, QSet< T > & container) {
    return (*self) = container;
}


template <typename D, typename T>
void buildMetaClass_QMutableSetIterator(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QSet< T > &)>();
    _d.CPGF_MD_TEMPLATE _method("toFront", &D::ClassType::toFront);
    _d.CPGF_MD_TEMPLATE _method("toBack", &D::ClassType::toBack);
    _d.CPGF_MD_TEMPLATE _method("hasNext", &D::ClassType::hasNext);
    _d.CPGF_MD_TEMPLATE _method("next", &D::ClassType::next);
    _d.CPGF_MD_TEMPLATE _method("peekNext", &D::ClassType::peekNext);
    _d.CPGF_MD_TEMPLATE _method("hasPrevious", &D::ClassType::hasPrevious);
    _d.CPGF_MD_TEMPLATE _method("previous", &D::ClassType::previous);
    _d.CPGF_MD_TEMPLATE _method("peekPrevious", &D::ClassType::peekPrevious);
    _d.CPGF_MD_TEMPLATE _method("remove", &D::ClassType::remove);
    _d.CPGF_MD_TEMPLATE _method("value", &D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _method("findNext", &D::ClassType::findNext);
    _d.CPGF_MD_TEMPLATE _method("findPrevious", &D::ClassType::findPrevious);
    _d.CPGF_MD_TEMPLATE _operator<QMutableSetIterator & (*)(cpgf::GMetaSelf, QSet< T > &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QMutableSetIterator & (*) (QMutableSetIterator<T > *, QSet< T > &))&opErAToRWrapper_QMutableSetIterator__opAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
