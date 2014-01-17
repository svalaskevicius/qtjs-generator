// Auto generated file, don't modify.

#ifndef __META_QTCORE_QBITARRAY_H
#define __META_QTCORE_QBITARRAY_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qbitarray(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QBitArray (*)(const QBitArray &, const QBitArray &)>(mopHolder & mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QBitArray (*)(const QBitArray &, const QBitArray &)>(mopHolder | mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QBitArray (*)(const QBitArray &, const QBitArray &)>(mopHolder ^ mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QBitArray &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QBitArray &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QBitArray &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline QBitArray & opErAToRWrapper_QBitArray__opAssign(QBitArray * self, const QBitArray & other) {
    return (*self) = other;
}
inline QBitRef opErAToRWrapper_QBitArray__opArrayGet(QBitArray * self, int i) {
    return (*self)[i];
}
inline bool opErAToRWrapper_QBitArray__opArrayGet(const QBitArray * self, int i) {
    return (*self)[i];
}
inline QBitRef opErAToRWrapper_QBitArray__opArrayGet(QBitArray * self, uint i) {
    return (*self)[i];
}
inline bool opErAToRWrapper_QBitArray__opArrayGet(const QBitArray * self, uint i) {
    return (*self)[i];
}
inline QBitArray & opErAToRWrapper_QBitArray__opBitAndAssign(QBitArray * self, const QBitArray & __arg0) {
    return (*self) &= __arg0;
}
inline QBitArray & opErAToRWrapper_QBitArray__opBitOrAssign(QBitArray * self, const QBitArray & __arg0) {
    return (*self) |= __arg0;
}
inline QBitArray & opErAToRWrapper_QBitArray__opBitXorAssign(QBitArray * self, const QBitArray & __arg0) {
    return (*self) ^= __arg0;
}
inline QBitArray opErAToRWrapper_QBitArray__opBitNot(const QBitArray * self) {
    return ~(*self);
}
inline bool opErAToRWrapper_QBitArray__opEqual(const QBitArray * self, const QBitArray & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QBitArray__opNotEqual(const QBitArray * self, const QBitArray & other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QBitArray(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, bool)>()
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QBitArray &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) () const)&D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) (bool) const)&D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("resize", &D::ClassType::resize);
    _d.CPGF_MD_TEMPLATE _method("detach", &D::ClassType::detach);
    _d.CPGF_MD_TEMPLATE _method("isDetached", &D::ClassType::isDetached);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("testBit", &D::ClassType::testBit);
    _d.CPGF_MD_TEMPLATE _method("setBit", (void (D::ClassType::*) (int))&D::ClassType::setBit);
    _d.CPGF_MD_TEMPLATE _method("setBit", (void (D::ClassType::*) (int, bool))&D::ClassType::setBit);
    _d.CPGF_MD_TEMPLATE _method("clearBit", &D::ClassType::clearBit);
    _d.CPGF_MD_TEMPLATE _method("toggleBit", &D::ClassType::toggleBit);
    _d.CPGF_MD_TEMPLATE _method("at", &D::ClassType::at);
    _d.CPGF_MD_TEMPLATE _method("fill", (bool (D::ClassType::*) (bool, int))&D::ClassType::fill)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("fill", (void (D::ClassType::*) (bool, int, int))&D::ClassType::fill);
    _d.CPGF_MD_TEMPLATE _method("truncate", &D::ClassType::truncate);
    _d.CPGF_MD_TEMPLATE _method("data_ptr", &D::ClassType::data_ptr);
    _d.CPGF_MD_TEMPLATE _operator<QBitArray & (*)(cpgf::GMetaSelf, const QBitArray &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QBitArray & (*) (QBitArray *, const QBitArray &))&opErAToRWrapper_QBitArray__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QBitRef (*)(cpgf::GMetaSelf, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (QBitRef (*) (QBitArray *, int))&opErAToRWrapper_QBitArray__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (bool (*) (const QBitArray *, int))&opErAToRWrapper_QBitArray__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QBitRef (*)(cpgf::GMetaSelf, uint)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (QBitRef (*) (QBitArray *, uint))&opErAToRWrapper_QBitArray__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, uint)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (bool (*) (const QBitArray *, uint))&opErAToRWrapper_QBitArray__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QBitArray & (*)(cpgf::GMetaSelf, const QBitArray &)>(mopHolder &= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opBitAndAssign", (QBitArray & (*) (QBitArray *, const QBitArray &))&opErAToRWrapper_QBitArray__opBitAndAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QBitArray & (*)(cpgf::GMetaSelf, const QBitArray &)>(mopHolder |= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opBitOrAssign", (QBitArray & (*) (QBitArray *, const QBitArray &))&opErAToRWrapper_QBitArray__opBitOrAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QBitArray & (*)(cpgf::GMetaSelf, const QBitArray &)>(mopHolder ^= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opBitXorAssign", (QBitArray & (*) (QBitArray *, const QBitArray &))&opErAToRWrapper_QBitArray__opBitXorAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QBitArray (*)(const cpgf::GMetaSelf &)>(~mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitNot", (QBitArray (*) (const QBitArray *))&opErAToRWrapper_QBitArray__opBitNot, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QBitArray &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QBitArray *, const QBitArray &))&opErAToRWrapper_QBitArray__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QBitArray &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QBitArray *, const QBitArray &))&opErAToRWrapper_QBitArray__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


inline bool opErAToRWrapper_QBitRef__opNot(const QBitRef * self) {
    return !(*self);
}
inline QBitRef & opErAToRWrapper_QBitRef__opAssign(QBitRef * self, const QBitRef & val) {
    return (*self) = val;
}
inline QBitRef & opErAToRWrapper_QBitRef__opAssign(QBitRef * self, bool val) {
    return (*self) = val;
}


template <typename D>
void buildMetaClass_QBitRef(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator< bool (cpgf::GMetaSelf)>(mopHolder());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &)>(!mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNot", (bool (*) (const QBitRef *))&opErAToRWrapper_QBitRef__opNot, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QBitRef & (*)(cpgf::GMetaSelf, const QBitRef &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QBitRef & (*) (QBitRef *, const QBitRef &))&opErAToRWrapper_QBitRef__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QBitRef & (*)(cpgf::GMetaSelf, bool)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QBitRef & (*) (QBitRef *, bool))&opErAToRWrapper_QBitRef__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
