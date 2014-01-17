// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qtextdocument.h>

#include "meta_qtgui_qtextdocument.h"

using namespace cpgf;

namespace meta_qtgui { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_Global_qtextdocument()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qtextdocument(0, _d);
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QAbstractUndoItem()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QAbstractUndoItem> _nd = GDefineMetaClass<QAbstractUndoItem>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QAbstractUndoItem");
        buildMetaClass_QAbstractUndoItem(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QAbstractUndoItemWrapper, QAbstractUndoItem> _nd = GDefineMetaClass<QAbstractUndoItemWrapper, QAbstractUndoItem>::declare("QAbstractUndoItemWrapper");
        buildMetaClass_QAbstractUndoItemWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QTextDocument()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QTextDocument, QObject> _nd = GDefineMetaClass<QTextDocument, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QTextDocument");
        buildMetaClass_QTextDocument(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QTextDocumentWrapper, QTextDocument> _nd = GDefineMetaClass<QTextDocumentWrapper, QTextDocument>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QTextDocumentWrapper");
        buildMetaClass_QTextDocumentWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtgui


