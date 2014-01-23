// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qpixmap.h>

#include "meta_qtgui_qpixmap.h"

using namespace cpgf;

namespace qt_metadata { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_Global_qpixmap()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qpixmap(_d);
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QPixmap()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QPixmap, QPaintDevice> _nd = GDefineMetaClass<QPixmap, QPaintDevice>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QPixmap", &buildMetaClass_QPixmap);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace qt_metadata


