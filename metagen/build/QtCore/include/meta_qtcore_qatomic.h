// Auto generated file, don't modify.

#ifndef __META_QTCORE_QATOMIC_H
#define __META_QTCORE_QATOMIC_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qatomic(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


inline QAtomicInt & opErAToRWrapper_QAtomicInt__opAssign(QAtomicInt * self, const QAtomicInt & other) {
    return (*self) = other;
}


template <typename D>
void buildMetaClass_QAtomicInt(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (int)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QAtomicInt &)>();
    _d.CPGF_MD_TEMPLATE _operator<QAtomicInt & (*)(cpgf::GMetaSelf, const QAtomicInt &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QAtomicInt & (*) (QAtomicInt *, const QAtomicInt &))&opErAToRWrapper_QAtomicInt__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
