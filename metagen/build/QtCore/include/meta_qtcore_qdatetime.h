// Auto generated file, don't modify.

#ifndef __META_QTCORE_QDATETIME_H
#define __META_QTCORE_QDATETIME_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qdatetime(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (const QDateTime &, uint))&qHash, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (const QDate &, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (const QTime &, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QDate &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QDate &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QTime &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QTime &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QDateTime &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QDateTime &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QDate &)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QTime &)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QDateTime &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline bool opErAToRWrapper_QDate__opEqual(const QDate * self, const QDate & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QDate__opNotEqual(const QDate * self, const QDate & other) {
    return (*self) != other;
}
inline bool opErAToRWrapper_QDate__opLess(const QDate * self, const QDate & other) {
    return (*self) < other;
}
inline bool opErAToRWrapper_QDate__opLessEqual(const QDate * self, const QDate & other) {
    return (*self) <= other;
}
inline bool opErAToRWrapper_QDate__opGreater(const QDate * self, const QDate & other) {
    return (*self) > other;
}
inline bool opErAToRWrapper_QDate__opGreaterEqual(const QDate * self, const QDate & other) {
    return (*self) >= other;
}


template <typename D>
void buildMetaClass_QDate(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int, int)>();
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("isValid", (bool (D::ClassType::*) () const)&D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("year", &D::ClassType::year);
    _d.CPGF_MD_TEMPLATE _method("month", &D::ClassType::month);
    _d.CPGF_MD_TEMPLATE _method("day", &D::ClassType::day);
    _d.CPGF_MD_TEMPLATE _method("dayOfWeek", &D::ClassType::dayOfWeek);
    _d.CPGF_MD_TEMPLATE _method("dayOfYear", &D::ClassType::dayOfYear);
    _d.CPGF_MD_TEMPLATE _method("daysInMonth", &D::ClassType::daysInMonth);
    _d.CPGF_MD_TEMPLATE _method("daysInYear", &D::ClassType::daysInYear);
    _d.CPGF_MD_TEMPLATE _method("weekNumber", &D::ClassType::weekNumber)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toString", (QString (D::ClassType::*) (Qt::DateFormat) const)&D::ClassType::toString)
        ._default(copyVariantFromCopyable(Qt::TextDate))
    ;
    _d.CPGF_MD_TEMPLATE _method("toString", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::toString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setDate", &D::ClassType::setDate);
    _d.CPGF_MD_TEMPLATE _method("getDate", &D::ClassType::getDate);
    _d.CPGF_MD_TEMPLATE _method("addDays", &D::ClassType::addDays);
    _d.CPGF_MD_TEMPLATE _method("addMonths", &D::ClassType::addMonths);
    _d.CPGF_MD_TEMPLATE _method("addYears", &D::ClassType::addYears);
    _d.CPGF_MD_TEMPLATE _method("daysTo", &D::ClassType::daysTo);
    _d.CPGF_MD_TEMPLATE _method("toJulianDay", &D::ClassType::toJulianDay);
    _d.CPGF_MD_TEMPLATE _method("shortMonthName", &D::ClassType::shortMonthName)
        ._default(copyVariantFromCopyable(QDate::DateFormat))
    ;
    _d.CPGF_MD_TEMPLATE _method("shortDayName", &D::ClassType::shortDayName)
        ._default(copyVariantFromCopyable(QDate::DateFormat))
    ;
    _d.CPGF_MD_TEMPLATE _method("longMonthName", &D::ClassType::longMonthName)
        ._default(copyVariantFromCopyable(QDate::DateFormat))
    ;
    _d.CPGF_MD_TEMPLATE _method("longDayName", &D::ClassType::longDayName)
        ._default(copyVariantFromCopyable(QDate::DateFormat))
    ;
    _d.CPGF_MD_TEMPLATE _method("currentDate", &D::ClassType::currentDate);
    _d.CPGF_MD_TEMPLATE _method("fromString", (QDate (*) (const QString &, Qt::DateFormat))&D::ClassType::fromString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::TextDate))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromString", (QDate (*) (const QString &, const QString &))&D::ClassType::fromString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("isValid", (bool (*) (int, int, int))&D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("isLeapYear", &D::ClassType::isLeapYear);
    _d.CPGF_MD_TEMPLATE _method("fromJulianDay", &D::ClassType::fromJulianDay);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::MonthNameType>("MonthNameType")
        ._element("DateFormat", D::ClassType::DateFormat)
        ._element("StandaloneFormat", D::ClassType::StandaloneFormat)
    ;
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QDate &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QDate *, const QDate &))&opErAToRWrapper_QDate__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QDate &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QDate *, const QDate &))&opErAToRWrapper_QDate__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QDate &)>(mopHolder < mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QDate *, const QDate &))&opErAToRWrapper_QDate__opLess, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QDate &)>(mopHolder <= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const QDate *, const QDate &))&opErAToRWrapper_QDate__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QDate &)>(mopHolder > mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const QDate *, const QDate &))&opErAToRWrapper_QDate__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QDate &)>(mopHolder >= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const QDate *, const QDate &))&opErAToRWrapper_QDate__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


