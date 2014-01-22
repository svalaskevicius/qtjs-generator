// Auto generated file, don't modify.

#ifndef __META_QTQML_QQMLINFO_H
#define __META_QTQML_QQMLINFO_H


#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace QtQml;


namespace meta_qtqml { 


template <typename D>
void buildMetaClass_Global_qqmlinfo(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qmlInfo", (QQmlInfo (*) (const QObject *))&qmlInfo);
    _d.CPGF_MD_TEMPLATE _method("qmlInfo", (QQmlInfo (*) (const QObject *, const QQmlError &))&qmlInfo);
    _d.CPGF_MD_TEMPLATE _method("qmlInfo", (QQmlInfo (*) (const QObject *, const QList< QQmlError > &))&qmlInfo);
}


inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, QChar t) {
    return (*self) << t;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, bool t) {
    return (*self) << t;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, char t) {
    return (*self) << t;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, signed short t) {
    return (*self) << t;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, unsigned short t) {
    return (*self) << t;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, signed int t) {
    return (*self) << t;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, unsigned int t) {
    return (*self) << t;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, signed long t) {
    return (*self) << t;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, unsigned long t) {
    return (*self) << t;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, qint64 t) {
    return (*self) << t;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, quint64 t) {
    return (*self) << t;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, float t) {
    return (*self) << t;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, double t) {
    return (*self) << t;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, const char * t) {
    return (*self) << t;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, const QString & t) {
    return (*self) << t;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, const QStringRef & t) {
    return (*self) << t;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, const QLatin1String & t) {
    return (*self) << t;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, const QByteArray & t) {
    return (*self) << t;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, const void * t) {
    return (*self) << t;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, QTextStreamFunction f) {
    return (*self) << f;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, QTextStreamManipulator m) {
    return (*self) << m;
}
inline QQmlInfo & opErAToRWrapper_QQmlInfo__opLeftShift(QQmlInfo * self, const QUrl & t) {
    return (*self) << t;
}


template <typename D>
void buildMetaClass_QQmlInfo(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QQmlInfo &)>();
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, QChar)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, QChar))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, bool)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, bool))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, char)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, char))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, signed short)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, signed short))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, unsigned short)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, unsigned short))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, signed int)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, signed int))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, unsigned int)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, unsigned int))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, signed long)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, signed long))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, unsigned long)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, unsigned long))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, qint64)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, qint64))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, quint64)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, quint64))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, float)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, float))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, double)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, double))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, const char *)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, const char *))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, const QString &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, const QString &))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, const QStringRef &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, const QStringRef &))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, const QLatin1String &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, const QLatin1String &))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, const QByteArray &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, const QByteArray &))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, const void *)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, const void *))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, QTextStreamFunction)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, QTextStreamFunction))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, QTextStreamManipulator)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, QTextStreamManipulator))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QQmlInfo & (*)(cpgf::GMetaSelf, const QUrl &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QQmlInfo & (*) (QQmlInfo *, const QUrl &))&opErAToRWrapper_QQmlInfo__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_qtqml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
