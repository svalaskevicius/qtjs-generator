// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QFileSelector>
#include <QtCore/QState>

#include <QtQml/qqmlparserstatus.h>

#include "meta_qtqml_qqmlparserstatus.h"

using namespace cpgf;

namespace meta_qtqml { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_Global_qqmlparserstatus()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qqmlparserstatus(0, _d);
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QQmlParserStatus()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QQmlParserStatus> _nd = GDefineMetaClass<QQmlParserStatus>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QQmlParserStatus");
        buildMetaClass_QQmlParserStatus(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QQmlParserStatusWrapper, QQmlParserStatus> _nd = GDefineMetaClass<QQmlParserStatusWrapper, QQmlParserStatus>::declare("QQmlParserStatusWrapper");
        buildMetaClass_QQmlParserStatusWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtqml


