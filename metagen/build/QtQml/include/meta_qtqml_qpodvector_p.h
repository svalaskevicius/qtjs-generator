// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QPODVECTOR_P_H
#define CPGF_META_QTQML_QPODVECTOR_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <class T, int Increment>
inline T & opErAToRWrapper_QPODVector__opArrayGet(QPODVector<T, Increment > * self, int idx) {
    return (*self)[idx];
}
template <class T, int Increment>
inline void opErAToRWrapper_QPODVector__opArraySet(QPODVector<T, Increment > * self, int idx, const typename cpgf::RemoveReference<T & >::Result & OpsEt_vALue) {
    (*self)[idx] = OpsEt_vALue;
}
template <class T, int Increment>
inline QPODVector< T, Increment > & opErAToRWrapper_QPODVector__opLeftShift(QPODVector<T, Increment > * self, const T & v) {
    return (*self) << v;
}


template <typename D, class T, int Increment>
void buildMetaClass_QPODVector(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("at", &D::ClassType::at);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("prepend", &D::ClassType::prepend);
    _d.CPGF_MD_TEMPLATE _method("append", &D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("insert", &D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("reserve", &D::ClassType::reserve);
    _d.CPGF_MD_TEMPLATE _method("insertBlank", &D::ClassType::insertBlank);
    _d.CPGF_MD_TEMPLATE _method("remove", &D::ClassType::remove)
        ._default(copyVariantFromCopyable(1))
    ;
    _d.CPGF_MD_TEMPLATE _method("removeOne", &D::ClassType::removeOne);
    _d.CPGF_MD_TEMPLATE _method("find", &D::ClassType::find);
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("count", &D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("copyAndClear", &D::ClassType::copyAndClear, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<T & (*)(cpgf::GMetaSelf, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (T & (*) (QPODVector<T, Increment > *, int))&opErAToRWrapper_QPODVector__opArrayGet<T, Increment>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _method("_opArraySet", (void (*) (QPODVector<T, Increment > *, int, const typename cpgf::RemoveReference<T & >::Result &))&opErAToRWrapper_QPODVector__opArraySet<T, Increment>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QPODVector< T, Increment > & (*)(cpgf::GMetaSelf, const T &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QPODVector< T, Increment > & (*) (QPODVector<T, Increment > *, const T &))&opErAToRWrapper_QPODVector__opLeftShift<T, Increment>, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
