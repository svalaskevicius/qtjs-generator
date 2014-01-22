// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qtexttable.h>

#include "meta_qtgui_qtexttable.h"

using namespace cpgf;

namespace meta_qtgui { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QTextTable()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QTextTable, QTextFrame> _nd = GDefineMetaClass<QTextTable, QTextFrame>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QTextTable", &buildMetaClass_QTextTable);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QTextTableWrapper, QTextTable> _nd = GDefineMetaClass<QTextTableWrapper, QTextTable>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QTextTableWrapper", &buildMetaClass_QTextTableWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QTextTableCell()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QTextTableCell> _nd = GDefineMetaClass<QTextTableCell>::lazyDeclare("QTextTableCell", &buildMetaClass_QTextTableCell);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtgui


