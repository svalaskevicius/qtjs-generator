// Auto generated file, don't modify.

#ifndef __META_QTCORE_QBYTEARRAY_H
#define __META_QTCORE_QBYTEARRAY_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


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


template <typename T>
inline QList< T > & opErAToRWrapper_QList__opAssign(QList<T > * self, const QList< T > & l) {
    return (*self) = l;
}
template <typename T>
inline bool opErAToRWrapper_QList__opEqual(const QList<T > * self, const QList< T > & l) {
    return (*self) == l;
}
template <typename T>
inline bool opErAToRWrapper_QList__opNotEqual(const QList<T > * self, const QList< T > & l) {
    return (*self) != l;
}
template <typename T>
inline const T & opErAToRWrapper_QList__opArrayGet(const QList<T > * self, int i) {
    return (*self)[i];
}
template <typename T>
inline T & opErAToRWrapper_QList__opArrayGet(QList<T > * self, int i) {
    return (*self)[i];
}
template <typename T>
inline void opErAToRWrapper_QList__opArraySet(QList<T > * self, int i, const typename cpgf::RemoveReference<T & >::Result & OpsEt_vALue) {
    (*self)[i] = OpsEt_vALue;
}
template <typename T>
inline QList< T > & opErAToRWrapper_QList__opAddAssign(QList<T > * self, const QList< T > & l) {
    return (*self) += l;
}
template <typename T>
inline QList< T > opErAToRWrapper_QList__opAdd(const QList<T > * self, const QList< T > & l) {
    return (*self) + l;
}
template <typename T>
inline QList< T > & opErAToRWrapper_QList__opAddAssign(QList<T > * self, const T & t) {
    return (*self) += t;
}
template <typename T>
inline QList< T > & opErAToRWrapper_QList__opLeftShift(QList<T > * self, const T & t) {
    return (*self) << t;
}
template <typename T>
inline QList< T > & opErAToRWrapper_QList__opLeftShift(QList<T > * self, const QList< T > & l) {
    return (*self) << l;
}


template <typename T>
inline const T & opErAToRWrapper_QList_const_iterator__opDerefer(const typename QList<T >::const_iterator * self) {
    return *(*self);
}
template <typename T>
inline const T & opErAToRWrapper_QList_const_iterator__opArrayGet(const typename QList<T >::const_iterator * self, int j) {
    return (*self)[j];
}
template <typename T>
inline bool opErAToRWrapper_QList_const_iterator__opEqual(const typename QList<T >::const_iterator * self, const typename QList<T >::const_iterator& o) {
    return (*self) == o;
}
template <typename T>
inline bool opErAToRWrapper_QList_const_iterator__opNotEqual(const typename QList<T >::const_iterator * self, const typename QList<T >::const_iterator& o) {
    return (*self) != o;
}
template <typename T>
inline bool opErAToRWrapper_QList_const_iterator__opLess(const typename QList<T >::const_iterator * self, const typename QList<T >::const_iterator& other) {
    return (*self) < other;
}
template <typename T>
inline bool opErAToRWrapper_QList_const_iterator__opLessEqual(const typename QList<T >::const_iterator * self, const typename QList<T >::const_iterator& other) {
    return (*self) <= other;
}
template <typename T>
inline bool opErAToRWrapper_QList_const_iterator__opGreater(const typename QList<T >::const_iterator * self, const typename QList<T >::const_iterator& other) {
    return (*self) > other;
}
template <typename T>
inline bool opErAToRWrapper_QList_const_iterator__opGreaterEqual(const typename QList<T >::const_iterator * self, const typename QList<T >::const_iterator& other) {
    return (*self) >= other;
}
template <typename T>
inline typename QList<T >::const_iterator& opErAToRWrapper_QList_const_iterator__opInc(typename QList<T >::const_iterator * self) {
    return ++(*self);
}
template <typename T>
inline typename QList<T >::const_iterator opErAToRWrapper_QList_const_iterator__opIncSuffix(typename QList<T >::const_iterator * self) {
    return (*self)++;
}
template <typename T>
inline typename QList<T >::const_iterator& opErAToRWrapper_QList_const_iterator__opDec(typename QList<T >::const_iterator * self) {
    return --(*self);
}
template <typename T>
inline typename QList<T >::const_iterator opErAToRWrapper_QList_const_iterator__opDecSuffix(typename QList<T >::const_iterator * self) {
    return (*self)--;
}
template <typename T>
inline typename QList<T >::const_iterator& opErAToRWrapper_QList_const_iterator__opAddAssign(typename QList<T >::const_iterator * self, int j) {
    return (*self) += j;
}
template <typename T>
inline typename QList<T >::const_iterator& opErAToRWrapper_QList_const_iterator__opSubAssign(typename QList<T >::const_iterator * self, int j) {
    return (*self) -= j;
}
template <typename T>
inline typename QList<T >::const_iterator opErAToRWrapper_QList_const_iterator__opAdd(const typename QList<T >::const_iterator * self, int j) {
    return (*self) + j;
}
template <typename T>
inline typename QList<T >::const_iterator opErAToRWrapper_QList_const_iterator__opSub(const typename QList<T >::const_iterator * self, int j) {
    return (*self) - j;
}
template <typename T>
inline int opErAToRWrapper_QList_const_iterator__opSub(const typename QList<T >::const_iterator * self, typename QList<T >::const_iterator j) {
    return (*self) - j;
}


