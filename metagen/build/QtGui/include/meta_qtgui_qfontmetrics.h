// Auto generated file, don't modify.

#ifndef __META_QTGUI_QFONTMETRICS_H
#define __META_QTGUI_QFONTMETRICS_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


inline QFontMetrics & opErAToRWrapper_QFontMetrics__opAssign(QFontMetrics * self, const QFontMetrics & __arg0) {
    return (*self) = __arg0;
}
inline bool opErAToRWrapper_QFontMetrics__opEqual(const QFontMetrics * self, const QFontMetrics & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QFontMetrics__opNotEqual(const QFontMetrics * self, const QFontMetrics & other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QFontMetrics(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QFont &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QFont &, QPaintDevice *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QFontMetrics &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("ascent", &D::ClassType::ascent);
    _d.CPGF_MD_TEMPLATE _method("descent", &D::ClassType::descent);
    _d.CPGF_MD_TEMPLATE _method("height", &D::ClassType::height);
    _d.CPGF_MD_TEMPLATE _method("leading", &D::ClassType::leading);
    _d.CPGF_MD_TEMPLATE _method("lineSpacing", &D::ClassType::lineSpacing);
    _d.CPGF_MD_TEMPLATE _method("minLeftBearing", &D::ClassType::minLeftBearing);
    _d.CPGF_MD_TEMPLATE _method("minRightBearing", &D::ClassType::minRightBearing);
    _d.CPGF_MD_TEMPLATE _method("maxWidth", &D::ClassType::maxWidth);
    _d.CPGF_MD_TEMPLATE _method("xHeight", &D::ClassType::xHeight);
    _d.CPGF_MD_TEMPLATE _method("averageCharWidth", &D::ClassType::averageCharWidth);
    _d.CPGF_MD_TEMPLATE _method("inFont", &D::ClassType::inFont);
    _d.CPGF_MD_TEMPLATE _method("inFontUcs4", &D::ClassType::inFontUcs4);
    _d.CPGF_MD_TEMPLATE _method("leftBearing", &D::ClassType::leftBearing);
    _d.CPGF_MD_TEMPLATE _method("rightBearing", &D::ClassType::rightBearing);
    _d.CPGF_MD_TEMPLATE _method("width", (int (D::ClassType::*) (const QString &, int) const)&D::ClassType::width, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("width", (int (D::ClassType::*) (const QString &, int, int) const)&D::ClassType::width, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("width", (int (D::ClassType::*) (QChar) const)&D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("charWidth", &D::ClassType::charWidth, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("boundingRect", (QRect (D::ClassType::*) (QChar) const)&D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("boundingRect", (QRect (D::ClassType::*) (const QString &) const)&D::ClassType::boundingRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("boundingRect", (QRect (D::ClassType::*) (const QRect &, int, const QString &, int, int *) const)&D::ClassType::boundingRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("boundingRect", (QRect (D::ClassType::*) (int, int, int, int, int, const QString &, int, int *) const)&D::ClassType::boundingRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<5> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("tightBoundingRect", &D::ClassType::tightBoundingRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("elidedText", &D::ClassType::elidedText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("underlinePos", &D::ClassType::underlinePos);
    _d.CPGF_MD_TEMPLATE _method("overlinePos", &D::ClassType::overlinePos);
    _d.CPGF_MD_TEMPLATE _method("strikeOutPos", &D::ClassType::strikeOutPos);
    _d.CPGF_MD_TEMPLATE _method("lineWidth", &D::ClassType::lineWidth);
    _d.CPGF_MD_TEMPLATE _operator<QFontMetrics & (*)(cpgf::GMetaSelf, const QFontMetrics &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QFontMetrics & (*) (QFontMetrics *, const QFontMetrics &))&opErAToRWrapper_QFontMetrics__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QFontMetrics &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QFontMetrics *, const QFontMetrics &))&opErAToRWrapper_QFontMetrics__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QFontMetrics &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QFontMetrics *, const QFontMetrics &))&opErAToRWrapper_QFontMetrics__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


inline QFontMetricsF & opErAToRWrapper_QFontMetricsF__opAssign(QFontMetricsF * self, const QFontMetricsF & __arg0) {
    return (*self) = __arg0;
}
inline QFontMetricsF & opErAToRWrapper_QFontMetricsF__opAssign(QFontMetricsF * self, const QFontMetrics & __arg0) {
    return (*self) = __arg0;
}
inline bool opErAToRWrapper_QFontMetricsF__opEqual(const QFontMetricsF * self, const QFontMetricsF & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QFontMetricsF__opNotEqual(const QFontMetricsF * self, const QFontMetricsF & other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QFontMetricsF(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QFont &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QFont &, QPaintDevice *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QFontMetrics &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QFontMetricsF &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("ascent", &D::ClassType::ascent);
    _d.CPGF_MD_TEMPLATE _method("descent", &D::ClassType::descent);
    _d.CPGF_MD_TEMPLATE _method("height", &D::ClassType::height);
    _d.CPGF_MD_TEMPLATE _method("leading", &D::ClassType::leading);
    _d.CPGF_MD_TEMPLATE _method("lineSpacing", &D::ClassType::lineSpacing);
    _d.CPGF_MD_TEMPLATE _method("minLeftBearing", &D::ClassType::minLeftBearing);
    _d.CPGF_MD_TEMPLATE _method("minRightBearing", &D::ClassType::minRightBearing);
    _d.CPGF_MD_TEMPLATE _method("maxWidth", &D::ClassType::maxWidth);
    _d.CPGF_MD_TEMPLATE _method("xHeight", &D::ClassType::xHeight);
    _d.CPGF_MD_TEMPLATE _method("averageCharWidth", &D::ClassType::averageCharWidth);
    _d.CPGF_MD_TEMPLATE _method("inFont", &D::ClassType::inFont);
    _d.CPGF_MD_TEMPLATE _method("inFontUcs4", &D::ClassType::inFontUcs4);
    _d.CPGF_MD_TEMPLATE _method("leftBearing", &D::ClassType::leftBearing);
    _d.CPGF_MD_TEMPLATE _method("rightBearing", &D::ClassType::rightBearing);
    _d.CPGF_MD_TEMPLATE _method("width", (qreal (D::ClassType::*) (const QString &) const)&D::ClassType::width, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("width", (qreal (D::ClassType::*) (QChar) const)&D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("boundingRect", (QRectF (D::ClassType::*) (const QString &) const)&D::ClassType::boundingRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("boundingRect", (QRectF (D::ClassType::*) (QChar) const)&D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("boundingRect", (QRectF (D::ClassType::*) (const QRectF &, int, const QString &, int, int *) const)&D::ClassType::boundingRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("tightBoundingRect", &D::ClassType::tightBoundingRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("elidedText", &D::ClassType::elidedText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("underlinePos", &D::ClassType::underlinePos);
    _d.CPGF_MD_TEMPLATE _method("overlinePos", &D::ClassType::overlinePos);
    _d.CPGF_MD_TEMPLATE _method("strikeOutPos", &D::ClassType::strikeOutPos);
    _d.CPGF_MD_TEMPLATE _method("lineWidth", &D::ClassType::lineWidth);
    _d.CPGF_MD_TEMPLATE _operator<QFontMetricsF & (*)(cpgf::GMetaSelf, const QFontMetricsF &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QFontMetricsF & (*) (QFontMetricsF *, const QFontMetricsF &))&opErAToRWrapper_QFontMetricsF__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QFontMetricsF & (*)(cpgf::GMetaSelf, const QFontMetrics &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QFontMetricsF & (*) (QFontMetricsF *, const QFontMetrics &))&opErAToRWrapper_QFontMetricsF__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QFontMetricsF &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QFontMetricsF *, const QFontMetricsF &))&opErAToRWrapper_QFontMetricsF__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QFontMetricsF &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QFontMetricsF *, const QFontMetricsF &))&opErAToRWrapper_QFontMetricsF__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
