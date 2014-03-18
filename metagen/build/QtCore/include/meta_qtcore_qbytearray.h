// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QBYTEARRAY_H
#define CPGF_META_QTCORE_QBYTEARRAY_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qbytearray(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qstrdup", (QT_BEGIN_NAMESPACE char* (*) (const char *))&qstrdup);
    _d.CPGF_MD_TEMPLATE _method("qstrlen", (uint (*) (const char *))&qstrlen);
    _d.CPGF_MD_TEMPLATE _method("qstrnlen", (uint (*) (const char *, uint))&qstrnlen);
    _d.CPGF_MD_TEMPLATE _method("qstrcpy", (char* (*) (char *, const char *))&qstrcpy);
    _d.CPGF_MD_TEMPLATE _method("qstrncpy", (char* (*) (char *, const char *, uint))&qstrncpy);
    _d.CPGF_MD_TEMPLATE _method("qstrcmp", (int (*) (const char *, const char *))&qstrcmp);
    _d.CPGF_MD_TEMPLATE _method("qstrcmp", (int (*) (const QByteArray &, const QByteArray &))&qstrcmp, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("qstrcmp", (int (*) (const QByteArray &, const char *))&qstrcmp, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("qstrcmp", (int (*) (const char *, const QByteArray &))&qstrcmp, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("qstrncmp", (int (*) (const char *, const char *, uint))&qstrncmp);
    _d.CPGF_MD_TEMPLATE _method("qstricmp", (int (*) (const char *, const char *))&qstricmp);
    _d.CPGF_MD_TEMPLATE _method("qstrnicmp", (int (*) (const char *, const char *, uint))&qstrnicmp);
    _d.CPGF_MD_TEMPLATE _method("qChecksum", (quint16 (*) (const char *, uint))&qChecksum);
    _d.CPGF_MD_TEMPLATE _method("qCompress", (QByteArray (*) (const uchar *, int, int))&qCompress)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("qUncompress", (QByteArray (*) (const uchar *, int))&qUncompress);
    _d.CPGF_MD_TEMPLATE _method("qCompress", (QByteArray (*) (const QByteArray &, int))&qCompress, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("qUncompress", (QByteArray (*) (const QByteArray &))&qUncompress, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QByteArray &, const QByteArray &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QByteArray &, const char *)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, const QByteArray &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QByteArray &, const QByteArray &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QByteArray &, const char *)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, const QByteArray &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QByteArray &, const QByteArray &)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QByteArray &, const char *)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, const QByteArray &)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QByteArray &, const QByteArray &)>(mopHolder <= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QByteArray &, const char *)>(mopHolder <= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, const QByteArray &)>(mopHolder <= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QByteArray &, const QByteArray &)>(mopHolder > mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QByteArray &, const char *)>(mopHolder > mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, const QByteArray &)>(mopHolder > mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QByteArray &, const QByteArray &)>(mopHolder >= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QByteArray &, const char *)>(mopHolder >= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const char *, const QByteArray &)>(mopHolder >= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QByteArray (*)(const QByteArray &, const QByteArray &)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QByteArray (*)(const QByteArray &, const char *)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<const QByteArray (*)(const QByteArray &, char)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<const QByteArray (*)(const char *, const QByteArray &)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<const QByteArray (*)(char, const QByteArray &)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QByteArray &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QByteArray &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
}


