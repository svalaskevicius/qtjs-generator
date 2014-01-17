// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qdrag.h>

#include "meta_qtgui_qdrag.h"

using namespace cpgf;

namespace meta_qtgui { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QDrag()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QDrag, QObject> _nd = GDefineMetaClass<QDrag, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QDrag");
        buildMetaClass_QDrag(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QDragWrapper, QDrag> _nd = GDefineMetaClass<QDragWrapper, QDrag>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QDragWrapper");
        buildMetaClass_QDragWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtgui


