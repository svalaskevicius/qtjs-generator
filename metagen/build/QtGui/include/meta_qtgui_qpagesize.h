// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QPAGESIZE_H
#define CPGF_META_QTGUI_QPAGESIZE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qpagesize(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QPageSize &, const QPageSize &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QPageSize &, const QPageSize &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QPageSize &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline QPageSize & opErAToRWrapper_QPageSize__opAssign(QPageSize * self, const QPageSize & other) {
    return (*self) = other;
}


template <typename D>
void buildMetaClass_QPageSize(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QPageSize::PageSizeId)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QSize &, const QString &, QPageSize::SizeMatchPolicy)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QPageSize::FuzzyMatch))
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QSizeF &, QPageSize::Unit, const QString &, QPageSize::SizeMatchPolicy)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QPageSize::FuzzyMatch))
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPageSize &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("isEquivalentTo", &D::ClassType::isEquivalentTo, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("key", (QString (D::ClassType::*) () const)&D::ClassType::key);
    _d.CPGF_MD_TEMPLATE _method("name", (QString (D::ClassType::*) () const)&D::ClassType::name);
    _d.CPGF_MD_TEMPLATE _method("id", (QPageSize::PageSizeId (D::ClassType::*) () const)&D::ClassType::id);
    _d.CPGF_MD_TEMPLATE _method("windowsId", (int (D::ClassType::*) () const)&D::ClassType::windowsId);
    _d.CPGF_MD_TEMPLATE _method("definitionSize", (QSizeF (D::ClassType::*) () const)&D::ClassType::definitionSize);
    _d.CPGF_MD_TEMPLATE _method("definitionUnits", (QPageSize::Unit (D::ClassType::*) () const)&D::ClassType::definitionUnits);
    _d.CPGF_MD_TEMPLATE _method("size", (QSizeF (D::ClassType::*) (QPageSize::Unit) const)&D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("sizePoints", (QSize (D::ClassType::*) () const)&D::ClassType::sizePoints);
    _d.CPGF_MD_TEMPLATE _method("sizePixels", (QSize (D::ClassType::*) (int) const)&D::ClassType::sizePixels);
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("rectPoints", &D::ClassType::rectPoints);
    _d.CPGF_MD_TEMPLATE _method("rectPixels", &D::ClassType::rectPixels);
    _d.CPGF_MD_TEMPLATE _method("key", (QString (*) (QPageSize::PageSizeId))&D::ClassType::key);
    _d.CPGF_MD_TEMPLATE _method("name", (QString (*) (QPageSize::PageSizeId))&D::ClassType::name);
    _d.CPGF_MD_TEMPLATE _method("id", (QPageSize::PageSizeId (*) (const QSize &, QPageSize::SizeMatchPolicy))&D::ClassType::id)
        ._default(copyVariantFromCopyable(QPageSize::FuzzyMatch))
    ;
    _d.CPGF_MD_TEMPLATE _method("id", (QPageSize::PageSizeId (*) (const QSizeF &, QPageSize::Unit, QPageSize::SizeMatchPolicy))&D::ClassType::id, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QPageSize::FuzzyMatch))
    ;
    _d.CPGF_MD_TEMPLATE _method("id", (QPageSize::PageSizeId (*) (int))&D::ClassType::id);
    _d.CPGF_MD_TEMPLATE _method("windowsId", (int (*) (QPageSize::PageSizeId))&D::ClassType::windowsId);
    _d.CPGF_MD_TEMPLATE _method("definitionSize", (QSizeF (*) (QPageSize::PageSizeId))&D::ClassType::definitionSize);
    _d.CPGF_MD_TEMPLATE _method("definitionUnits", (QPageSize::Unit (*) (QPageSize::PageSizeId))&D::ClassType::definitionUnits);
    _d.CPGF_MD_TEMPLATE _method("size", (QSizeF (*) (QPageSize::PageSizeId, QPageSize::Unit))&D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("sizePoints", (QSize (*) (QPageSize::PageSizeId))&D::ClassType::sizePoints);
    _d.CPGF_MD_TEMPLATE _method("sizePixels", (QSize (*) (QPageSize::PageSizeId, int))&D::ClassType::sizePixels);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::PageSizeId>("PageSizeId")
        ._element("A4", D::ClassType::A4)
        ._element("B5", D::ClassType::B5)
        ._element("Letter", D::ClassType::Letter)
        ._element("Legal", D::ClassType::Legal)
        ._element("Executive", D::ClassType::Executive)
        ._element("A0", D::ClassType::A0)
        ._element("A1", D::ClassType::A1)
        ._element("A2", D::ClassType::A2)
        ._element("A3", D::ClassType::A3)
        ._element("A5", D::ClassType::A5)
        ._element("A6", D::ClassType::A6)
        ._element("A7", D::ClassType::A7)
        ._element("A8", D::ClassType::A8)
        ._element("A9", D::ClassType::A9)
        ._element("B0", D::ClassType::B0)
        ._element("B1", D::ClassType::B1)
        ._element("B10", D::ClassType::B10)
        ._element("B2", D::ClassType::B2)
        ._element("B3", D::ClassType::B3)
        ._element("B4", D::ClassType::B4)
        ._element("B6", D::ClassType::B6)
        ._element("B7", D::ClassType::B7)
        ._element("B8", D::ClassType::B8)
        ._element("B9", D::ClassType::B9)
        ._element("C5E", D::ClassType::C5E)
        ._element("Comm10E", D::ClassType::Comm10E)
        ._element("DLE", D::ClassType::DLE)
        ._element("Folio", D::ClassType::Folio)
        ._element("Ledger", D::ClassType::Ledger)
        ._element("Tabloid", D::ClassType::Tabloid)
        ._element("Custom", D::ClassType::Custom)
        ._element("A10", D::ClassType::A10)
        ._element("A3Extra", D::ClassType::A3Extra)
        ._element("A4Extra", D::ClassType::A4Extra)
        ._element("A4Plus", D::ClassType::A4Plus)
        ._element("A4Small", D::ClassType::A4Small)
        ._element("A5Extra", D::ClassType::A5Extra)
        ._element("B5Extra", D::ClassType::B5Extra)
        ._element("JisB0", D::ClassType::JisB0)
        ._element("JisB1", D::ClassType::JisB1)
        ._element("JisB2", D::ClassType::JisB2)
        ._element("JisB3", D::ClassType::JisB3)
        ._element("JisB4", D::ClassType::JisB4)
        ._element("JisB5", D::ClassType::JisB5)
        ._element("JisB6", D::ClassType::JisB6)
        ._element("JisB7", D::ClassType::JisB7)
        ._element("JisB8", D::ClassType::JisB8)
        ._element("JisB9", D::ClassType::JisB9)
        ._element("JisB10", D::ClassType::JisB10)
        ._element("AnsiC", D::ClassType::AnsiC)
        ._element("AnsiD", D::ClassType::AnsiD)
        ._element("AnsiE", D::ClassType::AnsiE)
        ._element("LegalExtra", D::ClassType::LegalExtra)
        ._element("LetterExtra", D::ClassType::LetterExtra)
        ._element("LetterPlus", D::ClassType::LetterPlus)
        ._element("LetterSmall", D::ClassType::LetterSmall)
        ._element("TabloidExtra", D::ClassType::TabloidExtra)
        ._element("ArchA", D::ClassType::ArchA)
        ._element("ArchB", D::ClassType::ArchB)
        ._element("ArchC", D::ClassType::ArchC)
        ._element("ArchD", D::ClassType::ArchD)
        ._element("ArchE", D::ClassType::ArchE)
        ._element("Imperial7x9", D::ClassType::Imperial7x9)
        ._element("Imperial8x10", D::ClassType::Imperial8x10)
        ._element("Imperial9x11", D::ClassType::Imperial9x11)
        ._element("Imperial9x12", D::ClassType::Imperial9x12)
        ._element("Imperial10x11", D::ClassType::Imperial10x11)
        ._element("Imperial10x13", D::ClassType::Imperial10x13)
        ._element("Imperial10x14", D::ClassType::Imperial10x14)
        ._element("Imperial12x11", D::ClassType::Imperial12x11)
        ._element("Imperial15x11", D::ClassType::Imperial15x11)
        ._element("ExecutiveStandard", D::ClassType::ExecutiveStandard)
        ._element("Note", D::ClassType::Note)
        ._element("Quarto", D::ClassType::Quarto)
        ._element("Statement", D::ClassType::Statement)
        ._element("SuperA", D::ClassType::SuperA)
        ._element("SuperB", D::ClassType::SuperB)
        ._element("Postcard", D::ClassType::Postcard)
        ._element("DoublePostcard", D::ClassType::DoublePostcard)
        ._element("Prc16K", D::ClassType::Prc16K)
        ._element("Prc32K", D::ClassType::Prc32K)
        ._element("Prc32KBig", D::ClassType::Prc32KBig)
        ._element("FanFoldUS", D::ClassType::FanFoldUS)
        ._element("FanFoldGerman", D::ClassType::FanFoldGerman)
        ._element("FanFoldGermanLegal", D::ClassType::FanFoldGermanLegal)
        ._element("EnvelopeB4", D::ClassType::EnvelopeB4)
        ._element("EnvelopeB5", D::ClassType::EnvelopeB5)
        ._element("EnvelopeB6", D::ClassType::EnvelopeB6)
        ._element("EnvelopeC0", D::ClassType::EnvelopeC0)
        ._element("EnvelopeC1", D::ClassType::EnvelopeC1)
        ._element("EnvelopeC2", D::ClassType::EnvelopeC2)
        ._element("EnvelopeC3", D::ClassType::EnvelopeC3)
        ._element("EnvelopeC4", D::ClassType::EnvelopeC4)
        ._element("EnvelopeC6", D::ClassType::EnvelopeC6)
        ._element("EnvelopeC65", D::ClassType::EnvelopeC65)
        ._element("EnvelopeC7", D::ClassType::EnvelopeC7)
        ._element("Envelope9", D::ClassType::Envelope9)
        ._element("Envelope11", D::ClassType::Envelope11)
        ._element("Envelope12", D::ClassType::Envelope12)
        ._element("Envelope14", D::ClassType::Envelope14)
        ._element("EnvelopeMonarch", D::ClassType::EnvelopeMonarch)
        ._element("EnvelopePersonal", D::ClassType::EnvelopePersonal)
        ._element("EnvelopeChou3", D::ClassType::EnvelopeChou3)
        ._element("EnvelopeChou4", D::ClassType::EnvelopeChou4)
        ._element("EnvelopeInvite", D::ClassType::EnvelopeInvite)
        ._element("EnvelopeItalian", D::ClassType::EnvelopeItalian)
        ._element("EnvelopeKaku2", D::ClassType::EnvelopeKaku2)
        ._element("EnvelopeKaku3", D::ClassType::EnvelopeKaku3)
        ._element("EnvelopePrc1", D::ClassType::EnvelopePrc1)
        ._element("EnvelopePrc2", D::ClassType::EnvelopePrc2)
        ._element("EnvelopePrc3", D::ClassType::EnvelopePrc3)
        ._element("EnvelopePrc4", D::ClassType::EnvelopePrc4)
        ._element("EnvelopePrc5", D::ClassType::EnvelopePrc5)
        ._element("EnvelopePrc6", D::ClassType::EnvelopePrc6)
        ._element("EnvelopePrc7", D::ClassType::EnvelopePrc7)
        ._element("EnvelopePrc8", D::ClassType::EnvelopePrc8)
        ._element("EnvelopePrc9", D::ClassType::EnvelopePrc9)
        ._element("EnvelopePrc10", D::ClassType::EnvelopePrc10)
        ._element("EnvelopeYou4", D::ClassType::EnvelopeYou4)
        ._element("LastPageSize", D::ClassType::LastPageSize)
        ._element("NPageSize", D::ClassType::NPageSize)
        ._element("NPaperSize", D::ClassType::NPaperSize)
        ._element("AnsiA", D::ClassType::AnsiA)
        ._element("AnsiB", D::ClassType::AnsiB)
        ._element("EnvelopeC5", D::ClassType::EnvelopeC5)
        ._element("EnvelopeDL", D::ClassType::EnvelopeDL)
        ._element("Envelope10", D::ClassType::Envelope10)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Unit>("Unit")
        ._element("Millimeter", D::ClassType::Millimeter)
        ._element("Point", D::ClassType::Point)
        ._element("Inch", D::ClassType::Inch)
        ._element("Pica", D::ClassType::Pica)
        ._element("Didot", D::ClassType::Didot)
        ._element("Cicero", D::ClassType::Cicero)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SizeMatchPolicy>("SizeMatchPolicy")
        ._element("FuzzyMatch", D::ClassType::FuzzyMatch)
        ._element("FuzzyOrientationMatch", D::ClassType::FuzzyOrientationMatch)
        ._element("ExactMatch", D::ClassType::ExactMatch)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QPageSize & (*)(cpgf::GMetaSelf, const QPageSize &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QPageSize & (*) (QPageSize *, const QPageSize &))&opErAToRWrapper_QPageSize__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
