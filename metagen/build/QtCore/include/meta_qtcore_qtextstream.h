// Auto generated file, don't modify.

#ifndef __META_QTCORE_QTEXTSTREAM_H
#define __META_QTCORE_QTEXTSTREAM_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qtextstream(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("bin", (QTextStream& (*) (QTextStream &))&bin, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("oct", (QTextStream& (*) (QTextStream &))&oct, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("dec", (QTextStream& (*) (QTextStream &))&dec, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("hex", (QTextStream& (*) (QTextStream &))&hex, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("showbase", (QTextStream& (*) (QTextStream &))&showbase, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("forcesign", (QTextStream& (*) (QTextStream &))&forcesign, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("forcepoint", (QTextStream& (*) (QTextStream &))&forcepoint, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("noshowbase", (QTextStream& (*) (QTextStream &))&noshowbase, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("noforcesign", (QTextStream& (*) (QTextStream &))&noforcesign, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("noforcepoint", (QTextStream& (*) (QTextStream &))&noforcepoint, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("uppercasebase", (QTextStream& (*) (QTextStream &))&uppercasebase, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("uppercasedigits", (QTextStream& (*) (QTextStream &))&uppercasedigits, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("lowercasebase", (QTextStream& (*) (QTextStream &))&lowercasebase, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("lowercasedigits", (QTextStream& (*) (QTextStream &))&lowercasedigits, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("fixed", (QTextStream& (*) (QTextStream &))&fixed, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("scientific", (QTextStream& (*) (QTextStream &))&scientific, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("left", (QTextStream& (*) (QTextStream &))&left, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("right", (QTextStream& (*) (QTextStream &))&right, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("center", (QTextStream& (*) (QTextStream &))&center, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("endl", (QTextStream& (*) (QTextStream &))&endl, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("flush", (QTextStream& (*) (QTextStream &))&flush, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("reset", (QTextStream& (*) (QTextStream &))&reset, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("bom", (QTextStream& (*) (QTextStream &))&bom, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("ws", (QTextStream& (*) (QTextStream &))&ws, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("qSetFieldWidth", (QTextStreamManipulator (*) (int))&qSetFieldWidth);
    _d.CPGF_MD_TEMPLATE _method("qSetPadChar", (QTextStreamManipulator (*) (QChar))&qSetPadChar);
    _d.CPGF_MD_TEMPLATE _method("qSetRealNumberPrecision", (QTextStreamManipulator (*) (int))&qSetRealNumberPrecision);
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(QTextStream &, QTextStreamFunction)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(QTextStream &, QTextStreamFunction)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(QTextStream &, QTextStreamManipulator)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
}


inline QTextStream & opErAToRWrapper_QTextStream__opRightShift(QTextStream * self, QChar & ch) {
    return (*self) >> ch;
}
inline QTextStream & opErAToRWrapper_QTextStream__opRightShift(QTextStream * self, char & ch) {
    return (*self) >> ch;
}
inline QTextStream & opErAToRWrapper_QTextStream__opRightShift(QTextStream * self, signed short & i) {
    return (*self) >> i;
}
inline QTextStream & opErAToRWrapper_QTextStream__opRightShift(QTextStream * self, unsigned short & i) {
    return (*self) >> i;
}
inline QTextStream & opErAToRWrapper_QTextStream__opRightShift(QTextStream * self, signed int & i) {
    return (*self) >> i;
}
inline QTextStream & opErAToRWrapper_QTextStream__opRightShift(QTextStream * self, unsigned int & i) {
    return (*self) >> i;
}
inline QTextStream & opErAToRWrapper_QTextStream__opRightShift(QTextStream * self, signed long & i) {
    return (*self) >> i;
}
inline QTextStream & opErAToRWrapper_QTextStream__opRightShift(QTextStream * self, unsigned long & i) {
    return (*self) >> i;
}
inline QTextStream & opErAToRWrapper_QTextStream__opRightShift(QTextStream * self, qlonglong & i) {
    return (*self) >> i;
}
inline QTextStream & opErAToRWrapper_QTextStream__opRightShift(QTextStream * self, qulonglong & i) {
    return (*self) >> i;
}
inline QTextStream & opErAToRWrapper_QTextStream__opRightShift(QTextStream * self, float & f) {
    return (*self) >> f;
}
inline QTextStream & opErAToRWrapper_QTextStream__opRightShift(QTextStream * self, double & f) {
    return (*self) >> f;
}
inline QTextStream & opErAToRWrapper_QTextStream__opRightShift(QTextStream * self, QString & s) {
    return (*self) >> s;
}
inline QTextStream & opErAToRWrapper_QTextStream__opRightShift(QTextStream * self, QByteArray & array) {
    return (*self) >> array;
}
inline QTextStream & opErAToRWrapper_QTextStream__opRightShift(QTextStream * self, char * c) {
    return (*self) >> c;
}
inline QTextStream & opErAToRWrapper_QTextStream__opLeftShift(QTextStream * self, QChar ch) {
    return (*self) << ch;
}
inline QTextStream & opErAToRWrapper_QTextStream__opLeftShift(QTextStream * self, char ch) {
    return (*self) << ch;
}
inline QTextStream & opErAToRWrapper_QTextStream__opLeftShift(QTextStream * self, signed short i) {
    return (*self) << i;
}
inline QTextStream & opErAToRWrapper_QTextStream__opLeftShift(QTextStream * self, unsigned short i) {
    return (*self) << i;
}
inline QTextStream & opErAToRWrapper_QTextStream__opLeftShift(QTextStream * self, signed int i) {
    return (*self) << i;
}
inline QTextStream & opErAToRWrapper_QTextStream__opLeftShift(QTextStream * self, unsigned int i) {
    return (*self) << i;
}
inline QTextStream & opErAToRWrapper_QTextStream__opLeftShift(QTextStream * self, signed long i) {
    return (*self) << i;
}
inline QTextStream & opErAToRWrapper_QTextStream__opLeftShift(QTextStream * self, unsigned long i) {
    return (*self) << i;
}
inline QTextStream & opErAToRWrapper_QTextStream__opLeftShift(QTextStream * self, qlonglong i) {
    return (*self) << i;
}
inline QTextStream & opErAToRWrapper_QTextStream__opLeftShift(QTextStream * self, qulonglong i) {
    return (*self) << i;
}
inline QTextStream & opErAToRWrapper_QTextStream__opLeftShift(QTextStream * self, float f) {
    return (*self) << f;
}
inline QTextStream & opErAToRWrapper_QTextStream__opLeftShift(QTextStream * self, double f) {
    return (*self) << f;
}
inline QTextStream & opErAToRWrapper_QTextStream__opLeftShift(QTextStream * self, const QString & s) {
    return (*self) << s;
}
inline QTextStream & opErAToRWrapper_QTextStream__opLeftShift(QTextStream * self, QLatin1String s) {
    return (*self) << s;
}
inline QTextStream & opErAToRWrapper_QTextStream__opLeftShift(QTextStream * self, const QByteArray & array) {
    return (*self) << array;
}
inline QTextStream & opErAToRWrapper_QTextStream__opLeftShift(QTextStream * self, const char * c) {
    return (*self) << c;
}
inline QTextStream & opErAToRWrapper_QTextStream__opLeftShift(QTextStream * self, const void * ptr) {
    return (*self) << ptr;
}