template <typename T>
inline T & opErAToRWrapper_QList_iterator__opDerefer(const typename QList<T >::iterator * self) {
    return *(*self);
}
template <typename T>
inline T & opErAToRWrapper_QList_iterator__opArrayGet(const typename QList<T >::iterator * self, int j) {
    return (*self)[j];
}
template <typename T>
inline void opErAToRWrapper_QList_iterator__opArraySet(const typename QList<T >::iterator * self, int j, const typename cpgf::RemoveReference<T & >::Result & OpsEt_vALue) {
    (*self)[j] = OpsEt_vALue;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opEqual(const typename QList<T >::iterator * self, const typename QList<T >::iterator& o) {
    return (*self) == o;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opNotEqual(const typename QList<T >::iterator * self, const typename QList<T >::iterator& o) {
    return (*self) != o;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opLess(const typename QList<T >::iterator * self, const typename QList<T >::iterator& other) {
    return (*self) < other;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opLessEqual(const typename QList<T >::iterator * self, const typename QList<T >::iterator& other) {
    return (*self) <= other;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opGreater(const typename QList<T >::iterator * self, const typename QList<T >::iterator& other) {
    return (*self) > other;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opGreaterEqual(const typename QList<T >::iterator * self, const typename QList<T >::iterator& other) {
    return (*self) >= other;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opEqual(const typename QList<T >::iterator * self, const typename QList<T >::const_iterator& o) {
    return (*self) == o;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opNotEqual(const typename QList<T >::iterator * self, const typename QList<T >::const_iterator& o) {
    return (*self) != o;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opLess(const typename QList<T >::iterator * self, const typename QList<T >::const_iterator& other) {
    return (*self) < other;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opLessEqual(const typename QList<T >::iterator * self, const typename QList<T >::const_iterator& other) {
    return (*self) <= other;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opGreater(const typename QList<T >::iterator * self, const typename QList<T >::const_iterator& other) {
    return (*self) > other;
}
template <typename T>
inline bool opErAToRWrapper_QList_iterator__opGreaterEqual(const typename QList<T >::iterator * self, const typename QList<T >::const_iterator& other) {
    return (*self) >= other;
}
template <typename T>
inline typename QList<T >::iterator& opErAToRWrapper_QList_iterator__opInc(typename QList<T >::iterator * self) {
    return ++(*self);
}
template <typename T>
inline typename QList<T >::iterator opErAToRWrapper_QList_iterator__opIncSuffix(typename QList<T >::iterator * self) {
    return (*self)++;
}
template <typename T>
inline typename QList<T >::iterator& opErAToRWrapper_QList_iterator__opDec(typename QList<T >::iterator * self) {
    return --(*self);
}
template <typename T>
inline typename QList<T >::iterator opErAToRWrapper_QList_iterator__opDecSuffix(typename QList<T >::iterator * self) {
    return (*self)--;
}
template <typename T>
inline typename QList<T >::iterator& opErAToRWrapper_QList_iterator__opAddAssign(typename QList<T >::iterator * self, int j) {
    return (*self) += j;
}
template <typename T>
inline typename QList<T >::iterator& opErAToRWrapper_QList_iterator__opSubAssign(typename QList<T >::iterator * self, int j) {
    return (*self) -= j;
}
template <typename T>
inline typename QList<T >::iterator opErAToRWrapper_QList_iterator__opAdd(const typename QList<T >::iterator * self, int j) {
    return (*self) + j;
}
template <typename T>
inline typename QList<T >::iterator opErAToRWrapper_QList_iterator__opSub(const typename QList<T >::iterator * self, int j) {
    return (*self) - j;
}
template <typename T>
inline int opErAToRWrapper_QList_iterator__opSub(const typename QList<T >::iterator * self, typename QList<T >::iterator j) {
    return (*self) - j;
}


template <typename D, typename T>
void buildMetaClass_QList(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QList< T > &)>();
    _d.CPGF_MD_TEMPLATE _method("swap", (void (D::ClassType::*) (QList< T > &))&D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("detach", &D::ClassType::detach);
    _d.CPGF_MD_TEMPLATE _method("detachShared", &D::ClassType::detachShared);
    _d.CPGF_MD_TEMPLATE _method("isDetached", &D::ClassType::isDetached);
    _d.CPGF_MD_TEMPLATE _method("setSharable", &D::ClassType::setSharable);
    _d.CPGF_MD_TEMPLATE _method("isSharedWith", &D::ClassType::isSharedWith);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("at", &D::ClassType::at);
    _d.CPGF_MD_TEMPLATE _method("reserve", &D::ClassType::reserve);
    _d.CPGF_MD_TEMPLATE _method("append", (void (D::ClassType::*) (const T &))&D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("append", (void (D::ClassType::*) (const QList< T > &))&D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("prepend", &D::ClassType::prepend);
    _d.CPGF_MD_TEMPLATE _method("insert", (void (D::ClassType::*) (int, const T &))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("replace", &D::ClassType::replace);
    _d.CPGF_MD_TEMPLATE _method("removeAt", &D::ClassType::removeAt);
    _d.CPGF_MD_TEMPLATE _method("removeAll", &D::ClassType::removeAll);
    _d.CPGF_MD_TEMPLATE _method("removeOne", &D::ClassType::removeOne);
    _d.CPGF_MD_TEMPLATE _method("takeAt", &D::ClassType::takeAt);
    _d.CPGF_MD_TEMPLATE _method("takeFirst", &D::ClassType::takeFirst);
    _d.CPGF_MD_TEMPLATE _method("takeLast", &D::ClassType::takeLast);
    _d.CPGF_MD_TEMPLATE _method("move", &D::ClassType::move);
    _d.CPGF_MD_TEMPLATE _method("swap", (void (D::ClassType::*) (int, int))&D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("indexOf", &D::ClassType::indexOf)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexOf", &D::ClassType::lastIndexOf)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) (const T &) const)&D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("begin", (typename QList<T >::iterator (D::ClassType::*) ())&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("begin", (typename QList<T >::const_iterator (D::ClassType::*) () const)&D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("cbegin", &D::ClassType::cbegin);
    _d.CPGF_MD_TEMPLATE _method("constBegin", &D::ClassType::constBegin);
    _d.CPGF_MD_TEMPLATE _method("end", (typename QList<T >::iterator (D::ClassType::*) ())&D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("end", (typename QList<T >::const_iterator (D::ClassType::*) () const)&D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("cend", &D::ClassType::cend);
    _d.CPGF_MD_TEMPLATE _method("constEnd", &D::ClassType::constEnd);
    _d.CPGF_MD_TEMPLATE _method("insert", (typename QList<T >::iterator (D::ClassType::*) (typename QList<T >::iterator, const T &))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("erase", (typename QList<T >::iterator (D::ClassType::*) (typename QList<T >::iterator))&D::ClassType::erase);
    _d.CPGF_MD_TEMPLATE _method("erase", (typename QList<T >::iterator (D::ClassType::*) (typename QList<T >::iterator, typename QList<T >::iterator))&D::ClassType::erase);
    _d.CPGF_MD_TEMPLATE _method("count", (int (D::ClassType::*) () const)&D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("length", &D::ClassType::length);
    _d.CPGF_MD_TEMPLATE _method("first", (T & (D::ClassType::*) ())&D::ClassType::first);
    _d.CPGF_MD_TEMPLATE _method("first", (const T & (D::ClassType::*) () const)&D::ClassType::first);
    _d.CPGF_MD_TEMPLATE _method("last", (T & (D::ClassType::*) ())&D::ClassType::last);
    _d.CPGF_MD_TEMPLATE _method("last", (const T & (D::ClassType::*) () const)&D::ClassType::last);
    _d.CPGF_MD_TEMPLATE _method("removeFirst", &D::ClassType::removeFirst);
    _d.CPGF_MD_TEMPLATE _method("removeLast", &D::ClassType::removeLast);
    _d.CPGF_MD_TEMPLATE _method("startsWith", &D::ClassType::startsWith);
    _d.CPGF_MD_TEMPLATE _method("endsWith", &D::ClassType::endsWith);
    _d.CPGF_MD_TEMPLATE _method("mid", &D::ClassType::mid)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("value", (T (D::ClassType::*) (int) const)&D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _method("value", (T (D::ClassType::*) (int, const T &) const)&D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _method("push_back", &D::ClassType::push_back);
    _d.CPGF_MD_TEMPLATE _method("push_front", &D::ClassType::push_front);
    _d.CPGF_MD_TEMPLATE _method("front", (T & (D::ClassType::*) ())&D::ClassType::front);
    _d.CPGF_MD_TEMPLATE _method("front", (const T & (D::ClassType::*) () const)&D::ClassType::front);
    _d.CPGF_MD_TEMPLATE _method("back", (T & (D::ClassType::*) ())&D::ClassType::back);
    _d.CPGF_MD_TEMPLATE _method("back", (const T & (D::ClassType::*) () const)&D::ClassType::back);
    _d.CPGF_MD_TEMPLATE _method("pop_front", &D::ClassType::pop_front);
    _d.CPGF_MD_TEMPLATE _method("pop_back", &D::ClassType::pop_back);
    _d.CPGF_MD_TEMPLATE _method("empty", &D::ClassType::empty);
    _d.CPGF_MD_TEMPLATE _method("toVector", &D::ClassType::toVector);
    _d.CPGF_MD_TEMPLATE _method("toSet", &D::ClassType::toSet);
    _d.CPGF_MD_TEMPLATE _method("toStdList", &D::ClassType::toStdList);
    _d.CPGF_MD_TEMPLATE _method("fromVector", &D::ClassType::fromVector, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromSet", &D::ClassType::fromSet);
    _d.CPGF_MD_TEMPLATE _method("fromStdList", &D::ClassType::fromStdList);
    _d.CPGF_MD_TEMPLATE _operator<QList< T > & (*)(cpgf::GMetaSelf, const QList< T > &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QList< T > & (*) (QList<T > *, const QList< T > &))&opErAToRWrapper_QList__opAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QList< T > &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QList<T > *, const QList< T > &))&opErAToRWrapper_QList__opEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QList< T > &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QList<T > *, const QList< T > &))&opErAToRWrapper_QList__opNotEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<const T & (*)(const cpgf::GMetaSelf &, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (const T & (*) (const QList<T > *, int))&opErAToRWrapper_QList__opArrayGet<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<T & (*)(cpgf::GMetaSelf, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (T & (*) (QList<T > *, int))&opErAToRWrapper_QList__opArrayGet<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _method("_opArraySet", (void (*) (QList<T > *, int, const typename cpgf::RemoveReference<T & >::Result &))&opErAToRWrapper_QList__opArraySet<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QList< T > & (*)(cpgf::GMetaSelf, const QList< T > &)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QList< T > & (*) (QList<T > *, const QList< T > &))&opErAToRWrapper_QList__opAddAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QList< T > (*)(const cpgf::GMetaSelf &, const QList< T > &)>(mopHolder + mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAdd", (QList< T > (*) (const QList<T > *, const QList< T > &))&opErAToRWrapper_QList__opAdd<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QList< T > & (*)(cpgf::GMetaSelf, const T &)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QList< T > & (*) (QList<T > *, const T &))&opErAToRWrapper_QList__opAddAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QList< T > & (*)(cpgf::GMetaSelf, const T &)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QList< T > & (*) (QList<T > *, const T &))&opErAToRWrapper_QList__opLeftShift<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QList< T > & (*)(cpgf::GMetaSelf, const QList< T > &)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QList< T > & (*) (QList<T > *, const QList< T > &))&opErAToRWrapper_QList__opLeftShift<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    {
        GDefineMetaClass<typename QList<T >::const_iterator> _nd = GDefineMetaClass<typename QList<T >::const_iterator>::declare("const_iterator");
        _nd.CPGF_MD_TEMPLATE _constructor<void * ()>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const typename QList<T >::const_iterator&)>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const typename QList<T >::iterator&)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _field("i", &QList<T >::const_iterator::i);
        _nd.CPGF_MD_TEMPLATE _operator<const T & (*)(const cpgf::GMetaSelf &)>(*mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDerefer", (const T & (*) (const typename QList<T >::const_iterator *))&opErAToRWrapper_QList_const_iterator__opDerefer<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<const T * (*)(const cpgf::GMetaSelf &)>(mopHolder -> mopHolder);
        _nd.CPGF_MD_TEMPLATE _operator<const T & (*)(const cpgf::GMetaSelf &, int)>(mopHolder[0]);
        _nd.CPGF_MD_TEMPLATE _method("_opArrayGet", (const T & (*) (const typename QList<T >::const_iterator *, int))&opErAToRWrapper_QList_const_iterator__opArrayGet<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder == mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const typename QList<T >::const_iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_const_iterator__opEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder != mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const typename QList<T >::const_iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_const_iterator__opNotEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder < mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const typename QList<T >::const_iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_const_iterator__opLess<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder <= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const typename QList<T >::const_iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_const_iterator__opLessEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder > mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const typename QList<T >::const_iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_const_iterator__opGreater<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder >= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const typename QList<T >::const_iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_const_iterator__opGreaterEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::const_iterator& (*)(cpgf::GMetaSelf)>(++mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opInc", (typename QList<T >::const_iterator& (*) (typename QList<T >::const_iterator *))&opErAToRWrapper_QList_const_iterator__opInc<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::const_iterator (*)(cpgf::GMetaSelf)>(mopHolder++);
        _nd.CPGF_MD_TEMPLATE _method("_opIncSuffix", (typename QList<T >::const_iterator (*) (typename QList<T >::const_iterator *))&opErAToRWrapper_QList_const_iterator__opIncSuffix<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::const_iterator& (*)(cpgf::GMetaSelf)>(--mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDec", (typename QList<T >::const_iterator& (*) (typename QList<T >::const_iterator *))&opErAToRWrapper_QList_const_iterator__opDec<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::const_iterator (*)(cpgf::GMetaSelf)>(mopHolder--);
        _nd.CPGF_MD_TEMPLATE _method("_opDecSuffix", (typename QList<T >::const_iterator (*) (typename QList<T >::const_iterator *))&opErAToRWrapper_QList_const_iterator__opDecSuffix<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::const_iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder += mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAddAssign", (typename QList<T >::const_iterator& (*) (typename QList<T >::const_iterator *, int))&opErAToRWrapper_QList_const_iterator__opAddAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::const_iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder -= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSubAssign", (typename QList<T >::const_iterator& (*) (typename QList<T >::const_iterator *, int))&opErAToRWrapper_QList_const_iterator__opSubAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::const_iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder + mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAdd", (typename QList<T >::const_iterator (*) (const typename QList<T >::const_iterator *, int))&opErAToRWrapper_QList_const_iterator__opAdd<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::const_iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder - mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSub", (typename QList<T >::const_iterator (*) (const typename QList<T >::const_iterator *, int))&opErAToRWrapper_QList_const_iterator__opSub<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<int (*)(const cpgf::GMetaSelf &, typename QList<T >::const_iterator)>(mopHolder - mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSub", (int (*) (const typename QList<T >::const_iterator *, typename QList<T >::const_iterator))&opErAToRWrapper_QList_const_iterator__opSub<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
    {
        GDefineMetaClass<typename QList<T >::iterator> _nd = GDefineMetaClass<typename QList<T >::iterator>::declare("iterator");
        _nd.CPGF_MD_TEMPLATE _constructor<void * ()>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const typename QList<T >::iterator&)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _nd.CPGF_MD_TEMPLATE _field("i", &QList<T >::iterator::i);
        _nd.CPGF_MD_TEMPLATE _operator<T & (*)(const cpgf::GMetaSelf &)>(*mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDerefer", (T & (*) (const typename QList<T >::iterator *))&opErAToRWrapper_QList_iterator__opDerefer<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<T * (*)(const cpgf::GMetaSelf &)>(mopHolder -> mopHolder);
        _nd.CPGF_MD_TEMPLATE _operator<T & (*)(const cpgf::GMetaSelf &, int)>(mopHolder[0]);
        _nd.CPGF_MD_TEMPLATE _method("_opArrayGet", (T & (*) (const typename QList<T >::iterator *, int))&opErAToRWrapper_QList_iterator__opArrayGet<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _method("_opArraySet", (void (*) (const typename QList<T >::iterator *, int, const typename cpgf::RemoveReference<T & >::Result &))&opErAToRWrapper_QList_iterator__opArraySet<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::iterator&)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::iterator&))&opErAToRWrapper_QList_iterator__opEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::iterator&)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::iterator&))&opErAToRWrapper_QList_iterator__opNotEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::iterator&)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::iterator&))&opErAToRWrapper_QList_iterator__opLess<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::iterator&)>(mopHolder <= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::iterator&))&opErAToRWrapper_QList_iterator__opLessEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::iterator&)>(mopHolder > mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::iterator&))&opErAToRWrapper_QList_iterator__opGreater<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::iterator&)>(mopHolder >= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _nd.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::iterator&))&opErAToRWrapper_QList_iterator__opGreaterEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder == mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_iterator__opEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder != mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_iterator__opNotEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder < mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_iterator__opLess<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder <= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_iterator__opLessEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder > mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_iterator__opGreater<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const typename QList<T >::const_iterator&)>(mopHolder >= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const typename QList<T >::iterator *, const typename QList<T >::const_iterator&))&opErAToRWrapper_QList_iterator__opGreaterEqual<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::iterator& (*)(cpgf::GMetaSelf)>(++mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opInc", (typename QList<T >::iterator& (*) (typename QList<T >::iterator *))&opErAToRWrapper_QList_iterator__opInc<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::iterator (*)(cpgf::GMetaSelf)>(mopHolder++);
        _nd.CPGF_MD_TEMPLATE _method("_opIncSuffix", (typename QList<T >::iterator (*) (typename QList<T >::iterator *))&opErAToRWrapper_QList_iterator__opIncSuffix<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::iterator& (*)(cpgf::GMetaSelf)>(--mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDec", (typename QList<T >::iterator& (*) (typename QList<T >::iterator *))&opErAToRWrapper_QList_iterator__opDec<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::iterator (*)(cpgf::GMetaSelf)>(mopHolder--);
        _nd.CPGF_MD_TEMPLATE _method("_opDecSuffix", (typename QList<T >::iterator (*) (typename QList<T >::iterator *))&opErAToRWrapper_QList_iterator__opDecSuffix<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder += mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAddAssign", (typename QList<T >::iterator& (*) (typename QList<T >::iterator *, int))&opErAToRWrapper_QList_iterator__opAddAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder -= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSubAssign", (typename QList<T >::iterator& (*) (typename QList<T >::iterator *, int))&opErAToRWrapper_QList_iterator__opSubAssign<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder + mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAdd", (typename QList<T >::iterator (*) (const typename QList<T >::iterator *, int))&opErAToRWrapper_QList_iterator__opAdd<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<typename QList<T >::iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder - mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSub", (typename QList<T >::iterator (*) (const typename QList<T >::iterator *, int))&opErAToRWrapper_QList_iterator__opSub<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<int (*)(const cpgf::GMetaSelf &, typename QList<T >::iterator)>(mopHolder - mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSub", (int (*) (const typename QList<T >::iterator *, typename QList<T >::iterator))&opErAToRWrapper_QList_iterator__opSub<T>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
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


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
