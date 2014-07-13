// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QITEMDELEGATE_H
#define CPGF_META_QTWIDGETS_QITEMDELEGATE_H


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
void buildMetaClass_QItemDelegate(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("hasClipping", &D::ClassType::hasClipping);
    _d.CPGF_MD_TEMPLATE _method("setClipping", &D::ClassType::setClipping);
    _d.CPGF_MD_TEMPLATE _method("paint", &D::ClassType::paint);
    _d.CPGF_MD_TEMPLATE _method("sizeHint", &D::ClassType::sizeHint);
    _d.CPGF_MD_TEMPLATE _method("createEditor", &D::ClassType::createEditor);
    _d.CPGF_MD_TEMPLATE _method("setEditorData", &D::ClassType::setEditorData);
    _d.CPGF_MD_TEMPLATE _method("setModelData", &D::ClassType::setModelData);
    _d.CPGF_MD_TEMPLATE _method("updateEditorGeometry", &D::ClassType::updateEditorGeometry);
    _d.CPGF_MD_TEMPLATE _method("itemEditorFactory", &D::ClassType::itemEditorFactory);
    _d.CPGF_MD_TEMPLATE _method("setItemEditorFactory", &D::ClassType::setItemEditorFactory);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QItemDelegateWrapper : public QItemDelegate, public cpgf::GScriptWrapper {
public:
    
    QItemDelegateWrapper(QObject * parent = 0)
        : QItemDelegate(parent) {}
    
    QSize sizeHint(const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this, option, index).getValue());
        }
        return QItemDelegate::sizeHint(option, index);
    }
    QSize super_sizeHint(const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        return QItemDelegate::sizeHint(option, index);
    }
    
    QStyleOptionViewItem setOptions(const QModelIndex & index, const QStyleOptionViewItem & option) const
    {
        return QItemDelegate::setOptions(index, option);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    QObject * sender() const
    {
        return QObject::sender();
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
        return QItemDelegate::createEditor(parent, option, index);
    }
    QWidget * super_createEditor(QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        return QItemDelegate::createEditor(parent, option, index);
    }
    
    bool editorEvent(QEvent * event, QAbstractItemModel * model, const QStyleOptionViewItem & option, const QModelIndex & index)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("editorEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event, model, option, index).getValue());
        }
        return QItemDelegate::editorEvent(event, model, option, index);
    }
    bool super_editorEvent(QEvent * event, QAbstractItemModel * model, const QStyleOptionViewItem & option, const QModelIndex & index)
    {
        return QItemDelegate::editorEvent(event, model, option, index);
    }
    
    void paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paint"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, option, index);
            return;
        }
        QItemDelegate::paint(painter, option, index);
    }
    void super_paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        QItemDelegate::paint(painter, option, index);
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
    
    bool eventFilter(QObject * object, QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, object, event).getValue());
        }
        return QItemDelegate::eventFilter(object, event);
    }
    bool super_eventFilter(QObject * object, QEvent * event)
    {
        return QItemDelegate::eventFilter(object, event);
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
    
    void drawFocus(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawFocus"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, option, rect);
            return;
        }
        QItemDelegate::drawFocus(painter, option, rect);
    }
    void super_drawFocus(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect) const
    {
        QItemDelegate::drawFocus(painter, option, rect);
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
    
    void doLayout(const QStyleOptionViewItem & option, QRect * checkRect, QRect * iconRect, QRect * textRect, bool hint) const
    {
        QItemDelegate::doLayout(option, checkRect, iconRect, textRect, hint);
    }
    
    QPixmap decoration(const QStyleOptionViewItem & option, const QVariant & variant) const
    {
        return QItemDelegate::decoration(option, variant);
    }
    
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
    
    void setEditorData(QWidget * editor, const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setEditorData"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, editor, index);
            return;
        }
        QItemDelegate::setEditorData(editor, index);
    }
    void super_setEditorData(QWidget * editor, const QModelIndex & index) const
    {
        QItemDelegate::setEditorData(editor, index);
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
    
    QRect textRectangle(QPainter * painter, const QRect & rect, const QFont & font, const QString & text) const
    {
        return QItemDelegate::textRectangle(painter, rect, font, text);
    }
    
    void setModelData(QWidget * editor, QAbstractItemModel * model, const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setModelData"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, editor, model, index);
            return;
        }
        QItemDelegate::setModelData(editor, model, index);
    }
    void super_setModelData(QWidget * editor, QAbstractItemModel * model, const QModelIndex & index) const
    {
        QItemDelegate::setModelData(editor, model, index);
    }
    
    void updateEditorGeometry(QWidget * editor, const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updateEditorGeometry"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, editor, option, index);
            return;
        }
        QItemDelegate::updateEditorGeometry(editor, option, index);
    }
    void super_updateEditorGeometry(QWidget * editor, const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        QItemDelegate::updateEditorGeometry(editor, option, index);
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
    
    void drawDisplay(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect, const QString & text) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawDisplay"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, option, rect, text);
            return;
        }
        QItemDelegate::drawDisplay(painter, option, rect, text);
    }
    void super_drawDisplay(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect, const QString & text) const
    {
        QItemDelegate::drawDisplay(painter, option, rect, text);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QItemDelegate::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QItemDelegate::qt_metacast(__arg0);
    }
    
    QRect doCheck(const QStyleOptionViewItem & option, const QRect & bounding, const QVariant & variant) const
    {
        return QItemDelegate::doCheck(option, bounding, variant);
    }
    
    void drawDecoration(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect, const QPixmap & pixmap) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawDecoration"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, option, rect, pixmap);
            return;
        }
        QItemDelegate::drawDecoration(painter, option, rect, pixmap);
    }
    void super_drawDecoration(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect, const QPixmap & pixmap) const
    {
        QItemDelegate::drawDecoration(painter, option, rect, pixmap);
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
    
    void drawBackground(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
    {
        QItemDelegate::drawBackground(painter, option, index);
    }
    
    QRect rect(const QStyleOptionViewItem & option, const QModelIndex & index, int role) const
    {
        return QItemDelegate::rect(option, index, role);
    }
    
    void drawCheck(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect, Qt::CheckState state) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawCheck"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, option, rect, state);
            return;
        }
        QItemDelegate::drawCheck(painter, option, rect, state);
    }
    void super_drawCheck(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect, Qt::CheckState state) const
    {
        QItemDelegate::drawCheck(painter, option, rect, state);
    }
    
    QPixmap * selected(const QPixmap & pixmap, const QPalette & palette, bool enabled) const
    {
        return QItemDelegate::selected(pixmap, palette, enabled);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QItemDelegate::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QItemDelegate::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QItemDelegate::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QItemDelegate::qt_metacall(__arg0, __arg1, __arg2);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("setOptions", (QStyleOptionViewItem (D::ClassType::*) (const QModelIndex &, const QStyleOptionViewItem &) const)&D::ClassType::setOptions);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("editorEvent", (bool (D::ClassType::*) (QEvent *, QAbstractItemModel *, const QStyleOptionViewItem &, const QModelIndex &))&D::ClassType::editorEvent);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::eventFilter);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("drawFocus", (void (D::ClassType::*) (QPainter *, const QStyleOptionViewItem &, const QRect &) const)&D::ClassType::drawFocus);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("doLayout", (void (D::ClassType::*) (const QStyleOptionViewItem &, QRect *, QRect *, QRect *, bool) const)&D::ClassType::doLayout);
        _d.CPGF_MD_TEMPLATE _method("decoration", (QPixmap (D::ClassType::*) (const QStyleOptionViewItem &, const QVariant &) const)&D::ClassType::decoration, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("textRectangle", (QRect (D::ClassType::*) (QPainter *, const QRect &, const QFont &, const QString &) const)&D::ClassType::textRectangle, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3> >());
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("drawDisplay", (void (D::ClassType::*) (QPainter *, const QStyleOptionViewItem &, const QRect &, const QString &) const)&D::ClassType::drawDisplay, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<3> >());
        _d.CPGF_MD_TEMPLATE _method("doCheck", (QRect (D::ClassType::*) (const QStyleOptionViewItem &, const QRect &, const QVariant &) const)&D::ClassType::doCheck, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
        _d.CPGF_MD_TEMPLATE _method("drawDecoration", (void (D::ClassType::*) (QPainter *, const QStyleOptionViewItem &, const QRect &, const QPixmap &) const)&D::ClassType::drawDecoration);
        _d.CPGF_MD_TEMPLATE _method("drawBackground", (void (D::ClassType::*) (QPainter *, const QStyleOptionViewItem &, const QModelIndex &) const)&D::ClassType::drawBackground);
        _d.CPGF_MD_TEMPLATE _method("rect", (QRect (D::ClassType::*) (const QStyleOptionViewItem &, const QModelIndex &, int) const)&D::ClassType::rect);
        _d.CPGF_MD_TEMPLATE _method("drawCheck", (void (D::ClassType::*) (QPainter *, const QStyleOptionViewItem &, const QRect &, Qt::CheckState) const)&D::ClassType::drawCheck);
        _d.CPGF_MD_TEMPLATE _method("selected", (QPixmap * (D::ClassType::*) (const QPixmap &, const QPalette &, bool) const)&D::ClassType::selected, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSize (D::ClassType::*) (const QStyleOptionViewItem &, const QModelIndex &) const)&D::ClassType::super_sizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_createEditor", (QWidget * (D::ClassType::*) (QWidget *, const QStyleOptionViewItem &, const QModelIndex &) const)&D::ClassType::super_createEditor);
        _d.CPGF_MD_TEMPLATE _method("super_editorEvent", (bool (D::ClassType::*) (QEvent *, QAbstractItemModel *, const QStyleOptionViewItem &, const QModelIndex &))&D::ClassType::super_editorEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paint", (void (D::ClassType::*) (QPainter *, const QStyleOptionViewItem &, const QModelIndex &) const)&D::ClassType::super_paint);
        _d.CPGF_MD_TEMPLATE _method("super_destroyEditor", (void (D::ClassType::*) (QWidget *, const QModelIndex &) const)&D::ClassType::super_destroyEditor);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_drawFocus", (void (D::ClassType::*) (QPainter *, const QStyleOptionViewItem &, const QRect &) const)&D::ClassType::super_drawFocus);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paintingRoles", (QVector< int > (D::ClassType::*) () const)&D::ClassType::super_paintingRoles);
        _d.CPGF_MD_TEMPLATE _method("super_setEditorData", (void (D::ClassType::*) (QWidget *, const QModelIndex &) const)&D::ClassType::super_setEditorData);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_helpEvent", (bool (D::ClassType::*) (QHelpEvent *, QAbstractItemView *, const QStyleOptionViewItem &, const QModelIndex &))&D::ClassType::super_helpEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setModelData", (void (D::ClassType::*) (QWidget *, QAbstractItemModel *, const QModelIndex &) const)&D::ClassType::super_setModelData);
        _d.CPGF_MD_TEMPLATE _method("super_updateEditorGeometry", (void (D::ClassType::*) (QWidget *, const QStyleOptionViewItem &, const QModelIndex &) const)&D::ClassType::super_updateEditorGeometry);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_drawDisplay", (void (D::ClassType::*) (QPainter *, const QStyleOptionViewItem &, const QRect &, const QString &) const)&D::ClassType::super_drawDisplay, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<3> >());
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_drawDecoration", (void (D::ClassType::*) (QPainter *, const QStyleOptionViewItem &, const QRect &, const QPixmap &) const)&D::ClassType::super_drawDecoration);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_drawCheck", (void (D::ClassType::*) (QPainter *, const QStyleOptionViewItem &, const QRect &, Qt::CheckState) const)&D::ClassType::super_drawCheck);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
    }
};


template <typename D>
void buildMetaClass_QItemDelegateWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QItemDelegateWrapper::cpgf__register(_d);
    
    buildMetaClass_QItemDelegate<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
