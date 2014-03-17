// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QKEYSEQUENCE_H
#define CPGF_META_QTGUI_QKEYSEQUENCE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qkeysequence(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QKeySequence &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QKeySequence &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QKeySequence &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline int opErAToRWrapper_QKeySequence__opArrayGet(const QKeySequence * self, uint i) {
    return (*self)[i];
}
inline QKeySequence & opErAToRWrapper_QKeySequence__opAssign(QKeySequence * self, const QKeySequence & other) {
    return (*self) = other;
}
inline bool opErAToRWrapper_QKeySequence__opEqual(const QKeySequence * self, const QKeySequence & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QKeySequence__opNotEqual(const QKeySequence * self, const QKeySequence & other) {
    return (*self) != other;
}
inline bool opErAToRWrapper_QKeySequence__opLess(const QKeySequence * self, const QKeySequence & ks) {
    return (*self) < ks;
}
inline bool opErAToRWrapper_QKeySequence__opGreater(const QKeySequence * self, const QKeySequence & other) {
    return (*self) > other;
}
inline bool opErAToRWrapper_QKeySequence__opLessEqual(const QKeySequence * self, const QKeySequence & other) {
    return (*self) <= other;
}
inline bool opErAToRWrapper_QKeySequence__opGreaterEqual(const QKeySequence * self, const QKeySequence & other) {
    return (*self) >= other;
}


template <typename D>
void buildMetaClass_QKeySequence(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, QKeySequence::SequenceFormat)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QKeySequence::NativeText))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int, int, int)>()
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QKeySequence &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QKeySequence::StandardKey)>();
    _d.CPGF_MD_TEMPLATE _method("count", &D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("toString", &D::ClassType::toString)
        ._default(copyVariantFromCopyable(QKeySequence::PortableText))
    ;
    _d.CPGF_MD_TEMPLATE _method("matches", &D::ClassType::matches, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("isDetached", &D::ClassType::isDetached);
    _d.CPGF_MD_TEMPLATE _method("fromString", &D::ClassType::fromString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QKeySequence::PortableText))
    ;
    _d.CPGF_MD_TEMPLATE _method("listFromString", &D::ClassType::listFromString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QKeySequence::PortableText))
    ;
    _d.CPGF_MD_TEMPLATE _method("listToString", &D::ClassType::listToString)
        ._default(copyVariantFromCopyable(QKeySequence::PortableText))
    ;
    _d.CPGF_MD_TEMPLATE _method("mnemonic", &D::ClassType::mnemonic, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("keyBindings", &D::ClassType::keyBindings);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StandardKey>("StandardKey")
        ._element("UnknownKey", D::ClassType::UnknownKey)
        ._element("HelpContents", D::ClassType::HelpContents)
        ._element("WhatsThis", D::ClassType::WhatsThis)
        ._element("Open", D::ClassType::Open)
        ._element("Close", D::ClassType::Close)
        ._element("Save", D::ClassType::Save)
        ._element("New", D::ClassType::New)
        ._element("Delete", D::ClassType::Delete)
        ._element("Cut", D::ClassType::Cut)
        ._element("Copy", D::ClassType::Copy)
        ._element("Paste", D::ClassType::Paste)
        ._element("Undo", D::ClassType::Undo)
        ._element("Redo", D::ClassType::Redo)
        ._element("Back", D::ClassType::Back)
        ._element("Forward", D::ClassType::Forward)
        ._element("Refresh", D::ClassType::Refresh)
        ._element("ZoomIn", D::ClassType::ZoomIn)
        ._element("ZoomOut", D::ClassType::ZoomOut)
        ._element("Print", D::ClassType::Print)
        ._element("AddTab", D::ClassType::AddTab)
        ._element("NextChild", D::ClassType::NextChild)
        ._element("PreviousChild", D::ClassType::PreviousChild)
        ._element("Find", D::ClassType::Find)
        ._element("FindNext", D::ClassType::FindNext)
        ._element("FindPrevious", D::ClassType::FindPrevious)
        ._element("Replace", D::ClassType::Replace)
        ._element("SelectAll", D::ClassType::SelectAll)
        ._element("Bold", D::ClassType::Bold)
        ._element("Italic", D::ClassType::Italic)
        ._element("Underline", D::ClassType::Underline)
        ._element("MoveToNextChar", D::ClassType::MoveToNextChar)
        ._element("MoveToPreviousChar", D::ClassType::MoveToPreviousChar)
        ._element("MoveToNextWord", D::ClassType::MoveToNextWord)
        ._element("MoveToPreviousWord", D::ClassType::MoveToPreviousWord)
        ._element("MoveToNextLine", D::ClassType::MoveToNextLine)
        ._element("MoveToPreviousLine", D::ClassType::MoveToPreviousLine)
        ._element("MoveToNextPage", D::ClassType::MoveToNextPage)
        ._element("MoveToPreviousPage", D::ClassType::MoveToPreviousPage)
        ._element("MoveToStartOfLine", D::ClassType::MoveToStartOfLine)
        ._element("MoveToEndOfLine", D::ClassType::MoveToEndOfLine)
        ._element("MoveToStartOfBlock", D::ClassType::MoveToStartOfBlock)
        ._element("MoveToEndOfBlock", D::ClassType::MoveToEndOfBlock)
        ._element("MoveToStartOfDocument", D::ClassType::MoveToStartOfDocument)
        ._element("MoveToEndOfDocument", D::ClassType::MoveToEndOfDocument)
        ._element("SelectNextChar", D::ClassType::SelectNextChar)
        ._element("SelectPreviousChar", D::ClassType::SelectPreviousChar)
        ._element("SelectNextWord", D::ClassType::SelectNextWord)
        ._element("SelectPreviousWord", D::ClassType::SelectPreviousWord)
        ._element("SelectNextLine", D::ClassType::SelectNextLine)
        ._element("SelectPreviousLine", D::ClassType::SelectPreviousLine)
        ._element("SelectNextPage", D::ClassType::SelectNextPage)
        ._element("SelectPreviousPage", D::ClassType::SelectPreviousPage)
        ._element("SelectStartOfLine", D::ClassType::SelectStartOfLine)
        ._element("SelectEndOfLine", D::ClassType::SelectEndOfLine)
        ._element("SelectStartOfBlock", D::ClassType::SelectStartOfBlock)
        ._element("SelectEndOfBlock", D::ClassType::SelectEndOfBlock)
        ._element("SelectStartOfDocument", D::ClassType::SelectStartOfDocument)
        ._element("SelectEndOfDocument", D::ClassType::SelectEndOfDocument)
        ._element("DeleteStartOfWord", D::ClassType::DeleteStartOfWord)
        ._element("DeleteEndOfWord", D::ClassType::DeleteEndOfWord)
        ._element("DeleteEndOfLine", D::ClassType::DeleteEndOfLine)
        ._element("InsertParagraphSeparator", D::ClassType::InsertParagraphSeparator)
        ._element("InsertLineSeparator", D::ClassType::InsertLineSeparator)
        ._element("SaveAs", D::ClassType::SaveAs)
        ._element("Preferences", D::ClassType::Preferences)
        ._element("Quit", D::ClassType::Quit)
        ._element("FullScreen", D::ClassType::FullScreen)
        ._element("Deselect", D::ClassType::Deselect)
        ._element("DeleteCompleteLine", D::ClassType::DeleteCompleteLine)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SequenceFormat>("SequenceFormat")
        ._element("NativeText", D::ClassType::NativeText)
        ._element("PortableText", D::ClassType::PortableText)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SequenceMatch>("SequenceMatch")
        ._element("NoMatch", D::ClassType::NoMatch)
        ._element("PartialMatch", D::ClassType::PartialMatch)
        ._element("ExactMatch", D::ClassType::ExactMatch)
    ;
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
    _d.CPGF_MD_TEMPLATE _operator<int (*)(const cpgf::GMetaSelf &, uint)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (int (*) (const QKeySequence *, uint))&opErAToRWrapper_QKeySequence__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QKeySequence & (*)(cpgf::GMetaSelf, const QKeySequence &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QKeySequence & (*) (QKeySequence *, const QKeySequence &))&opErAToRWrapper_QKeySequence__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QKeySequence &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QKeySequence *, const QKeySequence &))&opErAToRWrapper_QKeySequence__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QKeySequence &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QKeySequence *, const QKeySequence &))&opErAToRWrapper_QKeySequence__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QKeySequence &)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QKeySequence *, const QKeySequence &))&opErAToRWrapper_QKeySequence__opLess, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QKeySequence &)>(mopHolder > mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const QKeySequence *, const QKeySequence &))&opErAToRWrapper_QKeySequence__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QKeySequence &)>(mopHolder <= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const QKeySequence *, const QKeySequence &))&opErAToRWrapper_QKeySequence__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QKeySequence &)>(mopHolder >= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const QKeySequence *, const QKeySequence &))&opErAToRWrapper_QKeySequence__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
