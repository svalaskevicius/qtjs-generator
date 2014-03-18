// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QPEN_H
#define CPGF_META_QTGUI_QPEN_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qpen(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QPen &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QPen &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QPen &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline QPen & opErAToRWrapper_QPen__opAssign(QPen * self, const QPen & pen) {
    return (*self) = pen;
}
inline bool opErAToRWrapper_QPen__opEqual(const QPen * self, const QPen & p) {
    return (*self) == p;
}
inline bool opErAToRWrapper_QPen__opNotEqual(const QPen * self, const QPen & p) {
    return (*self) != p;
}


template <typename D>
void buildMetaClass_QPen(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (Qt::PenStyle)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QColor &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QBrush &, qreal, Qt::PenStyle, Qt::PenCapStyle, Qt::PenJoinStyle)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::BevelJoin))
        ._default(copyVariantFromCopyable(Qt::SquareCap))
        ._default(copyVariantFromCopyable(Qt::SolidLine))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPen &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("style", &D::ClassType::style);
    _d.CPGF_MD_TEMPLATE _method("setStyle", &D::ClassType::setStyle);
    _d.CPGF_MD_TEMPLATE _method("dashPattern", &D::ClassType::dashPattern);
    _d.CPGF_MD_TEMPLATE _method("setDashPattern", &D::ClassType::setDashPattern, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("dashOffset", &D::ClassType::dashOffset);
    _d.CPGF_MD_TEMPLATE _method("setDashOffset", &D::ClassType::setDashOffset);
    _d.CPGF_MD_TEMPLATE _method("miterLimit", &D::ClassType::miterLimit);
    _d.CPGF_MD_TEMPLATE _method("setMiterLimit", &D::ClassType::setMiterLimit);
    _d.CPGF_MD_TEMPLATE _method("widthF", &D::ClassType::widthF);
    _d.CPGF_MD_TEMPLATE _method("setWidthF", &D::ClassType::setWidthF);
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("setWidth", &D::ClassType::setWidth);
    _d.CPGF_MD_TEMPLATE _method("color", &D::ClassType::color);
    _d.CPGF_MD_TEMPLATE _method("setColor", &D::ClassType::setColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("brush", &D::ClassType::brush);
    _d.CPGF_MD_TEMPLATE _method("setBrush", &D::ClassType::setBrush, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isSolid", &D::ClassType::isSolid);
    _d.CPGF_MD_TEMPLATE _method("capStyle", &D::ClassType::capStyle);
    _d.CPGF_MD_TEMPLATE _method("setCapStyle", &D::ClassType::setCapStyle);
    _d.CPGF_MD_TEMPLATE _method("joinStyle", &D::ClassType::joinStyle);
    _d.CPGF_MD_TEMPLATE _method("setJoinStyle", &D::ClassType::setJoinStyle);
    _d.CPGF_MD_TEMPLATE _method("isCosmetic", &D::ClassType::isCosmetic);
    _d.CPGF_MD_TEMPLATE _method("setCosmetic", &D::ClassType::setCosmetic);
    _d.CPGF_MD_TEMPLATE _method("isDetached", &D::ClassType::isDetached);
    _d.CPGF_MD_TEMPLATE _operator<QPen & (*)(cpgf::GMetaSelf, const QPen &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QPen & (*) (QPen *, const QPen &))&opErAToRWrapper_QPen__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QPen &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QPen *, const QPen &))&opErAToRWrapper_QPen__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QPen &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QPen *, const QPen &))&opErAToRWrapper_QPen__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
