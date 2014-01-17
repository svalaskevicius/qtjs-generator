// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qsyntaxhighlighter.h>

#include "meta_qtgui_qsyntaxhighlighter.h"

using namespace cpgf;

namespace meta_qtgui { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QSyntaxHighlighter()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QSyntaxHighlighter, QObject> _nd = GDefineMetaClass<QSyntaxHighlighter, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QSyntaxHighlighter");
        buildMetaClass_QSyntaxHighlighter(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QSyntaxHighlighterWrapper, QSyntaxHighlighter> _nd = GDefineMetaClass<QSyntaxHighlighterWrapper, QSyntaxHighlighter>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QSyntaxHighlighterWrapper");
        buildMetaClass_QSyntaxHighlighterWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtgui


