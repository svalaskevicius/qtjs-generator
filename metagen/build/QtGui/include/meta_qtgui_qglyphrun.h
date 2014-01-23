// Auto generated file, don't modify.

#ifndef __META_QTGUI_QGLYPHRUN_H
#define __META_QTGUI_QGLYPHRUN_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


inline QGlyphRun & opErAToRWrapper_QGlyphRun__opAssign(QGlyphRun * self, const QGlyphRun & other) {
    return (*self) = other;
}
inline bool opErAToRWrapper_QGlyphRun__opEqual(const QGlyphRun * self, const QGlyphRun & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QGlyphRun__opNotEqual(const QGlyphRun * self, const QGlyphRun & other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QGlyphRun(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QGlyphRun &)>();
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("rawFont", &D::ClassType::rawFont);
    _d.CPGF_MD_TEMPLATE _method("setRawFont", &D::ClassType::setRawFont);
    _d.CPGF_MD_TEMPLATE _method("setRawData", &D::ClassType::setRawData);
    _d.CPGF_MD_TEMPLATE _method("glyphIndexes", &D::ClassType::glyphIndexes);
    _d.CPGF_MD_TEMPLATE _method("setGlyphIndexes", &D::ClassType::setGlyphIndexes, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("positions", &D::ClassType::positions);
    _d.CPGF_MD_TEMPLATE _method("setPositions", &D::ClassType::setPositions, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("setOverline", &D::ClassType::setOverline);
    _d.CPGF_MD_TEMPLATE _method("overline", &D::ClassType::overline);
    _d.CPGF_MD_TEMPLATE _method("setUnderline", &D::ClassType::setUnderline);
    _d.CPGF_MD_TEMPLATE _method("underline", &D::ClassType::underline);
    _d.CPGF_MD_TEMPLATE _method("setStrikeOut", &D::ClassType::setStrikeOut);
    _d.CPGF_MD_TEMPLATE _method("strikeOut", &D::ClassType::strikeOut);
    _d.CPGF_MD_TEMPLATE _method("setRightToLeft", &D::ClassType::setRightToLeft);
    _d.CPGF_MD_TEMPLATE _method("isRightToLeft", &D::ClassType::isRightToLeft);
    _d.CPGF_MD_TEMPLATE _method("setFlag", &D::ClassType::setFlag)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("setFlags", &D::ClassType::setFlags);
    _d.CPGF_MD_TEMPLATE _method("flags", &D::ClassType::flags);
    _d.CPGF_MD_TEMPLATE _method("setBoundingRect", &D::ClassType::setBoundingRect);
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::GlyphRunFlag>("GlyphRunFlag")
        ._element("Overline", D::ClassType::Overline)
        ._element("Underline", D::ClassType::Underline)
        ._element("StrikeOut", D::ClassType::StrikeOut)
        ._element("RightToLeft", D::ClassType::RightToLeft)
        ._element("SplitLigature", D::ClassType::SplitLigature)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QGlyphRun & (*)(cpgf::GMetaSelf, const QGlyphRun &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QGlyphRun & (*) (QGlyphRun *, const QGlyphRun &))&opErAToRWrapper_QGlyphRun__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QGlyphRun &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QGlyphRun *, const QGlyphRun &))&opErAToRWrapper_QGlyphRun__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QGlyphRun &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QGlyphRun *, const QGlyphRun &))&opErAToRWrapper_QGlyphRun__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    {
        GDefineMetaClass<QFlags<typename D::ClassType::GlyphRunFlag > > _t_d = GDefineMetaClass<QFlags<typename D::ClassType::GlyphRunFlag > >::lazyDeclare("GlyphRunFlags", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename D::ClassType::GlyphRunFlag > >, typename D::ClassType::GlyphRunFlag >);
        _d._class(_t_d);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
