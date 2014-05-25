// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QPAGEDPAINTDEVICE_H
#define CPGF_META_QTGUI_QPAGEDPAINTDEVICE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QPagedPaintDevice(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("newPage", &D::ClassType::newPage);
    _d.CPGF_MD_TEMPLATE _method("setPageLayout", &D::ClassType::setPageLayout);
    _d.CPGF_MD_TEMPLATE _method("setPageSize", (bool (D::ClassType::*) (const QPageSize &))&D::ClassType::setPageSize, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setPageOrientation", &D::ClassType::setPageOrientation);
    _d.CPGF_MD_TEMPLATE _method("setPageMargins", (bool (D::ClassType::*) (const QMarginsF &))&D::ClassType::setPageMargins, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setPageMargins", (bool (D::ClassType::*) (const QMarginsF &, QPageLayout::Unit))&D::ClassType::setPageMargins, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("pageLayout", &D::ClassType::pageLayout);
    _d.CPGF_MD_TEMPLATE _method("setPageSize", (void (D::ClassType::*) (QPagedPaintDevice::PageSize))&D::ClassType::setPageSize);
    _d.CPGF_MD_TEMPLATE _method("pageSize", &D::ClassType::pageSize);
    _d.CPGF_MD_TEMPLATE _method("setPageSizeMM", &D::ClassType::setPageSizeMM, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("pageSizeMM", &D::ClassType::pageSizeMM);
    _d.CPGF_MD_TEMPLATE _method("setMargins", &D::ClassType::setMargins);
    _d.CPGF_MD_TEMPLATE _method("margins", &D::ClassType::margins);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::PageSize>("PageSize")
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
    {
        GDefineMetaClass<QPagedPaintDevice::Margins> _nd = GDefineMetaClass<QPagedPaintDevice::Margins>::declare("Margins");
        _nd.CPGF_MD_TEMPLATE _field("left", &QPagedPaintDevice::Margins::left);
        _nd.CPGF_MD_TEMPLATE _field("right", &QPagedPaintDevice::Margins::right);
        _nd.CPGF_MD_TEMPLATE _field("top", &QPagedPaintDevice::Margins::top);
        _nd.CPGF_MD_TEMPLATE _field("bottom", &QPagedPaintDevice::Margins::bottom);
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
