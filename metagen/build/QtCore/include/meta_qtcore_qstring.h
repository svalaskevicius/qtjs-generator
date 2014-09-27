// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QSTRING_H
#define CPGF_META_QTCORE_QSTRING_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace Qt;


namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qstring(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtCore_20")
    ;
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(QString::Null, QString::Null)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(QString::Null, const QString &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QString &, QString::Null)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(QString::Null, QString::Null)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(QString::Null, const QString &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QString &, QString::Null)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(QLatin1String, QLatin1String)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(QLatin1String, QLatin1String)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(QLatin1String, QLatin1String)>(mopHolder < mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(QLatin1String, QLatin1String)>(mopHolder <= mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(QLatin1String, QLatin1String)>(mopHolder > mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(QLatin1String, QLatin1String)>(mopHolder >= mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, const QString &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, const QString &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, const QString &)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, const QString &)>(mopHolder > mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, const QString &)>(mopHolder <= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, const QString &)>(mopHolder >= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, QLatin1String)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, QLatin1String)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, QLatin1String)>(mopHolder < mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, QLatin1String)>(mopHolder > mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, QLatin1String)>(mopHolder <= mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, QLatin1String)>(mopHolder >= mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QString (*)(const QString &, const QString &)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QString (*)(const QString &, QChar)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<const QString (*)(QChar, const QString &)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QString (*)(const QString &, const char *)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<const QString (*)(const char *, const QString &)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QString (*)(char, const QString &)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QString (*)(const QString &, char)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<const QString (*)(const QByteArray &, const QString &)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QString (*)(const QString &, const QByteArray &)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QString &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QString &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QStringRef &, const QStringRef &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QStringRef &, const QStringRef &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QString &, const QStringRef &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QString &, const QStringRef &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QStringRef &, const QString &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QStringRef &, const QString &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(QLatin1String, const QStringRef &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(QLatin1String, const QStringRef &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QStringRef &, QLatin1String)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QStringRef &, QLatin1String)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QStringRef &, const QStringRef &)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QStringRef &, const QStringRef &)>(mopHolder > mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QStringRef &, const QStringRef &)>(mopHolder <= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QStringRef &, const QStringRef &)>(mopHolder >= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, const QStringRef &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, const QStringRef &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, const QStringRef &)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, const QStringRef &)>(mopHolder <= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, const QStringRef &)>(mopHolder > mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, const QStringRef &)>(mopHolder >= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline QCharRef & opErAToRWrapper_QCharRef__opAssign(QCharRef * self, QChar c) {
    return (*self) = c;
}
inline QCharRef & opErAToRWrapper_QCharRef__opAssign(QCharRef * self, char c) {
    return (*self) = c;
}
inline QCharRef & opErAToRWrapper_QCharRef__opAssign(QCharRef * self, uchar c) {
    return (*self) = c;
}
inline QCharRef & opErAToRWrapper_QCharRef__opAssign(QCharRef * self, const QCharRef & c) {
    return (*self) = c;
}
inline QCharRef & opErAToRWrapper_QCharRef__opAssign(QCharRef * self, ushort rc) {
    return (*self) = rc;
}
inline QCharRef & opErAToRWrapper_QCharRef__opAssign(QCharRef * self, short rc) {
    return (*self) = rc;
}
inline QCharRef & opErAToRWrapper_QCharRef__opAssign(QCharRef * self, uint rc) {
    return (*self) = rc;
}
inline QCharRef & opErAToRWrapper_QCharRef__opAssign(QCharRef * self, int rc) {
    return (*self) = rc;
}


template <typename D>
void buildMetaClass_QCharRef(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("isPrint", &D::ClassType::isPrint);
    _d.CPGF_MD_TEMPLATE _method("isPunct", &D::ClassType::isPunct);
    _d.CPGF_MD_TEMPLATE _method("isSpace", &D::ClassType::isSpace);
    _d.CPGF_MD_TEMPLATE _method("isMark", &D::ClassType::isMark);
    _d.CPGF_MD_TEMPLATE _method("isLetter", &D::ClassType::isLetter);
    _d.CPGF_MD_TEMPLATE _method("isNumber", &D::ClassType::isNumber);
    _d.CPGF_MD_TEMPLATE _method("isLetterOrNumber", &D::ClassType::isLetterOrNumber);
    _d.CPGF_MD_TEMPLATE _method("isDigit", &D::ClassType::isDigit);
    _d.CPGF_MD_TEMPLATE _method("isLower", &D::ClassType::isLower);
    _d.CPGF_MD_TEMPLATE _method("isUpper", &D::ClassType::isUpper);
    _d.CPGF_MD_TEMPLATE _method("isTitleCase", &D::ClassType::isTitleCase);
    _d.CPGF_MD_TEMPLATE _method("digitValue", &D::ClassType::digitValue);
    _d.CPGF_MD_TEMPLATE _method("toLower", &D::ClassType::toLower);
    _d.CPGF_MD_TEMPLATE _method("toUpper", &D::ClassType::toUpper);
    _d.CPGF_MD_TEMPLATE _method("toTitleCase", &D::ClassType::toTitleCase);
    _d.CPGF_MD_TEMPLATE _method("category", &D::ClassType::category);
    _d.CPGF_MD_TEMPLATE _method("direction", &D::ClassType::direction);
    _d.CPGF_MD_TEMPLATE _method("joiningType", &D::ClassType::joiningType);
    _d.CPGF_MD_TEMPLATE _method("hasMirrored", &D::ClassType::hasMirrored);
    _d.CPGF_MD_TEMPLATE _method("mirroredChar", &D::ClassType::mirroredChar);
    _d.CPGF_MD_TEMPLATE _method("decomposition", &D::ClassType::decomposition);
    _d.CPGF_MD_TEMPLATE _method("decompositionTag", &D::ClassType::decompositionTag);
    _d.CPGF_MD_TEMPLATE _method("combiningClass", &D::ClassType::combiningClass);
    _d.CPGF_MD_TEMPLATE _method("script", &D::ClassType::script);
    _d.CPGF_MD_TEMPLATE _method("unicodeVersion", &D::ClassType::unicodeVersion);
    _d.CPGF_MD_TEMPLATE _method("cell", &D::ClassType::cell);
    _d.CPGF_MD_TEMPLATE _method("row", &D::ClassType::row);
    _d.CPGF_MD_TEMPLATE _method("setCell", &D::ClassType::setCell);
    _d.CPGF_MD_TEMPLATE _method("setRow", &D::ClassType::setRow);
    _d.CPGF_MD_TEMPLATE _method("toLatin1", &D::ClassType::toLatin1);
    _d.CPGF_MD_TEMPLATE _method("unicode", (ushort (D::ClassType::*) () const)&D::ClassType::unicode);
    _d.CPGF_MD_TEMPLATE _method("unicode", (ushort & (D::ClassType::*) ())&D::ClassType::unicode);
    _d.CPGF_MD_TEMPLATE _operator< QChar (cpgf::GMetaSelf)>(mopHolder());
    _d.CPGF_MD_TEMPLATE _operator<QCharRef & (*)(cpgf::GMetaSelf, QChar)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QCharRef & (*) (QCharRef *, QChar))&opErAToRWrapper_QCharRef__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QCharRef & (*)(cpgf::GMetaSelf, char)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QCharRef & (*) (QCharRef *, char))&opErAToRWrapper_QCharRef__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QCharRef & (*)(cpgf::GMetaSelf, uchar)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QCharRef & (*) (QCharRef *, uchar))&opErAToRWrapper_QCharRef__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QCharRef & (*)(cpgf::GMetaSelf, const QCharRef &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QCharRef & (*) (QCharRef *, const QCharRef &))&opErAToRWrapper_QCharRef__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QCharRef & (*)(cpgf::GMetaSelf, ushort)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QCharRef & (*) (QCharRef *, ushort))&opErAToRWrapper_QCharRef__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QCharRef & (*)(cpgf::GMetaSelf, short)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QCharRef & (*) (QCharRef *, short))&opErAToRWrapper_QCharRef__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QCharRef & (*)(cpgf::GMetaSelf, uint)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QCharRef & (*) (QCharRef *, uint))&opErAToRWrapper_QCharRef__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QCharRef & (*)(cpgf::GMetaSelf, int)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QCharRef & (*) (QCharRef *, int))&opErAToRWrapper_QCharRef__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


