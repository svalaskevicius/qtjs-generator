// Auto generated file, don't modify.

#ifndef __META_QTCORE_QTIMEZONE_H
#define __META_QTCORE_QTIMEZONE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qtimezone(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QTimeZone &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QTimeZone &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QTimeZone &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline QTimeZone & opErAToRWrapper_QTimeZone__opAssign(QTimeZone * self, const QTimeZone & other) {
    return (*self) = other;
}
inline bool opErAToRWrapper_QTimeZone__opEqual(const QTimeZone * self, const QTimeZone & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QTimeZone__opNotEqual(const QTimeZone * self, const QTimeZone & other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QTimeZone(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QByteArray &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QByteArray &, int, const QString &, const QString &, QLocale::Country, const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3>, cpgf::GMetaRuleCopyConstReference<5> >())
        ._default(copyVariantFromCopyable(QString()))
        ._default(copyVariantFromCopyable(QLocale::AnyCountry))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QTimeZone &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("id", &D::ClassType::id);
    _d.CPGF_MD_TEMPLATE _method("country", &D::ClassType::country);
    _d.CPGF_MD_TEMPLATE _method("comment", &D::ClassType::comment);
    _d.CPGF_MD_TEMPLATE _method("displayName", (QString (D::ClassType::*) (const QDateTime &, QTimeZone::NameType, const QLocale &) const)&D::ClassType::displayName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QLocale()))
        ._default(copyVariantFromCopyable(QTimeZone::DefaultName))
    ;
    _d.CPGF_MD_TEMPLATE _method("displayName", (QString (D::ClassType::*) (QTimeZone::TimeType, QTimeZone::NameType, const QLocale &) const)&D::ClassType::displayName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QLocale()))
        ._default(copyVariantFromCopyable(QTimeZone::DefaultName))
    ;
    _d.CPGF_MD_TEMPLATE _method("abbreviation", &D::ClassType::abbreviation, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("offsetFromUtc", &D::ClassType::offsetFromUtc, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("standardTimeOffset", &D::ClassType::standardTimeOffset, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("daylightTimeOffset", &D::ClassType::daylightTimeOffset, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("hasDaylightTime", &D::ClassType::hasDaylightTime);
    _d.CPGF_MD_TEMPLATE _method("isDaylightTime", &D::ClassType::isDaylightTime, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("offsetData", &D::ClassType::offsetData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("hasTransitions", &D::ClassType::hasTransitions);
    _d.CPGF_MD_TEMPLATE _method("nextTransition", &D::ClassType::nextTransition, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("previousTransition", &D::ClassType::previousTransition, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("transitions", &D::ClassType::transitions, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("systemTimeZoneId", &D::ClassType::systemTimeZoneId);
    _d.CPGF_MD_TEMPLATE _method("isTimeZoneIdAvailable", &D::ClassType::isTimeZoneIdAvailable, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("availableTimeZoneIds", (QList< QByteArray > (*) ())&D::ClassType::availableTimeZoneIds);
    _d.CPGF_MD_TEMPLATE _method("availableTimeZoneIds", (QList< QByteArray > (*) (QLocale::Country))&D::ClassType::availableTimeZoneIds);
    _d.CPGF_MD_TEMPLATE _method("availableTimeZoneIds", (QList< QByteArray > (*) (int))&D::ClassType::availableTimeZoneIds);
    _d.CPGF_MD_TEMPLATE _method("ianaIdToWindowsId", &D::ClassType::ianaIdToWindowsId, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("windowsIdToDefaultIanaId", (QByteArray (*) (const QByteArray &))&D::ClassType::windowsIdToDefaultIanaId, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("windowsIdToDefaultIanaId", (QByteArray (*) (const QByteArray &, QLocale::Country))&D::ClassType::windowsIdToDefaultIanaId, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("windowsIdToIanaIds", (QList< QByteArray > (*) (const QByteArray &))&D::ClassType::windowsIdToIanaIds, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("windowsIdToIanaIds", (QList< QByteArray > (*) (const QByteArray &, QLocale::Country))&D::ClassType::windowsIdToIanaIds, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::TimeType>("TimeType")
        ._element("StandardTime", D::ClassType::StandardTime)
        ._element("DaylightTime", D::ClassType::DaylightTime)
        ._element("GenericTime", D::ClassType::GenericTime)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::NameType>("NameType")
        ._element("DefaultName", D::ClassType::DefaultName)
        ._element("LongName", D::ClassType::LongName)
        ._element("ShortName", D::ClassType::ShortName)
        ._element("OffsetName", D::ClassType::OffsetName)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QTimeZone & (*)(cpgf::GMetaSelf, const QTimeZone &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QTimeZone & (*) (QTimeZone *, const QTimeZone &))&opErAToRWrapper_QTimeZone__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTimeZone &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QTimeZone *, const QTimeZone &))&opErAToRWrapper_QTimeZone__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTimeZone &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QTimeZone *, const QTimeZone &))&opErAToRWrapper_QTimeZone__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    {
        GDefineMetaClass<QTimeZone::OffsetData> _nd = GDefineMetaClass<QTimeZone::OffsetData>::declare("OffsetData");
        _nd.CPGF_MD_TEMPLATE _field("abbreviation", &QTimeZone::OffsetData::abbreviation);
        _nd.CPGF_MD_TEMPLATE _field("atUtc", &QTimeZone::OffsetData::atUtc);
        _nd.CPGF_MD_TEMPLATE _field("offsetFromUtc", &QTimeZone::OffsetData::offsetFromUtc);
        _nd.CPGF_MD_TEMPLATE _field("standardTimeOffset", &QTimeZone::OffsetData::standardTimeOffset);
        _nd.CPGF_MD_TEMPLATE _field("daylightTimeOffset", &QTimeZone::OffsetData::daylightTimeOffset);
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
