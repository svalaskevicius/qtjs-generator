// Auto generated file, don't modify.

#ifndef __META_QTCORE_QTEXTBOUNDARYFINDER_H
#define __META_QTCORE_QTEXTBOUNDARYFINDER_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


inline QTextBoundaryFinder & opErAToRWrapper_QTextBoundaryFinder__opAssign(QTextBoundaryFinder * self, const QTextBoundaryFinder & other) {
    return (*self) = other;
}


template <typename D>
void buildMetaClass_QTextBoundaryFinder(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QTextBoundaryFinder &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QTextBoundaryFinder::BoundaryType, const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QTextBoundaryFinder::BoundaryType, const QChar *, int, unsigned char *, int)>()
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("string", &D::ClassType::string);
    _d.CPGF_MD_TEMPLATE _method("toStart", &D::ClassType::toStart);
    _d.CPGF_MD_TEMPLATE _method("toEnd", &D::ClassType::toEnd);
    _d.CPGF_MD_TEMPLATE _method("position", &D::ClassType::position);
    _d.CPGF_MD_TEMPLATE _method("setPosition", &D::ClassType::setPosition);
    _d.CPGF_MD_TEMPLATE _method("toNextBoundary", &D::ClassType::toNextBoundary);
    _d.CPGF_MD_TEMPLATE _method("toPreviousBoundary", &D::ClassType::toPreviousBoundary);
    _d.CPGF_MD_TEMPLATE _method("isAtBoundary", &D::ClassType::isAtBoundary);
    _d.CPGF_MD_TEMPLATE _method("boundaryReasons", &D::ClassType::boundaryReasons);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::BoundaryType>("BoundaryType")
        ._element("Grapheme", D::ClassType::Grapheme)
        ._element("Word", D::ClassType::Word)
        ._element("Sentence", D::ClassType::Sentence)
        ._element("Line", D::ClassType::Line)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::BoundaryReason>("BoundaryReason")
        ._element("NotAtBoundary", D::ClassType::NotAtBoundary)
        ._element("BreakOpportunity", D::ClassType::BreakOpportunity)
        ._element("StartOfItem", D::ClassType::StartOfItem)
        ._element("EndOfItem", D::ClassType::EndOfItem)
        ._element("MandatoryBreak", D::ClassType::MandatoryBreak)
        ._element("SoftHyphen", D::ClassType::SoftHyphen)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QTextBoundaryFinder & (*)(cpgf::GMetaSelf, const QTextBoundaryFinder &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QTextBoundaryFinder & (*) (QTextBoundaryFinder *, const QTextBoundaryFinder &))&opErAToRWrapper_QTextBoundaryFinder__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
