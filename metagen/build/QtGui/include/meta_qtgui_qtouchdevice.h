// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QTOUCHDEVICE_H
#define CPGF_META_QTGUI_QTOUCHDEVICE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QTouchDevice(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("name", &D::ClassType::name);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("capabilities", &D::ClassType::capabilities);
    _d.CPGF_MD_TEMPLATE _method("maximumTouchPoints", &D::ClassType::maximumTouchPoints);
    _d.CPGF_MD_TEMPLATE _method("setName", &D::ClassType::setName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setType", &D::ClassType::setType);
    _d.CPGF_MD_TEMPLATE _method("setCapabilities", &D::ClassType::setCapabilities);
    _d.CPGF_MD_TEMPLATE _method("setMaximumTouchPoints", &D::ClassType::setMaximumTouchPoints);
    _d.CPGF_MD_TEMPLATE _method("devices", &D::ClassType::devices);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::DeviceType>("DeviceType")
        ._element("TouchScreen", D::ClassType::TouchScreen)
        ._element("TouchPad", D::ClassType::TouchPad)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::CapabilityFlag>("CapabilityFlag")
        ._element("Position", D::ClassType::Position)
        ._element("Area", D::ClassType::Area)
        ._element("Pressure", D::ClassType::Pressure)
        ._element("Velocity", D::ClassType::Velocity)
        ._element("RawPositions", D::ClassType::RawPositions)
        ._element("NormalizedPosition", D::ClassType::NormalizedPosition)
    ;
    {
        GDefineMetaClass<QFlags<typename QTouchDevice::CapabilityFlag > > _t_d = GDefineMetaClass<QFlags<typename QTouchDevice::CapabilityFlag > >::lazyDeclare("Capabilities", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QTouchDevice::CapabilityFlag > >, typename QTouchDevice::CapabilityFlag >);
        _d._class(_t_d);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
