// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QFLAGPOINTER_P_H
#define CPGF_META_QTQML_QFLAGPOINTER_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename T, typename T2>
inline QBiPointer< T, T2 > & opErAToRWrapper_QBiPointer__opAssign(QBiPointer<T, T2 > * self, const QBiPointer< T, T2 > & o) {
    return (*self) = o;
}
template <typename T, typename T2>
inline QBiPointer< T, T2 > & opErAToRWrapper_QBiPointer__opAssign(QBiPointer<T, T2 > * self, T * __arg0) {
    return (*self) = __arg0;
}
template <typename T, typename T2>
inline QBiPointer< T, T2 > & opErAToRWrapper_QBiPointer__opAssign(QBiPointer<T, T2 > * self, T2 * __arg0) {
    return (*self) = __arg0;
}


template <typename D, typename T, typename T2>
void buildMetaClass_QBiPointer(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (T *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (T2 *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QBiPointer< T, T2 > &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("isT1", &D::ClassType::isT1);
    _d.CPGF_MD_TEMPLATE _method("isT2", &D::ClassType::isT2);
    _d.CPGF_MD_TEMPLATE _method("flag", &D::ClassType::flag);
    _d.CPGF_MD_TEMPLATE _method("setFlag", &D::ClassType::setFlag);
    _d.CPGF_MD_TEMPLATE _method("clearFlag", &D::ClassType::clearFlag);
    _d.CPGF_MD_TEMPLATE _method("setFlagValue", &D::ClassType::setFlagValue);
    _d.CPGF_MD_TEMPLATE _method("asT1", &D::ClassType::asT1);
    _d.CPGF_MD_TEMPLATE _method("asT2", &D::ClassType::asT2);
    _d.CPGF_MD_TEMPLATE _operator<QBiPointer< T, T2 > & (*)(cpgf::GMetaSelf, const QBiPointer< T, T2 > &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QBiPointer< T, T2 > & (*) (QBiPointer<T, T2 > *, const QBiPointer< T, T2 > &))&opErAToRWrapper_QBiPointer__opAssign<T, T2>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QBiPointer< T, T2 > & (*)(cpgf::GMetaSelf, T *)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QBiPointer< T, T2 > & (*) (QBiPointer<T, T2 > *, T *))&opErAToRWrapper_QBiPointer__opAssign<T, T2>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QBiPointer< T, T2 > & (*)(cpgf::GMetaSelf, T2 *)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QBiPointer< T, T2 > & (*) (QBiPointer<T, T2 > *, T2 *))&opErAToRWrapper_QBiPointer__opAssign<T, T2>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


template <typename T>
inline QFlagPointer< T > & opErAToRWrapper_QFlagPointer__opAssign(QFlagPointer<T > * self, const QFlagPointer & o) {
    return (*self) = o;
}
template <typename T>
inline QFlagPointer< T > & opErAToRWrapper_QFlagPointer__opAssign(QFlagPointer<T > * self, T * __arg0) {
    return (*self) = __arg0;
}
template <typename T>
inline T * opErAToRWrapper_QFlagPointer__opDerefer(const QFlagPointer<T > * self) {
    return *(*self);
}


template <typename D, typename T>
void buildMetaClass_QFlagPointer(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (T *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QFlagPointer< T > &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("flag", &D::ClassType::flag);
    _d.CPGF_MD_TEMPLATE _method("setFlag", &D::ClassType::setFlag);
    _d.CPGF_MD_TEMPLATE _method("clearFlag", &D::ClassType::clearFlag);
    _d.CPGF_MD_TEMPLATE _method("setFlagValue", &D::ClassType::setFlagValue);
    _d.CPGF_MD_TEMPLATE _method("flag2", &D::ClassType::flag2);
    _d.CPGF_MD_TEMPLATE _method("setFlag2", &D::ClassType::setFlag2);
    _d.CPGF_MD_TEMPLATE _method("clearFlag2", &D::ClassType::clearFlag2);
    _d.CPGF_MD_TEMPLATE _method("setFlag2Value", &D::ClassType::setFlag2Value);
    _d.CPGF_MD_TEMPLATE _method("data", &D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _operator<QFlagPointer< T > & (*)(cpgf::GMetaSelf, const QFlagPointer &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QFlagPointer< T > & (*) (QFlagPointer<T > *, const QFlagPointer &))&opErAToRWrapper_QFlagPointer__opAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QFlagPointer< T > & (*)(cpgf::GMetaSelf, T *)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QFlagPointer< T > & (*) (QFlagPointer<T > *, T *))&opErAToRWrapper_QFlagPointer__opAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<T * (*)(const cpgf::GMetaSelf &)>(mopHolder -> mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<T * (*)(const cpgf::GMetaSelf &)>(*mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDerefer", (T * (*) (const QFlagPointer<T > *))&opErAToRWrapper_QFlagPointer__opDerefer<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
