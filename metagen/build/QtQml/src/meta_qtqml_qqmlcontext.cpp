// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QFileSelector>
#include <QtCore/QState>

#include <QtQml/qqmlcontext.h>

#include "meta_qtqml_qqmlcontext.h"

using namespace cpgf;

namespace meta_qtqml { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QQmlContext()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QQmlContext, QObject> _nd = GDefineMetaClass<QQmlContext, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QQmlContext");
        buildMetaClass_QQmlContext(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QQmlContextWrapper, QQmlContext> _nd = GDefineMetaClass<QQmlContextWrapper, QQmlContext>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QQmlContextWrapper");
        buildMetaClass_QQmlContextWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtqml


