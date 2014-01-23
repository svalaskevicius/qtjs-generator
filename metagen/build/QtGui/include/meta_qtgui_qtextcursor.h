// Auto generated file, don't modify.

#ifndef __META_QTGUI_QTEXTCURSOR_H
#define __META_QTGUI_QTEXTCURSOR_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


inline QTextCursor & opErAToRWrapper_QTextCursor__opAssign(QTextCursor * self, const QTextCursor & other) {
    return (*self) = other;
}
inline bool opErAToRWrapper_QTextCursor__opNotEqual(const QTextCursor * self, const QTextCursor & rhs) {
    return (*self) != rhs;
}
inline bool opErAToRWrapper_QTextCursor__opLess(const QTextCursor * self, const QTextCursor & rhs) {
    return (*self) < rhs;
}
inline bool opErAToRWrapper_QTextCursor__opLessEqual(const QTextCursor * self, const QTextCursor & rhs) {
    return (*self) <= rhs;
}
inline bool opErAToRWrapper_QTextCursor__opEqual(const QTextCursor * self, const QTextCursor & rhs) {
    return (*self) == rhs;
}
inline bool opErAToRWrapper_QTextCursor__opGreaterEqual(const QTextCursor * self, const QTextCursor & rhs) {
    return (*self) >= rhs;
}
inline bool opErAToRWrapper_QTextCursor__opGreater(const QTextCursor * self, const QTextCursor & rhs) {
    return (*self) > rhs;
}


template <typename D>
void buildMetaClass_QTextCursor(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QTextDocument *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QTextFrame *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QTextBlock &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QTextCursor &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("setPosition", &D::ClassType::setPosition)
        ._default(copyVariantFromCopyable(QTextCursor::MoveAnchor))
    ;
    _d.CPGF_MD_TEMPLATE _method("position", &D::ClassType::position);
    _d.CPGF_MD_TEMPLATE _method("positionInBlock", &D::ClassType::positionInBlock);
    _d.CPGF_MD_TEMPLATE _method("anchor", &D::ClassType::anchor);
    _d.CPGF_MD_TEMPLATE _method("insertText", (void (D::ClassType::*) (const QString &))&D::ClassType::insertText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("insertText", (void (D::ClassType::*) (const QString &, const QTextCharFormat &))&D::ClassType::insertText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("movePosition", &D::ClassType::movePosition)
        ._default(copyVariantFromCopyable(1))
        ._default(copyVariantFromCopyable(QTextCursor::MoveAnchor))
    ;
    _d.CPGF_MD_TEMPLATE _method("visualNavigation", &D::ClassType::visualNavigation);
    _d.CPGF_MD_TEMPLATE _method("setVisualNavigation", &D::ClassType::setVisualNavigation);
    _d.CPGF_MD_TEMPLATE _method("setVerticalMovementX", &D::ClassType::setVerticalMovementX);
    _d.CPGF_MD_TEMPLATE _method("verticalMovementX", &D::ClassType::verticalMovementX);
    _d.CPGF_MD_TEMPLATE _method("setKeepPositionOnInsert", &D::ClassType::setKeepPositionOnInsert);
    _d.CPGF_MD_TEMPLATE _method("keepPositionOnInsert", &D::ClassType::keepPositionOnInsert);
    _d.CPGF_MD_TEMPLATE _method("deleteChar", &D::ClassType::deleteChar);
    _d.CPGF_MD_TEMPLATE _method("deletePreviousChar", &D::ClassType::deletePreviousChar);
    _d.CPGF_MD_TEMPLATE _method("select", &D::ClassType::select);
    _d.CPGF_MD_TEMPLATE _method("hasSelection", &D::ClassType::hasSelection);
    _d.CPGF_MD_TEMPLATE _method("hasComplexSelection", &D::ClassType::hasComplexSelection);
    _d.CPGF_MD_TEMPLATE _method("removeSelectedText", &D::ClassType::removeSelectedText);
    _d.CPGF_MD_TEMPLATE _method("clearSelection", &D::ClassType::clearSelection);
    _d.CPGF_MD_TEMPLATE _method("selectionStart", &D::ClassType::selectionStart);
    _d.CPGF_MD_TEMPLATE _method("selectionEnd", &D::ClassType::selectionEnd);
    _d.CPGF_MD_TEMPLATE _method("selectedText", &D::ClassType::selectedText);
    _d.CPGF_MD_TEMPLATE _method("selection", &D::ClassType::selection);
    _d.CPGF_MD_TEMPLATE _method("selectedTableCells", &D::ClassType::selectedTableCells);
    _d.CPGF_MD_TEMPLATE _method("block", &D::ClassType::block);
    _d.CPGF_MD_TEMPLATE _method("charFormat", &D::ClassType::charFormat);
    _d.CPGF_MD_TEMPLATE _method("setCharFormat", &D::ClassType::setCharFormat);
    _d.CPGF_MD_TEMPLATE _method("mergeCharFormat", &D::ClassType::mergeCharFormat);
    _d.CPGF_MD_TEMPLATE _method("blockFormat", &D::ClassType::blockFormat);
    _d.CPGF_MD_TEMPLATE _method("setBlockFormat", &D::ClassType::setBlockFormat);
    _d.CPGF_MD_TEMPLATE _method("mergeBlockFormat", &D::ClassType::mergeBlockFormat);
    _d.CPGF_MD_TEMPLATE _method("blockCharFormat", &D::ClassType::blockCharFormat);
    _d.CPGF_MD_TEMPLATE _method("setBlockCharFormat", &D::ClassType::setBlockCharFormat);
    _d.CPGF_MD_TEMPLATE _method("mergeBlockCharFormat", &D::ClassType::mergeBlockCharFormat);
    _d.CPGF_MD_TEMPLATE _method("atBlockStart", &D::ClassType::atBlockStart);
    _d.CPGF_MD_TEMPLATE _method("atBlockEnd", &D::ClassType::atBlockEnd);
    _d.CPGF_MD_TEMPLATE _method("atStart", &D::ClassType::atStart);
    _d.CPGF_MD_TEMPLATE _method("atEnd", &D::ClassType::atEnd);
    _d.CPGF_MD_TEMPLATE _method("insertBlock", (void (D::ClassType::*) ())&D::ClassType::insertBlock);
    _d.CPGF_MD_TEMPLATE _method("insertBlock", (void (D::ClassType::*) (const QTextBlockFormat &))&D::ClassType::insertBlock);
    _d.CPGF_MD_TEMPLATE _method("insertBlock", (void (D::ClassType::*) (const QTextBlockFormat &, const QTextCharFormat &))&D::ClassType::insertBlock);
    _d.CPGF_MD_TEMPLATE _method("insertList", (QTextList * (D::ClassType::*) (const QTextListFormat &))&D::ClassType::insertList);
    _d.CPGF_MD_TEMPLATE _method("insertList", (QTextList * (D::ClassType::*) (QTextListFormat::Style))&D::ClassType::insertList);
    _d.CPGF_MD_TEMPLATE _method("createList", (QTextList * (D::ClassType::*) (const QTextListFormat &))&D::ClassType::createList);
    _d.CPGF_MD_TEMPLATE _method("createList", (QTextList * (D::ClassType::*) (QTextListFormat::Style))&D::ClassType::createList);
    _d.CPGF_MD_TEMPLATE _method("currentList", &D::ClassType::currentList);
    _d.CPGF_MD_TEMPLATE _method("insertTable", (QTextTable * (D::ClassType::*) (int, int, const QTextTableFormat &))&D::ClassType::insertTable);
    _d.CPGF_MD_TEMPLATE _method("insertTable", (QTextTable * (D::ClassType::*) (int, int))&D::ClassType::insertTable);
    _d.CPGF_MD_TEMPLATE _method("currentTable", &D::ClassType::currentTable);
    _d.CPGF_MD_TEMPLATE _method("insertFrame", &D::ClassType::insertFrame);
    _d.CPGF_MD_TEMPLATE _method("currentFrame", &D::ClassType::currentFrame);
    _d.CPGF_MD_TEMPLATE _method("insertFragment", &D::ClassType::insertFragment, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("insertHtml", &D::ClassType::insertHtml, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("insertImage", (void (D::ClassType::*) (const QTextImageFormat &, QTextFrameFormat::Position))&D::ClassType::insertImage);
    _d.CPGF_MD_TEMPLATE _method("insertImage", (void (D::ClassType::*) (const QTextImageFormat &))&D::ClassType::insertImage);
    _d.CPGF_MD_TEMPLATE _method("insertImage", (void (D::ClassType::*) (const QString &))&D::ClassType::insertImage, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("insertImage", (void (D::ClassType::*) (const QImage &, const QString &))&D::ClassType::insertImage, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _method("beginEditBlock", &D::ClassType::beginEditBlock);
    _d.CPGF_MD_TEMPLATE _method("joinPreviousEditBlock", &D::ClassType::joinPreviousEditBlock);
    _d.CPGF_MD_TEMPLATE _method("endEditBlock", &D::ClassType::endEditBlock);
    _d.CPGF_MD_TEMPLATE _method("isCopyOf", &D::ClassType::isCopyOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("blockNumber", &D::ClassType::blockNumber);
    _d.CPGF_MD_TEMPLATE _method("columnNumber", &D::ClassType::columnNumber);
    _d.CPGF_MD_TEMPLATE _method("document", &D::ClassType::document);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::MoveMode>("MoveMode")
        ._element("MoveAnchor", D::ClassType::MoveAnchor)
        ._element("KeepAnchor", D::ClassType::KeepAnchor)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::MoveOperation>("MoveOperation")
        ._element("NoMove", D::ClassType::NoMove)
        ._element("Start", D::ClassType::Start)
        ._element("Up", D::ClassType::Up)
        ._element("StartOfLine", D::ClassType::StartOfLine)
        ._element("StartOfBlock", D::ClassType::StartOfBlock)
        ._element("StartOfWord", D::ClassType::StartOfWord)
        ._element("PreviousBlock", D::ClassType::PreviousBlock)
        ._element("PreviousCharacter", D::ClassType::PreviousCharacter)
        ._element("PreviousWord", D::ClassType::PreviousWord)
        ._element("Left", D::ClassType::Left)
        ._element("WordLeft", D::ClassType::WordLeft)
        ._element("End", D::ClassType::End)
        ._element("Down", D::ClassType::Down)
        ._element("EndOfLine", D::ClassType::EndOfLine)
        ._element("EndOfWord", D::ClassType::EndOfWord)
        ._element("EndOfBlock", D::ClassType::EndOfBlock)
        ._element("NextBlock", D::ClassType::NextBlock)
        ._element("NextCharacter", D::ClassType::NextCharacter)
        ._element("NextWord", D::ClassType::NextWord)
        ._element("Right", D::ClassType::Right)
        ._element("WordRight", D::ClassType::WordRight)
        ._element("NextCell", D::ClassType::NextCell)
        ._element("PreviousCell", D::ClassType::PreviousCell)
        ._element("NextRow", D::ClassType::NextRow)
        ._element("PreviousRow", D::ClassType::PreviousRow)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SelectionType>("SelectionType")
        ._element("WordUnderCursor", D::ClassType::WordUnderCursor)
        ._element("LineUnderCursor", D::ClassType::LineUnderCursor)
        ._element("BlockUnderCursor", D::ClassType::BlockUnderCursor)
        ._element("Document", D::ClassType::Document)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QTextCursor & (*)(cpgf::GMetaSelf, const QTextCursor &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QTextCursor & (*) (QTextCursor *, const QTextCursor &))&opErAToRWrapper_QTextCursor__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTextCursor &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QTextCursor *, const QTextCursor &))&opErAToRWrapper_QTextCursor__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTextCursor &)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QTextCursor *, const QTextCursor &))&opErAToRWrapper_QTextCursor__opLess, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTextCursor &)>(mopHolder <= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const QTextCursor *, const QTextCursor &))&opErAToRWrapper_QTextCursor__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTextCursor &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QTextCursor *, const QTextCursor &))&opErAToRWrapper_QTextCursor__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTextCursor &)>(mopHolder >= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const QTextCursor *, const QTextCursor &))&opErAToRWrapper_QTextCursor__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTextCursor &)>(mopHolder > mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const QTextCursor *, const QTextCursor &))&opErAToRWrapper_QTextCursor__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
