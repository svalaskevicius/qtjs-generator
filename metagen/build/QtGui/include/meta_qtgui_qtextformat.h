// Auto generated file, don't modify.

#ifndef __META_QTGUI_QTEXTFORMAT_H
#define __META_QTGUI_QTEXTFORMAT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qtextformat(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QTextLength &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QTextLength &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QTextLength &)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QTextFormat &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QTextFormat &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QTextFormat &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


template <typename D>
void buildMetaClass_QTextBlockFormat(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("setAlignment", &D::ClassType::setAlignment);
    _d.CPGF_MD_TEMPLATE _method("alignment", &D::ClassType::alignment);
    _d.CPGF_MD_TEMPLATE _method("setTopMargin", &D::ClassType::setTopMargin);
    _d.CPGF_MD_TEMPLATE _method("topMargin", &D::ClassType::topMargin);
    _d.CPGF_MD_TEMPLATE _method("setBottomMargin", &D::ClassType::setBottomMargin);
    _d.CPGF_MD_TEMPLATE _method("bottomMargin", &D::ClassType::bottomMargin);
    _d.CPGF_MD_TEMPLATE _method("setLeftMargin", &D::ClassType::setLeftMargin);
    _d.CPGF_MD_TEMPLATE _method("leftMargin", &D::ClassType::leftMargin);
    _d.CPGF_MD_TEMPLATE _method("setRightMargin", &D::ClassType::setRightMargin);
    _d.CPGF_MD_TEMPLATE _method("rightMargin", &D::ClassType::rightMargin);
    _d.CPGF_MD_TEMPLATE _method("setTextIndent", &D::ClassType::setTextIndent);
    _d.CPGF_MD_TEMPLATE _method("textIndent", &D::ClassType::textIndent);
    _d.CPGF_MD_TEMPLATE _method("setIndent", &D::ClassType::setIndent);
    _d.CPGF_MD_TEMPLATE _method("indent", &D::ClassType::indent);
    _d.CPGF_MD_TEMPLATE _method("setLineHeight", &D::ClassType::setLineHeight);
    _d.CPGF_MD_TEMPLATE _method("lineHeight", (qreal (D::ClassType::*) (qreal, qreal) const)&D::ClassType::lineHeight);
    _d.CPGF_MD_TEMPLATE _method("lineHeight", (qreal (D::ClassType::*) () const)&D::ClassType::lineHeight);
    _d.CPGF_MD_TEMPLATE _method("lineHeightType", &D::ClassType::lineHeightType);
    _d.CPGF_MD_TEMPLATE _method("setNonBreakableLines", &D::ClassType::setNonBreakableLines);
    _d.CPGF_MD_TEMPLATE _method("nonBreakableLines", &D::ClassType::nonBreakableLines);
    _d.CPGF_MD_TEMPLATE _method("setPageBreakPolicy", &D::ClassType::setPageBreakPolicy);
    _d.CPGF_MD_TEMPLATE _method("pageBreakPolicy", &D::ClassType::pageBreakPolicy);
    _d.CPGF_MD_TEMPLATE _method("setTabPositions", &D::ClassType::setTabPositions);
    _d.CPGF_MD_TEMPLATE _method("tabPositions", &D::ClassType::tabPositions);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::LineHeightTypes>("LineHeightTypes")
        ._element("SingleHeight", D::ClassType::SingleHeight)
        ._element("ProportionalHeight", D::ClassType::ProportionalHeight)
        ._element("FixedHeight", D::ClassType::FixedHeight)
        ._element("MinimumHeight", D::ClassType::MinimumHeight)
        ._element("LineDistanceHeight", D::ClassType::LineDistanceHeight)
    ;
}


template <typename D>
void buildMetaClass_QTextCharFormat(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("setFont", &D::ClassType::setFont, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("font", &D::ClassType::font);
    _d.CPGF_MD_TEMPLATE _method("setFontFamily", &D::ClassType::setFontFamily, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fontFamily", &D::ClassType::fontFamily);
    _d.CPGF_MD_TEMPLATE _method("setFontPointSize", &D::ClassType::setFontPointSize);
    _d.CPGF_MD_TEMPLATE _method("fontPointSize", &D::ClassType::fontPointSize);
    _d.CPGF_MD_TEMPLATE _method("setFontWeight", &D::ClassType::setFontWeight);
    _d.CPGF_MD_TEMPLATE _method("fontWeight", &D::ClassType::fontWeight);
    _d.CPGF_MD_TEMPLATE _method("setFontItalic", &D::ClassType::setFontItalic);
    _d.CPGF_MD_TEMPLATE _method("fontItalic", &D::ClassType::fontItalic);
    _d.CPGF_MD_TEMPLATE _method("setFontCapitalization", &D::ClassType::setFontCapitalization);
    _d.CPGF_MD_TEMPLATE _method("fontCapitalization", &D::ClassType::fontCapitalization);
    _d.CPGF_MD_TEMPLATE _method("setFontLetterSpacingType", &D::ClassType::setFontLetterSpacingType);
    _d.CPGF_MD_TEMPLATE _method("fontLetterSpacingType", &D::ClassType::fontLetterSpacingType);
    _d.CPGF_MD_TEMPLATE _method("setFontLetterSpacing", &D::ClassType::setFontLetterSpacing);
    _d.CPGF_MD_TEMPLATE _method("fontLetterSpacing", &D::ClassType::fontLetterSpacing);
    _d.CPGF_MD_TEMPLATE _method("setFontWordSpacing", &D::ClassType::setFontWordSpacing);
    _d.CPGF_MD_TEMPLATE _method("fontWordSpacing", &D::ClassType::fontWordSpacing);
    _d.CPGF_MD_TEMPLATE _method("setFontUnderline", &D::ClassType::setFontUnderline);
    _d.CPGF_MD_TEMPLATE _method("fontUnderline", &D::ClassType::fontUnderline);
    _d.CPGF_MD_TEMPLATE _method("setFontOverline", &D::ClassType::setFontOverline);
    _d.CPGF_MD_TEMPLATE _method("fontOverline", &D::ClassType::fontOverline);
    _d.CPGF_MD_TEMPLATE _method("setFontStrikeOut", &D::ClassType::setFontStrikeOut);
    _d.CPGF_MD_TEMPLATE _method("fontStrikeOut", &D::ClassType::fontStrikeOut);
    _d.CPGF_MD_TEMPLATE _method("setUnderlineColor", &D::ClassType::setUnderlineColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("underlineColor", &D::ClassType::underlineColor);
    _d.CPGF_MD_TEMPLATE _method("setFontFixedPitch", &D::ClassType::setFontFixedPitch);
    _d.CPGF_MD_TEMPLATE _method("fontFixedPitch", &D::ClassType::fontFixedPitch);
    _d.CPGF_MD_TEMPLATE _method("setFontStretch", &D::ClassType::setFontStretch);
    _d.CPGF_MD_TEMPLATE _method("fontStretch", &D::ClassType::fontStretch);
    _d.CPGF_MD_TEMPLATE _method("setFontStyleHint", &D::ClassType::setFontStyleHint)
        ._default(copyVariantFromCopyable(QFont::PreferDefault))
    ;
    _d.CPGF_MD_TEMPLATE _method("setFontStyleStrategy", &D::ClassType::setFontStyleStrategy);
    _d.CPGF_MD_TEMPLATE _method("fontStyleHint", &D::ClassType::fontStyleHint);
    _d.CPGF_MD_TEMPLATE _method("fontStyleStrategy", &D::ClassType::fontStyleStrategy);
    _d.CPGF_MD_TEMPLATE _method("setFontHintingPreference", &D::ClassType::setFontHintingPreference);
    _d.CPGF_MD_TEMPLATE _method("fontHintingPreference", &D::ClassType::fontHintingPreference);
    _d.CPGF_MD_TEMPLATE _method("setFontKerning", &D::ClassType::setFontKerning);
    _d.CPGF_MD_TEMPLATE _method("fontKerning", &D::ClassType::fontKerning);
    _d.CPGF_MD_TEMPLATE _method("setUnderlineStyle", &D::ClassType::setUnderlineStyle);
    _d.CPGF_MD_TEMPLATE _method("underlineStyle", &D::ClassType::underlineStyle);
    _d.CPGF_MD_TEMPLATE _method("setVerticalAlignment", &D::ClassType::setVerticalAlignment);
    _d.CPGF_MD_TEMPLATE _method("verticalAlignment", &D::ClassType::verticalAlignment);
    _d.CPGF_MD_TEMPLATE _method("setTextOutline", &D::ClassType::setTextOutline, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("textOutline", &D::ClassType::textOutline);
    _d.CPGF_MD_TEMPLATE _method("setToolTip", &D::ClassType::setToolTip, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("toolTip", &D::ClassType::toolTip);
    _d.CPGF_MD_TEMPLATE _method("setAnchor", &D::ClassType::setAnchor);
    _d.CPGF_MD_TEMPLATE _method("isAnchor", &D::ClassType::isAnchor);
    _d.CPGF_MD_TEMPLATE _method("setAnchorHref", &D::ClassType::setAnchorHref, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("anchorHref", &D::ClassType::anchorHref);
    _d.CPGF_MD_TEMPLATE _method("setAnchorName", &D::ClassType::setAnchorName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("anchorName", &D::ClassType::anchorName);
    _d.CPGF_MD_TEMPLATE _method("setAnchorNames", &D::ClassType::setAnchorNames, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("anchorNames", &D::ClassType::anchorNames);
    _d.CPGF_MD_TEMPLATE _method("setTableCellRowSpan", &D::ClassType::setTableCellRowSpan);
    _d.CPGF_MD_TEMPLATE _method("tableCellRowSpan", &D::ClassType::tableCellRowSpan);
    _d.CPGF_MD_TEMPLATE _method("setTableCellColumnSpan", &D::ClassType::setTableCellColumnSpan);
    _d.CPGF_MD_TEMPLATE _method("tableCellColumnSpan", &D::ClassType::tableCellColumnSpan);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::VerticalAlignment>("VerticalAlignment")
        ._element("AlignNormal", D::ClassType::AlignNormal)
        ._element("AlignSuperScript", D::ClassType::AlignSuperScript)
        ._element("AlignSubScript", D::ClassType::AlignSubScript)
        ._element("AlignMiddle", D::ClassType::AlignMiddle)
        ._element("AlignTop", D::ClassType::AlignTop)
        ._element("AlignBottom", D::ClassType::AlignBottom)
        ._element("AlignBaseline", D::ClassType::AlignBaseline)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::UnderlineStyle>("UnderlineStyle")
        ._element("NoUnderline", D::ClassType::NoUnderline)
        ._element("SingleUnderline", D::ClassType::SingleUnderline)
        ._element("DashUnderline", D::ClassType::DashUnderline)
        ._element("DotLine", D::ClassType::DotLine)
        ._element("DashDotLine", D::ClassType::DashDotLine)
        ._element("DashDotDotLine", D::ClassType::DashDotDotLine)
        ._element("WaveUnderline", D::ClassType::WaveUnderline)
        ._element("SpellCheckUnderline", D::ClassType::SpellCheckUnderline)
    ;
}


inline QTextFormat & opErAToRWrapper_QTextFormat__opAssign(QTextFormat * self, const QTextFormat & rhs) {
    return (*self) = rhs;
}
inline bool opErAToRWrapper_QTextFormat__opEqual(const QTextFormat * self, const QTextFormat & rhs) {
    return (*self) == rhs;
}
inline bool opErAToRWrapper_QTextFormat__opNotEqual(const QTextFormat * self, const QTextFormat & rhs) {
    return (*self) != rhs;
}


template <typename D>
void buildMetaClass_QTextFormat(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QTextFormat &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("merge", &D::ClassType::merge, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("objectIndex", &D::ClassType::objectIndex);
    _d.CPGF_MD_TEMPLATE _method("setObjectIndex", &D::ClassType::setObjectIndex);
    _d.CPGF_MD_TEMPLATE _method("property", &D::ClassType::property);
    _d.CPGF_MD_TEMPLATE _method("setProperty", (void (D::ClassType::*) (int, const QVariant &))&D::ClassType::setProperty, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("clearProperty", &D::ClassType::clearProperty);
    _d.CPGF_MD_TEMPLATE _method("hasProperty", &D::ClassType::hasProperty);
    _d.CPGF_MD_TEMPLATE _method("boolProperty", &D::ClassType::boolProperty);
    _d.CPGF_MD_TEMPLATE _method("intProperty", &D::ClassType::intProperty);
    _d.CPGF_MD_TEMPLATE _method("doubleProperty", &D::ClassType::doubleProperty);
    _d.CPGF_MD_TEMPLATE _method("stringProperty", &D::ClassType::stringProperty);
    _d.CPGF_MD_TEMPLATE _method("colorProperty", &D::ClassType::colorProperty);
    _d.CPGF_MD_TEMPLATE _method("penProperty", &D::ClassType::penProperty);
    _d.CPGF_MD_TEMPLATE _method("brushProperty", &D::ClassType::brushProperty);
    _d.CPGF_MD_TEMPLATE _method("lengthProperty", &D::ClassType::lengthProperty);
    _d.CPGF_MD_TEMPLATE _method("lengthVectorProperty", &D::ClassType::lengthVectorProperty);
    _d.CPGF_MD_TEMPLATE _method("setProperty", (void (D::ClassType::*) (int, const QVector< QTextLength > &))&D::ClassType::setProperty, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("properties", &D::ClassType::properties);
    _d.CPGF_MD_TEMPLATE _method("propertyCount", &D::ClassType::propertyCount);
    _d.CPGF_MD_TEMPLATE _method("setObjectType", &D::ClassType::setObjectType);
    _d.CPGF_MD_TEMPLATE _method("objectType", &D::ClassType::objectType);
    _d.CPGF_MD_TEMPLATE _method("isCharFormat", &D::ClassType::isCharFormat);
    _d.CPGF_MD_TEMPLATE _method("isBlockFormat", &D::ClassType::isBlockFormat);
    _d.CPGF_MD_TEMPLATE _method("isListFormat", &D::ClassType::isListFormat);
    _d.CPGF_MD_TEMPLATE _method("isFrameFormat", &D::ClassType::isFrameFormat);
    _d.CPGF_MD_TEMPLATE _method("isImageFormat", &D::ClassType::isImageFormat);
    _d.CPGF_MD_TEMPLATE _method("isTableFormat", &D::ClassType::isTableFormat);
    _d.CPGF_MD_TEMPLATE _method("isTableCellFormat", &D::ClassType::isTableCellFormat);
    _d.CPGF_MD_TEMPLATE _method("toBlockFormat", &D::ClassType::toBlockFormat);
    _d.CPGF_MD_TEMPLATE _method("toCharFormat", &D::ClassType::toCharFormat);
    _d.CPGF_MD_TEMPLATE _method("toListFormat", &D::ClassType::toListFormat);
    _d.CPGF_MD_TEMPLATE _method("toTableFormat", &D::ClassType::toTableFormat);
    _d.CPGF_MD_TEMPLATE _method("toFrameFormat", &D::ClassType::toFrameFormat);
    _d.CPGF_MD_TEMPLATE _method("toImageFormat", &D::ClassType::toImageFormat);
    _d.CPGF_MD_TEMPLATE _method("toTableCellFormat", &D::ClassType::toTableCellFormat);
    _d.CPGF_MD_TEMPLATE _method("setLayoutDirection", &D::ClassType::setLayoutDirection);
    _d.CPGF_MD_TEMPLATE _method("layoutDirection", &D::ClassType::layoutDirection);
    _d.CPGF_MD_TEMPLATE _method("setBackground", &D::ClassType::setBackground, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("background", &D::ClassType::background);
    _d.CPGF_MD_TEMPLATE _method("clearBackground", &D::ClassType::clearBackground);
    _d.CPGF_MD_TEMPLATE _method("setForeground", &D::ClassType::setForeground, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("foreground", &D::ClassType::foreground);
    _d.CPGF_MD_TEMPLATE _method("clearForeground", &D::ClassType::clearForeground);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::FormatType>("FormatType")
        ._element("InvalidFormat", D::ClassType::InvalidFormat)
        ._element("BlockFormat", D::ClassType::BlockFormat)
        ._element("CharFormat", D::ClassType::CharFormat)
        ._element("ListFormat", D::ClassType::ListFormat)
        ._element("TableFormat", D::ClassType::TableFormat)
        ._element("FrameFormat", D::ClassType::FrameFormat)
        ._element("UserFormat", D::ClassType::UserFormat)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Property>("Property")
        ._element("ObjectIndex", D::ClassType::ObjectIndex)
        ._element("CssFloat", D::ClassType::CssFloat)
        ._element("LayoutDirection", D::ClassType::LayoutDirection)
        ._element("OutlinePen", D::ClassType::OutlinePen)
        ._element("BackgroundBrush", D::ClassType::BackgroundBrush)
        ._element("ForegroundBrush", D::ClassType::ForegroundBrush)
        ._element("BackgroundImageUrl", D::ClassType::BackgroundImageUrl)
        ._element("BlockAlignment", D::ClassType::BlockAlignment)
        ._element("BlockTopMargin", D::ClassType::BlockTopMargin)
        ._element("BlockBottomMargin", D::ClassType::BlockBottomMargin)
        ._element("BlockLeftMargin", D::ClassType::BlockLeftMargin)
        ._element("BlockRightMargin", D::ClassType::BlockRightMargin)
        ._element("TextIndent", D::ClassType::TextIndent)
        ._element("TabPositions", D::ClassType::TabPositions)
        ._element("BlockIndent", D::ClassType::BlockIndent)
        ._element("LineHeight", D::ClassType::LineHeight)
        ._element("LineHeightType", D::ClassType::LineHeightType)
        ._element("BlockNonBreakableLines", D::ClassType::BlockNonBreakableLines)
        ._element("BlockTrailingHorizontalRulerWidth", D::ClassType::BlockTrailingHorizontalRulerWidth)
        ._element("FirstFontProperty", D::ClassType::FirstFontProperty)
        ._element("FontCapitalization", D::ClassType::FontCapitalization)
        ._element("FontLetterSpacingType", D::ClassType::FontLetterSpacingType)
        ._element("FontLetterSpacing", D::ClassType::FontLetterSpacing)
        ._element("FontWordSpacing", D::ClassType::FontWordSpacing)
        ._element("FontStretch", D::ClassType::FontStretch)
        ._element("FontStyleHint", D::ClassType::FontStyleHint)
        ._element("FontStyleStrategy", D::ClassType::FontStyleStrategy)
        ._element("FontKerning", D::ClassType::FontKerning)
        ._element("FontHintingPreference", D::ClassType::FontHintingPreference)
        ._element("FontFamily", D::ClassType::FontFamily)
        ._element("FontPointSize", D::ClassType::FontPointSize)
        ._element("FontSizeAdjustment", D::ClassType::FontSizeAdjustment)
        ._element("FontSizeIncrement", D::ClassType::FontSizeIncrement)
        ._element("FontWeight", D::ClassType::FontWeight)
        ._element("FontItalic", D::ClassType::FontItalic)
        ._element("FontUnderline", D::ClassType::FontUnderline)
        ._element("FontOverline", D::ClassType::FontOverline)
        ._element("FontStrikeOut", D::ClassType::FontStrikeOut)
        ._element("FontFixedPitch", D::ClassType::FontFixedPitch)
        ._element("FontPixelSize", D::ClassType::FontPixelSize)
        ._element("LastFontProperty", D::ClassType::LastFontProperty)
        ._element("TextUnderlineColor", D::ClassType::TextUnderlineColor)
        ._element("TextVerticalAlignment", D::ClassType::TextVerticalAlignment)
        ._element("TextOutline", D::ClassType::TextOutline)
        ._element("TextUnderlineStyle", D::ClassType::TextUnderlineStyle)
        ._element("TextToolTip", D::ClassType::TextToolTip)
        ._element("IsAnchor", D::ClassType::IsAnchor)
        ._element("AnchorHref", D::ClassType::AnchorHref)
        ._element("AnchorName", D::ClassType::AnchorName)
        ._element("ObjectType", D::ClassType::ObjectType)
        ._element("ListStyle", D::ClassType::ListStyle)
        ._element("ListIndent", D::ClassType::ListIndent)
        ._element("ListNumberPrefix", D::ClassType::ListNumberPrefix)
        ._element("ListNumberSuffix", D::ClassType::ListNumberSuffix)
        ._element("FrameBorder", D::ClassType::FrameBorder)
        ._element("FrameMargin", D::ClassType::FrameMargin)
        ._element("FramePadding", D::ClassType::FramePadding)
        ._element("FrameWidth", D::ClassType::FrameWidth)
        ._element("FrameHeight", D::ClassType::FrameHeight)
        ._element("FrameTopMargin", D::ClassType::FrameTopMargin)
        ._element("FrameBottomMargin", D::ClassType::FrameBottomMargin)
        ._element("FrameLeftMargin", D::ClassType::FrameLeftMargin)
        ._element("FrameRightMargin", D::ClassType::FrameRightMargin)
        ._element("FrameBorderBrush", D::ClassType::FrameBorderBrush)
        ._element("FrameBorderStyle", D::ClassType::FrameBorderStyle)
        ._element("TableColumns", D::ClassType::TableColumns)
        ._element("TableColumnWidthConstraints", D::ClassType::TableColumnWidthConstraints)
        ._element("TableCellSpacing", D::ClassType::TableCellSpacing)
        ._element("TableCellPadding", D::ClassType::TableCellPadding)
        ._element("TableHeaderRowCount", D::ClassType::TableHeaderRowCount)
        ._element("TableCellRowSpan", D::ClassType::TableCellRowSpan)
        ._element("TableCellColumnSpan", D::ClassType::TableCellColumnSpan)
        ._element("TableCellTopPadding", D::ClassType::TableCellTopPadding)
        ._element("TableCellBottomPadding", D::ClassType::TableCellBottomPadding)
        ._element("TableCellLeftPadding", D::ClassType::TableCellLeftPadding)
        ._element("TableCellRightPadding", D::ClassType::TableCellRightPadding)
        ._element("ImageName", D::ClassType::ImageName)
        ._element("ImageWidth", D::ClassType::ImageWidth)
        ._element("ImageHeight", D::ClassType::ImageHeight)
        ._element("FullWidthSelection", D::ClassType::FullWidthSelection)
        ._element("PageBreakPolicy", D::ClassType::PageBreakPolicy)
        ._element("UserProperty", D::ClassType::UserProperty)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ObjectTypes>("ObjectTypes")
        ._element("NoObject", D::ClassType::NoObject)
        ._element("ImageObject", D::ClassType::ImageObject)
        ._element("TableObject", D::ClassType::TableObject)
        ._element("TableCellObject", D::ClassType::TableCellObject)
        ._element("UserObject", D::ClassType::UserObject)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::PageBreakFlag>("PageBreakFlag")
        ._element("PageBreak_Auto", D::ClassType::PageBreak_Auto)
        ._element("PageBreak_AlwaysBefore", D::ClassType::PageBreak_AlwaysBefore)
        ._element("PageBreak_AlwaysAfter", D::ClassType::PageBreak_AlwaysAfter)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QTextFormat & (*)(cpgf::GMetaSelf, const QTextFormat &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QTextFormat & (*) (QTextFormat *, const QTextFormat &))&opErAToRWrapper_QTextFormat__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTextFormat &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QTextFormat *, const QTextFormat &))&opErAToRWrapper_QTextFormat__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTextFormat &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QTextFormat *, const QTextFormat &))&opErAToRWrapper_QTextFormat__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
    {
        GDefineMetaClass<QFlags<typename QTextFormat::PageBreakFlag > > _t_d = GDefineMetaClass<QFlags<typename QTextFormat::PageBreakFlag > >::lazyDeclare("PageBreakFlags", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QTextFormat::PageBreakFlag > >, typename QTextFormat::PageBreakFlag >);
        _d._class(_t_d);
    }
}


template <typename D>
void buildMetaClass_QTextFrameFormat(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("setPosition", &D::ClassType::setPosition);
    _d.CPGF_MD_TEMPLATE _method("position", &D::ClassType::position);
    _d.CPGF_MD_TEMPLATE _method("setBorder", &D::ClassType::setBorder);
    _d.CPGF_MD_TEMPLATE _method("border", &D::ClassType::border);
    _d.CPGF_MD_TEMPLATE _method("setBorderBrush", &D::ClassType::setBorderBrush, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("borderBrush", &D::ClassType::borderBrush);
    _d.CPGF_MD_TEMPLATE _method("setBorderStyle", &D::ClassType::setBorderStyle);
    _d.CPGF_MD_TEMPLATE _method("borderStyle", &D::ClassType::borderStyle);
    _d.CPGF_MD_TEMPLATE _method("setMargin", &D::ClassType::setMargin);
    _d.CPGF_MD_TEMPLATE _method("margin", &D::ClassType::margin);
    _d.CPGF_MD_TEMPLATE _method("setTopMargin", &D::ClassType::setTopMargin);
    _d.CPGF_MD_TEMPLATE _method("topMargin", &D::ClassType::topMargin);
    _d.CPGF_MD_TEMPLATE _method("setBottomMargin", &D::ClassType::setBottomMargin);
    _d.CPGF_MD_TEMPLATE _method("bottomMargin", &D::ClassType::bottomMargin);
    _d.CPGF_MD_TEMPLATE _method("setLeftMargin", &D::ClassType::setLeftMargin);
    _d.CPGF_MD_TEMPLATE _method("leftMargin", &D::ClassType::leftMargin);
    _d.CPGF_MD_TEMPLATE _method("setRightMargin", &D::ClassType::setRightMargin);
    _d.CPGF_MD_TEMPLATE _method("rightMargin", &D::ClassType::rightMargin);
    _d.CPGF_MD_TEMPLATE _method("setPadding", &D::ClassType::setPadding);
    _d.CPGF_MD_TEMPLATE _method("padding", &D::ClassType::padding);
    _d.CPGF_MD_TEMPLATE _method("setWidth", (void (D::ClassType::*) (qreal))&D::ClassType::setWidth);
    _d.CPGF_MD_TEMPLATE _method("setWidth", (void (D::ClassType::*) (const QTextLength &))&D::ClassType::setWidth);
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("setHeight", (void (D::ClassType::*) (qreal))&D::ClassType::setHeight);
    _d.CPGF_MD_TEMPLATE _method("setHeight", (void (D::ClassType::*) (const QTextLength &))&D::ClassType::setHeight);
    _d.CPGF_MD_TEMPLATE _method("height", &D::ClassType::height);
    _d.CPGF_MD_TEMPLATE _method("setPageBreakPolicy", &D::ClassType::setPageBreakPolicy);
    _d.CPGF_MD_TEMPLATE _method("pageBreakPolicy", &D::ClassType::pageBreakPolicy);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Position>("Position")
        ._element("InFlow", D::ClassType::InFlow)
        ._element("FloatLeft", D::ClassType::FloatLeft)
        ._element("FloatRight", D::ClassType::FloatRight)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::BorderStyle>("BorderStyle")
        ._element("BorderStyle_None", D::ClassType::BorderStyle_None)
        ._element("BorderStyle_Dotted", D::ClassType::BorderStyle_Dotted)
        ._element("BorderStyle_Dashed", D::ClassType::BorderStyle_Dashed)
        ._element("BorderStyle_Solid", D::ClassType::BorderStyle_Solid)
        ._element("BorderStyle_Double", D::ClassType::BorderStyle_Double)
        ._element("BorderStyle_DotDash", D::ClassType::BorderStyle_DotDash)
        ._element("BorderStyle_DotDotDash", D::ClassType::BorderStyle_DotDotDash)
        ._element("BorderStyle_Groove", D::ClassType::BorderStyle_Groove)
        ._element("BorderStyle_Ridge", D::ClassType::BorderStyle_Ridge)
        ._element("BorderStyle_Inset", D::ClassType::BorderStyle_Inset)
        ._element("BorderStyle_Outset", D::ClassType::BorderStyle_Outset)
    ;
}


template <typename D>
void buildMetaClass_QTextImageFormat(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("setName", &D::ClassType::setName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("name", &D::ClassType::name);
    _d.CPGF_MD_TEMPLATE _method("setWidth", &D::ClassType::setWidth);
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("setHeight", &D::ClassType::setHeight);
    _d.CPGF_MD_TEMPLATE _method("height", &D::ClassType::height);
}


inline bool opErAToRWrapper_QTextLength__opEqual(const QTextLength * self, const QTextLength & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QTextLength__opNotEqual(const QTextLength * self, const QTextLength & other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QTextLength(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QTextLength::Type, qreal)>();
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("value", &D::ClassType::value);
    _d.CPGF_MD_TEMPLATE _method("rawValue", &D::ClassType::rawValue);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Type>("Type")
        ._element("VariableLength", D::ClassType::VariableLength)
        ._element("FixedLength", D::ClassType::FixedLength)
        ._element("PercentageLength", D::ClassType::PercentageLength)
    ;
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTextLength &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QTextLength *, const QTextLength &))&opErAToRWrapper_QTextLength__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTextLength &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QTextLength *, const QTextLength &))&opErAToRWrapper_QTextLength__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
}


template <typename D>
void buildMetaClass_QTextListFormat(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("setStyle", &D::ClassType::setStyle);
    _d.CPGF_MD_TEMPLATE _method("style", &D::ClassType::style);
    _d.CPGF_MD_TEMPLATE _method("setIndent", &D::ClassType::setIndent);
    _d.CPGF_MD_TEMPLATE _method("indent", &D::ClassType::indent);
    _d.CPGF_MD_TEMPLATE _method("setNumberPrefix", &D::ClassType::setNumberPrefix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("numberPrefix", &D::ClassType::numberPrefix);
    _d.CPGF_MD_TEMPLATE _method("setNumberSuffix", &D::ClassType::setNumberSuffix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("numberSuffix", &D::ClassType::numberSuffix);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Style>("Style")
        ._element("ListDisc", D::ClassType::ListDisc)
        ._element("ListCircle", D::ClassType::ListCircle)
        ._element("ListSquare", D::ClassType::ListSquare)
        ._element("ListDecimal", D::ClassType::ListDecimal)
        ._element("ListLowerAlpha", D::ClassType::ListLowerAlpha)
        ._element("ListUpperAlpha", D::ClassType::ListUpperAlpha)
        ._element("ListLowerRoman", D::ClassType::ListLowerRoman)
        ._element("ListUpperRoman", D::ClassType::ListUpperRoman)
        ._element("ListStyleUndefined", D::ClassType::ListStyleUndefined)
    ;
}


template <typename D>
void buildMetaClass_QTextTableCellFormat(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("setTopPadding", &D::ClassType::setTopPadding);
    _d.CPGF_MD_TEMPLATE _method("topPadding", &D::ClassType::topPadding);
    _d.CPGF_MD_TEMPLATE _method("setBottomPadding", &D::ClassType::setBottomPadding);
    _d.CPGF_MD_TEMPLATE _method("bottomPadding", &D::ClassType::bottomPadding);
    _d.CPGF_MD_TEMPLATE _method("setLeftPadding", &D::ClassType::setLeftPadding);
    _d.CPGF_MD_TEMPLATE _method("leftPadding", &D::ClassType::leftPadding);
    _d.CPGF_MD_TEMPLATE _method("setRightPadding", &D::ClassType::setRightPadding);
    _d.CPGF_MD_TEMPLATE _method("rightPadding", &D::ClassType::rightPadding);
    _d.CPGF_MD_TEMPLATE _method("setPadding", &D::ClassType::setPadding);
}


template <typename D>
void buildMetaClass_QTextTableFormat(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("columns", &D::ClassType::columns);
    _d.CPGF_MD_TEMPLATE _method("setColumns", &D::ClassType::setColumns);
    _d.CPGF_MD_TEMPLATE _method("setColumnWidthConstraints", &D::ClassType::setColumnWidthConstraints, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("columnWidthConstraints", &D::ClassType::columnWidthConstraints);
    _d.CPGF_MD_TEMPLATE _method("clearColumnWidthConstraints", &D::ClassType::clearColumnWidthConstraints);
    _d.CPGF_MD_TEMPLATE _method("cellSpacing", &D::ClassType::cellSpacing);
    _d.CPGF_MD_TEMPLATE _method("setCellSpacing", &D::ClassType::setCellSpacing);
    _d.CPGF_MD_TEMPLATE _method("cellPadding", &D::ClassType::cellPadding);
    _d.CPGF_MD_TEMPLATE _method("setCellPadding", &D::ClassType::setCellPadding);
    _d.CPGF_MD_TEMPLATE _method("setAlignment", &D::ClassType::setAlignment);
    _d.CPGF_MD_TEMPLATE _method("alignment", &D::ClassType::alignment);
    _d.CPGF_MD_TEMPLATE _method("setHeaderRowCount", &D::ClassType::setHeaderRowCount);
    _d.CPGF_MD_TEMPLATE _method("headerRowCount", &D::ClassType::headerRowCount);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
