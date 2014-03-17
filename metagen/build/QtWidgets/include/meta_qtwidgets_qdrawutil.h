// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QDRAWUTIL_H
#define CPGF_META_QTWIDGETS_QDRAWUTIL_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace QDrawBorderPixmap;


namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qdrawutil(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qDrawShadeLine", (void (*) (QPainter *, int, int, int, int, const QPalette &, bool, int, int))&qDrawShadeLine, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<5> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(1))
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("qDrawShadeLine", (void (*) (QPainter *, const QPoint &, const QPoint &, const QPalette &, bool, int, int))&qDrawShadeLine, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<3> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(1))
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("qDrawShadeRect", (void (*) (QPainter *, int, int, int, int, const QPalette &, bool, int, int, const QBrush *))&qDrawShadeRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<5> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(1))
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("qDrawShadeRect", (void (*) (QPainter *, const QRect &, const QPalette &, bool, int, int, const QBrush *))&qDrawShadeRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(1))
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("qDrawShadePanel", (void (*) (QPainter *, int, int, int, int, const QPalette &, bool, int, const QBrush *))&qDrawShadePanel, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<5> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(1))
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("qDrawShadePanel", (void (*) (QPainter *, const QRect &, const QPalette &, bool, int, const QBrush *))&qDrawShadePanel, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(1))
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("qDrawWinButton", (void (*) (QPainter *, int, int, int, int, const QPalette &, bool, const QBrush *))&qDrawWinButton, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<5> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("qDrawWinButton", (void (*) (QPainter *, const QRect &, const QPalette &, bool, const QBrush *))&qDrawWinButton, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("qDrawWinPanel", (void (*) (QPainter *, int, int, int, int, const QPalette &, bool, const QBrush *))&qDrawWinPanel, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<5> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("qDrawWinPanel", (void (*) (QPainter *, const QRect &, const QPalette &, bool, const QBrush *))&qDrawWinPanel, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("qDrawPlainRect", (void (*) (QPainter *, int, int, int, int, const QColor &, int, const QBrush *))&qDrawPlainRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<5> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(1))
    ;
    _d.CPGF_MD_TEMPLATE _method("qDrawPlainRect", (void (*) (QPainter *, const QRect &, const QColor &, int, const QBrush *))&qDrawPlainRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(1))
    ;
    _d.CPGF_MD_TEMPLATE _method("qDrawBorderPixmap", (void (*) (QPainter *, const QRect &, const QMargins &, const QPixmap &, const QRect &, const QMargins &, const QTileRules &, QDrawBorderPixmap::DrawingHints))&qDrawBorderPixmap)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(QTileRules()))
    ;
    _d.CPGF_MD_TEMPLATE _method("qDrawBorderPixmap", (void (*) (QPainter *, const QRect &, const QMargins &, const QPixmap &))&qDrawBorderPixmap);
    _d.CPGF_MD_TEMPLATE _enum<DrawingHint>("DrawingHint")
        ._element("OpaqueTopLeft", QDrawBorderPixmap::OpaqueTopLeft)
        ._element("OpaqueTop", QDrawBorderPixmap::OpaqueTop)
        ._element("OpaqueTopRight", QDrawBorderPixmap::OpaqueTopRight)
        ._element("OpaqueLeft", QDrawBorderPixmap::OpaqueLeft)
        ._element("OpaqueCenter", QDrawBorderPixmap::OpaqueCenter)
        ._element("OpaqueRight", QDrawBorderPixmap::OpaqueRight)
        ._element("OpaqueBottomLeft", QDrawBorderPixmap::OpaqueBottomLeft)
        ._element("OpaqueBottom", QDrawBorderPixmap::OpaqueBottom)
        ._element("OpaqueBottomRight", QDrawBorderPixmap::OpaqueBottomRight)
        ._element("OpaqueCorners", QDrawBorderPixmap::OpaqueCorners)
        ._element("OpaqueEdges", QDrawBorderPixmap::OpaqueEdges)
        ._element("OpaqueFrame", QDrawBorderPixmap::OpaqueFrame)
        ._element("OpaqueAll", QDrawBorderPixmap::OpaqueAll)
    ;
    {
        GDefineMetaClass<QFlags<typename QDrawBorderPixmap::DrawingHint > > _t_d = GDefineMetaClass<QFlags<typename QDrawBorderPixmap::DrawingHint > >::lazyDeclare("DrawingHints", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QDrawBorderPixmap::DrawingHint > >, typename QDrawBorderPixmap::DrawingHint >);
        _d._class(_t_d);
    }
}


template <typename D>
void buildMetaClass_QTileRules(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (Qt::TileRule, Qt::TileRule)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (Qt::TileRule)>()
        ._default(copyVariantFromCopyable(Qt::StretchTile))
    ;
    _d.CPGF_MD_TEMPLATE _field("horizontal", &D::ClassType::horizontal);
    _d.CPGF_MD_TEMPLATE _field("vertical", &D::ClassType::vertical);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
