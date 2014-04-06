// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QFINITESTACK_P_H
#define CPGF_META_QTQML_QFINITESTACK_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename T>
inline T & opErAToRWrapper_QFiniteStack__opArrayGet(QFiniteStack<T > * self, int index) {
    return (*self)[index];
}
template <typename T>
inline void opErAToRWrapper_QFiniteStack__opArraySet(QFiniteStack<T > * self, int index, const typename cpgf::RemoveReference<T & >::Result & OpsEt_vALue) {
    (*self)[index] = OpsEt_vALue;
}


template <typename D, typename T>
void buildMetaClass_QFiniteStack(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("deallocate", &D::ClassType::deallocate);
    _d.CPGF_MD_TEMPLATE _method("allocate", &D::ClassType::allocate);
    _d.CPGF_MD_TEMPLATE _method("capacity", &D::ClassType::capacity);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("top", (const T & (D::ClassType::*) () const)&D::ClassType::top);
    _d.CPGF_MD_TEMPLATE _method("top", (T & (D::ClassType::*) ())&D::ClassType::top);
    _d.CPGF_MD_TEMPLATE _method("push", &D::ClassType::push);
    _d.CPGF_MD_TEMPLATE _method("pop", &D::ClassType::pop);
    _d.CPGF_MD_TEMPLATE _method("count", &D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("at", &D::ClassType::at);
    _d.CPGF_MD_TEMPLATE _operator<T & (*)(cpgf::GMetaSelf, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (T & (*) (QFiniteStack<T > *, int))&opErAToRWrapper_QFiniteStack__opArrayGet<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _method("_opArraySet", (void (*) (QFiniteStack<T > *, int, const typename cpgf::RemoveReference<T & >::Result &))&opErAToRWrapper_QFiniteStack__opArraySet<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
