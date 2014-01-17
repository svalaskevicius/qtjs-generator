// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qpagedpaintdevice.h>

#include "meta_qtgui_qpagedpaintdevice.h"

using namespace cpgf;

namespace meta_qtgui { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QPagedPaintDevice()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QPagedPaintDevice, QPaintDevice> _nd = GDefineMetaClass<QPagedPaintDevice, QPaintDevice>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QPagedPaintDevice");
        buildMetaClass_QPagedPaintDevice(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QPagedPaintDeviceWrapper, QPagedPaintDevice> _nd = GDefineMetaClass<QPagedPaintDeviceWrapper, QPagedPaintDevice>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::declare("QPagedPaintDeviceWrapper");
        buildMetaClass_QPagedPaintDeviceWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtgui


