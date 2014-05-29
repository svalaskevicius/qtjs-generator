// Auto generated file, don't modify.

#include <qtGui_cpgf_compat.h>
#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qtextdocument.h>

#include "meta_qtgui_qtextdocument.h"

using namespace cpgf;

namespace qt_metadata { 


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_Global_qtextdocument()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qtextdocument(_d);
    return _d.getMetaInfo();
}


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_QAbstractUndoItem()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QAbstractUndoItem> _nd = GDefineMetaClass<QAbstractUndoItem>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QAbstractUndoItem", &buildMetaClass_QAbstractUndoItem);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QAbstractUndoItemWrapper, QAbstractUndoItem> _nd = GDefineMetaClass<QAbstractUndoItemWrapper, QAbstractUndoItem>::lazyDeclare("QAbstractUndoItemWrapper", &buildMetaClass_QAbstractUndoItemWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_QTextDocument()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QTextDocument, QObject> _nd = GDefineMetaClass<QTextDocument, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QTextDocument", &buildMetaClass_QTextDocument);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QTextDocumentWrapper, QTextDocument> _nd = GDefineMetaClass<QTextDocumentWrapper, QTextDocument>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QTextDocumentWrapper", &buildMetaClass_QTextDocumentWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace qt_metadata


