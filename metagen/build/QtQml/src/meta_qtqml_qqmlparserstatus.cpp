// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QFileSelector>
#include <QtCore/QState>

#include <QtQml/qqmlparserstatus.h>

#include "meta_qtqml_qqmlparserstatus.h"

using namespace cpgf;

namespace qt_metadata { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_Global_qqmlparserstatus()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qqmlparserstatus(_d);
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QQmlParserStatus()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QQmlParserStatus> _nd = GDefineMetaClass<QQmlParserStatus>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QQmlParserStatus", &buildMetaClass_QQmlParserStatus);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QQmlParserStatusWrapper, QQmlParserStatus> _nd = GDefineMetaClass<QQmlParserStatusWrapper, QQmlParserStatus>::lazyDeclare("QQmlParserStatusWrapper", &buildMetaClass_QQmlParserStatusWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace qt_metadata


