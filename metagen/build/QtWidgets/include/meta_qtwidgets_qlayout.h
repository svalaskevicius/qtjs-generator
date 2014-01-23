// Auto generated file, don't modify.

#ifndef __META_QTWIDGETS_QLAYOUT_H
#define __META_QTWIDGETS_QLAYOUT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QLayout(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("margin", &D::ClassType::margin);
    _d.CPGF_MD_TEMPLATE _method("spacing", &D::ClassType::spacing);
    _d.CPGF_MD_TEMPLATE _method("setMargin", &D::ClassType::setMargin);
    _d.CPGF_MD_TEMPLATE _method("setSpacing", &D::ClassType::setSpacing);
    _d.CPGF_MD_TEMPLATE _method("setContentsMargins", (void (D::ClassType::*) (int, int, int, int))&D::ClassType::setContentsMargins);
    _d.CPGF_MD_TEMPLATE _method("setContentsMargins", (void (D::ClassType::*) (const QMargins &))&D::ClassType::setContentsMargins);
    _d.CPGF_MD_TEMPLATE _method("getContentsMargins", &D::ClassType::getContentsMargins);
    _d.CPGF_MD_TEMPLATE _method("contentsMargins", &D::ClassType::contentsMargins);
    _d.CPGF_MD_TEMPLATE _method("contentsRect", &D::ClassType::contentsRect);
    _d.CPGF_MD_TEMPLATE _method("setAlignment", (bool (D::ClassType::*) (QWidget *, Qt::Alignment))&D::ClassType::setAlignment);
    _d.CPGF_MD_TEMPLATE _method("setAlignment", (bool (D::ClassType::*) (QLayout *, Qt::Alignment))&D::ClassType::setAlignment);
    _d.CPGF_MD_TEMPLATE _method("setAlignment", (void (D::ClassType::*) (Qt::Alignment))&D::ClassType::setAlignment);
    _d.CPGF_MD_TEMPLATE _method("setSizeConstraint", &D::ClassType::setSizeConstraint);
    _d.CPGF_MD_TEMPLATE _method("sizeConstraint", &D::ClassType::sizeConstraint);
    _d.CPGF_MD_TEMPLATE _method("setMenuBar", &D::ClassType::setMenuBar);
    _d.CPGF_MD_TEMPLATE _method("menuBar", &D::ClassType::menuBar);
    _d.CPGF_MD_TEMPLATE _method("parentWidget", &D::ClassType::parentWidget);
    _d.CPGF_MD_TEMPLATE _method("invalidate", &D::ClassType::invalidate);
    _d.CPGF_MD_TEMPLATE _method("geometry", &D::ClassType::geometry);
    _d.CPGF_MD_TEMPLATE _method("activate", &D::ClassType::activate);
    _d.CPGF_MD_TEMPLATE _method("update", &D::ClassType::update);
    _d.CPGF_MD_TEMPLATE _method("addWidget", &D::ClassType::addWidget);
    _d.CPGF_MD_TEMPLATE _method("addItem", &D::ClassType::addItem);
    _d.CPGF_MD_TEMPLATE _method("removeWidget", &D::ClassType::removeWidget);
    _d.CPGF_MD_TEMPLATE _method("removeItem", &D::ClassType::removeItem);
    _d.CPGF_MD_TEMPLATE _method("expandingDirections", &D::ClassType::expandingDirections);
    _d.CPGF_MD_TEMPLATE _method("minimumSize", &D::ClassType::minimumSize);
    _d.CPGF_MD_TEMPLATE _method("maximumSize", &D::ClassType::maximumSize);
    _d.CPGF_MD_TEMPLATE _method("setGeometry", &D::ClassType::setGeometry);
    _d.CPGF_MD_TEMPLATE _method("itemAt", &D::ClassType::itemAt);
    _d.CPGF_MD_TEMPLATE _method("takeAt", &D::ClassType::takeAt);
    _d.CPGF_MD_TEMPLATE _method("indexOf", &D::ClassType::indexOf);
    _d.CPGF_MD_TEMPLATE _method("count", &D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("controlTypes", &D::ClassType::controlTypes);
    _d.CPGF_MD_TEMPLATE _method("replaceWidget", &D::ClassType::replaceWidget)
        ._default(copyVariantFromCopyable(Qt::FindChildrenRecursively))
    ;
    _d.CPGF_MD_TEMPLATE _method("totalHeightForWidth", &D::ClassType::totalHeightForWidth);
    _d.CPGF_MD_TEMPLATE _method("totalMinimumSize", &D::ClassType::totalMinimumSize);
    _d.CPGF_MD_TEMPLATE _method("totalMaximumSize", &D::ClassType::totalMaximumSize);
    _d.CPGF_MD_TEMPLATE _method("totalSizeHint", &D::ClassType::totalSizeHint);
    _d.CPGF_MD_TEMPLATE _method("layout", &D::ClassType::layout);
    _d.CPGF_MD_TEMPLATE _method("setEnabled", &D::ClassType::setEnabled);
    _d.CPGF_MD_TEMPLATE _method("isEnabled", &D::ClassType::isEnabled);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("closestAcceptableSize", &D::ClassType::closestAcceptableSize);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SizeConstraint>("SizeConstraint")
        ._element("SetDefaultConstraint", D::ClassType::SetDefaultConstraint)
        ._element("SetNoConstraint", D::ClassType::SetNoConstraint)
        ._element("SetMinimumSize", D::ClassType::SetMinimumSize)
        ._element("SetFixedSize", D::ClassType::SetFixedSize)
        ._element("SetMaximumSize", D::ClassType::SetMaximumSize)
        ._element("SetMinAndMaxSize", D::ClassType::SetMinAndMaxSize)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
