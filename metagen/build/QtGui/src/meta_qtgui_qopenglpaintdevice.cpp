// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qopenglpaintdevice.h>

#include "meta_qtgui_qopenglpaintdevice.h"

using namespace cpgf;

namespace meta_qtgui { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QOpenGLPaintDevice()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QOpenGLPaintDevice, QPaintDevice> _nd = GDefineMetaClass<QOpenGLPaintDevice, QPaintDevice>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QOpenGLPaintDevice", &buildMetaClass_QOpenGLPaintDevice);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QOpenGLPaintDeviceWrapper, QOpenGLPaintDevice> _nd = GDefineMetaClass<QOpenGLPaintDeviceWrapper, QOpenGLPaintDevice>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QOpenGLPaintDeviceWrapper", &buildMetaClass_QOpenGLPaintDeviceWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtgui


