// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QABSTRACTITEMDELEGATE_H
#define CPGF_META_QTWIDGETS_QABSTRACTITEMDELEGATE_H


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
void buildMetaClass_QAbstractItemDelegate(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("paint", &D::ClassType::paint);
    _d.CPGF_MD_TEMPLATE _method("sizeHint", &D::ClassType::sizeHint);
    _d.CPGF_MD_TEMPLATE _method("createEditor", &D::ClassType::createEditor);
    _d.CPGF_MD_TEMPLATE _method("destroyEditor", &D::ClassType::destroyEditor);
    _d.CPGF_MD_TEMPLATE _method("setEditorData", &D::ClassType::setEditorData);
    _d.CPGF_MD_TEMPLATE _method("setModelData", &D::ClassType::setModelData);
    _d.CPGF_MD_TEMPLATE _method("updateEditorGeometry", &D::ClassType::updateEditorGeometry);
    _d.CPGF_MD_TEMPLATE _method("editorEvent", &D::ClassType::editorEvent);
    _d.CPGF_MD_TEMPLATE _method("helpEvent", &D::ClassType::helpEvent);
    _d.CPGF_MD_TEMPLATE _method("paintingRoles", &D::ClassType::paintingRoles);
    _d.CPGF_MD_TEMPLATE _method("commitData", &D::ClassType::commitData);
    _d.CPGF_MD_TEMPLATE _method("closeEditor", &D::ClassType::closeEditor)
        ._default(copyVariantFromCopyable(QAbstractItemDelegate::NoHint))
    ;
    _d.CPGF_MD_TEMPLATE _method("sizeHintChanged", &D::ClassType::sizeHintChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("elidedText", &D::ClassType::elidedText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<3> >());
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::EndEditHint>("EndEditHint")
        ._element("NoHint", D::ClassType::NoHint)
        ._element("EditNextItem", D::ClassType::EditNextItem)
        ._element("EditPreviousItem", D::ClassType::EditPreviousItem)
        ._element("SubmitModelCache", D::ClassType::SubmitModelCache)
        ._element("RevertModelCache", D::ClassType::RevertModelCache)
    ;
}


class QAbstractItemDelegateWrapper : public QAbstractItemDelegate, public cpgf::GScriptWrapper {
public:
    
    QAbstractItemDelegateWrapper(QObject * parent = 0)
        : QAbstractItemDelegate(parent) {}
    
    QVector< int > paintingRoles() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintingRoles"));
        if(func)
        {
            return cpgf::fromVariant<QVector< int > >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAbstractItemDelegate::paintingRoles();
    }
    QVector< int > super_paintingRoles() const
    {
        return QAbstractItemDelegate::paintingRoles();
    }
    
    QSize sizeHint(const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this, option, index).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QSize super_sizeHint(const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setEditorData(QWidget * editor, const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setEditorData"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, editor, index);
            return;
        }
        QAbstractItemDelegate::setEditorData(editor, index);
    }
    void super_setEditorData(QWidget * editor, const QModelIndex & index) const
    {
        QAbstractItemDelegate::setEditorData(editor, index);
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
    
    bool helpEvent(QHelpEvent * event, QAbstractItemView * view, const QStyleOptionViewItem & option, const QModelIndex & index)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("helpEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event, view, option, index).getValue());
        }
        return QAbstractItemDelegate::helpEvent(event, view, option, index);
    }
    bool super_helpEvent(QHelpEvent * event, QAbstractItemView * view, const QStyleOptionViewItem & option, const QModelIndex & index)
    {
        return QAbstractItemDelegate::helpEvent(event, view, option, index);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    void setModelData(QWidget * editor, QAbstractItemModel * model, const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setModelData"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, editor, model, index);
            return;
        }
        QAbstractItemDelegate::setModelData(editor, model, index);
    }
    void super_setModelData(QWidget * editor, QAbstractItemModel * model, const QModelIndex & index) const
    {
        QAbstractItemDelegate::setModelData(editor, model, index);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void updateEditorGeometry(QWidget * editor, const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updateEditorGeometry"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, editor, option, index);
            return;
        }
        QAbstractItemDelegate::updateEditorGeometry(editor, option, index);
    }
    void super_updateEditorGeometry(QWidget * editor, const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        QAbstractItemDelegate::updateEditorGeometry(editor, option, index);
    }
    
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
    
    QWidget * createEditor(QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createEditor"));
        if(func)
        {
            return cpgf::fromVariant<QWidget * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, parent, option, index).getValue());
        }
        return QAbstractItemDelegate::createEditor(parent, option, index);
    }
    QWidget * super_createEditor(QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        return QAbstractItemDelegate::createEditor(parent, option, index);
    }
    
    bool editorEvent(QEvent * event, QAbstractItemModel * model, const QStyleOptionViewItem & option, const QModelIndex & index)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("editorEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event, model, option, index).getValue());
        }
        return QAbstractItemDelegate::editorEvent(event, model, option, index);
    }
    bool super_editorEvent(QEvent * event, QAbstractItemModel * model, const QStyleOptionViewItem & option, const QModelIndex & index)
    {
        return QAbstractItemDelegate::editorEvent(event, model, option, index);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QAbstractItemDelegate::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QAbstractItemDelegate::qt_metacast(__arg0);
    }
    
    void paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paint"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, option, index);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        throw std::runtime_error("Abstract method");
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
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void destroyEditor(QWidget * editor, const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("destroyEditor"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, editor, index);
            return;
        }
        QAbstractItemDelegate::destroyEditor(editor, index);
    }
    void super_destroyEditor(QWidget * editor, const QModelIndex & index) const
    {
        QAbstractItemDelegate::destroyEditor(editor, index);
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
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAbstractItemDelegate::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QAbstractItemDelegate::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QAbstractItemDelegate::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QAbstractItemDelegate::qt_metacall(__arg0, __arg1, __arg2);
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
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paintingRoles", (QVector< int > (D::ClassType::*) () const)&D::ClassType::super_paintingRoles);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSize (D::ClassType::*) (const QStyleOptionViewItem &, const QModelIndex &) const)&D::ClassType::super_sizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_setEditorData", (void (D::ClassType::*) (QWidget *, const QModelIndex &) const)&D::ClassType::super_setEditorData);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_helpEvent", (bool (D::ClassType::*) (QHelpEvent *, QAbstractItemView *, const QStyleOptionViewItem &, const QModelIndex &))&D::ClassType::super_helpEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setModelData", (void (D::ClassType::*) (QWidget *, QAbstractItemModel *, const QModelIndex &) const)&D::ClassType::super_setModelData);
        _d.CPGF_MD_TEMPLATE _method("super_updateEditorGeometry", (void (D::ClassType::*) (QWidget *, const QStyleOptionViewItem &, const QModelIndex &) const)&D::ClassType::super_updateEditorGeometry);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_createEditor", (QWidget * (D::ClassType::*) (QWidget *, const QStyleOptionViewItem &, const QModelIndex &) const)&D::ClassType::super_createEditor);
        _d.CPGF_MD_TEMPLATE _method("super_editorEvent", (bool (D::ClassType::*) (QEvent *, QAbstractItemModel *, const QStyleOptionViewItem &, const QModelIndex &))&D::ClassType::super_editorEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_paint", (void (D::ClassType::*) (QPainter *, const QStyleOptionViewItem &, const QModelIndex &) const)&D::ClassType::super_paint);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_destroyEditor", (void (D::ClassType::*) (QWidget *, const QModelIndex &) const)&D::ClassType::super_destroyEditor);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
    }
};


template <typename D>
void buildMetaClass_QAbstractItemDelegateWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    
    QAbstractItemDelegateWrapper::cpgf__register(_d);
    
    buildMetaClass_QAbstractItemDelegate<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
