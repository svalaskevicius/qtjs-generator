// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QPAGEDPAINTDEVICE_H
#define CPGF_META_QTGUI_QPAGEDPAINTDEVICE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QPagedPaintDevice(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("newPage", &D::ClassType::newPage);
    _d.CPGF_MD_TEMPLATE _method("setPageSize", &D::ClassType::setPageSize);
    _d.CPGF_MD_TEMPLATE _method("pageSize", &D::ClassType::pageSize);
    _d.CPGF_MD_TEMPLATE _method("setPageSizeMM", &D::ClassType::setPageSizeMM);
    _d.CPGF_MD_TEMPLATE _method("pageSizeMM", &D::ClassType::pageSizeMM);
    _d.CPGF_MD_TEMPLATE _method("setMargins", &D::ClassType::setMargins);
    _d.CPGF_MD_TEMPLATE _method("margins", &D::ClassType::margins);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::PageSize>("PageSize")
        ._element("A4", D::ClassType::A4)
        ._element("B5", D::ClassType::B5)
        ._element("Letter", D::ClassType::Letter)
        ._element("Legal", D::ClassType::Legal)
        ._element("Executive", D::ClassType::Executive)
        ._element("A0", D::ClassType::A0)
        ._element("A1", D::ClassType::A1)
        ._element("A2", D::ClassType::A2)
        ._element("A3", D::ClassType::A3)
        ._element("A5", D::ClassType::A5)
        ._element("A6", D::ClassType::A6)
        ._element("A7", D::ClassType::A7)
        ._element("A8", D::ClassType::A8)
        ._element("A9", D::ClassType::A9)
        ._element("B0", D::ClassType::B0)
        ._element("B1", D::ClassType::B1)
        ._element("B10", D::ClassType::B10)
        ._element("B2", D::ClassType::B2)
        ._element("B3", D::ClassType::B3)
        ._element("B4", D::ClassType::B4)
        ._element("B6", D::ClassType::B6)
        ._element("B7", D::ClassType::B7)
        ._element("B8", D::ClassType::B8)
        ._element("B9", D::ClassType::B9)
        ._element("C5E", D::ClassType::C5E)
        ._element("Comm10E", D::ClassType::Comm10E)
        ._element("DLE", D::ClassType::DLE)
        ._element("Folio", D::ClassType::Folio)
        ._element("Ledger", D::ClassType::Ledger)
        ._element("Tabloid", D::ClassType::Tabloid)
        ._element("Custom", D::ClassType::Custom)
        ._element("NPageSize", D::ClassType::NPageSize)
    ;
    {
        GDefineMetaClass<QPagedPaintDevice::Margins> _nd = GDefineMetaClass<QPagedPaintDevice::Margins>::declare("Margins");
        _nd.CPGF_MD_TEMPLATE _field("left", &QPagedPaintDevice::Margins::left);
        _nd.CPGF_MD_TEMPLATE _field("right", &QPagedPaintDevice::Margins::right);
        _nd.CPGF_MD_TEMPLATE _field("top", &QPagedPaintDevice::Margins::top);
        _nd.CPGF_MD_TEMPLATE _field("bottom", &QPagedPaintDevice::Margins::bottom);
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


class QPagedPaintDeviceWrapper : public QPagedPaintDevice, public cpgf::GScriptWrapper {
public:
    
    QPagedPaintDeviceWrapper()
        : QPagedPaintDevice() {}
    
    void setPageSizeMM(const QSizeF & size)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setPageSizeMM"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, size);
            return;
        }
        QPagedPaintDevice::setPageSizeMM(size);
    }
    void super_setPageSizeMM(const QSizeF & size)
    {
        QPagedPaintDevice::setPageSizeMM(size);
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
    
    void setMargins(const QPagedPaintDevice::Margins& margins)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setMargins"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, margins);
            return;
        }
        QPagedPaintDevice::setMargins(margins);
    }
    void super_setMargins(const QPagedPaintDevice::Margins& margins)
    {
        QPagedPaintDevice::setMargins(margins);
    }
    
    bool newPage()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("newPage"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_newPage()
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
    
    void setPageSize(QPagedPaintDevice::PageSize size)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setPageSize"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, size);
            return;
        }
        QPagedPaintDevice::setPageSize(size);
    }
    void super_setPageSize(QPagedPaintDevice::PageSize size)
    {
        QPagedPaintDevice::setPageSize(size);
    }
    
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
        _d.CPGF_MD_TEMPLATE _method("metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::metric);
        _d.CPGF_MD_TEMPLATE _method("redirected", (QPaintDevice * (D::ClassType::*) (QPoint *) const)&D::ClassType::redirected);
        _d.CPGF_MD_TEMPLATE _method("initPainter", (void (D::ClassType::*) (QPainter *) const)&D::ClassType::initPainter);
        _d.CPGF_MD_TEMPLATE _method("sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::sharedPainter);
        _d.CPGF_MD_TEMPLATE _method("super_setPageSizeMM", (void (D::ClassType::*) (const QSizeF &))&D::ClassType::super_setPageSizeMM);
        _d.CPGF_MD_TEMPLATE _method("super_metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::super_metric);
        _d.CPGF_MD_TEMPLATE _method("super_redirected", (QPaintDevice * (D::ClassType::*) (QPoint *) const)&D::ClassType::super_redirected);
        _d.CPGF_MD_TEMPLATE _method("super_initPainter", (void (D::ClassType::*) (QPainter *) const)&D::ClassType::super_initPainter);
        _d.CPGF_MD_TEMPLATE _method("super_setMargins", (void (D::ClassType::*) (const QPagedPaintDevice::Margins&))&D::ClassType::super_setMargins);
        _d.CPGF_MD_TEMPLATE _method("super_newPage", (bool (D::ClassType::*) ())&D::ClassType::super_newPage);
        _d.CPGF_MD_TEMPLATE _method("super_devType", (int (D::ClassType::*) () const)&D::ClassType::super_devType);
        _d.CPGF_MD_TEMPLATE _method("super_setPageSize", (void (D::ClassType::*) (QPagedPaintDevice::PageSize))&D::ClassType::super_setPageSize);
        _d.CPGF_MD_TEMPLATE _method("super_paintEngine", (QPaintEngine * (D::ClassType::*) () const)&D::ClassType::super_paintEngine);
        _d.CPGF_MD_TEMPLATE _method("super_sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::super_sharedPainter);
    }
};


template <typename D>
void buildMetaClass_QPagedPaintDeviceWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    
    QPagedPaintDeviceWrapper::cpgf__register(_d);
    
    buildMetaClass_QPagedPaintDevice<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
