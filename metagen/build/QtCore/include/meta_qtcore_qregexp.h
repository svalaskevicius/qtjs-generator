// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QREGEXP_H
#define CPGF_META_QTCORE_QREGEXP_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qregexp(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QRegExp &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QRegExp &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QRegExp &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline QRegExp & opErAToRWrapper_QRegExp__opAssign(QRegExp * self, const QRegExp & rx) {
    return (*self) = rx;
}
inline bool opErAToRWrapper_QRegExp__opEqual(const QRegExp * self, const QRegExp & rx) {
    return (*self) == rx;
}
inline bool opErAToRWrapper_QRegExp__opNotEqual(const QRegExp * self, const QRegExp & rx) {
    return (*self) != rx;
}


template <typename D>
void buildMetaClass_QRegExp(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, Qt::CaseSensitivity, QRegExp::PatternSyntax)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QRegExp::RegExp))
        ._default(copyVariantFromCopyable(Qt::CaseSensitive))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QRegExp &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("pattern", &D::ClassType::pattern);
    _d.CPGF_MD_TEMPLATE _method("setPattern", &D::ClassType::setPattern, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("caseSensitivity", &D::ClassType::caseSensitivity);
    _d.CPGF_MD_TEMPLATE _method("setCaseSensitivity", &D::ClassType::setCaseSensitivity);
    _d.CPGF_MD_TEMPLATE _method("patternSyntax", &D::ClassType::patternSyntax);
    _d.CPGF_MD_TEMPLATE _method("setPatternSyntax", &D::ClassType::setPatternSyntax);
    _d.CPGF_MD_TEMPLATE _method("isMinimal", &D::ClassType::isMinimal);
    _d.CPGF_MD_TEMPLATE _method("setMinimal", &D::ClassType::setMinimal);
    _d.CPGF_MD_TEMPLATE _method("exactMatch", &D::ClassType::exactMatch, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("indexIn", &D::ClassType::indexIn, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QRegExp::CaretAtZero))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("lastIndexIn", &D::ClassType::lastIndexIn, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QRegExp::CaretAtZero))
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("matchedLength", &D::ClassType::matchedLength);
    _d.CPGF_MD_TEMPLATE _method("captureCount", &D::ClassType::captureCount);
    _d.CPGF_MD_TEMPLATE _method("capturedTexts", (QStringList (D::ClassType::*) () const)&D::ClassType::capturedTexts);
    _d.CPGF_MD_TEMPLATE _method("capturedTexts", (QStringList (D::ClassType::*) ())&D::ClassType::capturedTexts);
    _d.CPGF_MD_TEMPLATE _method("cap", (QString (D::ClassType::*) (int) const)&D::ClassType::cap)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("cap", (QString (D::ClassType::*) (int))&D::ClassType::cap)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("pos", (int (D::ClassType::*) (int) const)&D::ClassType::pos)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("pos", (int (D::ClassType::*) (int))&D::ClassType::pos)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("errorString", (QString (D::ClassType::*) () const)&D::ClassType::errorString);
    _d.CPGF_MD_TEMPLATE _method("errorString", (QString (D::ClassType::*) ())&D::ClassType::errorString);
    _d.CPGF_MD_TEMPLATE _method("escape", &D::ClassType::escape, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::PatternSyntax>("PatternSyntax")
        ._element("RegExp", D::ClassType::RegExp)
        ._element("Wildcard", D::ClassType::Wildcard)
        ._element("FixedString", D::ClassType::FixedString)
        ._element("RegExp2", D::ClassType::RegExp2)
        ._element("WildcardUnix", D::ClassType::WildcardUnix)
        ._element("W3CXmlSchema11", D::ClassType::W3CXmlSchema11)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::CaretMode>("CaretMode")
        ._element("CaretAtZero", D::ClassType::CaretAtZero)
        ._element("CaretAtOffset", D::ClassType::CaretAtOffset)
        ._element("CaretWontMatch", D::ClassType::CaretWontMatch)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QRegExp & (*)(cpgf::GMetaSelf, const QRegExp &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QRegExp & (*) (QRegExp *, const QRegExp &))&opErAToRWrapper_QRegExp__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QRegExp &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QRegExp *, const QRegExp &))&opErAToRWrapper_QRegExp__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QRegExp &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QRegExp *, const QRegExp &))&opErAToRWrapper_QRegExp__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
