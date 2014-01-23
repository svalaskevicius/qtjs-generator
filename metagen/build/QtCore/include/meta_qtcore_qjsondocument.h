// Auto generated file, don't modify.

#ifndef __META_QTCORE_QJSONDOCUMENT_H
#define __META_QTCORE_QJSONDOCUMENT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace QJsonPrivate;


namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qjsondocument(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QJsonDocument &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline QJsonDocument & opErAToRWrapper_QJsonDocument__opAssign(QJsonDocument * self, const QJsonDocument & other) {
    return (*self) = other;
}
inline bool opErAToRWrapper_QJsonDocument__opEqual(const QJsonDocument * self, const QJsonDocument & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QJsonDocument__opNotEqual(const QJsonDocument * self, const QJsonDocument & other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QJsonDocument(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QJsonObject &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QJsonArray &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QJsonDocument &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("rawData", &D::ClassType::rawData);
    _d.CPGF_MD_TEMPLATE _method("toBinaryData", &D::ClassType::toBinaryData);
    _d.CPGF_MD_TEMPLATE _method("toVariant", &D::ClassType::toVariant);
    _d.CPGF_MD_TEMPLATE _method("toJson", (QByteArray (D::ClassType::*) () const)&D::ClassType::toJson);
    _d.CPGF_MD_TEMPLATE _method("toJson", (QByteArray (D::ClassType::*) (QJsonDocument::JsonFormat) const)&D::ClassType::toJson);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("isArray", &D::ClassType::isArray);
    _d.CPGF_MD_TEMPLATE _method("isObject", &D::ClassType::isObject);
    _d.CPGF_MD_TEMPLATE _method("object", &D::ClassType::object);
    _d.CPGF_MD_TEMPLATE _method("array", &D::ClassType::array);
    _d.CPGF_MD_TEMPLATE _method("setObject", &D::ClassType::setObject);
    _d.CPGF_MD_TEMPLATE _method("setArray", &D::ClassType::setArray);
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("fromRawData", &D::ClassType::fromRawData)
        ._default(copyVariantFromCopyable(QJsonDocument::Validate))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromBinaryData", &D::ClassType::fromBinaryData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QJsonDocument::Validate))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromVariant", &D::ClassType::fromVariant, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromJson", &D::ClassType::fromJson, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::DataValidation>("DataValidation")
        ._element("Validate", D::ClassType::Validate)
        ._element("BypassValidation", D::ClassType::BypassValidation)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::JsonFormat>("JsonFormat")
        ._element("Indented", D::ClassType::Indented)
        ._element("Compact", D::ClassType::Compact)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QJsonDocument & (*)(cpgf::GMetaSelf, const QJsonDocument &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QJsonDocument & (*) (QJsonDocument *, const QJsonDocument &))&opErAToRWrapper_QJsonDocument__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonDocument &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QJsonDocument *, const QJsonDocument &))&opErAToRWrapper_QJsonDocument__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QJsonDocument &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QJsonDocument *, const QJsonDocument &))&opErAToRWrapper_QJsonDocument__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


template <typename D>
void buildMetaClass_QJsonParseError(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("offset", &D::ClassType::offset);
    _d.CPGF_MD_TEMPLATE _field("error", &D::ClassType::error);
    _d.CPGF_MD_TEMPLATE _method("errorString", &D::ClassType::errorString);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ParseError>("ParseError")
        ._element("NoError", D::ClassType::NoError)
        ._element("UnterminatedObject", D::ClassType::UnterminatedObject)
        ._element("MissingNameSeparator", D::ClassType::MissingNameSeparator)
        ._element("UnterminatedArray", D::ClassType::UnterminatedArray)
        ._element("MissingValueSeparator", D::ClassType::MissingValueSeparator)
        ._element("IllegalValue", D::ClassType::IllegalValue)
        ._element("TerminationByNumber", D::ClassType::TerminationByNumber)
        ._element("IllegalNumber", D::ClassType::IllegalNumber)
        ._element("IllegalEscapeSequence", D::ClassType::IllegalEscapeSequence)
        ._element("IllegalUTF8String", D::ClassType::IllegalUTF8String)
        ._element("UnterminatedString", D::ClassType::UnterminatedString)
        ._element("MissingObject", D::ClassType::MissingObject)
        ._element("DeepNesting", D::ClassType::DeepNesting)
        ._element("DocumentTooLarge", D::ClassType::DocumentTooLarge)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
