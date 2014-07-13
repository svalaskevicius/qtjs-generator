// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QOPENGLPAINTDEVICE_H
#define CPGF_META_QTGUI_QOPENGLPAINTDEVICE_H


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
void buildMetaClass_QOpenGLPaintDevice(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QSize &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int)>();
    _d.CPGF_MD_TEMPLATE _method("devType", &D::ClassType::devType);
    _d.CPGF_MD_TEMPLATE _method("paintEngine", &D::ClassType::paintEngine);
    _d.CPGF_MD_TEMPLATE _method("context", &D::ClassType::context);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("setSize", &D::ClassType::setSize);
    _d.CPGF_MD_TEMPLATE _method("setDevicePixelRatio", &D::ClassType::setDevicePixelRatio);
    _d.CPGF_MD_TEMPLATE _method("dotsPerMeterX", &D::ClassType::dotsPerMeterX);
    _d.CPGF_MD_TEMPLATE _method("dotsPerMeterY", &D::ClassType::dotsPerMeterY);
    _d.CPGF_MD_TEMPLATE _method("setDotsPerMeterX", &D::ClassType::setDotsPerMeterX);
    _d.CPGF_MD_TEMPLATE _method("setDotsPerMeterY", &D::ClassType::setDotsPerMeterY);
    _d.CPGF_MD_TEMPLATE _method("setPaintFlipped", &D::ClassType::setPaintFlipped);
    _d.CPGF_MD_TEMPLATE _method("paintFlipped", &D::ClassType::paintFlipped);
    _d.CPGF_MD_TEMPLATE _method("ensureActiveTarget", &D::ClassType::ensureActiveTarget);
}


class QOpenGLPaintDeviceWrapper : public QOpenGLPaintDevice, public cpgf::GScriptWrapper {
public:
    
    QOpenGLPaintDeviceWrapper()
        : QOpenGLPaintDevice() {}
    
    QOpenGLPaintDeviceWrapper(const QSize & size)
        : QOpenGLPaintDevice(size) {}
    
    QOpenGLPaintDeviceWrapper(int width, int height)
        : QOpenGLPaintDevice(width, height) {}
    
    QPaintEngine * paintEngine() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintEngine"));
        if(func)
        {
            return cpgf::fromVariant<QPaintEngine * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QOpenGLPaintDevice::paintEngine();
    }
    QPaintEngine * super_paintEngine() const
    {
        return QOpenGLPaintDevice::paintEngine();
    }
    
    int devType() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("devType"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QOpenGLPaintDevice::devType();
    }
    int super_devType() const
    {
        return QOpenGLPaintDevice::devType();
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
    
    void ensureActiveTarget()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("ensureActiveTarget"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QOpenGLPaintDevice::ensureActiveTarget();
    }
    void super_ensureActiveTarget()
    {
        QOpenGLPaintDevice::ensureActiveTarget();
    }
    
    int metric(QPaintDevice::PaintDeviceMetric metric) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metric"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, metric).getValue());
        }
        return QOpenGLPaintDevice::metric(metric);
    }
    int super_metric(QPaintDevice::PaintDeviceMetric metric) const
    {
        return QOpenGLPaintDevice::metric(metric);
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
        _d.CPGF_MD_TEMPLATE _method("super_ensureActiveTarget", (void (D::ClassType::*) ())&D::ClassType::super_ensureActiveTarget);
        _d.CPGF_MD_TEMPLATE _method("super_metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::super_metric);
        _d.CPGF_MD_TEMPLATE _method("super_sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::super_sharedPainter);
    }
};


template <typename D>
void buildMetaClass_QOpenGLPaintDeviceWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QOpenGLPaintDeviceWrapper::cpgf__register(_d);
    
    buildMetaClass_QOpenGLPaintDevice<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
