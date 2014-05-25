// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQUICKDRAG_P_H
#define CPGF_META_QTQML_QQUICKDRAG_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QQuickDragGrabber(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("target", &D::ClassType::target);
    _d.CPGF_MD_TEMPLATE _method("setTarget", &D::ClassType::setTarget);
    _d.CPGF_MD_TEMPLATE _method("resetTarget", &D::ClassType::resetTarget);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("begin", &D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("end", &D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("grab", &D::ClassType::grab);
    _d.CPGF_MD_TEMPLATE _method("release", &D::ClassType::release);
}


template <typename D>
void buildMetaClass_QQuickDropEventEx(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("setProposedAction", (void (D::ClassType::*) (Qt::DropAction))&D::ClassType::setProposedAction);
    _d.CPGF_MD_TEMPLATE _method("copyActions", (void (D::ClassType::*) (const QDropEvent &))&D::ClassType::copyActions);
    _d.CPGF_MD_TEMPLATE _method("setProposedAction", (void (*) (QDropEvent *, Qt::DropAction))&D::ClassType::setProposedAction);
    _d.CPGF_MD_TEMPLATE _method("copyActions", (void (*) (QDropEvent *, const QDropEvent &))&D::ClassType::copyActions);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
