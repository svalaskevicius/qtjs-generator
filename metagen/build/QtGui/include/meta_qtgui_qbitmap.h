// Auto generated file, don't modify.

#ifndef __META_QTGUI_QBITMAP_H
#define __META_QTGUI_QBITMAP_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


inline QBitmap & opErAToRWrapper_QBitmap__opAssign(QBitmap * self, const QPixmap & __arg0) {
    return (*self) = __arg0;
}


template <typename D>
void buildMetaClass_QBitmap(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPixmap &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QSize &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, const char *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("transformed", (QBitmap (D::ClassType::*) (const QMatrix &) const)&D::ClassType::transformed, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("transformed", (QBitmap (D::ClassType::*) (const QTransform &) const)&D::ClassType::transformed, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromImage", &D::ClassType::fromImage, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(Qt::AutoColor))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromData", &D::ClassType::fromData, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(QImage::Format_MonoLSB))
    ;
    _d.CPGF_MD_TEMPLATE _operator<QBitmap & (*)(cpgf::GMetaSelf, const QPixmap &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QBitmap & (*) (QBitmap *, const QPixmap &))&opErAToRWrapper_QBitmap__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
