// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QPAINTDEVICE_H
#define CPGF_META_QTGUI_QPAINTDEVICE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QPaintDevice(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("devType", &D::ClassType::devType);
    _d.CPGF_MD_TEMPLATE _method("paintingActive", &D::ClassType::paintingActive);
    _d.CPGF_MD_TEMPLATE _method("paintEngine", &D::ClassType::paintEngine);
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("height", &D::ClassType::height);
    _d.CPGF_MD_TEMPLATE _method("widthMM", &D::ClassType::widthMM);
    _d.CPGF_MD_TEMPLATE _method("heightMM", &D::ClassType::heightMM);
    _d.CPGF_MD_TEMPLATE _method("logicalDpiX", &D::ClassType::logicalDpiX);
    _d.CPGF_MD_TEMPLATE _method("logicalDpiY", &D::ClassType::logicalDpiY);
    _d.CPGF_MD_TEMPLATE _method("physicalDpiX", &D::ClassType::physicalDpiX);
    _d.CPGF_MD_TEMPLATE _method("physicalDpiY", &D::ClassType::physicalDpiY);
    _d.CPGF_MD_TEMPLATE _method("devicePixelRatio", &D::ClassType::devicePixelRatio);
    _d.CPGF_MD_TEMPLATE _method("colorCount", &D::ClassType::colorCount);
    _d.CPGF_MD_TEMPLATE _method("depth", &D::ClassType::depth);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::PaintDeviceMetric>("PaintDeviceMetric")
        ._element("PdmWidth", D::ClassType::PdmWidth)
        ._element("PdmHeight", D::ClassType::PdmHeight)
        ._element("PdmWidthMM", D::ClassType::PdmWidthMM)
        ._element("PdmHeightMM", D::ClassType::PdmHeightMM)
        ._element("PdmNumColors", D::ClassType::PdmNumColors)
        ._element("PdmDepth", D::ClassType::PdmDepth)
        ._element("PdmDpiX", D::ClassType::PdmDpiX)
        ._element("PdmDpiY", D::ClassType::PdmDpiY)
        ._element("PdmPhysicalDpiX", D::ClassType::PdmPhysicalDpiX)
        ._element("PdmPhysicalDpiY", D::ClassType::PdmPhysicalDpiY)
        ._element("PdmDevicePixelRatio", D::ClassType::PdmDevicePixelRatio)
    ;
}


class QPaintDeviceWrapper : public QPaintDevice, public cpgf::GScriptWrapper {
public:
    
    QPaintEngine * paintEngine() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintEngine"));
        if(func)
        {
            return cpgf::fromVariant<QPaintEngine * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QPaintEngine * super_paintEngine() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    int devType() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("devType"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QPaintDevice::devType();
    }
    int super_devType() const
    {
        return QPaintDevice::devType();
    }
    
    QPaintDevice * redirected(QPoint * offset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("redirected"));
        if(func)
        {
            return cpgf::fromVariant<QPaintDevice * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset).getValue());
        }
        return QPaintDevice::redirected(offset);
    }
    QPaintDevice * super_redirected(QPoint * offset) const
    {
        return QPaintDevice::redirected(offset);
    }
    
    void initPainter(QPainter * painter) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("initPainter"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter);
            return;
        }
        QPaintDevice::initPainter(painter);
    }
    void super_initPainter(QPainter * painter) const
    {
        QPaintDevice::initPainter(painter);
    }
    
    int metric(QPaintDevice::PaintDeviceMetric metric) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metric"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, metric).getValue());
        }
        return QPaintDevice::metric(metric);
    }
    int super_metric(QPaintDevice::PaintDeviceMetric metric) const
    {
        return QPaintDevice::metric(metric);
    }
    
    QPainter * sharedPainter() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sharedPainter"));
        if(func)
        {
            return cpgf::fromVariant<QPainter * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QPaintDevice::sharedPainter();
    }
    QPainter * super_sharedPainter() const
    {
        return QPaintDevice::sharedPainter();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("redirected", (QPaintDevice * (D::ClassType::*) (QPoint *) const)&D::ClassType::redirected);
        _d.CPGF_MD_TEMPLATE _method("initPainter", (void (D::ClassType::*) (QPainter *) const)&D::ClassType::initPainter);
        _d.CPGF_MD_TEMPLATE _method("metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::metric);
        _d.CPGF_MD_TEMPLATE _method("sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::sharedPainter);
        _d.CPGF_MD_TEMPLATE _method("super_paintEngine", (QPaintEngine * (D::ClassType::*) () const)&D::ClassType::super_paintEngine);
        _d.CPGF_MD_TEMPLATE _method("super_devType", (int (D::ClassType::*) () const)&D::ClassType::super_devType);
        _d.CPGF_MD_TEMPLATE _method("super_redirected", (QPaintDevice * (D::ClassType::*) (QPoint *) const)&D::ClassType::super_redirected);
        _d.CPGF_MD_TEMPLATE _method("super_initPainter", (void (D::ClassType::*) (QPainter *) const)&D::ClassType::super_initPainter);
        _d.CPGF_MD_TEMPLATE _method("super_metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::super_metric);
        _d.CPGF_MD_TEMPLATE _method("super_sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::super_sharedPainter);
    }
};


template <typename D>
void buildMetaClass_QPaintDeviceWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QPaintDeviceWrapper::cpgf__register(_d);
    
    buildMetaClass_QPaintDevice<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
