// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qstandarditemmodel.h>

#include "meta_qtgui_qstandarditemmodel.h"

using namespace cpgf;

namespace meta_qtgui { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_Global_qstandarditemmodel()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qstandarditemmodel(0, _d);
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QStandardItem()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QStandardItem> _nd = GDefineMetaClass<QStandardItem>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::declare("QStandardItem");
        buildMetaClass_QStandardItem(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QStandardItemModel()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QStandardItemModel, QAbstractItemModel> _nd = GDefineMetaClass<QStandardItemModel, QAbstractItemModel>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QStandardItemModel");
        buildMetaClass_QStandardItemModel(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QStandardItemModelWrapper, QStandardItemModel> _nd = GDefineMetaClass<QStandardItemModelWrapper, QStandardItemModel>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QStandardItemModelWrapper");
        buildMetaClass_QStandardItemModelWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtgui


