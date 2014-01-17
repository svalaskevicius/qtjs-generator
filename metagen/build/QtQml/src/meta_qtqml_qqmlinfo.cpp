// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QFileSelector>
#include <QtCore/QState>

#include <QtQml/qqmlinfo.h>

#include "meta_qtqml_qqmlinfo.h"

using namespace cpgf;

namespace meta_qtqml { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_Global_qqmlinfo()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qqmlinfo(0, _d);
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QQmlInfo()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QQmlInfo, QDebug> _nd = GDefineMetaClass<QQmlInfo, QDebug>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent> >::declare("QQmlInfo");
        buildMetaClass_QQmlInfo(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtqml


