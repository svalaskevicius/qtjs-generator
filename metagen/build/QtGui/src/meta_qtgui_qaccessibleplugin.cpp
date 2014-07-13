// Auto generated file, don't modify.

#include <qtGui_cpgf_compat.h>
#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include "QtGui/qaccessibleplugin.h"

#include "meta_qtgui_qaccessibleplugin.h"

using namespace cpgf;

namespace qt_metadata { 


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_Global_qaccessibleplugin()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qaccessibleplugin(_d);
    return _d.getMetaInfo();
}


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_QAccessiblePlugin()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QAccessiblePlugin, QObject> _nd = GDefineMetaClass<QAccessiblePlugin, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QAccessiblePlugin", &buildMetaClass_QAccessiblePlugin);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QAccessiblePluginWrapper, QAccessiblePlugin> _nd = GDefineMetaClass<QAccessiblePluginWrapper, QAccessiblePlugin>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QAccessiblePluginWrapper", &buildMetaClass_QAccessiblePluginWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace qt_metadata


