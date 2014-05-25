// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QITEMSELECTIONMODEL_H
#define CPGF_META_QTCORE_QITEMSELECTIONMODEL_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qitemselectionmodel(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (const QItemSelectionRange &))&qHash, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QItemSelectionRange &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


template <typename D>
void buildMetaClass_QItemSelection(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QModelIndex &, const QModelIndex &)>();
    _d.CPGF_MD_TEMPLATE _method("select", &D::ClassType::select);
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("indexes", &D::ClassType::indexes);
    _d.CPGF_MD_TEMPLATE _method("merge", &D::ClassType::merge);
    _d.CPGF_MD_TEMPLATE _method("split", &D::ClassType::split, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
}


template <typename D>
void buildMetaClass_QItemSelectionModel(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QAbstractItemModel *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QAbstractItemModel *, QObject *)>();
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("currentIndex", &D::ClassType::currentIndex);
    _d.CPGF_MD_TEMPLATE _method("isSelected", &D::ClassType::isSelected);
    _d.CPGF_MD_TEMPLATE _method("isRowSelected", &D::ClassType::isRowSelected);
    _d.CPGF_MD_TEMPLATE _method("isColumnSelected", &D::ClassType::isColumnSelected);
    _d.CPGF_MD_TEMPLATE _method("rowIntersectsSelection", &D::ClassType::rowIntersectsSelection);
    _d.CPGF_MD_TEMPLATE _method("columnIntersectsSelection", &D::ClassType::columnIntersectsSelection);
    _d.CPGF_MD_TEMPLATE _method("hasSelection", &D::ClassType::hasSelection);
    _d.CPGF_MD_TEMPLATE _method("selectedIndexes", &D::ClassType::selectedIndexes);
    _d.CPGF_MD_TEMPLATE _method("selectedRows", &D::ClassType::selectedRows)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("selectedColumns", &D::ClassType::selectedColumns)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("selection", &D::ClassType::selection);
    _d.CPGF_MD_TEMPLATE _method("model", &D::ClassType::model);
    _d.CPGF_MD_TEMPLATE _method("setCurrentIndex", &D::ClassType::setCurrentIndex);
    _d.CPGF_MD_TEMPLATE _method("select", (void (D::ClassType::*) (const QModelIndex &, QItemSelectionModel::SelectionFlags))&D::ClassType::select);
    _d.CPGF_MD_TEMPLATE _method("select", (void (D::ClassType::*) (const QItemSelection &, QItemSelectionModel::SelectionFlags))&D::ClassType::select);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("reset", &D::ClassType::reset);
    _d.CPGF_MD_TEMPLATE _method("clearSelection", &D::ClassType::clearSelection);
    _d.CPGF_MD_TEMPLATE _method("clearCurrentIndex", &D::ClassType::clearCurrentIndex);
    _d.CPGF_MD_TEMPLATE _method("selectionChanged", &D::ClassType::selectionChanged);
    _d.CPGF_MD_TEMPLATE _method("currentChanged", &D::ClassType::currentChanged);
    _d.CPGF_MD_TEMPLATE _method("currentRowChanged", &D::ClassType::currentRowChanged);
    _d.CPGF_MD_TEMPLATE _method("currentColumnChanged", &D::ClassType::currentColumnChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SelectionFlag>("SelectionFlag")
        ._element("NoUpdate", D::ClassType::NoUpdate)
        ._element("Clear", D::ClassType::Clear)
        ._element("Select", D::ClassType::Select)
        ._element("Deselect", D::ClassType::Deselect)
        ._element("Toggle", D::ClassType::Toggle)
        ._element("Current", D::ClassType::Current)
        ._element("Rows", D::ClassType::Rows)
        ._element("Columns", D::ClassType::Columns)
        ._element("SelectCurrent", D::ClassType::SelectCurrent)
        ._element("ToggleCurrent", D::ClassType::ToggleCurrent)
        ._element("ClearAndSelect", D::ClassType::ClearAndSelect)
    ;
    {
        GDefineMetaClass<QFlags<typename QItemSelectionModel::SelectionFlag > > _t_d = GDefineMetaClass<QFlags<typename QItemSelectionModel::SelectionFlag > >::lazyDeclare("SelectionFlags", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QItemSelectionModel::SelectionFlag > >, typename QItemSelectionModel::SelectionFlag >);
        _d._class(_t_d);
    }
}


class QItemSelectionModelWrapper : public QItemSelectionModel, public cpgf::GScriptWrapper {
public:
    
    QItemSelectionModelWrapper(QAbstractItemModel * model)
        : QItemSelectionModel(model) {}
    
    QItemSelectionModelWrapper(QAbstractItemModel * model, QObject * parent)
        : QItemSelectionModel(model, parent) {}
    
    void connectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("connectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, signal);
            return;
        }
        QObject::connectNotify(signal);
    }
    void super_connectNotify(const QMetaMethod & signal)
    {
        QObject::connectNotify(signal);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void childEvent(QChildEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QObject::childEvent(__arg0);
    }
    void super_childEvent(QChildEvent * __arg0)
    {
        QObject::childEvent(__arg0);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    void clear()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("clear"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QItemSelectionModel::clear();
    }
    void super_clear()
    {
        QItemSelectionModel::clear();
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QItemSelectionModel::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QItemSelectionModel::qt_metacast(__arg0);
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1).getValue());
        }
        return QObject::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QObject::eventFilter(__arg0, __arg1);
    }
    
    void clearCurrentIndex()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("clearCurrentIndex"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QItemSelectionModel::clearCurrentIndex();
    }
    void super_clearCurrentIndex()
    {
        QItemSelectionModel::clearCurrentIndex();
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QItemSelectionModel::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QItemSelectionModel::metaObject();
    }
    
    void reset()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("reset"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QItemSelectionModel::reset();
    }
    void super_reset()
    {
        QItemSelectionModel::reset();
    }
    
    void customEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("customEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QObject::customEvent(__arg0);
    }
    void super_customEvent(QEvent * __arg0)
    {
        QObject::customEvent(__arg0);
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QObject::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QObject::event(__arg0);
    }
    
    void emitSelectionChanged(const QItemSelection & newSelection, const QItemSelection & oldSelection)
    {
        QItemSelectionModel::emitSelectionChanged(newSelection, oldSelection);
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QItemSelectionModel::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QItemSelectionModel::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    void timerEvent(QTimerEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QObject::timerEvent(__arg0);
    }
    void super_timerEvent(QTimerEvent * __arg0)
    {
        QObject::timerEvent(__arg0);
    }
    
    void disconnectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("disconnectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, signal);
            return;
        }
        QObject::disconnectNotify(signal);
    }
    void super_disconnectNotify(const QMetaMethod & signal)
    {
        QObject::disconnectNotify(signal);
    }
    
    void select(const QModelIndex & index, QItemSelectionModel::SelectionFlags command)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("select"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, index, command);
            return;
        }
        QItemSelectionModel::select(index, command);
    }
    void super_select(const QModelIndex & index, QItemSelectionModel::SelectionFlags command)
    {
        QItemSelectionModel::select(index, command);
    }
    
    void select(const QItemSelection & selection, QItemSelectionModel::SelectionFlags command)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("select"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, selection, command);
            return;
        }
        QItemSelectionModel::select(selection, command);
    }
    void super_select(const QItemSelection & selection, QItemSelectionModel::SelectionFlags command)
    {
        QItemSelectionModel::select(selection, command);
    }
    
    void setCurrentIndex(const QModelIndex & index, QItemSelectionModel::SelectionFlags command)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCurrentIndex"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, index, command);
            return;
        }
        QItemSelectionModel::setCurrentIndex(index, command);
    }
    void super_setCurrentIndex(const QModelIndex & index, QItemSelectionModel::SelectionFlags command)
    {
        QItemSelectionModel::setCurrentIndex(index, command);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("emitSelectionChanged", (void (D::ClassType::*) (const QItemSelection &, const QItemSelection &))&D::ClassType::emitSelectionChanged);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_clear", (void (D::ClassType::*) ())&D::ClassType::super_clear);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_clearCurrentIndex", (void (D::ClassType::*) ())&D::ClassType::super_clearCurrentIndex);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_reset", (void (D::ClassType::*) ())&D::ClassType::super_reset);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_select", (void (D::ClassType::*) (const QModelIndex &, QItemSelectionModel::SelectionFlags))&D::ClassType::super_select);
        _d.CPGF_MD_TEMPLATE _method("super_select", (void (D::ClassType::*) (const QItemSelection &, QItemSelectionModel::SelectionFlags))&D::ClassType::super_select);
        _d.CPGF_MD_TEMPLATE _method("super_setCurrentIndex", (void (D::ClassType::*) (const QModelIndex &, QItemSelectionModel::SelectionFlags))&D::ClassType::super_setCurrentIndex);
    }
};


template <typename D>
void buildMetaClass_QItemSelectionModelWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QItemSelectionModelWrapper::cpgf__register(_d);
    
    buildMetaClass_QItemSelectionModel<D>(_d);
}


inline bool opErAToRWrapper_QItemSelectionRange__opEqual(const QItemSelectionRange * self, const QItemSelectionRange & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QItemSelectionRange__opNotEqual(const QItemSelectionRange * self, const QItemSelectionRange & other) {
    return (*self) != other;
}
inline bool opErAToRWrapper_QItemSelectionRange__opLess(const QItemSelectionRange * self, const QItemSelectionRange & other) {
    return (*self) < other;
}


template <typename D>
void buildMetaClass_QItemSelectionRange(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QItemSelectionRange &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QModelIndex &, const QModelIndex &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QModelIndex &)>();
    _d.CPGF_MD_TEMPLATE _method("top", &D::ClassType::top);
    _d.CPGF_MD_TEMPLATE _method("left", &D::ClassType::left);
    _d.CPGF_MD_TEMPLATE _method("bottom", &D::ClassType::bottom);
    _d.CPGF_MD_TEMPLATE _method("right", &D::ClassType::right);
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("height", &D::ClassType::height);
    _d.CPGF_MD_TEMPLATE _method("topLeft", &D::ClassType::topLeft, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("bottomRight", &D::ClassType::bottomRight, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("parent", &D::ClassType::parent);
    _d.CPGF_MD_TEMPLATE _method("model", &D::ClassType::model);
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (int, int, const QModelIndex &) const)&D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("intersects", &D::ClassType::intersects, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("intersected", &D::ClassType::intersected, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("indexes", &D::ClassType::indexes);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QItemSelectionRange &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QItemSelectionRange *, const QItemSelectionRange &))&opErAToRWrapper_QItemSelectionRange__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QItemSelectionRange &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QItemSelectionRange *, const QItemSelectionRange &))&opErAToRWrapper_QItemSelectionRange__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QItemSelectionRange &)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QItemSelectionRange *, const QItemSelectionRange &))&opErAToRWrapper_QItemSelectionRange__opLess, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
