// Auto generated file, don't modify.

#ifndef __META_QTCORE_QURL_H
#define __META_QTCORE_QURL_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qurl(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (const QUrl &, uint))&qHash, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _operator<QUrl::FormattingOptions (*)(QUrl::UrlFormattingOption, QUrl::UrlFormattingOption)>(mopHolder | mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QUrl::FormattingOptions (*)(QUrl::UrlFormattingOption, QUrl::FormattingOptions)>(mopHolder | mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QIncompatibleFlag (*)(QUrl::UrlFormattingOption, int)>(mopHolder | mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QUrl::FormattingOptions & (*)(QUrl::FormattingOptions &, QUrl::ComponentFormattingOptions)>(mopHolder |= mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QUrl::FormattingOptions (*)(QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption)>(mopHolder | mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QUrl::FormattingOptions (*)(QUrl::UrlFormattingOption, QUrl::ComponentFormattingOptions)>(mopHolder | mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QUrl::FormattingOptions (*)(QUrl::ComponentFormattingOption, QUrl::UrlFormattingOption)>(mopHolder | mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QUrl::FormattingOptions (*)(QUrl::ComponentFormattingOptions, QUrl::UrlFormattingOption)>(mopHolder | mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QUrl::FormattingOptions (*)(QUrl::FormattingOptions, QUrl::ComponentFormattingOptions)>(mopHolder | mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QUrl::FormattingOptions (*)(QUrl::ComponentFormattingOption, QUrl::FormattingOptions)>(mopHolder | mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QUrl::FormattingOptions (*)(QUrl::ComponentFormattingOptions, QUrl::FormattingOptions)>(mopHolder | mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QUrl &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QUrl &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QUrl &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline QUrl & opErAToRWrapper_QUrl__opAssign(QUrl * self, const QUrl & copy) {
    return (*self) = copy;
}
inline QUrl & opErAToRWrapper_QUrl__opAssign(QUrl * self, const QString & url) {
    return (*self) = url;
}
inline bool opErAToRWrapper_QUrl__opLess(const QUrl * self, const QUrl & url) {
    return (*self) < url;
}
inline bool opErAToRWrapper_QUrl__opEqual(const QUrl * self, const QUrl & url) {
    return (*self) == url;
}
inline bool opErAToRWrapper_QUrl__opNotEqual(const QUrl * self, const QUrl & url) {
    return (*self) != url;
}


template <typename D>
void buildMetaClass_QUrl(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QUrl &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, QUrl::ParsingMode)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QUrl::TolerantMode))
    ;
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("setUrl", &D::ClassType::setUrl, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QUrl::TolerantMode))
    ;
    _d.CPGF_MD_TEMPLATE _method("url", &D::ClassType::url)
        ._default(copyVariantFromCopyable(QUrl::FormattingOptions(QUrl::PrettyDecoded)))
    ;
    _d.CPGF_MD_TEMPLATE _method("toString", &D::ClassType::toString)
        ._default(copyVariantFromCopyable(QUrl::FormattingOptions(QUrl::PrettyDecoded)))
    ;
    _d.CPGF_MD_TEMPLATE _method("toDisplayString", &D::ClassType::toDisplayString)
        ._default(copyVariantFromCopyable(QUrl::FormattingOptions(QUrl::PrettyDecoded)))
    ;
    _d.CPGF_MD_TEMPLATE _method("adjusted", &D::ClassType::adjusted);
    _d.CPGF_MD_TEMPLATE _method("toEncoded", &D::ClassType::toEncoded)
        ._default(copyVariantFromCopyable(QUrl::FullyEncoded))
    ;
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("errorString", &D::ClassType::errorString);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("setScheme", &D::ClassType::setScheme, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("scheme", &D::ClassType::scheme);
    _d.CPGF_MD_TEMPLATE _method("setAuthority", &D::ClassType::setAuthority, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QUrl::TolerantMode))
    ;
    _d.CPGF_MD_TEMPLATE _method("authority", &D::ClassType::authority)
        ._default(copyVariantFromCopyable(QUrl::PrettyDecoded))
    ;
    _d.CPGF_MD_TEMPLATE _method("setUserInfo", &D::ClassType::setUserInfo, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QUrl::TolerantMode))
    ;
    _d.CPGF_MD_TEMPLATE _method("userInfo", &D::ClassType::userInfo)
        ._default(copyVariantFromCopyable(QUrl::PrettyDecoded))
    ;
    _d.CPGF_MD_TEMPLATE _method("setUserName", &D::ClassType::setUserName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QUrl::DecodedMode))
    ;
    _d.CPGF_MD_TEMPLATE _method("userName", &D::ClassType::userName)
        ._default(copyVariantFromCopyable(QUrl::FullyDecoded))
    ;
    _d.CPGF_MD_TEMPLATE _method("setPassword", &D::ClassType::setPassword, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QUrl::DecodedMode))
    ;
    _d.CPGF_MD_TEMPLATE _method("password", &D::ClassType::password)
        ._default(copyVariantFromCopyable(QUrl::FullyDecoded))
    ;
    _d.CPGF_MD_TEMPLATE _method("setHost", &D::ClassType::setHost, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QUrl::DecodedMode))
    ;
    _d.CPGF_MD_TEMPLATE _method("host", &D::ClassType::host)
        ._default(copyVariantFromCopyable(QUrl::FullyDecoded))
    ;
    _d.CPGF_MD_TEMPLATE _method("topLevelDomain", &D::ClassType::topLevelDomain)
        ._default(copyVariantFromCopyable(QUrl::FullyDecoded))
    ;
    _d.CPGF_MD_TEMPLATE _method("setPort", &D::ClassType::setPort);
    _d.CPGF_MD_TEMPLATE _method("port", &D::ClassType::port)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("setPath", &D::ClassType::setPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QUrl::DecodedMode))
    ;
    _d.CPGF_MD_TEMPLATE _method("path", &D::ClassType::path)
        ._default(copyVariantFromCopyable(QUrl::FullyDecoded))
    ;
    _d.CPGF_MD_TEMPLATE _method("fileName", &D::ClassType::fileName)
        ._default(copyVariantFromCopyable(QUrl::FullyDecoded))
    ;
    _d.CPGF_MD_TEMPLATE _method("hasQuery", &D::ClassType::hasQuery);
    _d.CPGF_MD_TEMPLATE _method("setQuery", (void (D::ClassType::*) (const QString &, QUrl::ParsingMode))&D::ClassType::setQuery, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QUrl::TolerantMode))
    ;
    _d.CPGF_MD_TEMPLATE _method("setQuery", (void (D::ClassType::*) (const QUrlQuery &))&D::ClassType::setQuery, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("query", &D::ClassType::query)
        ._default(copyVariantFromCopyable(QUrl::PrettyDecoded))
    ;
    _d.CPGF_MD_TEMPLATE _method("hasFragment", &D::ClassType::hasFragment);
    _d.CPGF_MD_TEMPLATE _method("fragment", &D::ClassType::fragment)
        ._default(copyVariantFromCopyable(QUrl::PrettyDecoded))
    ;
    _d.CPGF_MD_TEMPLATE _method("setFragment", &D::ClassType::setFragment, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QUrl::TolerantMode))
    ;
    _d.CPGF_MD_TEMPLATE _method("resolved", &D::ClassType::resolved, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isRelative", &D::ClassType::isRelative);
    _d.CPGF_MD_TEMPLATE _method("isParentOf", &D::ClassType::isParentOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isLocalFile", &D::ClassType::isLocalFile);
    _d.CPGF_MD_TEMPLATE _method("toLocalFile", &D::ClassType::toLocalFile);
    _d.CPGF_MD_TEMPLATE _method("detach", &D::ClassType::detach);
    _d.CPGF_MD_TEMPLATE _method("isDetached", &D::ClassType::isDetached);
    _d.CPGF_MD_TEMPLATE _method("matches", &D::ClassType::matches, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromEncoded", &D::ClassType::fromEncoded, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QUrl::TolerantMode))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromUserInput", &D::ClassType::fromUserInput, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromLocalFile", &D::ClassType::fromLocalFile, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromPercentEncoding", &D::ClassType::fromPercentEncoding, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("toPercentEncoding", &D::ClassType::toPercentEncoding, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QByteArray()))
        ._default(copyVariantFromCopyable(QByteArray()))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromAce", &D::ClassType::fromAce, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("toAce", &D::ClassType::toAce, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("idnWhitelist", &D::ClassType::idnWhitelist);
    _d.CPGF_MD_TEMPLATE _method("toStringList", &D::ClassType::toStringList)
        ._default(copyVariantFromCopyable(QUrl::FormattingOptions(QUrl::PrettyDecoded)))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromStringList", &D::ClassType::fromStringList, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QUrl::TolerantMode))
    ;
    _d.CPGF_MD_TEMPLATE _method("setIdnWhitelist", &D::ClassType::setIdnWhitelist, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ParsingMode>("ParsingMode")
        ._element("TolerantMode", D::ClassType::TolerantMode)
        ._element("StrictMode", D::ClassType::StrictMode)
        ._element("DecodedMode", D::ClassType::DecodedMode)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::UrlFormattingOption>("UrlFormattingOption")
        ._element("None", D::ClassType::None)
        ._element("RemoveScheme", D::ClassType::RemoveScheme)
        ._element("RemovePassword", D::ClassType::RemovePassword)
        ._element("RemoveUserInfo", D::ClassType::RemoveUserInfo)
        ._element("RemovePort", D::ClassType::RemovePort)
        ._element("RemoveAuthority", D::ClassType::RemoveAuthority)
        ._element("RemovePath", D::ClassType::RemovePath)
        ._element("RemoveQuery", D::ClassType::RemoveQuery)
        ._element("RemoveFragment", D::ClassType::RemoveFragment)
        ._element("PreferLocalFile", D::ClassType::PreferLocalFile)
        ._element("StripTrailingSlash", D::ClassType::StripTrailingSlash)
        ._element("RemoveFilename", D::ClassType::RemoveFilename)
        ._element("NormalizePathSegments", D::ClassType::NormalizePathSegments)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ComponentFormattingOption>("ComponentFormattingOption")
        ._element("PrettyDecoded", D::ClassType::PrettyDecoded)
        ._element("EncodeSpaces", D::ClassType::EncodeSpaces)
        ._element("EncodeUnicode", D::ClassType::EncodeUnicode)
        ._element("EncodeDelimiters", D::ClassType::EncodeDelimiters)
        ._element("EncodeReserved", D::ClassType::EncodeReserved)
        ._element("DecodeReserved", D::ClassType::DecodeReserved)
        ._element("FullyEncoded", D::ClassType::FullyEncoded)
        ._element("FullyDecoded", D::ClassType::FullyDecoded)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QUrl & (*)(cpgf::GMetaSelf, const QUrl &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QUrl & (*) (QUrl *, const QUrl &))&opErAToRWrapper_QUrl__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QUrl & (*)(cpgf::GMetaSelf, const QString &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QUrl & (*) (QUrl *, const QString &))&opErAToRWrapper_QUrl__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QUrl &)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QUrl *, const QUrl &))&opErAToRWrapper_QUrl__opLess, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QUrl &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QUrl *, const QUrl &))&opErAToRWrapper_QUrl__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QUrl &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QUrl *, const QUrl &))&opErAToRWrapper_QUrl__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    {
        GDefineMetaClass<QFlags<typename D::ClassType::ComponentFormattingOption > > _t_d = GDefineMetaClass<QFlags<typename D::ClassType::ComponentFormattingOption > >::lazyDeclare("ComponentFormattingOptions", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename D::ClassType::ComponentFormattingOption > >, typename D::ClassType::ComponentFormattingOption >);
        _d._class(_t_d);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
