// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QGRAPHICSLAYOUTITEM_H
#define CPGF_META_QTWIDGETS_QGRAPHICSLAYOUTITEM_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QGraphicsLayoutItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("setSizePolicy", (void (D::ClassType::*) (const QSizePolicy &))&D::ClassType::setSizePolicy);
    _d.CPGF_MD_TEMPLATE _method("setSizePolicy", (void (D::ClassType::*) (QSizePolicy::Policy, QSizePolicy::Policy, QSizePolicy::ControlType))&D::ClassType::setSizePolicy)
        ._default(copyVariantFromCopyable(QSizePolicy::DefaultType))
    ;
    _d.CPGF_MD_TEMPLATE _method("sizePolicy", &D::ClassType::sizePolicy);
    _d.CPGF_MD_TEMPLATE _method("setMinimumSize", (void (D::ClassType::*) (const QSizeF &))&D::ClassType::setMinimumSize, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setMinimumSize", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::setMinimumSize);
    _d.CPGF_MD_TEMPLATE _method("minimumSize", &D::ClassType::minimumSize);
    _d.CPGF_MD_TEMPLATE _method("setMinimumWidth", &D::ClassType::setMinimumWidth);
    _d.CPGF_MD_TEMPLATE _method("minimumWidth", &D::ClassType::minimumWidth);
    _d.CPGF_MD_TEMPLATE _method("setMinimumHeight", &D::ClassType::setMinimumHeight);
    _d.CPGF_MD_TEMPLATE _method("minimumHeight", &D::ClassType::minimumHeight);
    _d.CPGF_MD_TEMPLATE _method("setPreferredSize", (void (D::ClassType::*) (const QSizeF &))&D::ClassType::setPreferredSize, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setPreferredSize", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::setPreferredSize);
    _d.CPGF_MD_TEMPLATE _method("preferredSize", &D::ClassType::preferredSize);
    _d.CPGF_MD_TEMPLATE _method("setPreferredWidth", &D::ClassType::setPreferredWidth);
    _d.CPGF_MD_TEMPLATE _method("preferredWidth", &D::ClassType::preferredWidth);
    _d.CPGF_MD_TEMPLATE _method("setPreferredHeight", &D::ClassType::setPreferredHeight);
    _d.CPGF_MD_TEMPLATE _method("preferredHeight", &D::ClassType::preferredHeight);
    _d.CPGF_MD_TEMPLATE _method("setMaximumSize", (void (D::ClassType::*) (const QSizeF &))&D::ClassType::setMaximumSize, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setMaximumSize", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::setMaximumSize);
    _d.CPGF_MD_TEMPLATE _method("maximumSize", &D::ClassType::maximumSize);
    _d.CPGF_MD_TEMPLATE _method("setMaximumWidth", &D::ClassType::setMaximumWidth);
    _d.CPGF_MD_TEMPLATE _method("maximumWidth", &D::ClassType::maximumWidth);
    _d.CPGF_MD_TEMPLATE _method("setMaximumHeight", &D::ClassType::setMaximumHeight);
    _d.CPGF_MD_TEMPLATE _method("maximumHeight", &D::ClassType::maximumHeight);
    _d.CPGF_MD_TEMPLATE _method("setGeometry", &D::ClassType::setGeometry, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("geometry", &D::ClassType::geometry);
    _d.CPGF_MD_TEMPLATE _method("getContentsMargins", &D::ClassType::getContentsMargins);
    _d.CPGF_MD_TEMPLATE _method("contentsRect", &D::ClassType::contentsRect);
    _d.CPGF_MD_TEMPLATE _method("effectiveSizeHint", &D::ClassType::effectiveSizeHint, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QSizeF()))
    ;
    _d.CPGF_MD_TEMPLATE _method("updateGeometry", &D::ClassType::updateGeometry);
    _d.CPGF_MD_TEMPLATE _method("parentLayoutItem", &D::ClassType::parentLayoutItem);
    _d.CPGF_MD_TEMPLATE _method("setParentLayoutItem", &D::ClassType::setParentLayoutItem);
    _d.CPGF_MD_TEMPLATE _method("isLayout", &D::ClassType::isLayout);
    _d.CPGF_MD_TEMPLATE _method("graphicsItem", &D::ClassType::graphicsItem);
    _d.CPGF_MD_TEMPLATE _method("ownedByLayout", &D::ClassType::ownedByLayout);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
