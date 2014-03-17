// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QTEXTLAYOUT_H
#define CPGF_META_QTGUI_QTEXTLAYOUT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QTextInlineObject(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("ascent", &D::ClassType::ascent);
    _d.CPGF_MD_TEMPLATE _method("descent", &D::ClassType::descent);
    _d.CPGF_MD_TEMPLATE _method("height", &D::ClassType::height);
    _d.CPGF_MD_TEMPLATE _method("textDirection", &D::ClassType::textDirection);
    _d.CPGF_MD_TEMPLATE _method("setWidth", &D::ClassType::setWidth);
    _d.CPGF_MD_TEMPLATE _method("setAscent", &D::ClassType::setAscent);
    _d.CPGF_MD_TEMPLATE _method("setDescent", &D::ClassType::setDescent);
    _d.CPGF_MD_TEMPLATE _method("textPosition", &D::ClassType::textPosition);
    _d.CPGF_MD_TEMPLATE _method("formatIndex", &D::ClassType::formatIndex);
    _d.CPGF_MD_TEMPLATE _method("format", &D::ClassType::format);
}


template <typename D>
void buildMetaClass_QTextLayout(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, const QFont &, QPaintDevice *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QTextBlock &)>();
    _d.CPGF_MD_TEMPLATE _method("setFont", &D::ClassType::setFont, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("font", &D::ClassType::font);
    _d.CPGF_MD_TEMPLATE _method("setRawFont", &D::ClassType::setRawFont);
    _d.CPGF_MD_TEMPLATE _method("setText", &D::ClassType::setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("setTextOption", &D::ClassType::setTextOption, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("textOption", &D::ClassType::textOption, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("setPreeditArea", &D::ClassType::setPreeditArea, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("preeditAreaPosition", &D::ClassType::preeditAreaPosition);
    _d.CPGF_MD_TEMPLATE _method("preeditAreaText", &D::ClassType::preeditAreaText);
    _d.CPGF_MD_TEMPLATE _method("setAdditionalFormats", &D::ClassType::setAdditionalFormats);
    _d.CPGF_MD_TEMPLATE _method("additionalFormats", &D::ClassType::additionalFormats);
    _d.CPGF_MD_TEMPLATE _method("clearAdditionalFormats", &D::ClassType::clearAdditionalFormats);
    _d.CPGF_MD_TEMPLATE _method("setCacheEnabled", &D::ClassType::setCacheEnabled);
    _d.CPGF_MD_TEMPLATE _method("cacheEnabled", &D::ClassType::cacheEnabled);
    _d.CPGF_MD_TEMPLATE _method("setCursorMoveStyle", &D::ClassType::setCursorMoveStyle);
    _d.CPGF_MD_TEMPLATE _method("cursorMoveStyle", &D::ClassType::cursorMoveStyle);
    _d.CPGF_MD_TEMPLATE _method("beginLayout", &D::ClassType::beginLayout);
    _d.CPGF_MD_TEMPLATE _method("endLayout", &D::ClassType::endLayout);
    _d.CPGF_MD_TEMPLATE _method("clearLayout", &D::ClassType::clearLayout);
    _d.CPGF_MD_TEMPLATE _method("createLine", &D::ClassType::createLine);
    _d.CPGF_MD_TEMPLATE _method("lineCount", &D::ClassType::lineCount);
    _d.CPGF_MD_TEMPLATE _method("lineAt", &D::ClassType::lineAt);
    _d.CPGF_MD_TEMPLATE _method("lineForTextPosition", &D::ClassType::lineForTextPosition);
    _d.CPGF_MD_TEMPLATE _method("isValidCursorPosition", &D::ClassType::isValidCursorPosition);
    _d.CPGF_MD_TEMPLATE _method("nextCursorPosition", &D::ClassType::nextCursorPosition)
        ._default(copyVariantFromCopyable(QTextLayout::SkipCharacters))
    ;
    _d.CPGF_MD_TEMPLATE _method("previousCursorPosition", &D::ClassType::previousCursorPosition)
        ._default(copyVariantFromCopyable(QTextLayout::SkipCharacters))
    ;
    _d.CPGF_MD_TEMPLATE _method("leftCursorPosition", &D::ClassType::leftCursorPosition);
    _d.CPGF_MD_TEMPLATE _method("rightCursorPosition", &D::ClassType::rightCursorPosition);
    _d.CPGF_MD_TEMPLATE _method("draw", &D::ClassType::draw, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QRectF()))
        ._default(copyVariantFromCopyable(QVector<QTextLayout::FormatRange>()))
    ;
    _d.CPGF_MD_TEMPLATE _method("drawCursor", (void (D::ClassType::*) (QPainter *, const QPointF &, int) const)&D::ClassType::drawCursor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("drawCursor", (void (D::ClassType::*) (QPainter *, const QPointF &, int, int) const)&D::ClassType::drawCursor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("position", &D::ClassType::position);
    _d.CPGF_MD_TEMPLATE _method("setPosition", &D::ClassType::setPosition, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("minimumWidth", &D::ClassType::minimumWidth);
    _d.CPGF_MD_TEMPLATE _method("maximumWidth", &D::ClassType::maximumWidth);
    _d.CPGF_MD_TEMPLATE _method("glyphRuns", &D::ClassType::glyphRuns)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("setFlags", &D::ClassType::setFlags);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::CursorMode>("CursorMode")
        ._element("SkipCharacters", D::ClassType::SkipCharacters)
        ._element("SkipWords", D::ClassType::SkipWords)
    ;
    {
        GDefineMetaClass<QTextLayout::FormatRange> _nd = GDefineMetaClass<QTextLayout::FormatRange>::declare("FormatRange");
        _nd.CPGF_MD_TEMPLATE _field("start", &QTextLayout::FormatRange::start);
        _nd.CPGF_MD_TEMPLATE _field("length", &QTextLayout::FormatRange::length);
        _nd.CPGF_MD_TEMPLATE _field("format", &QTextLayout::FormatRange::format);
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


template <typename D>
void buildMetaClass_QTextLine(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("x", &D::ClassType::x);
    _d.CPGF_MD_TEMPLATE _method("y", &D::ClassType::y);
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("ascent", &D::ClassType::ascent);
    _d.CPGF_MD_TEMPLATE _method("descent", &D::ClassType::descent);
    _d.CPGF_MD_TEMPLATE _method("height", &D::ClassType::height);
    _d.CPGF_MD_TEMPLATE _method("leading", &D::ClassType::leading);
    _d.CPGF_MD_TEMPLATE _method("setLeadingIncluded", &D::ClassType::setLeadingIncluded);
    _d.CPGF_MD_TEMPLATE _method("leadingIncluded", &D::ClassType::leadingIncluded);
    _d.CPGF_MD_TEMPLATE _method("naturalTextWidth", &D::ClassType::naturalTextWidth);
    _d.CPGF_MD_TEMPLATE _method("horizontalAdvance", &D::ClassType::horizontalAdvance);
    _d.CPGF_MD_TEMPLATE _method("naturalTextRect", &D::ClassType::naturalTextRect);
    _d.CPGF_MD_TEMPLATE _method("cursorToX", (qreal (D::ClassType::*) (int *, QTextLine::Edge) const)&D::ClassType::cursorToX)
        ._default(copyVariantFromCopyable(QTextLine::Leading))
    ;
    _d.CPGF_MD_TEMPLATE _method("cursorToX", (qreal (D::ClassType::*) (int, QTextLine::Edge) const)&D::ClassType::cursorToX)
        ._default(copyVariantFromCopyable(QTextLine::Leading))
    ;
    _d.CPGF_MD_TEMPLATE _method("xToCursor", &D::ClassType::xToCursor)
        ._default(copyVariantFromCopyable(QTextLine::CursorBetweenCharacters))
    ;
    _d.CPGF_MD_TEMPLATE _method("setLineWidth", &D::ClassType::setLineWidth);
    _d.CPGF_MD_TEMPLATE _method("setNumColumns", (void (D::ClassType::*) (int))&D::ClassType::setNumColumns);
    _d.CPGF_MD_TEMPLATE _method("setNumColumns", (void (D::ClassType::*) (int, qreal))&D::ClassType::setNumColumns);
    _d.CPGF_MD_TEMPLATE _method("setPosition", &D::ClassType::setPosition, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("position", &D::ClassType::position);
    _d.CPGF_MD_TEMPLATE _method("textStart", &D::ClassType::textStart);
    _d.CPGF_MD_TEMPLATE _method("textLength", &D::ClassType::textLength);
    _d.CPGF_MD_TEMPLATE _method("lineNumber", &D::ClassType::lineNumber);
    _d.CPGF_MD_TEMPLATE _method("draw", &D::ClassType::draw, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("glyphRuns", &D::ClassType::glyphRuns)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Edge>("Edge")
        ._element("Leading", D::ClassType::Leading)
        ._element("Trailing", D::ClassType::Trailing)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::CursorPosition>("CursorPosition")
        ._element("CursorBetweenCharacters", D::ClassType::CursorBetweenCharacters)
        ._element("CursorOnCharacter", D::ClassType::CursorOnCharacter)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
