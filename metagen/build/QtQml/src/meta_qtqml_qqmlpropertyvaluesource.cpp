// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QFileSelector>
#include <QtCore/QState>

#include <QtQml/qqmlpropertyvaluesource.h>

#include "meta_qtqml_qqmlpropertyvaluesource.h"

using namespace cpgf;

namespace meta_qtqml { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_Global_qqmlpropertyvaluesource()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qqmlpropertyvaluesource(0, _d);
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QQmlPropertyValueSource()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QQmlPropertyValueSource> _nd = GDefineMetaClass<QQmlPropertyValueSource>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QQmlPropertyValueSource");
        buildMetaClass_QQmlPropertyValueSource(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QQmlPropertyValueSourceWrapper, QQmlPropertyValueSource> _nd = GDefineMetaClass<QQmlPropertyValueSourceWrapper, QQmlPropertyValueSource>::declare("QQmlPropertyValueSourceWrapper");
        buildMetaClass_QQmlPropertyValueSourceWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtqml


