// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QFileSelector>
#include <QtCore/QState>

#include <QtQml/qqmlexpression.h>

#include "meta_qtqml_qqmlexpression.h"

using namespace cpgf;

namespace meta_qtqml { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QQmlExpression()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QQmlExpression, QObject> _nd = GDefineMetaClass<QQmlExpression, QObject>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QQmlExpression", &buildMetaClass_QQmlExpression);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QQmlExpressionWrapper, QQmlExpression> _nd = GDefineMetaClass<QQmlExpressionWrapper, QQmlExpression>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QQmlExpressionWrapper", &buildMetaClass_QQmlExpressionWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtqml


