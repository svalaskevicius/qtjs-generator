// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QUUID_H
#define CPGF_META_QTCORE_QUUID_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_quuid(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (const QUuid &, uint))&qHash, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QUuid &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QUuid &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QUuid &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline bool opErAToRWrapper_QUuid__opEqual(const QUuid * self, const QUuid & orig) {
    return (*self) == orig;
}
inline bool opErAToRWrapper_QUuid__opNotEqual(const QUuid * self, const QUuid & orig) {
    return (*self) != orig;
}
inline bool opErAToRWrapper_QUuid__opLess(const QUuid * self, const QUuid & other) {
    return (*self) < other;
}
inline bool opErAToRWrapper_QUuid__opGreater(const QUuid * self, const QUuid & other) {
    return (*self) > other;
}


template <typename D>
void buildMetaClass_QUuid(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (uint, ushort, ushort, uchar, uchar, uchar, uchar, uchar, uchar, uchar, uchar)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const char *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QByteArray &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _field("data1", &D::ClassType::data1);
    _d.CPGF_MD_TEMPLATE _field("data2", &D::ClassType::data2);
    _d.CPGF_MD_TEMPLATE _field("data3", &D::ClassType::data3);
    _d.CPGF_MD_TEMPLATE _field("data4", &D::ClassType::data4);
    _d.CPGF_MD_TEMPLATE _method("toString", &D::ClassType::toString);
    _d.CPGF_MD_TEMPLATE _method("toByteArray", &D::ClassType::toByteArray);
    _d.CPGF_MD_TEMPLATE _method("toRfc4122", &D::ClassType::toRfc4122);
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("variant", &D::ClassType::variant);
    _d.CPGF_MD_TEMPLATE _method("version", &D::ClassType::version);
    _d.CPGF_MD_TEMPLATE _method("fromRfc4122", &D::ClassType::fromRfc4122, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("createUuid", &D::ClassType::createUuid);
    _d.CPGF_MD_TEMPLATE _method("createUuidV3", (QUuid (*) (const QUuid &, const QByteArray &))&D::ClassType::createUuidV3, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("createUuidV5", (QUuid (*) (const QUuid &, const QByteArray &))&D::ClassType::createUuidV5, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("createUuidV3", (QUuid (*) (const QUuid &, const QString &))&D::ClassType::createUuidV3, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("createUuidV5", (QUuid (*) (const QUuid &, const QString &))&D::ClassType::createUuidV5, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Variant>("Variant")
        ._element("VarUnknown", D::ClassType::VarUnknown)
        ._element("NCS", D::ClassType::NCS)
        ._element("DCE", D::ClassType::DCE)
        ._element("Microsoft", D::ClassType::Microsoft)
        ._element("Reserved", D::ClassType::Reserved)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Version>("Version")
        ._element("VerUnknown", D::ClassType::VerUnknown)
        ._element("Time", D::ClassType::Time)
        ._element("EmbeddedPOSIX", D::ClassType::EmbeddedPOSIX)
        ._element("Md5", D::ClassType::Md5)
        ._element("Name", D::ClassType::Name)
        ._element("Random", D::ClassType::Random)
        ._element("Sha1", D::ClassType::Sha1)
    ;
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QUuid &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QUuid *, const QUuid &))&opErAToRWrapper_QUuid__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QUuid &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QUuid *, const QUuid &))&opErAToRWrapper_QUuid__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QUuid &)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QUuid *, const QUuid &))&opErAToRWrapper_QUuid__opLess, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QUuid &)>(mopHolder > mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const QUuid *, const QUuid &))&opErAToRWrapper_QUuid__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