inline QDateTime & opErAToRWrapper_QDateTime__opAssign(QDateTime * self, const QDateTime & other) {
    return (*self) = other;
}
inline bool opErAToRWrapper_QDateTime__opEqual(const QDateTime * self, const QDateTime & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QDateTime__opNotEqual(const QDateTime * self, const QDateTime & other) {
    return (*self) != other;
}
inline bool opErAToRWrapper_QDateTime__opLess(const QDateTime * self, const QDateTime & other) {
    return (*self) < other;
}
inline bool opErAToRWrapper_QDateTime__opLessEqual(const QDateTime * self, const QDateTime & other) {
    return (*self) <= other;
}
inline bool opErAToRWrapper_QDateTime__opGreater(const QDateTime * self, const QDateTime & other) {
    return (*self) > other;
}
inline bool opErAToRWrapper_QDateTime__opGreaterEqual(const QDateTime * self, const QDateTime & other) {
    return (*self) >= other;
}


template <typename D>
void buildMetaClass_QDateTime(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QDate &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QDate &, const QTime &, Qt::TimeSpec)>()
        ._default(copyVariantFromCopyable(Qt::LocalTime))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QDate &, const QTime &, Qt::TimeSpec, int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QDate &, const QTime &, const QTimeZone &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QDateTime &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("date", &D::ClassType::date);
    _d.CPGF_MD_TEMPLATE _method("time", &D::ClassType::time);
    _d.CPGF_MD_TEMPLATE _method("timeSpec", &D::ClassType::timeSpec);
    _d.CPGF_MD_TEMPLATE _method("offsetFromUtc", &D::ClassType::offsetFromUtc);
    _d.CPGF_MD_TEMPLATE _method("timeZone", &D::ClassType::timeZone);
    _d.CPGF_MD_TEMPLATE _method("timeZoneAbbreviation", &D::ClassType::timeZoneAbbreviation);
    _d.CPGF_MD_TEMPLATE _method("isDaylightTime", &D::ClassType::isDaylightTime);
    _d.CPGF_MD_TEMPLATE _method("toMSecsSinceEpoch", &D::ClassType::toMSecsSinceEpoch);
    _d.CPGF_MD_TEMPLATE _method("toTime_t", &D::ClassType::toTime_t);
    _d.CPGF_MD_TEMPLATE _method("setDate", &D::ClassType::setDate);
    _d.CPGF_MD_TEMPLATE _method("setTime", &D::ClassType::setTime);
    _d.CPGF_MD_TEMPLATE _method("setTimeSpec", &D::ClassType::setTimeSpec);
    _d.CPGF_MD_TEMPLATE _method("setOffsetFromUtc", &D::ClassType::setOffsetFromUtc);
    _d.CPGF_MD_TEMPLATE _method("setTimeZone", &D::ClassType::setTimeZone, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setMSecsSinceEpoch", &D::ClassType::setMSecsSinceEpoch);
    _d.CPGF_MD_TEMPLATE _method("setTime_t", &D::ClassType::setTime_t);
    _d.CPGF_MD_TEMPLATE _method("toString", (QString (D::ClassType::*) (Qt::DateFormat) const)&D::ClassType::toString)
        ._default(copyVariantFromCopyable(Qt::TextDate))
    ;
    _d.CPGF_MD_TEMPLATE _method("toString", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::toString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("addDays", &D::ClassType::addDays);
    _d.CPGF_MD_TEMPLATE _method("addMonths", &D::ClassType::addMonths);
    _d.CPGF_MD_TEMPLATE _method("addYears", &D::ClassType::addYears);
    _d.CPGF_MD_TEMPLATE _method("addSecs", &D::ClassType::addSecs);
    _d.CPGF_MD_TEMPLATE _method("addMSecs", &D::ClassType::addMSecs);
    _d.CPGF_MD_TEMPLATE _method("toTimeSpec", &D::ClassType::toTimeSpec);
    _d.CPGF_MD_TEMPLATE _method("toLocalTime", &D::ClassType::toLocalTime);
    _d.CPGF_MD_TEMPLATE _method("toUTC", &D::ClassType::toUTC);
    _d.CPGF_MD_TEMPLATE _method("toOffsetFromUtc", &D::ClassType::toOffsetFromUtc);
    _d.CPGF_MD_TEMPLATE _method("toTimeZone", &D::ClassType::toTimeZone, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("daysTo", &D::ClassType::daysTo, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("secsTo", &D::ClassType::secsTo, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("msecsTo", &D::ClassType::msecsTo, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("currentDateTime", &D::ClassType::currentDateTime);
    _d.CPGF_MD_TEMPLATE _method("currentDateTimeUtc", &D::ClassType::currentDateTimeUtc);
    _d.CPGF_MD_TEMPLATE _method("fromString", (QDateTime (*) (const QString &, Qt::DateFormat))&D::ClassType::fromString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::TextDate))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromString", (QDateTime (*) (const QString &, const QString &))&D::ClassType::fromString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("fromTime_t", (QDateTime (*) (uint))&D::ClassType::fromTime_t);
    _d.CPGF_MD_TEMPLATE _method("fromTime_t", (QDateTime (*) (uint, Qt::TimeSpec, int))&D::ClassType::fromTime_t)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromTime_t", (QDateTime (*) (uint, const QTimeZone &))&D::ClassType::fromTime_t, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("fromMSecsSinceEpoch", (QDateTime (*) (qint64))&D::ClassType::fromMSecsSinceEpoch);
    _d.CPGF_MD_TEMPLATE _method("fromMSecsSinceEpoch", (QDateTime (*) (qint64, Qt::TimeSpec, int))&D::ClassType::fromMSecsSinceEpoch)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromMSecsSinceEpoch", (QDateTime (*) (qint64, const QTimeZone &))&D::ClassType::fromMSecsSinceEpoch, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("currentMSecsSinceEpoch", &D::ClassType::currentMSecsSinceEpoch);
    _d.CPGF_MD_TEMPLATE _operator<QDateTime & (*)(cpgf::GMetaSelf, const QDateTime &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QDateTime & (*) (QDateTime *, const QDateTime &))&opErAToRWrapper_QDateTime__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QDateTime &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QDateTime *, const QDateTime &))&opErAToRWrapper_QDateTime__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QDateTime &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QDateTime *, const QDateTime &))&opErAToRWrapper_QDateTime__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QDateTime &)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QDateTime *, const QDateTime &))&opErAToRWrapper_QDateTime__opLess, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QDateTime &)>(mopHolder <= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const QDateTime *, const QDateTime &))&opErAToRWrapper_QDateTime__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QDateTime &)>(mopHolder > mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const QDateTime *, const QDateTime &))&opErAToRWrapper_QDateTime__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QDateTime &)>(mopHolder >= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const QDateTime *, const QDateTime &))&opErAToRWrapper_QDateTime__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


inline bool opErAToRWrapper_QTime__opEqual(const QTime * self, const QTime & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QTime__opNotEqual(const QTime * self, const QTime & other) {
    return (*self) != other;
}
inline bool opErAToRWrapper_QTime__opLess(const QTime * self, const QTime & other) {
    return (*self) < other;
}
inline bool opErAToRWrapper_QTime__opLessEqual(const QTime * self, const QTime & other) {
    return (*self) <= other;
}
inline bool opErAToRWrapper_QTime__opGreater(const QTime * self, const QTime & other) {
    return (*self) > other;
}
inline bool opErAToRWrapper_QTime__opGreaterEqual(const QTime * self, const QTime & other) {
    return (*self) >= other;
}


template <typename D>
void buildMetaClass_QTime(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int, int, int)>()
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("isValid", (bool (D::ClassType::*) () const)&D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("hour", &D::ClassType::hour);
    _d.CPGF_MD_TEMPLATE _method("minute", &D::ClassType::minute);
    _d.CPGF_MD_TEMPLATE _method("second", &D::ClassType::second);
    _d.CPGF_MD_TEMPLATE _method("msec", &D::ClassType::msec);
    _d.CPGF_MD_TEMPLATE _method("toString", (QString (D::ClassType::*) (Qt::DateFormat) const)&D::ClassType::toString)
        ._default(copyVariantFromCopyable(Qt::TextDate))
    ;
    _d.CPGF_MD_TEMPLATE _method("toString", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::toString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setHMS", &D::ClassType::setHMS)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("addSecs", &D::ClassType::addSecs);
    _d.CPGF_MD_TEMPLATE _method("secsTo", &D::ClassType::secsTo);
    _d.CPGF_MD_TEMPLATE _method("addMSecs", &D::ClassType::addMSecs);
    _d.CPGF_MD_TEMPLATE _method("msecsTo", &D::ClassType::msecsTo);
    _d.CPGF_MD_TEMPLATE _method("msecsSinceStartOfDay", &D::ClassType::msecsSinceStartOfDay);
    _d.CPGF_MD_TEMPLATE _method("start", &D::ClassType::start);
    _d.CPGF_MD_TEMPLATE _method("restart", &D::ClassType::restart);
    _d.CPGF_MD_TEMPLATE _method("elapsed", &D::ClassType::elapsed);
    _d.CPGF_MD_TEMPLATE _method("fromMSecsSinceStartOfDay", &D::ClassType::fromMSecsSinceStartOfDay);
    _d.CPGF_MD_TEMPLATE _method("currentTime", &D::ClassType::currentTime);
    _d.CPGF_MD_TEMPLATE _method("fromString", (QTime (*) (const QString &, Qt::DateFormat))&D::ClassType::fromString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::TextDate))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromString", (QTime (*) (const QString &, const QString &))&D::ClassType::fromString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("isValid", (bool (*) (int, int, int, int))&D::ClassType::isValid)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTime &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QTime *, const QTime &))&opErAToRWrapper_QTime__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTime &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QTime *, const QTime &))&opErAToRWrapper_QTime__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTime &)>(mopHolder < mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QTime *, const QTime &))&opErAToRWrapper_QTime__opLess, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTime &)>(mopHolder <= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const QTime *, const QTime &))&opErAToRWrapper_QTime__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTime &)>(mopHolder > mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const QTime *, const QTime &))&opErAToRWrapper_QTime__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTime &)>(mopHolder >= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const QTime *, const QTime &))&opErAToRWrapper_QTime__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
