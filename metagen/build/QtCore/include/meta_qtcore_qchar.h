// Auto generated file, don't modify.

#ifndef __META_QTCORE_QCHAR_H
#define __META_QTCORE_QCHAR_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qchar(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(QChar, QChar)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(QChar, QChar)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(QChar, QChar)>(mopHolder <= mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(QChar, QChar)>(mopHolder >= mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(QChar, QChar)>(mopHolder < mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(QChar, QChar)>(mopHolder > mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QChar)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QChar &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
}


template <typename D>
void buildMetaClass_QChar(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (ushort)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (uchar, uchar)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (short)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (uint)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QChar::SpecialCharacter)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QLatin1Char)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (char)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (uchar)>();
    _d.CPGF_MD_TEMPLATE _method("category", (QChar::Category (D::ClassType::*) () const)&D::ClassType::category);
    _d.CPGF_MD_TEMPLATE _method("direction", (QChar::Direction (D::ClassType::*) () const)&D::ClassType::direction);
    _d.CPGF_MD_TEMPLATE _method("joining", (QChar::Joining (D::ClassType::*) () const)&D::ClassType::joining);
    _d.CPGF_MD_TEMPLATE _method("combiningClass", (unsigned char (D::ClassType::*) () const)&D::ClassType::combiningClass);
    _d.CPGF_MD_TEMPLATE _method("mirroredChar", (QChar (D::ClassType::*) () const)&D::ClassType::mirroredChar);
    _d.CPGF_MD_TEMPLATE _method("hasMirrored", (bool (D::ClassType::*) () const)&D::ClassType::hasMirrored);
    _d.CPGF_MD_TEMPLATE _method("decomposition", (QString (D::ClassType::*) () const)&D::ClassType::decomposition);
    _d.CPGF_MD_TEMPLATE _method("decompositionTag", (QChar::Decomposition (D::ClassType::*) () const)&D::ClassType::decompositionTag);
    _d.CPGF_MD_TEMPLATE _method("digitValue", (int (D::ClassType::*) () const)&D::ClassType::digitValue);
    _d.CPGF_MD_TEMPLATE _method("toLower", (QChar (D::ClassType::*) () const)&D::ClassType::toLower);
    _d.CPGF_MD_TEMPLATE _method("toUpper", (QChar (D::ClassType::*) () const)&D::ClassType::toUpper);
    _d.CPGF_MD_TEMPLATE _method("toTitleCase", (QChar (D::ClassType::*) () const)&D::ClassType::toTitleCase);
    _d.CPGF_MD_TEMPLATE _method("toCaseFolded", (QChar (D::ClassType::*) () const)&D::ClassType::toCaseFolded);
    _d.CPGF_MD_TEMPLATE _method("script", (QChar::Script (D::ClassType::*) () const)&D::ClassType::script);
    _d.CPGF_MD_TEMPLATE _method("unicodeVersion", (QChar::UnicodeVersion (D::ClassType::*) () const)&D::ClassType::unicodeVersion);
    _d.CPGF_MD_TEMPLATE _method("toLatin1", &D::ClassType::toLatin1);
    _d.CPGF_MD_TEMPLATE _method("unicode", (ushort (D::ClassType::*) () const)&D::ClassType::unicode);
    _d.CPGF_MD_TEMPLATE _method("unicode", (ushort & (D::ClassType::*) ())&D::ClassType::unicode);
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("isPrint", (bool (D::ClassType::*) () const)&D::ClassType::isPrint);
    _d.CPGF_MD_TEMPLATE _method("isSpace", (bool (D::ClassType::*) () const)&D::ClassType::isSpace);
    _d.CPGF_MD_TEMPLATE _method("isMark", (bool (D::ClassType::*) () const)&D::ClassType::isMark);
    _d.CPGF_MD_TEMPLATE _method("isPunct", (bool (D::ClassType::*) () const)&D::ClassType::isPunct);
    _d.CPGF_MD_TEMPLATE _method("isSymbol", (bool (D::ClassType::*) () const)&D::ClassType::isSymbol);
    _d.CPGF_MD_TEMPLATE _method("isLetter", (bool (D::ClassType::*) () const)&D::ClassType::isLetter);
    _d.CPGF_MD_TEMPLATE _method("isNumber", (bool (D::ClassType::*) () const)&D::ClassType::isNumber);
    _d.CPGF_MD_TEMPLATE _method("isLetterOrNumber", (bool (D::ClassType::*) () const)&D::ClassType::isLetterOrNumber);
    _d.CPGF_MD_TEMPLATE _method("isDigit", (bool (D::ClassType::*) () const)&D::ClassType::isDigit);
    _d.CPGF_MD_TEMPLATE _method("isLower", (bool (D::ClassType::*) () const)&D::ClassType::isLower);
    _d.CPGF_MD_TEMPLATE _method("isUpper", (bool (D::ClassType::*) () const)&D::ClassType::isUpper);
    _d.CPGF_MD_TEMPLATE _method("isTitleCase", (bool (D::ClassType::*) () const)&D::ClassType::isTitleCase);
    _d.CPGF_MD_TEMPLATE _method("isNonCharacter", (bool (D::ClassType::*) () const)&D::ClassType::isNonCharacter);
    _d.CPGF_MD_TEMPLATE _method("isHighSurrogate", (bool (D::ClassType::*) () const)&D::ClassType::isHighSurrogate);
    _d.CPGF_MD_TEMPLATE _method("isLowSurrogate", (bool (D::ClassType::*) () const)&D::ClassType::isLowSurrogate);
    _d.CPGF_MD_TEMPLATE _method("isSurrogate", (bool (D::ClassType::*) () const)&D::ClassType::isSurrogate);
    _d.CPGF_MD_TEMPLATE _method("cell", &D::ClassType::cell);
    _d.CPGF_MD_TEMPLATE _method("row", &D::ClassType::row);
    _d.CPGF_MD_TEMPLATE _method("setCell", &D::ClassType::setCell);
    _d.CPGF_MD_TEMPLATE _method("setRow", &D::ClassType::setRow);
    _d.CPGF_MD_TEMPLATE _method("fromLatin1", &D::ClassType::fromLatin1);
    _d.CPGF_MD_TEMPLATE _method("isNonCharacter", (bool (*) (uint))&D::ClassType::isNonCharacter);
    _d.CPGF_MD_TEMPLATE _method("isHighSurrogate", (bool (*) (uint))&D::ClassType::isHighSurrogate);
    _d.CPGF_MD_TEMPLATE _method("isLowSurrogate", (bool (*) (uint))&D::ClassType::isLowSurrogate);
    _d.CPGF_MD_TEMPLATE _method("isSurrogate", (bool (*) (uint))&D::ClassType::isSurrogate);
    _d.CPGF_MD_TEMPLATE _method("requiresSurrogates", &D::ClassType::requiresSurrogates);
    _d.CPGF_MD_TEMPLATE _method("surrogateToUcs4", (uint (*) (ushort, ushort))&D::ClassType::surrogateToUcs4);
    _d.CPGF_MD_TEMPLATE _method("surrogateToUcs4", (uint (*) (QChar, QChar))&D::ClassType::surrogateToUcs4);
    _d.CPGF_MD_TEMPLATE _method("highSurrogate", &D::ClassType::highSurrogate);
    _d.CPGF_MD_TEMPLATE _method("lowSurrogate", &D::ClassType::lowSurrogate);
    _d.CPGF_MD_TEMPLATE _method("category", (QChar::Category QT_FASTCALL (*) (uint))&D::ClassType::category);
    _d.CPGF_MD_TEMPLATE _method("direction", (QChar::Direction QT_FASTCALL (*) (uint))&D::ClassType::direction);
    _d.CPGF_MD_TEMPLATE _method("joining", (QChar::Joining QT_FASTCALL (*) (uint))&D::ClassType::joining);
    _d.CPGF_MD_TEMPLATE _method("combiningClass", (unsigned char QT_FASTCALL (*) (uint))&D::ClassType::combiningClass);
    _d.CPGF_MD_TEMPLATE _method("mirroredChar", (uint QT_FASTCALL (*) (uint))&D::ClassType::mirroredChar);
    _d.CPGF_MD_TEMPLATE _method("hasMirrored", (bool QT_FASTCALL (*) (uint))&D::ClassType::hasMirrored);
    _d.CPGF_MD_TEMPLATE _method("decomposition", (QString QT_FASTCALL (*) (uint))&D::ClassType::decomposition);
    _d.CPGF_MD_TEMPLATE _method("decompositionTag", (QChar::Decomposition QT_FASTCALL (*) (uint))&D::ClassType::decompositionTag);
    _d.CPGF_MD_TEMPLATE _method("digitValue", (int QT_FASTCALL (*) (uint))&D::ClassType::digitValue);
    _d.CPGF_MD_TEMPLATE _method("toLower", (uint QT_FASTCALL (*) (uint))&D::ClassType::toLower);
    _d.CPGF_MD_TEMPLATE _method("toUpper", (uint QT_FASTCALL (*) (uint))&D::ClassType::toUpper);
    _d.CPGF_MD_TEMPLATE _method("toTitleCase", (uint QT_FASTCALL (*) (uint))&D::ClassType::toTitleCase);
    _d.CPGF_MD_TEMPLATE _method("toCaseFolded", (uint QT_FASTCALL (*) (uint))&D::ClassType::toCaseFolded);
    _d.CPGF_MD_TEMPLATE _method("script", (QChar::Script QT_FASTCALL (*) (uint))&D::ClassType::script);
    _d.CPGF_MD_TEMPLATE _method("unicodeVersion", (QChar::UnicodeVersion QT_FASTCALL (*) (uint))&D::ClassType::unicodeVersion);
    _d.CPGF_MD_TEMPLATE _method("currentUnicodeVersion", &D::ClassType::currentUnicodeVersion);
    _d.CPGF_MD_TEMPLATE _method("isPrint", (bool QT_FASTCALL (*) (uint))&D::ClassType::isPrint);
    _d.CPGF_MD_TEMPLATE _method("isSpace", (bool (*) (uint))&D::ClassType::isSpace);
    _d.CPGF_MD_TEMPLATE _method("isMark", (bool QT_FASTCALL (*) (uint))&D::ClassType::isMark);
    _d.CPGF_MD_TEMPLATE _method("isPunct", (bool QT_FASTCALL (*) (uint))&D::ClassType::isPunct);
    _d.CPGF_MD_TEMPLATE _method("isSymbol", (bool QT_FASTCALL (*) (uint))&D::ClassType::isSymbol);
    _d.CPGF_MD_TEMPLATE _method("isLetter", (bool (*) (uint))&D::ClassType::isLetter);
    _d.CPGF_MD_TEMPLATE _method("isNumber", (bool (*) (uint))&D::ClassType::isNumber);
    _d.CPGF_MD_TEMPLATE _method("isLetterOrNumber", (bool (*) (uint))&D::ClassType::isLetterOrNumber);
    _d.CPGF_MD_TEMPLATE _method("isDigit", (bool (*) (uint))&D::ClassType::isDigit);
    _d.CPGF_MD_TEMPLATE _method("isLower", (bool (*) (uint))&D::ClassType::isLower);
    _d.CPGF_MD_TEMPLATE _method("isUpper", (bool (*) (uint))&D::ClassType::isUpper);
    _d.CPGF_MD_TEMPLATE _method("isTitleCase", (bool (*) (uint))&D::ClassType::isTitleCase);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SpecialCharacter>("SpecialCharacter")
        ._element("Null", D::ClassType::Null)
        ._element("Tabulation", D::ClassType::Tabulation)
        ._element("LineFeed", D::ClassType::LineFeed)
        ._element("CarriageReturn", D::ClassType::CarriageReturn)
        ._element("Space", D::ClassType::Space)
        ._element("Nbsp", D::ClassType::Nbsp)
        ._element("SoftHyphen", D::ClassType::SoftHyphen)
        ._element("ReplacementCharacter", D::ClassType::ReplacementCharacter)
        ._element("ObjectReplacementCharacter", D::ClassType::ObjectReplacementCharacter)
        ._element("ByteOrderMark", D::ClassType::ByteOrderMark)
        ._element("ByteOrderSwapped", D::ClassType::ByteOrderSwapped)
        ._element("ParagraphSeparator", D::ClassType::ParagraphSeparator)
        ._element("LineSeparator", D::ClassType::LineSeparator)
        ._element("LastValidCodePoint", D::ClassType::LastValidCodePoint)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Category>("Category")
        ._element("Mark_NonSpacing", D::ClassType::Mark_NonSpacing)
        ._element("Mark_SpacingCombining", D::ClassType::Mark_SpacingCombining)
        ._element("Mark_Enclosing", D::ClassType::Mark_Enclosing)
        ._element("Number_DecimalDigit", D::ClassType::Number_DecimalDigit)
        ._element("Number_Letter", D::ClassType::Number_Letter)
        ._element("Number_Other", D::ClassType::Number_Other)
        ._element("Separator_Space", D::ClassType::Separator_Space)
        ._element("Separator_Line", D::ClassType::Separator_Line)
        ._element("Separator_Paragraph", D::ClassType::Separator_Paragraph)
        ._element("Other_Control", D::ClassType::Other_Control)
        ._element("Other_Format", D::ClassType::Other_Format)
        ._element("Other_Surrogate", D::ClassType::Other_Surrogate)
        ._element("Other_PrivateUse", D::ClassType::Other_PrivateUse)
        ._element("Other_NotAssigned", D::ClassType::Other_NotAssigned)
        ._element("Letter_Uppercase", D::ClassType::Letter_Uppercase)
        ._element("Letter_Lowercase", D::ClassType::Letter_Lowercase)
        ._element("Letter_Titlecase", D::ClassType::Letter_Titlecase)
        ._element("Letter_Modifier", D::ClassType::Letter_Modifier)
        ._element("Letter_Other", D::ClassType::Letter_Other)
        ._element("Punctuation_Connector", D::ClassType::Punctuation_Connector)
        ._element("Punctuation_Dash", D::ClassType::Punctuation_Dash)
        ._element("Punctuation_Open", D::ClassType::Punctuation_Open)
        ._element("Punctuation_Close", D::ClassType::Punctuation_Close)
        ._element("Punctuation_InitialQuote", D::ClassType::Punctuation_InitialQuote)
        ._element("Punctuation_FinalQuote", D::ClassType::Punctuation_FinalQuote)
        ._element("Punctuation_Other", D::ClassType::Punctuation_Other)
        ._element("Symbol_Math", D::ClassType::Symbol_Math)
        ._element("Symbol_Currency", D::ClassType::Symbol_Currency)
        ._element("Symbol_Modifier", D::ClassType::Symbol_Modifier)
        ._element("Symbol_Other", D::ClassType::Symbol_Other)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Script>("Script")
        ._element("Script_Unknown", D::ClassType::Script_Unknown)
        ._element("Script_Inherited", D::ClassType::Script_Inherited)
        ._element("Script_Common", D::ClassType::Script_Common)
        ._element("Script_Latin", D::ClassType::Script_Latin)
        ._element("Script_Greek", D::ClassType::Script_Greek)
        ._element("Script_Cyrillic", D::ClassType::Script_Cyrillic)
        ._element("Script_Armenian", D::ClassType::Script_Armenian)
        ._element("Script_Hebrew", D::ClassType::Script_Hebrew)
        ._element("Script_Arabic", D::ClassType::Script_Arabic)
        ._element("Script_Syriac", D::ClassType::Script_Syriac)
        ._element("Script_Thaana", D::ClassType::Script_Thaana)
        ._element("Script_Devanagari", D::ClassType::Script_Devanagari)
        ._element("Script_Bengali", D::ClassType::Script_Bengali)
        ._element("Script_Gurmukhi", D::ClassType::Script_Gurmukhi)
        ._element("Script_Gujarati", D::ClassType::Script_Gujarati)
        ._element("Script_Oriya", D::ClassType::Script_Oriya)
        ._element("Script_Tamil", D::ClassType::Script_Tamil)
        ._element("Script_Telugu", D::ClassType::Script_Telugu)
        ._element("Script_Kannada", D::ClassType::Script_Kannada)
        ._element("Script_Malayalam", D::ClassType::Script_Malayalam)
        ._element("Script_Sinhala", D::ClassType::Script_Sinhala)
        ._element("Script_Thai", D::ClassType::Script_Thai)
        ._element("Script_Lao", D::ClassType::Script_Lao)
        ._element("Script_Tibetan", D::ClassType::Script_Tibetan)
        ._element("Script_Myanmar", D::ClassType::Script_Myanmar)
        ._element("Script_Georgian", D::ClassType::Script_Georgian)
        ._element("Script_Hangul", D::ClassType::Script_Hangul)
        ._element("Script_Ethiopic", D::ClassType::Script_Ethiopic)
        ._element("Script_Cherokee", D::ClassType::Script_Cherokee)
        ._element("Script_CanadianAboriginal", D::ClassType::Script_CanadianAboriginal)
        ._element("Script_Ogham", D::ClassType::Script_Ogham)
        ._element("Script_Runic", D::ClassType::Script_Runic)
        ._element("Script_Khmer", D::ClassType::Script_Khmer)
        ._element("Script_Mongolian", D::ClassType::Script_Mongolian)
        ._element("Script_Hiragana", D::ClassType::Script_Hiragana)
        ._element("Script_Katakana", D::ClassType::Script_Katakana)
        ._element("Script_Bopomofo", D::ClassType::Script_Bopomofo)
        ._element("Script_Han", D::ClassType::Script_Han)
        ._element("Script_Yi", D::ClassType::Script_Yi)
        ._element("Script_OldItalic", D::ClassType::Script_OldItalic)
        ._element("Script_Gothic", D::ClassType::Script_Gothic)
        ._element("Script_Deseret", D::ClassType::Script_Deseret)
        ._element("Script_Tagalog", D::ClassType::Script_Tagalog)
        ._element("Script_Hanunoo", D::ClassType::Script_Hanunoo)
        ._element("Script_Buhid", D::ClassType::Script_Buhid)
        ._element("Script_Tagbanwa", D::ClassType::Script_Tagbanwa)
        ._element("Script_Coptic", D::ClassType::Script_Coptic)
        ._element("Script_Limbu", D::ClassType::Script_Limbu)
        ._element("Script_TaiLe", D::ClassType::Script_TaiLe)
        ._element("Script_LinearB", D::ClassType::Script_LinearB)
        ._element("Script_Ugaritic", D::ClassType::Script_Ugaritic)
        ._element("Script_Shavian", D::ClassType::Script_Shavian)
        ._element("Script_Osmanya", D::ClassType::Script_Osmanya)
        ._element("Script_Cypriot", D::ClassType::Script_Cypriot)
        ._element("Script_Braille", D::ClassType::Script_Braille)
        ._element("Script_Buginese", D::ClassType::Script_Buginese)
        ._element("Script_NewTaiLue", D::ClassType::Script_NewTaiLue)
        ._element("Script_Glagolitic", D::ClassType::Script_Glagolitic)
        ._element("Script_Tifinagh", D::ClassType::Script_Tifinagh)
        ._element("Script_SylotiNagri", D::ClassType::Script_SylotiNagri)
        ._element("Script_OldPersian", D::ClassType::Script_OldPersian)
        ._element("Script_Kharoshthi", D::ClassType::Script_Kharoshthi)
        ._element("Script_Balinese", D::ClassType::Script_Balinese)
        ._element("Script_Cuneiform", D::ClassType::Script_Cuneiform)
        ._element("Script_Phoenician", D::ClassType::Script_Phoenician)
        ._element("Script_PhagsPa", D::ClassType::Script_PhagsPa)
        ._element("Script_Nko", D::ClassType::Script_Nko)
        ._element("Script_Sundanese", D::ClassType::Script_Sundanese)
        ._element("Script_Lepcha", D::ClassType::Script_Lepcha)
        ._element("Script_OlChiki", D::ClassType::Script_OlChiki)
        ._element("Script_Vai", D::ClassType::Script_Vai)
        ._element("Script_Saurashtra", D::ClassType::Script_Saurashtra)
        ._element("Script_KayahLi", D::ClassType::Script_KayahLi)
        ._element("Script_Rejang", D::ClassType::Script_Rejang)
        ._element("Script_Lycian", D::ClassType::Script_Lycian)
        ._element("Script_Carian", D::ClassType::Script_Carian)
        ._element("Script_Lydian", D::ClassType::Script_Lydian)
        ._element("Script_Cham", D::ClassType::Script_Cham)
        ._element("Script_TaiTham", D::ClassType::Script_TaiTham)
        ._element("Script_TaiViet", D::ClassType::Script_TaiViet)
        ._element("Script_Avestan", D::ClassType::Script_Avestan)
        ._element("Script_EgyptianHieroglyphs", D::ClassType::Script_EgyptianHieroglyphs)
        ._element("Script_Samaritan", D::ClassType::Script_Samaritan)
        ._element("Script_Lisu", D::ClassType::Script_Lisu)
        ._element("Script_Bamum", D::ClassType::Script_Bamum)
        ._element("Script_Javanese", D::ClassType::Script_Javanese)
        ._element("Script_MeeteiMayek", D::ClassType::Script_MeeteiMayek)
        ._element("Script_ImperialAramaic", D::ClassType::Script_ImperialAramaic)
        ._element("Script_OldSouthArabian", D::ClassType::Script_OldSouthArabian)
        ._element("Script_InscriptionalParthian", D::ClassType::Script_InscriptionalParthian)
        ._element("Script_InscriptionalPahlavi", D::ClassType::Script_InscriptionalPahlavi)
        ._element("Script_OldTurkic", D::ClassType::Script_OldTurkic)
        ._element("Script_Kaithi", D::ClassType::Script_Kaithi)
        ._element("Script_Batak", D::ClassType::Script_Batak)
        ._element("Script_Brahmi", D::ClassType::Script_Brahmi)
        ._element("Script_Mandaic", D::ClassType::Script_Mandaic)
        ._element("Script_Chakma", D::ClassType::Script_Chakma)
        ._element("Script_MeroiticCursive", D::ClassType::Script_MeroiticCursive)
        ._element("Script_MeroiticHieroglyphs", D::ClassType::Script_MeroiticHieroglyphs)
        ._element("Script_Miao", D::ClassType::Script_Miao)
        ._element("Script_Sharada", D::ClassType::Script_Sharada)
        ._element("Script_SoraSompeng", D::ClassType::Script_SoraSompeng)
        ._element("Script_Takri", D::ClassType::Script_Takri)
        ._element("ScriptCount", D::ClassType::ScriptCount)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Direction>("Direction")
        ._element("DirL", D::ClassType::DirL)
        ._element("DirR", D::ClassType::DirR)
        ._element("DirEN", D::ClassType::DirEN)
        ._element("DirES", D::ClassType::DirES)
        ._element("DirET", D::ClassType::DirET)
        ._element("DirAN", D::ClassType::DirAN)
        ._element("DirCS", D::ClassType::DirCS)
        ._element("DirB", D::ClassType::DirB)
        ._element("DirS", D::ClassType::DirS)
        ._element("DirWS", D::ClassType::DirWS)
        ._element("DirON", D::ClassType::DirON)
        ._element("DirLRE", D::ClassType::DirLRE)
        ._element("DirLRO", D::ClassType::DirLRO)
        ._element("DirAL", D::ClassType::DirAL)
        ._element("DirRLE", D::ClassType::DirRLE)
        ._element("DirRLO", D::ClassType::DirRLO)
        ._element("DirPDF", D::ClassType::DirPDF)
        ._element("DirNSM", D::ClassType::DirNSM)
        ._element("DirBN", D::ClassType::DirBN)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Decomposition>("Decomposition")
        ._element("NoDecomposition", D::ClassType::NoDecomposition)
        ._element("Canonical", D::ClassType::Canonical)
        ._element("Font", D::ClassType::Font)
        ._element("NoBreak", D::ClassType::NoBreak)
        ._element("Initial", D::ClassType::Initial)
        ._element("Medial", D::ClassType::Medial)
        ._element("Final", D::ClassType::Final)
        ._element("Isolated", D::ClassType::Isolated)
        ._element("Circle", D::ClassType::Circle)
        ._element("Super", D::ClassType::Super)
        ._element("Sub", D::ClassType::Sub)
        ._element("Vertical", D::ClassType::Vertical)
        ._element("Wide", D::ClassType::Wide)
        ._element("Narrow", D::ClassType::Narrow)
        ._element("Small", D::ClassType::Small)
        ._element("Square", D::ClassType::Square)
        ._element("Compat", D::ClassType::Compat)
        ._element("Fraction", D::ClassType::Fraction)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Joining>("Joining")
        ._element("OtherJoining", D::ClassType::OtherJoining)
        ._element("Dual", D::ClassType::Dual)
        ._element("Right", D::ClassType::Right)
        ._element("Center", D::ClassType::Center)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::CombiningClass>("CombiningClass")
        ._element("Combining_BelowLeftAttached", D::ClassType::Combining_BelowLeftAttached)
        ._element("Combining_BelowAttached", D::ClassType::Combining_BelowAttached)
        ._element("Combining_BelowRightAttached", D::ClassType::Combining_BelowRightAttached)
        ._element("Combining_LeftAttached", D::ClassType::Combining_LeftAttached)
        ._element("Combining_RightAttached", D::ClassType::Combining_RightAttached)
        ._element("Combining_AboveLeftAttached", D::ClassType::Combining_AboveLeftAttached)
        ._element("Combining_AboveAttached", D::ClassType::Combining_AboveAttached)
        ._element("Combining_AboveRightAttached", D::ClassType::Combining_AboveRightAttached)
        ._element("Combining_BelowLeft", D::ClassType::Combining_BelowLeft)
        ._element("Combining_Below", D::ClassType::Combining_Below)
        ._element("Combining_BelowRight", D::ClassType::Combining_BelowRight)
        ._element("Combining_Left", D::ClassType::Combining_Left)
        ._element("Combining_Right", D::ClassType::Combining_Right)
        ._element("Combining_AboveLeft", D::ClassType::Combining_AboveLeft)
        ._element("Combining_Above", D::ClassType::Combining_Above)
        ._element("Combining_AboveRight", D::ClassType::Combining_AboveRight)
        ._element("Combining_DoubleBelow", D::ClassType::Combining_DoubleBelow)
        ._element("Combining_DoubleAbove", D::ClassType::Combining_DoubleAbove)
        ._element("Combining_IotaSubscript", D::ClassType::Combining_IotaSubscript)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::UnicodeVersion>("UnicodeVersion")
        ._element("Unicode_Unassigned", D::ClassType::Unicode_Unassigned)
        ._element("Unicode_1_1", D::ClassType::Unicode_1_1)
        ._element("Unicode_2_0", D::ClassType::Unicode_2_0)
        ._element("Unicode_2_1_2", D::ClassType::Unicode_2_1_2)
        ._element("Unicode_3_0", D::ClassType::Unicode_3_0)
        ._element("Unicode_3_1", D::ClassType::Unicode_3_1)
        ._element("Unicode_3_2", D::ClassType::Unicode_3_2)
        ._element("Unicode_4_0", D::ClassType::Unicode_4_0)
        ._element("Unicode_4_1", D::ClassType::Unicode_4_1)
        ._element("Unicode_5_0", D::ClassType::Unicode_5_0)
        ._element("Unicode_5_1", D::ClassType::Unicode_5_1)
        ._element("Unicode_5_2", D::ClassType::Unicode_5_2)
        ._element("Unicode_6_0", D::ClassType::Unicode_6_0)
        ._element("Unicode_6_1", D::ClassType::Unicode_6_1)
        ._element("Unicode_6_2", D::ClassType::Unicode_6_2)
    ;
}


template <typename D>
void buildMetaClass_QLatin1Char(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (char)>();
    _d.CPGF_MD_TEMPLATE _method("toLatin1", &D::ClassType::toLatin1);
    _d.CPGF_MD_TEMPLATE _method("unicode", &D::ClassType::unicode);
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
