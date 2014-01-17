// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qaccessibleobject.h>

#include "meta_qtgui_qaccessibleobject.h"

using namespace cpgf;

namespace meta_qtgui { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QAccessibleApplication()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QAccessibleApplication, QAccessibleObject> _nd = GDefineMetaClass<QAccessibleApplication, QAccessibleObject>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::declare("QAccessibleApplication");
        buildMetaClass_QAccessibleApplication(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QAccessibleApplicationWrapper, QAccessibleApplication> _nd = GDefineMetaClass<QAccessibleApplicationWrapper, QAccessibleApplication>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::declare("QAccessibleApplicationWrapper");
        buildMetaClass_QAccessibleApplicationWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtgui


