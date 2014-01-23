// Auto generated file, don't modify.

#ifndef __META_QTGUI_QGENERICMATRIX_H
#define __META_QTGUI_QGENERICMATRIX_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qgenericmatrix(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


template <int N, int M, typename T>
inline const T & opErAToRWrapper_QGenericMatrix__opFunction(const QGenericMatrix<N, M, T > * self, int row, int column) {
    return (*self)(row, column);
}
template <int N, int M, typename T>
inline T & opErAToRWrapper_QGenericMatrix__opFunction(QGenericMatrix<N, M, T > * self, int row, int column) {
    return (*self)(row, column);
}
template <int N, int M, typename T>
inline QGenericMatrix< N, M, T > & opErAToRWrapper_QGenericMatrix__opAddAssign(QGenericMatrix<N, M, T > * self, const QGenericMatrix< N, M, T > & other) {
    return (*self) += other;
}
template <int N, int M, typename T>
inline QGenericMatrix< N, M, T > & opErAToRWrapper_QGenericMatrix__opSubAssign(QGenericMatrix<N, M, T > * self, const QGenericMatrix< N, M, T > & other) {
    return (*self) -= other;
}
template <int N, int M, typename T>
inline QGenericMatrix< N, M, T > & opErAToRWrapper_QGenericMatrix__opMulAssign(QGenericMatrix<N, M, T > * self, T factor) {
    return (*self) *= factor;
}
template <int N, int M, typename T>
inline QGenericMatrix< N, M, T > & opErAToRWrapper_QGenericMatrix__opDivAssign(QGenericMatrix<N, M, T > * self, T divisor) {
    return (*self) /= divisor;
}
template <int N, int M, typename T>
inline bool opErAToRWrapper_QGenericMatrix__opEqual(const QGenericMatrix<N, M, T > * self, const QGenericMatrix< N, M, T > & other) {
    return (*self) == other;
}
template <int N, int M, typename T>
inline bool opErAToRWrapper_QGenericMatrix__opNotEqual(const QGenericMatrix<N, M, T > * self, const QGenericMatrix< N, M, T > & other) {
    return (*self) != other;
}


template <typename D, int N, int M, typename T>
void buildMetaClass_QGenericMatrix(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QGenericMatrix< N, M, T > &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const T *)>();
    _d.CPGF_MD_TEMPLATE _method("isIdentity", &D::ClassType::isIdentity);
    _d.CPGF_MD_TEMPLATE _method("setToIdentity", &D::ClassType::setToIdentity);
    _d.CPGF_MD_TEMPLATE _method("fill", &D::ClassType::fill);
    _d.CPGF_MD_TEMPLATE _method("transposed", &D::ClassType::transposed);
    _d.CPGF_MD_TEMPLATE _method("copyDataTo", &D::ClassType::copyDataTo);
    _d.CPGF_MD_TEMPLATE _method("data", (T * (D::ClassType::*) ())&D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("data", (const T * (D::ClassType::*) () const)&D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("constData", &D::ClassType::constData);
    _d.CPGF_MD_TEMPLATE _operator<const T & (*)(int, int)>(mopHolder(mopHolder));
    _d.CPGF_MD_TEMPLATE _method("_opFunction", (const T & (*) (const QGenericMatrix<N, M, T > *, int, int))&opErAToRWrapper_QGenericMatrix__opFunction<N, M, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<T & (*)(int, int)>(mopHolder(mopHolder));
    _d.CPGF_MD_TEMPLATE _method("_opFunction", (T & (*) (QGenericMatrix<N, M, T > *, int, int))&opErAToRWrapper_QGenericMatrix__opFunction<N, M, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QGenericMatrix< N, M, T > & (*)(cpgf::GMetaSelf, const QGenericMatrix< N, M, T > &)>(mopHolder += mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QGenericMatrix< N, M, T > & (*) (QGenericMatrix<N, M, T > *, const QGenericMatrix< N, M, T > &))&opErAToRWrapper_QGenericMatrix__opAddAssign<N, M, T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QGenericMatrix< N, M, T > & (*)(cpgf::GMetaSelf, const QGenericMatrix< N, M, T > &)>(mopHolder -= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (QGenericMatrix< N, M, T > & (*) (QGenericMatrix<N, M, T > *, const QGenericMatrix< N, M, T > &))&opErAToRWrapper_QGenericMatrix__opSubAssign<N, M, T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QGenericMatrix< N, M, T > & (*)(cpgf::GMetaSelf, T)>(mopHolder *= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QGenericMatrix< N, M, T > & (*) (QGenericMatrix<N, M, T > *, T))&opErAToRWrapper_QGenericMatrix__opMulAssign<N, M, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QGenericMatrix< N, M, T > & (*)(cpgf::GMetaSelf, T)>(mopHolder /= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDivAssign", (QGenericMatrix< N, M, T > & (*) (QGenericMatrix<N, M, T > *, T))&opErAToRWrapper_QGenericMatrix__opDivAssign<N, M, T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QGenericMatrix< N, M, T > &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QGenericMatrix<N, M, T > *, const QGenericMatrix< N, M, T > &))&opErAToRWrapper_QGenericMatrix__opEqual<N, M, T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QGenericMatrix< N, M, T > &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QGenericMatrix<N, M, T > *, const QGenericMatrix< N, M, T > &))&opErAToRWrapper_QGenericMatrix__opNotEqual<N, M, T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