template <typename D>
void buildMetaClass_QTextStream(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QIODevice *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (FILE *, QIODevice::OpenMode)>()
        ._default(copyVariantFromCopyable(QIODevice::ReadWrite))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QString *, QIODevice::OpenMode)>()
        ._default(copyVariantFromCopyable(QIODevice::ReadWrite))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QByteArray *, QIODevice::OpenMode)>()
        ._default(copyVariantFromCopyable(QIODevice::ReadWrite))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QByteArray &, QIODevice::OpenMode)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QIODevice::ReadOnly))
    ;
    _d.CPGF_MD_TEMPLATE _method("setCodec", (void (D::ClassType::*) (QTextCodec *))&D::ClassType::setCodec);
    _d.CPGF_MD_TEMPLATE _method("setCodec", (void (D::ClassType::*) (const char *))&D::ClassType::setCodec);
    _d.CPGF_MD_TEMPLATE _method("codec", &D::ClassType::codec);
    _d.CPGF_MD_TEMPLATE _method("setAutoDetectUnicode", &D::ClassType::setAutoDetectUnicode);
    _d.CPGF_MD_TEMPLATE _method("autoDetectUnicode", &D::ClassType::autoDetectUnicode);
    _d.CPGF_MD_TEMPLATE _method("setGenerateByteOrderMark", &D::ClassType::setGenerateByteOrderMark);
    _d.CPGF_MD_TEMPLATE _method("generateByteOrderMark", &D::ClassType::generateByteOrderMark);
    _d.CPGF_MD_TEMPLATE _method("setLocale", &D::ClassType::setLocale, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("locale", &D::ClassType::locale);
    _d.CPGF_MD_TEMPLATE _method("setDevice", &D::ClassType::setDevice);
    _d.CPGF_MD_TEMPLATE _method("device", &D::ClassType::device);
    _d.CPGF_MD_TEMPLATE _method("setString", &D::ClassType::setString)
        ._default(copyVariantFromCopyable(QIODevice::ReadWrite))
    ;
    _d.CPGF_MD_TEMPLATE _method("string", &D::ClassType::string);
    _d.CPGF_MD_TEMPLATE _method("status", &D::ClassType::status);
    _d.CPGF_MD_TEMPLATE _method("setStatus", &D::ClassType::setStatus);
    _d.CPGF_MD_TEMPLATE _method("resetStatus", &D::ClassType::resetStatus);
    _d.CPGF_MD_TEMPLATE _method("atEnd", &D::ClassType::atEnd);
    _d.CPGF_MD_TEMPLATE _method("reset", &D::ClassType::reset);
    _d.CPGF_MD_TEMPLATE _method("flush", &D::ClassType::flush);
    _d.CPGF_MD_TEMPLATE _method("seek", &D::ClassType::seek);
    _d.CPGF_MD_TEMPLATE _method("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("skipWhiteSpace", &D::ClassType::skipWhiteSpace);
    _d.CPGF_MD_TEMPLATE _method("readLine", &D::ClassType::readLine)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("readAll", &D::ClassType::readAll);
    _d.CPGF_MD_TEMPLATE _method("read", &D::ClassType::read);
    _d.CPGF_MD_TEMPLATE _method("setFieldAlignment", &D::ClassType::setFieldAlignment);
    _d.CPGF_MD_TEMPLATE _method("fieldAlignment", &D::ClassType::fieldAlignment);
    _d.CPGF_MD_TEMPLATE _method("setPadChar", &D::ClassType::setPadChar);
    _d.CPGF_MD_TEMPLATE _method("padChar", &D::ClassType::padChar);
    _d.CPGF_MD_TEMPLATE _method("setFieldWidth", &D::ClassType::setFieldWidth);
    _d.CPGF_MD_TEMPLATE _method("fieldWidth", &D::ClassType::fieldWidth);
    _d.CPGF_MD_TEMPLATE _method("setNumberFlags", &D::ClassType::setNumberFlags);
    _d.CPGF_MD_TEMPLATE _method("numberFlags", &D::ClassType::numberFlags);
    _d.CPGF_MD_TEMPLATE _method("setIntegerBase", &D::ClassType::setIntegerBase);
    _d.CPGF_MD_TEMPLATE _method("integerBase", &D::ClassType::integerBase);
    _d.CPGF_MD_TEMPLATE _method("setRealNumberNotation", &D::ClassType::setRealNumberNotation);
    _d.CPGF_MD_TEMPLATE _method("realNumberNotation", &D::ClassType::realNumberNotation);
    _d.CPGF_MD_TEMPLATE _method("setRealNumberPrecision", &D::ClassType::setRealNumberPrecision);
    _d.CPGF_MD_TEMPLATE _method("realNumberPrecision", &D::ClassType::realNumberPrecision);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::RealNumberNotation>("RealNumberNotation")
        ._element("SmartNotation", D::ClassType::SmartNotation)
        ._element("FixedNotation", D::ClassType::FixedNotation)
        ._element("ScientificNotation", D::ClassType::ScientificNotation)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::FieldAlignment>("FieldAlignment")
        ._element("AlignLeft", D::ClassType::AlignLeft)
        ._element("AlignRight", D::ClassType::AlignRight)
        ._element("AlignCenter", D::ClassType::AlignCenter)
        ._element("AlignAccountingStyle", D::ClassType::AlignAccountingStyle)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Status>("Status")
        ._element("Ok", D::ClassType::Ok)
        ._element("ReadPastEnd", D::ClassType::ReadPastEnd)
        ._element("ReadCorruptData", D::ClassType::ReadCorruptData)
        ._element("WriteFailed", D::ClassType::WriteFailed)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::NumberFlag>("NumberFlag")
        ._element("ShowBase", D::ClassType::ShowBase)
        ._element("ForcePoint", D::ClassType::ForcePoint)
        ._element("ForceSign", D::ClassType::ForceSign)
        ._element("UppercaseBase", D::ClassType::UppercaseBase)
        ._element("UppercaseDigits", D::ClassType::UppercaseDigits)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, QChar &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opRightShift", (QTextStream & (*) (QTextStream *, QChar &))&opErAToRWrapper_QTextStream__opRightShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, char &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opRightShift", (QTextStream & (*) (QTextStream *, char &))&opErAToRWrapper_QTextStream__opRightShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, signed short &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opRightShift", (QTextStream & (*) (QTextStream *, signed short &))&opErAToRWrapper_QTextStream__opRightShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, unsigned short &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opRightShift", (QTextStream & (*) (QTextStream *, unsigned short &))&opErAToRWrapper_QTextStream__opRightShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, signed int &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opRightShift", (QTextStream & (*) (QTextStream *, signed int &))&opErAToRWrapper_QTextStream__opRightShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, unsigned int &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opRightShift", (QTextStream & (*) (QTextStream *, unsigned int &))&opErAToRWrapper_QTextStream__opRightShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, signed long &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opRightShift", (QTextStream & (*) (QTextStream *, signed long &))&opErAToRWrapper_QTextStream__opRightShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, unsigned long &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opRightShift", (QTextStream & (*) (QTextStream *, unsigned long &))&opErAToRWrapper_QTextStream__opRightShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, qlonglong &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opRightShift", (QTextStream & (*) (QTextStream *, qlonglong &))&opErAToRWrapper_QTextStream__opRightShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, qulonglong &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opRightShift", (QTextStream & (*) (QTextStream *, qulonglong &))&opErAToRWrapper_QTextStream__opRightShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, float &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opRightShift", (QTextStream & (*) (QTextStream *, float &))&opErAToRWrapper_QTextStream__opRightShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, double &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opRightShift", (QTextStream & (*) (QTextStream *, double &))&opErAToRWrapper_QTextStream__opRightShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, QString &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opRightShift", (QTextStream & (*) (QTextStream *, QString &))&opErAToRWrapper_QTextStream__opRightShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, QByteArray &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opRightShift", (QTextStream & (*) (QTextStream *, QByteArray &))&opErAToRWrapper_QTextStream__opRightShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, char *)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opRightShift", (QTextStream & (*) (QTextStream *, char *))&opErAToRWrapper_QTextStream__opRightShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, QChar)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QTextStream & (*) (QTextStream *, QChar))&opErAToRWrapper_QTextStream__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, char)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QTextStream & (*) (QTextStream *, char))&opErAToRWrapper_QTextStream__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, signed short)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QTextStream & (*) (QTextStream *, signed short))&opErAToRWrapper_QTextStream__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, unsigned short)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QTextStream & (*) (QTextStream *, unsigned short))&opErAToRWrapper_QTextStream__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, signed int)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QTextStream & (*) (QTextStream *, signed int))&opErAToRWrapper_QTextStream__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, unsigned int)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QTextStream & (*) (QTextStream *, unsigned int))&opErAToRWrapper_QTextStream__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, signed long)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QTextStream & (*) (QTextStream *, signed long))&opErAToRWrapper_QTextStream__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, unsigned long)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QTextStream & (*) (QTextStream *, unsigned long))&opErAToRWrapper_QTextStream__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, qlonglong)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QTextStream & (*) (QTextStream *, qlonglong))&opErAToRWrapper_QTextStream__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, qulonglong)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QTextStream & (*) (QTextStream *, qulonglong))&opErAToRWrapper_QTextStream__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, float)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QTextStream & (*) (QTextStream *, float))&opErAToRWrapper_QTextStream__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, double)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QTextStream & (*) (QTextStream *, double))&opErAToRWrapper_QTextStream__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, const QString &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QTextStream & (*) (QTextStream *, const QString &))&opErAToRWrapper_QTextStream__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, QLatin1String)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QTextStream & (*) (QTextStream *, QLatin1String))&opErAToRWrapper_QTextStream__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, const QByteArray &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QTextStream & (*) (QTextStream *, const QByteArray &))&opErAToRWrapper_QTextStream__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, const char *)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QTextStream & (*) (QTextStream *, const char *))&opErAToRWrapper_QTextStream__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTextStream & (*)(cpgf::GMetaSelf, const void *)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLeftShift", (QTextStream & (*) (QTextStream *, const void *))&opErAToRWrapper_QTextStream__opLeftShift, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
}


template <typename D>
void buildMetaClass_QTextStreamManipulator(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QTSMFI, int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QTSMFC, QChar)>();
    _d.CPGF_MD_TEMPLATE _method("exec", &D::ClassType::exec, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