inline QByteArray & opErAToRWrapper_QByteArray__opAssign(QByteArray * self, const QByteArray & __arg0) {
    return (*self) = __arg0;
}
inline QByteArray & opErAToRWrapper_QByteArray__opAssign(QByteArray * self, const char * str) {
    return (*self) = str;
}
inline char opErAToRWrapper_QByteArray__opArrayGet(const QByteArray * self, int i) {
    return (*self)[i];
}
inline char opErAToRWrapper_QByteArray__opArrayGet(const QByteArray * self, uint i) {
    return (*self)[i];
}
inline QByteRef opErAToRWrapper_QByteArray__opArrayGet(QByteArray * self, int i) {
    return (*self)[i];
}
inline QByteRef opErAToRWrapper_QByteArray__opArrayGet(QByteArray * self, uint i) {
    return (*self)[i];
}
inline QByteArray & opErAToRWrapper_QByteArray__opAddAssign(QByteArray * self, char c) {
    return (*self) += c;
}
inline QByteArray & opErAToRWrapper_QByteArray__opAddAssign(QByteArray * self, const char * s) {
    return (*self) += s;
}
inline QByteArray & opErAToRWrapper_QByteArray__opAddAssign(QByteArray * self, const QByteArray & a) {
    return (*self) += a;
}
inline QByteArray & opErAToRWrapper_QByteArray__opAddAssign(QByteArray * self, const QString & s) {
    return (*self) += s;
}
inline bool opErAToRWrapper_QByteArray__opEqual(const QByteArray * self, const QString & s2) {
    return (*self) == s2;
}
inline bool opErAToRWrapper_QByteArray__opNotEqual(const QByteArray * self, const QString & s2) {
    return (*self) != s2;
}
inline bool opErAToRWrapper_QByteArray__opLess(const QByteArray * self, const QString & s2) {
    return (*self) < s2;
}
inline bool opErAToRWrapper_QByteArray__opGreater(const QByteArray * self, const QString & s2) {
    return (*self) > s2;
}
inline bool opErAToRWrapper_QByteArray__opLessEqual(const QByteArray * self, const QString & s2) {
    return (*self) <= s2;
}
inline bool opErAToRWrapper_QByteArray__opGreaterEqual(const QByteArray * self, const QString & s2) {
    return (*self) >= s2;
}