inline bool opErAToRWrapper_QLatin1String__opEqual(const QLatin1String * self, const QString & s) {
    return (*self) == s;
}
inline bool opErAToRWrapper_QLatin1String__opNotEqual(const QLatin1String * self, const QString & s) {
    return (*self) != s;
}
inline bool opErAToRWrapper_QLatin1String__opGreater(const QLatin1String * self, const QString & s) {
    return (*self) > s;
}
inline bool opErAToRWrapper_QLatin1String__opLess(const QLatin1String * self, const QString & s) {
    return (*self) < s;
}
inline bool opErAToRWrapper_QLatin1String__opGreaterEqual(const QLatin1String * self, const QString & s) {
    return (*self) >= s;
}
inline bool opErAToRWrapper_QLatin1String__opLessEqual(const QLatin1String * self, const QString & s) {
    return (*self) <= s;
}
inline bool opErAToRWrapper_QLatin1String__opEqual(const QLatin1String * self, const char * s) {
    return (*self) == s;
}
inline bool opErAToRWrapper_QLatin1String__opNotEqual(const QLatin1String * self, const char * s) {
    return (*self) != s;
}
inline bool opErAToRWrapper_QLatin1String__opLess(const QLatin1String * self, const char * s) {
    return (*self) < s;
}
inline bool opErAToRWrapper_QLatin1String__opGreater(const QLatin1String * self, const char * s) {
    return (*self) > s;
}
inline bool opErAToRWrapper_QLatin1String__opLessEqual(const QLatin1String * self, const char * s) {
    return (*self) <= s;
}
inline bool opErAToRWrapper_QLatin1String__opGreaterEqual(const QLatin1String * self, const char * s) {
    return (*self) >= s;
}
inline bool opErAToRWrapper_QLatin1String__opEqual(const QLatin1String * self, const QByteArray & s) {
    return (*self) == s;
}
inline bool opErAToRWrapper_QLatin1String__opNotEqual(const QLatin1String * self, const QByteArray & s) {
    return (*self) != s;
}
inline bool opErAToRWrapper_QLatin1String__opLess(const QLatin1String * self, const QByteArray & s) {
    return (*self) < s;
}
inline bool opErAToRWrapper_QLatin1String__opGreater(const QLatin1String * self, const QByteArray & s) {
    return (*self) > s;
}
inline bool opErAToRWrapper_QLatin1String__opLessEqual(const QLatin1String * self, const QByteArray & s) {
    return (*self) <= s;
}
inline bool opErAToRWrapper_QLatin1String__opGreaterEqual(const QLatin1String * self, const QByteArray & s) {
    return (*self) >= s;
}


template <typename D>
void buildMetaClass_QLatin1String(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const char *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const char *, int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QByteArray &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("latin1", &D::ClassType::latin1);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("data", &D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QString &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QLatin1String *, const QString &))&opErAToRWrapper_QLatin1String__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QString &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QLatin1String *, const QString &))&opErAToRWrapper_QLatin1String__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QString &)>(mopHolder > mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const QLatin1String *, const QString &))&opErAToRWrapper_QLatin1String__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QString &)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QLatin1String *, const QString &))&opErAToRWrapper_QLatin1String__opLess, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QString &)>(mopHolder >= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const QLatin1String *, const QString &))&opErAToRWrapper_QLatin1String__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QString &)>(mopHolder <= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const QLatin1String *, const QString &))&opErAToRWrapper_QLatin1String__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const char *)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QLatin1String *, const char *))&opErAToRWrapper_QLatin1String__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const char *)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QLatin1String *, const char *))&opErAToRWrapper_QLatin1String__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const char *)>(mopHolder < mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QLatin1String *, const char *))&opErAToRWrapper_QLatin1String__opLess, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const char *)>(mopHolder > mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const QLatin1String *, const char *))&opErAToRWrapper_QLatin1String__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const char *)>(mopHolder <= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const QLatin1String *, const char *))&opErAToRWrapper_QLatin1String__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const char *)>(mopHolder >= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const QLatin1String *, const char *))&opErAToRWrapper_QLatin1String__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QByteArray &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QLatin1String *, const QByteArray &))&opErAToRWrapper_QLatin1String__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QByteArray &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QLatin1String *, const QByteArray &))&opErAToRWrapper_QLatin1String__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QByteArray &)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QLatin1String *, const QByteArray &))&opErAToRWrapper_QLatin1String__opLess, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QByteArray &)>(mopHolder > mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const QLatin1String *, const QByteArray &))&opErAToRWrapper_QLatin1String__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QByteArray &)>(mopHolder <= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const QLatin1String *, const QByteArray &))&opErAToRWrapper_QLatin1String__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QByteArray &)>(mopHolder >= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const QLatin1String *, const QByteArray &))&opErAToRWrapper_QLatin1String__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


