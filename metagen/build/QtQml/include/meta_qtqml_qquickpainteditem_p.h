// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQUICKPAINTEDITEM_P_H
#define CPGF_META_QTQML_QQUICKPAINTEDITEM_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


inline bool bItFiEldWrapper_QQuickPaintedItemPrivate_opaquePainting_getter(QQuickPaintedItemPrivate * self) {
    return self->opaquePainting;
}

inline void bItFiEldWrapper_QQuickPaintedItemPrivate_opaquePainting_setter(QQuickPaintedItemPrivate * self, bool value) {
    self->opaquePainting = value;
}
inline bool bItFiEldWrapper_QQuickPaintedItemPrivate_antialiasing_getter(QQuickPaintedItemPrivate * self) {
    return self->antialiasing;
}

inline void bItFiEldWrapper_QQuickPaintedItemPrivate_antialiasing_setter(QQuickPaintedItemPrivate * self, bool value) {
    self->antialiasing = value;
}
inline bool bItFiEldWrapper_QQuickPaintedItemPrivate_mipmap_getter(QQuickPaintedItemPrivate * self) {
    return self->mipmap;
}

inline void bItFiEldWrapper_QQuickPaintedItemPrivate_mipmap_setter(QQuickPaintedItemPrivate * self, bool value) {
    self->mipmap = value;
}


template <typename D>
void buildMetaClass_QQuickPaintedItemPrivate(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("contentsSize", &D::ClassType::contentsSize);
    _d.CPGF_MD_TEMPLATE _field("contentsScale", &D::ClassType::contentsScale);
    _d.CPGF_MD_TEMPLATE _field("fillColor", &D::ClassType::fillColor);
    _d.CPGF_MD_TEMPLATE _field("renderTarget", &D::ClassType::renderTarget);
    _d.CPGF_MD_TEMPLATE _field("performanceHints", &D::ClassType::performanceHints);
    _d.CPGF_MD_TEMPLATE _field("dirtyRect", &D::ClassType::dirtyRect);
    _d.CPGF_MD_TEMPLATE _property("opaquePainting", &bItFiEldWrapper_QQuickPaintedItemPrivate_opaquePainting_getter, &bItFiEldWrapper_QQuickPaintedItemPrivate_opaquePainting_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("antialiasing", &bItFiEldWrapper_QQuickPaintedItemPrivate_antialiasing_getter, &bItFiEldWrapper_QQuickPaintedItemPrivate_antialiasing_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
    _d.CPGF_MD_TEMPLATE _property("mipmap", &bItFiEldWrapper_QQuickPaintedItemPrivate_mipmap_getter, &bItFiEldWrapper_QQuickPaintedItemPrivate_mipmap_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