template <typename D>
void buildMetaClass_QByteArray(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const char *, int)>()
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, char)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, Qt::Initialization)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QByteArray &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QByteArrayDataPtr)>();
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("resize", &D::ClassType::resize);
    _d.CPGF_MD_TEMPLATE _method("fill", &D::ClassType::fill)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("capacity", &D::ClassType::capacity);
    _d.CPGF_MD_TEMPLATE _method("reserve", &D::ClassType::reserve);
    _d.CPGF_MD_TEMPLATE _method("squeeze", &D::ClassType::squeeze);
    _d.CPGF_MD_TEMPLATE _method("data", (char * (D::ClassType::*) ())&D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("data", (const char * (D::ClassType::*) () const)&D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("constData", &D::ClassType::constData);
    _d.CPGF_MD_TEMPLATE _method("detach", &D::ClassType::detach);
    _d.CPGF_MD_TEMPLATE _method("isDetached", &D::ClassType::isDetached);
    _d.CPGF_MD_TEMPLATE _method("isSharedWith", &D::ClassType::isSharedWith, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("at", &D::ClassType::at);
    _d.CPGF_MD_TEMPLATE _method("indexOf", (int (D::ClassType::*) (char, int) const)&D::ClassType::indexOf)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("indexOf", (int (D::ClassType::*) (const char *, int) const)&D::ClassType::indexOf)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("indexOf", (int (D::ClassType::*) (const QByteArray &, int) const)&D::ClassType::indexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", (int (D::ClassType::*) (char, int) const)&D::ClassType::lastIndexOf)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", (int (D::ClassType::*) (const char *, int) const)&D::ClassType::lastIndexOf)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", (int (D::ClassType::*) (const QByteArray &, int) const)&D::ClassType::lastIndexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (char) const)&D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const char *) const)&D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const QByteArray &) const)&D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) (char) const)&D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) (const char *) const)&D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) (const QByteArray &) const)&D::ClassType::count, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("left", &D::ClassType::left);
    _d.CPGF_MD_TEMPLATE _method("right", &D::ClassType::right);
    _d.CPGF_MD_TEMPLATE _method("mid", &D::ClassType::mid)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("startsWith", (bool (D::ClassType::*) (const QByteArray &) const)&D::ClassType::startsWith, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("startsWith", (bool (D::ClassType::*) (char) const)&D::ClassType::startsWith);
    _d.CPGF_MD_TEMPLATE _method("startsWith", (bool (D::ClassType::*) (const char *) const)&D::ClassType::startsWith);
    _d.CPGF_MD_TEMPLATE _method("endsWith", (bool (D::ClassType::*) (const QByteArray &) const)&D::ClassType::endsWith, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("endsWith", (bool (D::ClassType::*) (char) const)&D::ClassType::endsWith);
    _d.CPGF_MD_TEMPLATE _method("endsWith", (bool (D::ClassType::*) (const char *) const)&D::ClassType::endsWith);
    _d.CPGF_MD_TEMPLATE _method("truncate", &D::ClassType::truncate);
    _d.CPGF_MD_TEMPLATE _method("chop", &D::ClassType::chop);
    _d.CPGF_MD_TEMPLATE _method("toLower", &D::ClassType::toLower);
    _d.CPGF_MD_TEMPLATE _method("toUpper", &D::ClassType::toUpper);
    _d.CPGF_MD_TEMPLATE _method("trimmed", &D::ClassType::trimmed);
    _d.CPGF_MD_TEMPLATE _method("simplified", &D::ClassType::simplified);
    _d.CPGF_MD_TEMPLATE _method("leftJustified", &D::ClassType::leftJustified)
        ._default(copyVariantFromCopyable(false))
        ._default(copyVariantFromCopyable(' '))
    ;
    _d.CPGF_MD_TEMPLATE _method("rightJustified", &D::ClassType::rightJustified)
        ._default(copyVariantFromCopyable(false))
        ._default(copyVariantFromCopyable(' '))
    ;
    _d.CPGF_MD_TEMPLATE _method("prepend", (QByteArray & (D::ClassType::*) (char))&D::ClassType::prepend);
    _d.CPGF_MD_TEMPLATE _method("prepend", (QByteArray & (D::ClassType::*) (const char *))&D::ClassType::prepend);
    _d.CPGF_MD_TEMPLATE _method("prepend", (QByteArray & (D::ClassType::*) (const char *, int))&D::ClassType::prepend);
    _d.CPGF_MD_TEMPLATE _method("prepend", (QByteArray & (D::ClassType::*) (const QByteArray &))&D::ClassType::prepend, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("append", (QByteArray & (D::ClassType::*) (char))&D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("append", (QByteArray & (D::ClassType::*) (const char *))&D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("append", (QByteArray & (D::ClassType::*) (const char *, int))&D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("append", (QByteArray & (D::ClassType::*) (const QByteArray &))&D::ClassType::append, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("insert", (QByteArray & (D::ClassType::*) (int, char))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("insert", (QByteArray & (D::ClassType::*) (int, const char *))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("insert", (QByteArray & (D::ClassType::*) (int, const char *, int))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("insert", (QByteArray & (D::ClassType::*) (int, const QByteArray &))&D::ClassType::insert, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("remove", &D::ClassType::remove);
    _d.CPGF_MD_TEMPLATE _method("replace", (QByteArray & (D::ClassType::*) (int, int, const char *))&D::ClassType::replace);
    _d.CPGF_MD_TEMPLATE _method("replace", (QByteArray & (D::ClassType::*) (int, int, const char *, int))&D::ClassType::replace);
    _d.CPGF_MD_TEMPLATE _method("replace", (QByteArray & (D::ClassType::*) (int, int, const QByteArray &))&D::ClassType::replace, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("replace", (QByteArray & (D::ClassType::*) (char, const char *))&D::ClassType::replace);
    _d.CPGF_MD_TEMPLATE _method("replace", (QByteArray & (D::ClassType::*) (char, const QByteArray &))&D::ClassType::replace, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("replace", (QByteArray & (D::ClassType::*) (const char *, const char *))&D::ClassType::replace);
    _d.CPGF_MD_TEMPLATE _method("replace", (QByteArray & (D::ClassType::*) (const char *, int, const char *, int))&D::ClassType::replace);
    _d.CPGF_MD_TEMPLATE _method("replace", (QByteArray & (D::ClassType::*) (const QByteArray &, const QByteArray &))&D::ClassType::replace, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("replace", (QByteArray & (D::ClassType::*) (const QByteArray &, const char *))&D::ClassType::replace, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("replace", (QByteArray & (D::ClassType::*) (const char *, const QByteArray &))&D::ClassType::replace, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("replace", (QByteArray & (D::ClassType::*) (char, char))&D::ClassType::replace);
    _d.CPGF_MD_TEMPLATE _method("split", &D::ClassType::split);
    _d.CPGF_MD_TEMPLATE _method("repeated", &D::ClassType::repeated);
    _d.CPGF_MD_TEMPLATE _method("append", (QByteArray & (D::ClassType::*) (const QString &))&D::ClassType::append, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("insert", (QByteArray & (D::ClassType::*) (int, const QString &))&D::ClassType::insert, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("replace", (QByteArray & (D::ClassType::*) (const QString &, const char *))&D::ClassType::replace, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("replace", (QByteArray & (D::ClassType::*) (char, const QString &))&D::ClassType::replace, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("replace", (QByteArray & (D::ClassType::*) (const QString &, const QByteArray &))&D::ClassType::replace, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("indexOf", (int (D::ClassType::*) (const QString &, int) const)&D::ClassType::indexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", (int (D::ClassType::*) (const QString &, int) const)&D::ClassType::lastIndexOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(-1))
    ;
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
    _d.CPGF_MD_TEMPLATE _method("toBase64", (QByteArray (D::ClassType::*) (QByteArray::Base64Options) const)&D::ClassType::toBase64);
    _d.CPGF_MD_TEMPLATE _method("toBase64", (QByteArray (D::ClassType::*) () const)&D::ClassType::toBase64);
    _d.CPGF_MD_TEMPLATE _method("toHex", &D::ClassType::toHex);
    _d.CPGF_MD_TEMPLATE _method("toPercentEncoding", &D::ClassType::toPercentEncoding, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable('%'))
        ._default(copyVariantFromCopyable(QByteArray()))
        ._default(copyVariantFromCopyable(QByteArray()))
    ;
    _d.CPGF_MD_TEMPLATE _method("setNum", (QByteArray & (D::ClassType::*) (short, int))&D::ClassType::setNum)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("setNum", (QByteArray & (D::ClassType::*) (ushort, int))&D::ClassType::setNum)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("setNum", (QByteArray & (D::ClassType::*) (int, int))&D::ClassType::setNum)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("setNum", (QByteArray & (D::ClassType::*) (uint, int))&D::ClassType::setNum)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("setNum", (QByteArray & (D::ClassType::*) (qlonglong, int))&D::ClassType::setNum)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("setNum", (QByteArray & (D::ClassType::*) (qulonglong, int))&D::ClassType::setNum)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("setNum", (QByteArray & (D::ClassType::*) (float, char, int))&D::ClassType::setNum)
        ._default(copyVariantFromCopyable(6))
        ._default(copyVariantFromCopyable('g'))
    ;
    _d.CPGF_MD_TEMPLATE _method("setNum", (QByteArray & (D::ClassType::*) (double, char, int))&D::ClassType::setNum)
        ._default(copyVariantFromCopyable(6))
        ._default(copyVariantFromCopyable('g'))
    ;
    _d.CPGF_MD_TEMPLATE _method("setRawData", &D::ClassType::setRawData);
    _d.CPGF_MD_TEMPLATE _method("begin", (QByteArray::iterator (D::ClassType::*) ())&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("begin", (QByteArray::const_iterator (D::ClassType::*) () const)&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("cbegin", &D::ClassType::cbegin);
    _d.CPGF_MD_TEMPLATE _method("constBegin", &D::ClassType::constBegin);
    _d.CPGF_MD_TEMPLATE _method("end", (QByteArray::iterator (D::ClassType::*) ())&D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("end", (QByteArray::const_iterator (D::ClassType::*) () const)&D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("cend", &D::ClassType::cend);
    _d.CPGF_MD_TEMPLATE _method("constEnd", &D::ClassType::constEnd);
    _d.CPGF_MD_TEMPLATE _method("push_back", (void (D::ClassType::*) (char))&D::ClassType::push_back);
    _d.CPGF_MD_TEMPLATE _method("push_back", (void (D::ClassType::*) (const char *))&D::ClassType::push_back);
    _d.CPGF_MD_TEMPLATE _method("push_back", (void (D::ClassType::*) (const QByteArray &))&D::ClassType::push_back, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("push_front", (void (D::ClassType::*) (char))&D::ClassType::push_front);
    _d.CPGF_MD_TEMPLATE _method("push_front", (void (D::ClassType::*) (const char *))&D::ClassType::push_front);
    _d.CPGF_MD_TEMPLATE _method("push_front", (void (D::ClassType::*) (const QByteArray &))&D::ClassType::push_front, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) () const)&D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("length", &D::ClassType::length);
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("data_ptr", &D::ClassType::data_ptr);
    _d.CPGF_MD_TEMPLATE _method("number", (QByteArray (*) (int, int))&D::ClassType::number)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("number", (QByteArray (*) (uint, int))&D::ClassType::number)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("number", (QByteArray (*) (qlonglong, int))&D::ClassType::number)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("number", (QByteArray (*) (qulonglong, int))&D::ClassType::number)
        ._default(copyVariantFromCopyable(10))
    ;
    _d.CPGF_MD_TEMPLATE _method("number", (QByteArray (*) (double, char, int))&D::ClassType::number)
        ._default(copyVariantFromCopyable(6))
        ._default(copyVariantFromCopyable('g'))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromRawData", &D::ClassType::fromRawData);
    _d.CPGF_MD_TEMPLATE _method("fromBase64", (QByteArray (*) (const QByteArray &, QByteArray::Base64Options))&D::ClassType::fromBase64, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromBase64", (QByteArray (*) (const QByteArray &))&D::ClassType::fromBase64, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromHex", &D::ClassType::fromHex, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromPercentEncoding", &D::ClassType::fromPercentEncoding, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable('%'))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Base64Option>("Base64Option")
        ._element("Base64Encoding", D::ClassType::Base64Encoding)
        ._element("Base64UrlEncoding", D::ClassType::Base64UrlEncoding)
        ._element("KeepTrailingEquals", D::ClassType::KeepTrailingEquals)
        ._element("OmitTrailingEquals", D::ClassType::OmitTrailingEquals)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QByteArray & (*)(cpgf::GMetaSelf, const QByteArray &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QByteArray & (*) (QByteArray *, const QByteArray &))&opErAToRWrapper_QByteArray__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QByteArray & (*)(cpgf::GMetaSelf, const char *)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QByteArray & (*) (QByteArray *, const char *))&opErAToRWrapper_QByteArray__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< const char * (cpgf::GMetaSelf)>(mopHolder());
    _d.CPGF_MD_TEMPLATE _operator< const void * (cpgf::GMetaSelf)>(mopHolder());
    _d.CPGF_MD_TEMPLATE _operator<char (*)(const cpgf::GMetaSelf &, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (char (*) (const QByteArray *, int))&opErAToRWrapper_QByteArray__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<char (*)(const cpgf::GMetaSelf &, uint)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (char (*) (const QByteArray *, uint))&opErAToRWrapper_QByteArray__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QByteRef (*)(cpgf::GMetaSelf, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (QByteRef (*) (QByteArray *, int))&opErAToRWrapper_QByteArray__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QByteRef (*)(cpgf::GMetaSelf, uint)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (QByteRef (*) (QByteArray *, uint))&opErAToRWrapper_QByteArray__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QByteArray & (*)(cpgf::GMetaSelf, char)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QByteArray & (*) (QByteArray *, char))&opErAToRWrapper_QByteArray__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QByteArray & (*)(cpgf::GMetaSelf, const char *)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QByteArray & (*) (QByteArray *, const char *))&opErAToRWrapper_QByteArray__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QByteArray & (*)(cpgf::GMetaSelf, const QByteArray &)>(mopHolder += mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QByteArray & (*) (QByteArray *, const QByteArray &))&opErAToRWrapper_QByteArray__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QByteArray & (*)(cpgf::GMetaSelf, const QString &)>(mopHolder += mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QByteArray & (*) (QByteArray *, const QString &))&opErAToRWrapper_QByteArray__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QString &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QByteArray *, const QString &))&opErAToRWrapper_QByteArray__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QString &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QByteArray *, const QString &))&opErAToRWrapper_QByteArray__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QString &)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QByteArray *, const QString &))&opErAToRWrapper_QByteArray__opLess, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QString &)>(mopHolder > mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const QByteArray *, const QString &))&opErAToRWrapper_QByteArray__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QString &)>(mopHolder <= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const QByteArray *, const QString &))&opErAToRWrapper_QByteArray__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QString &)>(mopHolder >= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const QByteArray *, const QString &))&opErAToRWrapper_QByteArray__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    {
        GDefineMetaClass<QFlags<typename QByteArray::Base64Option > > _t_d = GDefineMetaClass<QFlags<typename QByteArray::Base64Option > >::lazyDeclare("Base64Options", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QByteArray::Base64Option > >, typename QByteArray::Base64Option >);
        _d._class(_t_d);
    }
}


template <typename D>
void buildMetaClass_QByteArrayDataPtr(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("ptr", &D::ClassType::ptr);
}


inline QByteRef & opErAToRWrapper_QByteRef__opAssign(QByteRef * self, char c) {
    return (*self) = c;
}
inline QByteRef & opErAToRWrapper_QByteRef__opAssign(QByteRef * self, const QByteRef & c) {
    return (*self) = c;
}
inline bool opErAToRWrapper_QByteRef__opEqual(const QByteRef * self, char c) {
    return (*self) == c;
}
inline bool opErAToRWrapper_QByteRef__opNotEqual(const QByteRef * self, char c) {
    return (*self) != c;
}
inline bool opErAToRWrapper_QByteRef__opGreater(const QByteRef * self, char c) {
    return (*self) > c;
}
inline bool opErAToRWrapper_QByteRef__opGreaterEqual(const QByteRef * self, char c) {
    return (*self) >= c;
}
inline bool opErAToRWrapper_QByteRef__opLess(const QByteRef * self, char c) {
    return (*self) < c;
}
inline bool opErAToRWrapper_QByteRef__opLessEqual(const QByteRef * self, char c) {
    return (*self) <= c;
}


template <typename D>
void buildMetaClass_QByteRef(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator< char (cpgf::GMetaSelf)>(mopHolder());
    _d.CPGF_MD_TEMPLATE _operator<QByteRef & (*)(cpgf::GMetaSelf, char)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QByteRef & (*) (QByteRef *, char))&opErAToRWrapper_QByteRef__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QByteRef & (*)(cpgf::GMetaSelf, const QByteRef &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QByteRef & (*) (QByteRef *, const QByteRef &))&opErAToRWrapper_QByteRef__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, char)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QByteRef *, char))&opErAToRWrapper_QByteRef__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, char)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QByteRef *, char))&opErAToRWrapper_QByteRef__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, char)>(mopHolder > mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const QByteRef *, char))&opErAToRWrapper_QByteRef__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, char)>(mopHolder >= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const QByteRef *, char))&opErAToRWrapper_QByteRef__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, char)>(mopHolder < mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QByteRef *, char))&opErAToRWrapper_QByteRef__opLess, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, char)>(mopHolder <= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const QByteRef *, char))&opErAToRWrapper_QByteRef__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


template <typename D, int N>
void buildMetaClass_QStaticByteArrayData(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("ba", &D::ClassType::ba);
    _d.CPGF_MD_TEMPLATE _field("data", &D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("data_ptr", &D::ClassType::data_ptr);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
