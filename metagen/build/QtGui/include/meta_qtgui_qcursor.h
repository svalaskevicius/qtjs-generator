// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QCURSOR_H
#define CPGF_META_QTGUI_QCURSOR_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qcursor(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QCursor &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QCursor &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QCursor &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline QCursor & opErAToRWrapper_QCursor__opAssign(QCursor * self, const QCursor & cursor) {
    return (*self) = cursor;
}


template <typename D>
void buildMetaClass_QCursor(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (Qt::CursorShape)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QBitmap &, const QBitmap &, int, int)>()
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPixmap &, int, int)>()
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QCursor &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("shape", &D::ClassType::shape);
    _d.CPGF_MD_TEMPLATE _method("setShape", &D::ClassType::setShape);
    _d.CPGF_MD_TEMPLATE _method("bitmap", &D::ClassType::bitmap);
    _d.CPGF_MD_TEMPLATE _method("mask", &D::ClassType::mask);
    _d.CPGF_MD_TEMPLATE _method("pixmap", &D::ClassType::pixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("hotSpot", &D::ClassType::hotSpot);
    _d.CPGF_MD_TEMPLATE _method("pos", (QPoint (*) ())&D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("pos", (QPoint (*) (const QScreen *))&D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("setPos", (void (*) (int, int))&D::ClassType::setPos);
    _d.CPGF_MD_TEMPLATE _method("setPos", (void (*) (QScreen *, int, int))&D::ClassType::setPos);
    _d.CPGF_MD_TEMPLATE _method("setPos", (void (*) (const QPoint &))&D::ClassType::setPos);
    _d.CPGF_MD_TEMPLATE _method("setPos", (void (*) (QScreen *, const QPoint &))&D::ClassType::setPos);
    _d.CPGF_MD_TEMPLATE _operator<QCursor & (*)(cpgf::GMetaSelf, const QCursor &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QCursor & (*) (QCursor *, const QCursor &))&opErAToRWrapper_QCursor__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
