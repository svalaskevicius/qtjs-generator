// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qtextlist.h>

#include "meta_qtgui_qtextlist.h"

using namespace cpgf;

namespace meta_qtgui { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QTextList()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QTextList, QTextBlockGroup> _nd = GDefineMetaClass<QTextList, QTextBlockGroup>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QTextList");
        buildMetaClass_QTextList(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QTextListWrapper, QTextList> _nd = GDefineMetaClass<QTextListWrapper, QTextList>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QTextListWrapper");
        buildMetaClass_QTextListWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtgui


