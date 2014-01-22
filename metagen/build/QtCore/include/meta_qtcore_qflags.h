// Auto generated file, don't modify.

#ifndef __META_QTCORE_QFLAGS_H
#define __META_QTCORE_QFLAGS_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qflags(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


template <typename D>
void buildMetaClass_QFlag(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (int)>();
    _d.CPGF_MD_TEMPLATE _operator< int (cpgf::GMetaSelf)>(mopHolder());
}


template <typename Enum>
inline QFlags<Enum > & opErAToRWrapper_QFlags__opBitAndAssign(QFlags<Enum > * self, int mask) {
    return (*self) &= mask;
}
template <typename Enum>
inline QFlags<Enum > & opErAToRWrapper_QFlags__opBitAndAssign(QFlags<Enum > * self, uint mask) {
    return (*self) &= mask;
}
template <typename Enum>
inline QFlags<Enum > & opErAToRWrapper_QFlags__opBitAndAssign(QFlags<Enum > * self, Enum mask) {
    return (*self) &= mask;
}
template <typename Enum>
inline QFlags<Enum > & opErAToRWrapper_QFlags__opBitOrAssign(QFlags<Enum > * self, QFlags<Enum > f) {
    return (*self) |= f;
}
template <typename Enum>
inline QFlags<Enum > & opErAToRWrapper_QFlags__opBitOrAssign(QFlags<Enum > * self, Enum f) {
    return (*self) |= f;
}
template <typename Enum>
inline QFlags<Enum > & opErAToRWrapper_QFlags__opBitXorAssign(QFlags<Enum > * self, QFlags<Enum > f) {
    return (*self) ^= f;
}
template <typename Enum>
inline QFlags<Enum > & opErAToRWrapper_QFlags__opBitXorAssign(QFlags<Enum > * self, Enum f) {
    return (*self) ^= f;
}
template <typename Enum>
inline QFlags<Enum > opErAToRWrapper_QFlags__opBitOr(const QFlags<Enum > * self, QFlags<Enum > f) {
    return (*self) | f;
}
template <typename Enum>
inline QFlags<Enum > opErAToRWrapper_QFlags__opBitOr(const QFlags<Enum > * self, Enum f) {
    return (*self) | f;
}
template <typename Enum>
inline QFlags<Enum > opErAToRWrapper_QFlags__opBitXor(const QFlags<Enum > * self, QFlags<Enum > f) {
    return (*self) ^ f;
}
template <typename Enum>
inline QFlags<Enum > opErAToRWrapper_QFlags__opBitXor(const QFlags<Enum > * self, Enum f) {
    return (*self) ^ f;
}
template <typename Enum>
inline QFlags<Enum > opErAToRWrapper_QFlags__opBitAnd(const QFlags<Enum > * self, int mask) {
    return (*self) & mask;
}
template <typename Enum>
inline QFlags<Enum > opErAToRWrapper_QFlags__opBitAnd(const QFlags<Enum > * self, uint mask) {
    return (*self) & mask;
}
template <typename Enum>
inline QFlags<Enum > opErAToRWrapper_QFlags__opBitAnd(const QFlags<Enum > * self, Enum f) {
    return (*self) & f;
}
template <typename Enum>
inline QFlags<Enum > opErAToRWrapper_QFlags__opBitNot(const QFlags<Enum > * self) {
    return ~(*self);
}
template <typename Enum>
inline bool opErAToRWrapper_QFlags__opNot(const QFlags<Enum > * self) {
    return !(*self);
}


template <typename D, typename Enum>
void buildMetaClass_QFlags(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (Enum)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (typename QFlags<Enum >::Zero)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QFlag)>();
    _d.CPGF_MD_TEMPLATE _method("testFlag", &D::ClassType::testFlag);
    _d.CPGF_MD_TEMPLATE _operator<QFlags<Enum > & (*)(cpgf::GMetaSelf, int)>(mopHolder &= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitAndAssign", (QFlags<Enum > & (*) (QFlags<Enum > *, int))&opErAToRWrapper_QFlags__opBitAndAssign<Enum>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QFlags<Enum > & (*)(cpgf::GMetaSelf, uint)>(mopHolder &= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitAndAssign", (QFlags<Enum > & (*) (QFlags<Enum > *, uint))&opErAToRWrapper_QFlags__opBitAndAssign<Enum>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QFlags<Enum > & (*)(cpgf::GMetaSelf, Enum)>(mopHolder &= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitAndAssign", (QFlags<Enum > & (*) (QFlags<Enum > *, Enum))&opErAToRWrapper_QFlags__opBitAndAssign<Enum>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QFlags<Enum > & (*)(cpgf::GMetaSelf, QFlags<Enum >)>(mopHolder |= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitOrAssign", (QFlags<Enum > & (*) (QFlags<Enum > *, QFlags<Enum >))&opErAToRWrapper_QFlags__opBitOrAssign<Enum>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QFlags<Enum > & (*)(cpgf::GMetaSelf, Enum)>(mopHolder |= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitOrAssign", (QFlags<Enum > & (*) (QFlags<Enum > *, Enum))&opErAToRWrapper_QFlags__opBitOrAssign<Enum>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QFlags<Enum > & (*)(cpgf::GMetaSelf, QFlags<Enum >)>(mopHolder ^= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitXorAssign", (QFlags<Enum > & (*) (QFlags<Enum > *, QFlags<Enum >))&opErAToRWrapper_QFlags__opBitXorAssign<Enum>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QFlags<Enum > & (*)(cpgf::GMetaSelf, Enum)>(mopHolder ^= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitXorAssign", (QFlags<Enum > & (*) (QFlags<Enum > *, Enum))&opErAToRWrapper_QFlags__opBitXorAssign<Enum>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QFlags<Enum > (*)(const cpgf::GMetaSelf &, QFlags<Enum >)>(mopHolder | mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitOr", (QFlags<Enum > (*) (const QFlags<Enum > *, QFlags<Enum >))&opErAToRWrapper_QFlags__opBitOr<Enum>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QFlags<Enum > (*)(const cpgf::GMetaSelf &, Enum)>(mopHolder | mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitOr", (QFlags<Enum > (*) (const QFlags<Enum > *, Enum))&opErAToRWrapper_QFlags__opBitOr<Enum>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QFlags<Enum > (*)(const cpgf::GMetaSelf &, QFlags<Enum >)>(mopHolder ^ mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitXor", (QFlags<Enum > (*) (const QFlags<Enum > *, QFlags<Enum >))&opErAToRWrapper_QFlags__opBitXor<Enum>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QFlags<Enum > (*)(const cpgf::GMetaSelf &, Enum)>(mopHolder ^ mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitXor", (QFlags<Enum > (*) (const QFlags<Enum > *, Enum))&opErAToRWrapper_QFlags__opBitXor<Enum>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QFlags<Enum > (*)(const cpgf::GMetaSelf &, int)>(mopHolder & mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitAnd", (QFlags<Enum > (*) (const QFlags<Enum > *, int))&opErAToRWrapper_QFlags__opBitAnd<Enum>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QFlags<Enum > (*)(const cpgf::GMetaSelf &, uint)>(mopHolder & mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitAnd", (QFlags<Enum > (*) (const QFlags<Enum > *, uint))&opErAToRWrapper_QFlags__opBitAnd<Enum>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QFlags<Enum > (*)(const cpgf::GMetaSelf &, Enum)>(mopHolder & mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitAnd", (QFlags<Enum > (*) (const QFlags<Enum > *, Enum))&opErAToRWrapper_QFlags__opBitAnd<Enum>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QFlags<Enum > (*)(const cpgf::GMetaSelf &)>(~mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitNot", (QFlags<Enum > (*) (const QFlags<Enum > *))&opErAToRWrapper_QFlags__opBitNot<Enum>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &)>(!mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNot", (bool (*) (const QFlags<Enum > *))&opErAToRWrapper_QFlags__opNot<Enum>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


template <typename D>
void buildMetaClass_QIncompatibleFlag(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (int)>();
    _d.CPGF_MD_TEMPLATE _operator< int (cpgf::GMetaSelf)>(mopHolder());
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