template <typename D, int N>
void buildMetaClass_QStaticStringData(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("str", &D::ClassType::str);
    _d.CPGF_MD_TEMPLATE _field("data", &D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("data_ptr", &D::ClassType::data_ptr);
}


inline QString & opErAToRWrapper_QString__opAssign(QString * self, QChar c) {
    return (*self) = c;
}
inline QString & opErAToRWrapper_QString__opAssign(QString * self, const QString & __arg0) {
    return (*self) = __arg0;
}
inline QString & opErAToRWrapper_QString__opAssign(QString * self, QLatin1String latin1) {
    return (*self) = latin1;
}
inline const QChar opErAToRWrapper_QString__opArrayGet(const QString * self, int i) {
    return (*self)[i];
}
inline QCharRef opErAToRWrapper_QString__opArrayGet(QString * self, int i) {
    return (*self)[i];
}
inline const QChar opErAToRWrapper_QString__opArrayGet(const QString * self, uint i) {
    return (*self)[i];
}
inline QCharRef opErAToRWrapper_QString__opArrayGet(QString * self, uint i) {
    return (*self)[i];
}
inline QString & opErAToRWrapper_QString__opAddAssign(QString * self, QChar c) {
    return (*self) += c;
}
inline QString & opErAToRWrapper_QString__opAddAssign(QString * self, QChar::SpecialCharacter c) {
    return (*self) += c;
}
inline QString & opErAToRWrapper_QString__opAddAssign(QString * self, const QString & s) {
    return (*self) += s;
}
inline QString & opErAToRWrapper_QString__opAddAssign(QString * self, const QStringRef & s) {
    return (*self) += s;
}
inline QString & opErAToRWrapper_QString__opAddAssign(QString * self, QLatin1String s) {
    return (*self) += s;
}
inline bool opErAToRWrapper_QString__opEqual(const QString * self, QLatin1String s) {
    return (*self) == s;
}
inline bool opErAToRWrapper_QString__opLess(const QString * self, QLatin1String s) {
    return (*self) < s;
}
inline bool opErAToRWrapper_QString__opGreater(const QString * self, QLatin1String s) {
    return (*self) > s;
}
inline bool opErAToRWrapper_QString__opNotEqual(const QString * self, QLatin1String s) {
    return (*self) != s;
}
inline bool opErAToRWrapper_QString__opLessEqual(const QString * self, QLatin1String s) {
    return (*self) <= s;
}
inline bool opErAToRWrapper_QString__opGreaterEqual(const QString * self, QLatin1String s) {
    return (*self) >= s;
}
inline QString & opErAToRWrapper_QString__opAssign(QString * self, const char * ch) {
    return (*self) = ch;
}
inline QString & opErAToRWrapper_QString__opAssign(QString * self, const QByteArray & a) {
    return (*self) = a;
}
inline QString & opErAToRWrapper_QString__opAssign(QString * self, char c) {
    return (*self) = c;
}
inline QString & opErAToRWrapper_QString__opAddAssign(QString * self, const char * s) {
    return (*self) += s;
}
inline QString & opErAToRWrapper_QString__opAddAssign(QString * self, const QByteArray & s) {
    return (*self) += s;
}
inline QString & opErAToRWrapper_QString__opAddAssign(QString * self, char c) {
    return (*self) += c;
}
inline bool opErAToRWrapper_QString__opEqual(const QString * self, const char * s) {
    return (*self) == s;
}
inline bool opErAToRWrapper_QString__opNotEqual(const QString * self, const char * s) {
    return (*self) != s;
}
inline bool opErAToRWrapper_QString__opLess(const QString * self, const char * s) {
    return (*self) < s;
}
inline bool opErAToRWrapper_QString__opLessEqual(const QString * self, const char * s) {
    return (*self) <= s;
}
inline bool opErAToRWrapper_QString__opGreater(const QString * self, const char * s) {
    return (*self) > s;
}
inline bool opErAToRWrapper_QString__opGreaterEqual(const QString * self, const char * s) {
    return (*self) >= s;
}
inline bool opErAToRWrapper_QString__opEqual(const QString * self, const QByteArray & s) {
    return (*self) == s;
}
inline bool opErAToRWrapper_QString__opNotEqual(const QString * self, const QByteArray & s) {
    return (*self) != s;
}
inline bool opErAToRWrapper_QString__opLess(const QString * self, const QByteArray & s) {
    return (*self) < s;
}
inline bool opErAToRWrapper_QString__opGreater(const QString * self, const QByteArray & s) {
    return (*self) > s;
}
inline bool opErAToRWrapper_QString__opLessEqual(const QString * self, const QByteArray & s) {
    return (*self) <= s;
}
inline bool opErAToRWrapper_QString__opGreaterEqual(const QString * self, const QByteArray & s) {
    return (*self) >= s;
}
inline QString & opErAToRWrapper_QString__opAssign(QString * self, const QString::Null& __arg0) {
    return (*self) = __arg0;
}


template <typename D>
void buildMetaClass_QString(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QChar *, int)>()
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QChar)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, QChar)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QLatin1String)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const char *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QByteArray &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString::Null&)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, Qt::Initialization)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QStringDataPtr)>();
    _d.CPGF_MD_TEMPLATE _field("null", &D::ClassType::null);
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) () const)&D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("length", &D::ClassType::length);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("resize", &D::ClassType::resize);
    _d.CPGF_MD_TEMPLATE _method("fill", &D::ClassType::fill)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("truncate", &D::ClassType::truncate);
    _d.CPGF_MD_TEMPLATE _method("chop", &D::ClassType::chop);
    _d.CPGF_MD_TEMPLATE _method("capacity", &D::ClassType::capacity);
    _d.CPGF_MD_TEMPLATE _method("reserve", &D::ClassType::reserve);
    _d.CPGF_MD_TEMPLATE _method("squeeze", &D::ClassType::squeeze);
    _d.CPGF_MD_TEMPLATE _method("unicode", &D::ClassType::unicode);
    _d.CPGF_MD_TEMPLATE _method("data", (QChar * (D::ClassType::*) ())&D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("data", (const QChar * (D::ClassType::*) () const)&D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("constData", &D::ClassType::constData);
    _d.CPGF_MD_TEMPLATE _method("detach", &D::ClassType::detach);
    _d.CPGF_MD_TEMPLATE _method("isDetached", &D::ClassType::isDetached);
    _d.CPGF_MD_TEMPLATE _method("isSharedWith", &D::ClassType::isSharedWith, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("at", &D::ClassType::at);
    _d.CPGF_MD_TEMPLATE _method("arg", (QString (D::ClassType::*) (qlonglong, int, int, QChar) const)&D::ClassType::arg)
        ._default(copyVariantFromCopyable(QLatin1Char(' ')))
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("arg", (QString (D::ClassType::*) (qulonglong, int, int, QChar) const)&D::ClassType::arg)
        ._default(copyVariantFromCopyable(QLatin1Char(' ')))
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("arg", (QString (D::ClassType::*) (long, int, int, QChar) const)&D::ClassType::arg)
        ._default(copyVariantFromCopyable(QLatin1Char(' ')))
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("arg", (QString (D::ClassType::*) (ulong, int, int, QChar) const)&D::ClassType::arg)
        ._default(copyVariantFromCopyable(QLatin1Char(' ')))
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("arg", (QString (D::ClassType::*) (int, int, int, QChar) const)&D::ClassType::arg)
        ._default(copyVariantFromCopyable(QLatin1Char(' ')))
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("arg", (QString (D::ClassType::*) (uint, int, int, QChar) const)&D::ClassType::arg)
        ._default(copyVariantFromCopyable(QLatin1Char(' ')))
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("arg", (QString (D::ClassType::*) (short, int, int, QChar) const)&D::ClassType::arg)
        ._default(copyVariantFromCopyable(QLatin1Char(' ')))
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("arg", (QString (D::ClassType::*) (ushort, int, int, QChar) const)&D::ClassType::arg)
        ._default(copyVariantFromCopyable(QLatin1Char(' ')))
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("arg", (QString (D::ClassType::*) (double, int, char, int, QChar) const)&D::ClassType::arg)
        ._default(copyVariantFromCopyable(QLatin1Char(' ')))
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable('g'))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("arg", (QString (D::ClassType::*) (char, int, QChar) const)&D::ClassType::arg)
        ._default(copyVariantFromCopyable(QLatin1Char(' ')))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("arg", (QString (D::ClassType::*) (QChar, int, QChar) const)&D::ClassType::arg)
        ._default(copyVariantFromCopyable(QLatin1Char(' ')))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("arg", (QString (D::ClassType::*) (const QString &, int, QChar) const)&D::ClassType::arg, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QLatin1Char(' ')))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("arg", (QString (D::ClassType::*) (const QString &, const QString &) const)&D::ClassType::arg, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("arg", (QString (D::ClassType::*) (const QString &, const QString &, const QString &) const)&D::ClassType::arg, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("arg", (QString (D::ClassType::*) (const QString &, const QString &, const QString &, const QString &) const)&D::ClassType::arg, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3> >());
    _d.CPGF_MD_TEMPLATE _method("arg", (QString (D::ClassType::*) (const QString &, const QString &, const QString &, const QString &, const QString &) const)&D::ClassType::arg, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3>, cpgf::GMetaRuleCopyConstReference<4> >());
    _d.CPGF_MD_TEMPLATE _method("arg", (QString (D::ClassType::*) (const QString &, const QString &, const QString &, const QString &, const QString &, const QString &) const)&D::ClassType::arg, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3>, cpgf::GMetaRuleCopyConstReference<4>, cpgf::GMetaRuleCopyConstReference<5> >());
    _d.CPGF_MD_TEMPLATE _method("arg", (QString (D::ClassType::*) (const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &) const)&D::ClassType::arg, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3>, cpgf::GMetaRuleCopyConstReference<4>, cpgf::GMetaRuleCopyConstReference<5>, cpgf::GMetaRuleCopyConstReference<6> >());
    _d.CPGF_MD_TEMPLATE _method("arg", (QString (D::ClassType::*) (const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &) const)&D::ClassType::arg, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3>, cpgf::GMetaRuleCopyConstReference<4>, cpgf::GMetaRuleCopyConstReference<5>, cpgf::GMetaRuleCopyConstReference<6>, cpgf::GMetaRuleCopyConstReference<7> >());
    _d.CPGF_MD_TEMPLATE _method("arg", (QString (D::ClassType::*) (const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &, const QString &) const)&D::ClassType::arg, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3>, cpgf::GMetaRuleCopyConstReference<4>, cpgf::GMetaRuleCopyConstReference<5>, cpgf::GMetaRuleCopyConstReference<6>, cpgf::GMetaRuleCopyConstReference<7>, cpgf::GMetaRuleCopyConstReference<8> >());
    _d.CPGF_MD_TEMPLATE _method("indexOf", (int (D::ClassType::*) (QChar, int, Qt::CaseSensitivity) const)&D::ClassType::indexOf)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("indexOf", (int (D::ClassType::*) (const QString &, int, Qt::CaseSensitivity) const)&D::ClassType::indexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("indexOf", (int (D::ClassType::*) (QLatin1String, int, Qt::CaseSensitivity) const)&D::ClassType::indexOf)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("indexOf", (int (D::ClassType::*) (const QStringRef &, int, Qt::CaseSensitivity) const)&D::ClassType::indexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", (int (D::ClassType::*) (QChar, int, Qt::CaseSensitivity) const)&D::ClassType::lastIndexOf)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", (int (D::ClassType::*) (const QString &, int, Qt::CaseSensitivity) const)&D::ClassType::lastIndexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", (int (D::ClassType::*) (QLatin1String, int, Qt::CaseSensitivity) const)&D::ClassType::lastIndexOf)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", (int (D::ClassType::*) (const QStringRef &, int, Qt::CaseSensitivity) const)&D::ClassType::lastIndexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (QChar, Qt::CaseSensitivity) const)&D::ClassType::contains)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const QString &, Qt::CaseSensitivity) const)&D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (QLatin1String, Qt::CaseSensitivity) const)&D::ClassType::contains)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const QStringRef &, Qt::CaseSensitivity) const)&D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) (QChar, Qt::CaseSensitivity) const)&D::ClassType::count)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) (const QString &, Qt::CaseSensitivity) const)&D::ClassType::count, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) (const QStringRef &, Qt::CaseSensitivity) const)&D::ClassType::count, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("indexOf", (int (D::ClassType::*) (const QRegExp &, int) const)&D::ClassType::indexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", (int (D::ClassType::*) (const QRegExp &, int) const)&D::ClassType::lastIndexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const QRegExp &) const)&D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) (const QRegExp &) const)&D::ClassType::count, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("indexOf", (int (D::ClassType::*) (QRegExp &, int) const)&D::ClassType::indexOf)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", (int (D::ClassType::*) (QRegExp &, int) const)&D::ClassType::lastIndexOf)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (QRegExp &) const)&D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("indexOf", (int (D::ClassType::*) (const QRegularExpression &, int) const)&D::ClassType::indexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", (int (D::ClassType::*) (const QRegularExpression &, int) const)&D::ClassType::lastIndexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const QRegularExpression &) const)&D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const QRegularExpression &, QRegularExpressionMatch *) const)&D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) (const QRegularExpression &) const)&D::ClassType::count, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("section", (QString (D::ClassType::*) (QChar, int, int, QString::SectionFlags) const)&D::ClassType::section)
        ._default(copyVariantFromCopyable(QString::SectionDefault))
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("section", (QString (D::ClassType::*) (const QString &, int, int, QString::SectionFlags) const)&D::ClassType::section, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QString::SectionDefault))
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("section", (QString (D::ClassType::*) (const QRegExp &, int, int, QString::SectionFlags) const)&D::ClassType::section, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QString::SectionDefault))
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("section", (QString (D::ClassType::*) (const QRegularExpression &, int, int, QString::SectionFlags) const)&D::ClassType::section, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QString::SectionDefault))
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("left", &D::ClassType::left);
    _d.CPGF_MD_TEMPLATE _method("right", &D::ClassType::right);
    _d.CPGF_MD_TEMPLATE _method("mid", &D::ClassType::mid)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("leftRef", &D::ClassType::leftRef);
    _d.CPGF_MD_TEMPLATE _method("rightRef", &D::ClassType::rightRef);
    _d.CPGF_MD_TEMPLATE _method("midRef", &D::ClassType::midRef)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("startsWith", (bool (D::ClassType::*) (const QString &, Qt::CaseSensitivity) const)&D::ClassType::startsWith, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("startsWith", (bool (D::ClassType::*) (const QStringRef &, Qt::CaseSensitivity) const)&D::ClassType::startsWith, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("startsWith", (bool (D::ClassType::*) (QLatin1String, Qt::CaseSensitivity) const)&D::ClassType::startsWith)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("startsWith", (bool (D::ClassType::*) (QChar, Qt::CaseSensitivity) const)&D::ClassType::startsWith)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("endsWith", (bool (D::ClassType::*) (const QString &, Qt::CaseSensitivity) const)&D::ClassType::endsWith, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("endsWith", (bool (D::ClassType::*) (const QStringRef &, Qt::CaseSensitivity) const)&D::ClassType::endsWith, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("endsWith", (bool (D::ClassType::*) (QLatin1String, Qt::CaseSensitivity) const)&D::ClassType::endsWith)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("endsWith", (bool (D::ClassType::*) (QChar, Qt::CaseSensitivity) const)&D::ClassType::endsWith)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("leftJustified", &D::ClassType::leftJustified)
        ._default(copyVariantFromCopyable(false))
        ._default(copyVariantFromCopyable(QLatin1Char(' ')))
    ;
    _d.CPGF_MD_TEMPLATE _method("rightJustified", &D::ClassType::rightJustified)
        ._default(copyVariantFromCopyable(false))
        ._default(copyVariantFromCopyable(QLatin1Char(' ')))
    ;
    _d.CPGF_MD_TEMPLATE _method("toLower", &D::ClassType::toLower);
    _d.CPGF_MD_TEMPLATE _method("toUpper", &D::ClassType::toUpper);
    _d.CPGF_MD_TEMPLATE _method("toCaseFolded", &D::ClassType::toCaseFolded);
    _d.CPGF_MD_TEMPLATE _method("trimmed", &D::ClassType::trimmed);
    _d.CPGF_MD_TEMPLATE _method("simplified", &D::ClassType::simplified);
    _d.CPGF_MD_TEMPLATE _method("toHtmlEscaped", &D::ClassType::toHtmlEscaped);
    _d.CPGF_MD_TEMPLATE _method("insert", (QString & (D::ClassType::*) (int, QChar))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("insert", (QString & (D::ClassType::*) (int, const QChar *, int))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("insert", (QString & (D::ClassType::*) (int, const QString &))&D::ClassType::insert, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("insert", (QString & (D::ClassType::*) (int, QLatin1String))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("append", (QString & (D::ClassType::*) (QChar))&D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("append", (QString & (D::ClassType::*) (const QChar *, int))&D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("append", (QString & (D::ClassType::*) (const QString &))&D::ClassType::append, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("append", (QString & (D::ClassType::*) (const QStringRef &))&D::ClassType::append, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("append", (QString & (D::ClassType::*) (QLatin1String))&D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("prepend", (QString & (D::ClassType::*) (QChar))&D::ClassType::prepend);
    _d.CPGF_MD_TEMPLATE _method("prepend", (QString & (D::ClassType::*) (const QString &))&D::ClassType::prepend, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("prepend", (QString & (D::ClassType::*) (QLatin1String))&D::ClassType::prepend);
    _d.CPGF_MD_TEMPLATE _method("remove", (QString & (D::ClassType::*) (int, int))&D::ClassType::remove);
    _d.CPGF_MD_TEMPLATE _method("remove", (QString & (D::ClassType::*) (QChar, Qt::CaseSensitivity))&D::ClassType::remove)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("remove", (QString & (D::ClassType::*) (const QString &, Qt::CaseSensitivity))&D::ClassType::remove, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("replace", (QString & (D::ClassType::*) (int, int, QChar))&D::ClassType::replace);
    _d.CPGF_MD_TEMPLATE _method("replace", (QString & (D::ClassType::*) (int, int, const QChar *, int))&D::ClassType::replace);
    _d.CPGF_MD_TEMPLATE _method("replace", (QString & (D::ClassType::*) (int, int, const QString &))&D::ClassType::replace, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("replace", (QString & (D::ClassType::*) (QChar, QChar, Qt::CaseSensitivity))&D::ClassType::replace)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("replace", (QString & (D::ClassType::*) (const QChar *, int, const QChar *, int, Qt::CaseSensitivity))&D::ClassType::replace)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("replace", (QString & (D::ClassType::*) (QLatin1String, QLatin1String, Qt::CaseSensitivity))&D::ClassType::replace)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("replace", (QString & (D::ClassType::*) (QLatin1String, const QString &, Qt::CaseSensitivity))&D::ClassType::replace, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("replace", (QString & (D::ClassType::*) (const QString &, QLatin1String, Qt::CaseSensitivity))&D::ClassType::replace, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("replace", (QString & (D::ClassType::*) (const QString &, const QString &, Qt::CaseSensitivity))&D::ClassType::replace, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("replace", (QString & (D::ClassType::*) (QChar, const QString &, Qt::CaseSensitivity))&D::ClassType::replace, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("replace", (QString & (D::ClassType::*) (QChar, QLatin1String, Qt::CaseSensitivity))&D::ClassType::replace)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("replace", (QString & (D::ClassType::*) (const QRegExp &, const QString &))&D::ClassType::replace, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("remove", (QString & (D::ClassType::*) (const QRegExp &))&D::ClassType::remove, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("replace", (QString & (D::ClassType::*) (const QRegularExpression &, const QString &))&D::ClassType::replace, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("remove", (QString & (D::ClassType::*) (const QRegularExpression &))&D::ClassType::remove, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("split", (QStringList (D::ClassType::*) (const QString &, QString::SplitBehavior, Qt::CaseSensitivity) const)&D::ClassType::split, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
        ._default(copyVariantFromCopyable(QString::KeepEmptyParts))
    ;
    _d.CPGF_MD_TEMPLATE _method("split", (QStringList (D::ClassType::*) (QChar, QString::SplitBehavior, Qt::CaseSensitivity) const)&D::ClassType::split)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
        ._default(copyVariantFromCopyable(QString::KeepEmptyParts))
    ;
    _d.CPGF_MD_TEMPLATE _method("split", (QStringList (D::ClassType::*) (const QRegExp &, QString::SplitBehavior) const)&D::ClassType::split, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QString::KeepEmptyParts))
    ;
    _d.CPGF_MD_TEMPLATE _method("split", (QStringList (D::ClassType::*) (const QRegularExpression &, QString::SplitBehavior) const)&D::ClassType::split, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QString::KeepEmptyParts))
    ;
    _d.CPGF_MD_TEMPLATE _method("normalized", &D::ClassType::normalized)
        ._default(copyVariantFromCopyable(QChar::Unicode_Unassigned))
    ;
    _d.CPGF_MD_TEMPLATE _method("repeated", &D::ClassType::repeated);
    _d.CPGF_MD_TEMPLATE _method("utf16", &D::ClassType::utf16);
    _d.CPGF_MD_TEMPLATE _method("toLatin1", &D::ClassType::toLatin1);
    _d.CPGF_MD_TEMPLATE _method("toUtf8", &D::ClassType::toUtf8);
    _d.CPGF_MD_TEMPLATE _method("toLocal8Bit", &D::ClassType::toLocal8Bit);
    _d.CPGF_MD_TEMPLATE _method("toUcs4", &D::ClassType::toUcs4);
    _d.CPGF_MD_TEMPLATE _method("toWCharArray", &D::ClassType::toWCharArray);
    _d.CPGF_MD_TEMPLATE _method("setRawData", &D::ClassType::setRawData);
    _d.CPGF_MD_TEMPLATE _method("setUnicode", &D::ClassType::setUnicode);
    _d.CPGF_MD_TEMPLATE _method("setUtf16", &D::ClassType::setUtf16);
    _d.CPGF_MD_TEMPLATE _method("compare", (int (D::ClassType::*) (const QString &, Qt::CaseSensitivity) const)&D::ClassType::compare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("compare", (int (D::ClassType::*) (QLatin1String, Qt::CaseSensitivity) const)&D::ClassType::compare)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("compare", (int (D::ClassType::*) (const QStringRef &, Qt::CaseSensitivity) const)&D::ClassType::compare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("localeAwareCompare", (int (D::ClassType::*) (const QString &) const)&D::ClassType::localeAwareCompare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("localeAwareCompare", (int (D::ClassType::*) (const QStringRef &) const)&D::ClassType::localeAwareCompare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("toShort", &D::ClassType::toShort)
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toUShort", &D::ClassType::toUShort)
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toInt", &D::ClassType::toInt)
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toUInt", &D::ClassType::toUInt)
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toLong", &D::ClassType::toLong)
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toULong", &D::ClassType::toULong)
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toLongLong", &D::ClassType::toLongLong)
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toULongLong", &D::ClassType::toULongLong)
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toFloat", &D::ClassType::toFloat)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toDouble", &D::ClassType::toDouble)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setNum", (QString & (D::ClassType::*) (short, int))&D::ClassType::setNum)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("setNum", (QString & (D::ClassType::*) (ushort, int))&D::ClassType::setNum)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("setNum", (QString & (D::ClassType::*) (int, int))&D::ClassType::setNum)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("setNum", (QString & (D::ClassType::*) (uint, int))&D::ClassType::setNum)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("setNum", (QString & (D::ClassType::*) (long, int))&D::ClassType::setNum)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("setNum", (QString & (D::ClassType::*) (ulong, int))&D::ClassType::setNum)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("setNum", (QString & (D::ClassType::*) (qlonglong, int))&D::ClassType::setNum)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("setNum", (QString & (D::ClassType::*) (qulonglong, int))&D::ClassType::setNum)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("setNum", (QString & (D::ClassType::*) (float, char, int))&D::ClassType::setNum)
        ._default(copyVariantFromCopyable(6))
        ._default(copyVariantFromCopyable('g'))
    ;
    _d.CPGF_MD_TEMPLATE _method("setNum", (QString & (D::ClassType::*) (double, char, int))&D::ClassType::setNum)
        ._default(copyVariantFromCopyable(6))
        ._default(copyVariantFromCopyable('g'))
    ;
    _d.CPGF_MD_TEMPLATE _method("prepend", (QString & (D::ClassType::*) (const char *))&D::ClassType::prepend);
    _d.CPGF_MD_TEMPLATE _method("prepend", (QString & (D::ClassType::*) (const QByteArray &))&D::ClassType::prepend, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("append", (QString & (D::ClassType::*) (const char *))&D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("append", (QString & (D::ClassType::*) (const QByteArray &))&D::ClassType::append, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("begin", (QString::iterator (D::ClassType::*) ())&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("begin", (QString::const_iterator (D::ClassType::*) () const)&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("cbegin", &D::ClassType::cbegin);
    _d.CPGF_MD_TEMPLATE _method("constBegin", &D::ClassType::constBegin);
    _d.CPGF_MD_TEMPLATE _method("end", (QString::iterator (D::ClassType::*) ())&D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("end", (QString::const_iterator (D::ClassType::*) () const)&D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("cend", &D::ClassType::cend);
    _d.CPGF_MD_TEMPLATE _method("constEnd", &D::ClassType::constEnd);
    _d.CPGF_MD_TEMPLATE _method("push_back", (void (D::ClassType::*) (QChar))&D::ClassType::push_back);
    _d.CPGF_MD_TEMPLATE _method("push_back", (void (D::ClassType::*) (const QString &))&D::ClassType::push_back, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("push_front", (void (D::ClassType::*) (QChar))&D::ClassType::push_front);
    _d.CPGF_MD_TEMPLATE _method("push_front", (void (D::ClassType::*) (const QString &))&D::ClassType::push_front, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("toStdString", &D::ClassType::toStdString);
    _d.CPGF_MD_TEMPLATE _method("toStdWString", &D::ClassType::toStdWString);
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("isSimpleText", &D::ClassType::isSimpleText);
    _d.CPGF_MD_TEMPLATE _method("isRightToLeft", &D::ClassType::isRightToLeft);
    _d.CPGF_MD_TEMPLATE _method("data_ptr", &D::ClassType::data_ptr);
    _d.CPGF_MD_TEMPLATE _method("fromLatin1", (QString (*) (const char *, int))&D::ClassType::fromLatin1)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromUtf8", (QString (*) (const char *, int))&D::ClassType::fromUtf8)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromLocal8Bit", (QString (*) (const char *, int))&D::ClassType::fromLocal8Bit)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromLatin1", (QString (*) (const QByteArray &))&D::ClassType::fromLatin1, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromUtf8", (QString (*) (const QByteArray &))&D::ClassType::fromUtf8, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromLocal8Bit", (QString (*) (const QByteArray &))&D::ClassType::fromLocal8Bit, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromUtf16", (QString (*) (const ushort *, int))&D::ClassType::fromUtf16)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromUcs4", (QString (*) (const uint *, int))&D::ClassType::fromUcs4)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromRawData", &D::ClassType::fromRawData);
    _d.CPGF_MD_TEMPLATE _method("fromWCharArray", &D::ClassType::fromWCharArray)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("compare", (int (*) (const QString &, const QString &, Qt::CaseSensitivity))&D::ClassType::compare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("compare", (int (*) (const QString &, QLatin1String, Qt::CaseSensitivity))&D::ClassType::compare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("compare", (int (*) (QLatin1String, const QString &, Qt::CaseSensitivity))&D::ClassType::compare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("compare", (int (*) (const QString &, const QStringRef &, Qt::CaseSensitivity))&D::ClassType::compare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("localeAwareCompare", (int (*) (const QString &, const QString &))&D::ClassType::localeAwareCompare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("localeAwareCompare", (int (*) (const QString &, const QStringRef &))&D::ClassType::localeAwareCompare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("number", (QString (*) (int, int))&D::ClassType::number)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("number", (QString (*) (uint, int))&D::ClassType::number)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("number", (QString (*) (long, int))&D::ClassType::number)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("number", (QString (*) (ulong, int))&D::ClassType::number)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("number", (QString (*) (qlonglong, int))&D::ClassType::number)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("number", (QString (*) (qulonglong, int))&D::ClassType::number)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("number", (QString (*) (double, char, int))&D::ClassType::number)
        ._default(copyVariantFromCopyable(6))
        ._default(copyVariantFromCopyable('g'))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SectionFlag>("SectionFlag")
        ._element("SectionDefault", D::ClassType::SectionDefault)
        ._element("SectionSkipEmpty", D::ClassType::SectionSkipEmpty)
        ._element("SectionIncludeLeadingSep", D::ClassType::SectionIncludeLeadingSep)
        ._element("SectionIncludeTrailingSep", D::ClassType::SectionIncludeTrailingSep)
        ._element("SectionCaseInsensitiveSeps", D::ClassType::SectionCaseInsensitiveSeps)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SplitBehavior>("SplitBehavior")
        ._element("KeepEmptyParts", D::ClassType::KeepEmptyParts)
        ._element("SkipEmptyParts", D::ClassType::SkipEmptyParts)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::NormalizationForm>("NormalizationForm")
        ._element("NormalizationForm_D", D::ClassType::NormalizationForm_D)
        ._element("NormalizationForm_C", D::ClassType::NormalizationForm_C)
        ._element("NormalizationForm_KD", D::ClassType::NormalizationForm_KD)
        ._element("NormalizationForm_KC", D::ClassType::NormalizationForm_KC)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QString & (*)(cpgf::GMetaSelf, QChar)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QString & (*) (QString *, QChar))&opErAToRWrapper_QString__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QString & (*)(cpgf::GMetaSelf, const QString &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QString & (*) (QString *, const QString &))&opErAToRWrapper_QString__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QString & (*)(cpgf::GMetaSelf, QLatin1String)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QString & (*) (QString *, QLatin1String))&opErAToRWrapper_QString__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<const QChar (*)(const cpgf::GMetaSelf &, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (const QChar (*) (const QString *, int))&opErAToRWrapper_QString__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QCharRef (*)(cpgf::GMetaSelf, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (QCharRef (*) (QString *, int))&opErAToRWrapper_QString__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<const QChar (*)(const cpgf::GMetaSelf &, uint)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (const QChar (*) (const QString *, uint))&opErAToRWrapper_QString__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QCharRef (*)(cpgf::GMetaSelf, uint)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (QCharRef (*) (QString *, uint))&opErAToRWrapper_QString__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QString & (*)(cpgf::GMetaSelf, QChar)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QString & (*) (QString *, QChar))&opErAToRWrapper_QString__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QString & (*)(cpgf::GMetaSelf, QChar::SpecialCharacter)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QString & (*) (QString *, QChar::SpecialCharacter))&opErAToRWrapper_QString__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QString & (*)(cpgf::GMetaSelf, const QString &)>(mopHolder += mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QString & (*) (QString *, const QString &))&opErAToRWrapper_QString__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QString & (*)(cpgf::GMetaSelf, const QStringRef &)>(mopHolder += mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QString & (*) (QString *, const QStringRef &))&opErAToRWrapper_QString__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QString & (*)(cpgf::GMetaSelf, QLatin1String)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QString & (*) (QString *, QLatin1String))&opErAToRWrapper_QString__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, QLatin1String)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QString *, QLatin1String))&opErAToRWrapper_QString__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, QLatin1String)>(mopHolder < mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QString *, QLatin1String))&opErAToRWrapper_QString__opLess, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, QLatin1String)>(mopHolder > mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const QString *, QLatin1String))&opErAToRWrapper_QString__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, QLatin1String)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QString *, QLatin1String))&opErAToRWrapper_QString__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, QLatin1String)>(mopHolder <= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const QString *, QLatin1String))&opErAToRWrapper_QString__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, QLatin1String)>(mopHolder >= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const QString *, QLatin1String))&opErAToRWrapper_QString__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QString & (*)(cpgf::GMetaSelf, const char *)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QString & (*) (QString *, const char *))&opErAToRWrapper_QString__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QString & (*)(cpgf::GMetaSelf, const QByteArray &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QString & (*) (QString *, const QByteArray &))&opErAToRWrapper_QString__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QString & (*)(cpgf::GMetaSelf, char)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QString & (*) (QString *, char))&opErAToRWrapper_QString__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QString & (*)(cpgf::GMetaSelf, const char *)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QString & (*) (QString *, const char *))&opErAToRWrapper_QString__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QString & (*)(cpgf::GMetaSelf, const QByteArray &)>(mopHolder += mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QString & (*) (QString *, const QByteArray &))&opErAToRWrapper_QString__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QString & (*)(cpgf::GMetaSelf, char)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QString & (*) (QString *, char))&opErAToRWrapper_QString__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const char *)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QString *, const char *))&opErAToRWrapper_QString__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const char *)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QString *, const char *))&opErAToRWrapper_QString__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const char *)>(mopHolder < mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QString *, const char *))&opErAToRWrapper_QString__opLess, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const char *)>(mopHolder <= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const QString *, const char *))&opErAToRWrapper_QString__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const char *)>(mopHolder > mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const QString *, const char *))&opErAToRWrapper_QString__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const char *)>(mopHolder >= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const QString *, const char *))&opErAToRWrapper_QString__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QByteArray &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QString *, const QByteArray &))&opErAToRWrapper_QString__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QByteArray &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QString *, const QByteArray &))&opErAToRWrapper_QString__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QByteArray &)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QString *, const QByteArray &))&opErAToRWrapper_QString__opLess, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QByteArray &)>(mopHolder > mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const QString *, const QByteArray &))&opErAToRWrapper_QString__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QByteArray &)>(mopHolder <= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const QString *, const QByteArray &))&opErAToRWrapper_QString__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QByteArray &)>(mopHolder >= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const QString *, const QByteArray &))&opErAToRWrapper_QString__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QString & (*)(cpgf::GMetaSelf, const QString::Null&)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QString & (*) (QString *, const QString::Null&))&opErAToRWrapper_QString__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    {
        GDefineMetaClass<QFlags<typename QString::SectionFlag > > _t_d = GDefineMetaClass<QFlags<typename QString::SectionFlag > >::lazyDeclare("SectionFlags", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QString::SectionFlag > >, typename QString::SectionFlag >);
        _d._class(_t_d);
    }
    {
        GDefineMetaClass<QString::Null> _nd = GDefineMetaClass<QString::Null>::declare("Null");
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


template <typename D>
void buildMetaClass_QStringDataPtr(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("ptr", &D::ClassType::ptr);
}


inline QStringRef & opErAToRWrapper_QStringRef__opAssign(QStringRef * self, const QStringRef & other) {
    return (*self) = other;
}
inline QStringRef & opErAToRWrapper_QStringRef__opAssign(QStringRef * self, const QString * string) {
    return (*self) = string;
}
inline bool opErAToRWrapper_QStringRef__opEqual(const QStringRef * self, const char * s) {
    return (*self) == s;
}
inline bool opErAToRWrapper_QStringRef__opNotEqual(const QStringRef * self, const char * s) {
    return (*self) != s;
}
inline bool opErAToRWrapper_QStringRef__opLess(const QStringRef * self, const char * s) {
    return (*self) < s;
}
inline bool opErAToRWrapper_QStringRef__opLessEqual(const QStringRef * self, const char * s) {
    return (*self) <= s;
}
inline bool opErAToRWrapper_QStringRef__opGreater(const QStringRef * self, const char * s) {
    return (*self) > s;
}
inline bool opErAToRWrapper_QStringRef__opGreaterEqual(const QStringRef * self, const char * s) {
    return (*self) >= s;
}


template <typename D>
void buildMetaClass_QStringRef(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString *, int, int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStringRef &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("string", &D::ClassType::string);
    _d.CPGF_MD_TEMPLATE _method("position", &D::ClassType::position);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) () const)&D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("length", &D::ClassType::length);
    _d.CPGF_MD_TEMPLATE _method("indexOf", (int (D::ClassType::*) (const QString &, int, Qt::CaseSensitivity) const)&D::ClassType::indexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("indexOf", (int (D::ClassType::*) (QChar, int, Qt::CaseSensitivity) const)&D::ClassType::indexOf)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("indexOf", (int (D::ClassType::*) (QLatin1String, int, Qt::CaseSensitivity) const)&D::ClassType::indexOf)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("indexOf", (int (D::ClassType::*) (const QStringRef &, int, Qt::CaseSensitivity) const)&D::ClassType::indexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", (int (D::ClassType::*) (const QString &, int, Qt::CaseSensitivity) const)&D::ClassType::lastIndexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", (int (D::ClassType::*) (QChar, int, Qt::CaseSensitivity) const)&D::ClassType::lastIndexOf)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", (int (D::ClassType::*) (QLatin1String, int, Qt::CaseSensitivity) const)&D::ClassType::lastIndexOf)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", (int (D::ClassType::*) (const QStringRef &, int, Qt::CaseSensitivity) const)&D::ClassType::lastIndexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const QString &, Qt::CaseSensitivity) const)&D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (QChar, Qt::CaseSensitivity) const)&D::ClassType::contains)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (QLatin1String, Qt::CaseSensitivity) const)&D::ClassType::contains)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const QStringRef &, Qt::CaseSensitivity) const)&D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) (const QString &, Qt::CaseSensitivity) const)&D::ClassType::count, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) (QChar, Qt::CaseSensitivity) const)&D::ClassType::count)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) (const QStringRef &, Qt::CaseSensitivity) const)&D::ClassType::count, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("left", &D::ClassType::left);
    _d.CPGF_MD_TEMPLATE _method("right", &D::ClassType::right);
    _d.CPGF_MD_TEMPLATE _method("mid", &D::ClassType::mid)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("startsWith", (bool (D::ClassType::*) (const QString &, Qt::CaseSensitivity) const)&D::ClassType::startsWith, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("startsWith", (bool (D::ClassType::*) (QLatin1String, Qt::CaseSensitivity) const)&D::ClassType::startsWith)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("startsWith", (bool (D::ClassType::*) (QChar, Qt::CaseSensitivity) const)&D::ClassType::startsWith)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("startsWith", (bool (D::ClassType::*) (const QStringRef &, Qt::CaseSensitivity) const)&D::ClassType::startsWith, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("endsWith", (bool (D::ClassType::*) (const QString &, Qt::CaseSensitivity) const)&D::ClassType::endsWith, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("endsWith", (bool (D::ClassType::*) (QLatin1String, Qt::CaseSensitivity) const)&D::ClassType::endsWith)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("endsWith", (bool (D::ClassType::*) (QChar, Qt::CaseSensitivity) const)&D::ClassType::endsWith)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("endsWith", (bool (D::ClassType::*) (const QStringRef &, Qt::CaseSensitivity) const)&D::ClassType::endsWith, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("unicode", &D::ClassType::unicode);
    _d.CPGF_MD_TEMPLATE _method("data", &D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("constData", &D::ClassType::constData);
    _d.CPGF_MD_TEMPLATE _method("toLatin1", &D::ClassType::toLatin1);
    _d.CPGF_MD_TEMPLATE _method("toUtf8", &D::ClassType::toUtf8);
    _d.CPGF_MD_TEMPLATE _method("toLocal8Bit", &D::ClassType::toLocal8Bit);
    _d.CPGF_MD_TEMPLATE _method("toUcs4", &D::ClassType::toUcs4);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("toString", &D::ClassType::toString);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("appendTo", &D::ClassType::appendTo);
    _d.CPGF_MD_TEMPLATE _method("at", &D::ClassType::at);
    _d.CPGF_MD_TEMPLATE _method("compare", (int (D::ClassType::*) (const QString &, Qt::CaseSensitivity) const)&D::ClassType::compare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("compare", (int (D::ClassType::*) (const QStringRef &, Qt::CaseSensitivity) const)&D::ClassType::compare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("compare", (int (D::ClassType::*) (QLatin1String, Qt::CaseSensitivity) const)&D::ClassType::compare)
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("localeAwareCompare", (int (D::ClassType::*) (const QString &) const)&D::ClassType::localeAwareCompare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("localeAwareCompare", (int (D::ClassType::*) (const QStringRef &) const)&D::ClassType::localeAwareCompare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("trimmed", &D::ClassType::trimmed);
    _d.CPGF_MD_TEMPLATE _method("toShort", &D::ClassType::toShort)
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toUShort", &D::ClassType::toUShort)
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toInt", &D::ClassType::toInt)
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toUInt", &D::ClassType::toUInt)
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toLong", &D::ClassType::toLong)
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toULong", &D::ClassType::toULong)
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toLongLong", &D::ClassType::toLongLong)
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toULongLong", &D::ClassType::toULongLong)
        ._default(copyVariantFromCopyable(10))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toFloat", &D::ClassType::toFloat)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toDouble", &D::ClassType::toDouble)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("compare", (int (*) (const QStringRef &, const QString &, Qt::CaseSensitivity))&D::ClassType::compare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("compare", (int (*) (const QStringRef &, const QStringRef &, Qt::CaseSensitivity))&D::ClassType::compare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("compare", (int (*) (const QStringRef &, QLatin1String, Qt::CaseSensitivity))&D::ClassType::compare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _method("localeAwareCompare", (int (*) (const QStringRef &, const QString &))&D::ClassType::localeAwareCompare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("localeAwareCompare", (int (*) (const QStringRef &, const QStringRef &))&D::ClassType::localeAwareCompare, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QStringRef & (*)(cpgf::GMetaSelf, const QStringRef &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QStringRef & (*) (QStringRef *, const QStringRef &))&opErAToRWrapper_QStringRef__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QStringRef & (*)(cpgf::GMetaSelf, const QString *)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QStringRef & (*) (QStringRef *, const QString *))&opErAToRWrapper_QStringRef__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const char *)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QStringRef *, const char *))&opErAToRWrapper_QStringRef__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const char *)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QStringRef *, const char *))&opErAToRWrapper_QStringRef__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const char *)>(mopHolder < mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QStringRef *, const char *))&opErAToRWrapper_QStringRef__opLess, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const char *)>(mopHolder <= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const QStringRef *, const char *))&opErAToRWrapper_QStringRef__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const char *)>(mopHolder > mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const QStringRef *, const char *))&opErAToRWrapper_QStringRef__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const char *)>(mopHolder >= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const QStringRef *, const char *))&opErAToRWrapper_QStringRef__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
