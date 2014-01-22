// Auto generated file, don't modify.

#ifndef __META_QTWIDGETS_QGRIDLAYOUT_H
#define __META_QTWIDGETS_QGRIDLAYOUT_H


#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace meta_qtwidgets { 


template <typename D>
void buildMetaClass_QGridLayout(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("sizeHint", &D::ClassType::sizeHint);
    _d.CPGF_MD_TEMPLATE _method("minimumSize", &D::ClassType::minimumSize);
    _d.CPGF_MD_TEMPLATE _method("maximumSize", &D::ClassType::maximumSize);
    _d.CPGF_MD_TEMPLATE _method("setHorizontalSpacing", &D::ClassType::setHorizontalSpacing);
    _d.CPGF_MD_TEMPLATE _method("horizontalSpacing", &D::ClassType::horizontalSpacing);
    _d.CPGF_MD_TEMPLATE _method("setVerticalSpacing", &D::ClassType::setVerticalSpacing);
    _d.CPGF_MD_TEMPLATE _method("verticalSpacing", &D::ClassType::verticalSpacing);
    _d.CPGF_MD_TEMPLATE _method("setSpacing", &D::ClassType::setSpacing);
    _d.CPGF_MD_TEMPLATE _method("spacing", &D::ClassType::spacing);
    _d.CPGF_MD_TEMPLATE _method("setRowStretch", &D::ClassType::setRowStretch);
    _d.CPGF_MD_TEMPLATE _method("setColumnStretch", &D::ClassType::setColumnStretch);
    _d.CPGF_MD_TEMPLATE _method("rowStretch", &D::ClassType::rowStretch);
    _d.CPGF_MD_TEMPLATE _method("columnStretch", &D::ClassType::columnStretch);
    _d.CPGF_MD_TEMPLATE _method("setRowMinimumHeight", &D::ClassType::setRowMinimumHeight);
    _d.CPGF_MD_TEMPLATE _method("setColumnMinimumWidth", &D::ClassType::setColumnMinimumWidth);
    _d.CPGF_MD_TEMPLATE _method("rowMinimumHeight", &D::ClassType::rowMinimumHeight);
    _d.CPGF_MD_TEMPLATE _method("columnMinimumWidth", &D::ClassType::columnMinimumWidth);
    _d.CPGF_MD_TEMPLATE _method("columnCount", &D::ClassType::columnCount);
    _d.CPGF_MD_TEMPLATE _method("rowCount", &D::ClassType::rowCount);
    _d.CPGF_MD_TEMPLATE _method("cellRect", &D::ClassType::cellRect);
    _d.CPGF_MD_TEMPLATE _method("hasHeightForWidth", &D::ClassType::hasHeightForWidth);
    _d.CPGF_MD_TEMPLATE _method("heightForWidth", &D::ClassType::heightForWidth);
    _d.CPGF_MD_TEMPLATE _method("minimumHeightForWidth", &D::ClassType::minimumHeightForWidth);
    _d.CPGF_MD_TEMPLATE _method("expandingDirections", &D::ClassType::expandingDirections);
    _d.CPGF_MD_TEMPLATE _method("invalidate", &D::ClassType::invalidate);
    _d.CPGF_MD_TEMPLATE _method("addWidget", (void (D::ClassType::*) (QWidget *))&D::ClassType::addWidget);
    _d.CPGF_MD_TEMPLATE _method("addWidget", (void (D::ClassType::*) (QWidget *, int, int, Qt::Alignment))&D::ClassType::addWidget)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("addWidget", (void (D::ClassType::*) (QWidget *, int, int, int, int, Qt::Alignment))&D::ClassType::addWidget)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("addLayout", (void (D::ClassType::*) (QLayout *, int, int, Qt::Alignment))&D::ClassType::addLayout)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("addLayout", (void (D::ClassType::*) (QLayout *, int, int, int, int, Qt::Alignment))&D::ClassType::addLayout)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setOriginCorner", &D::ClassType::setOriginCorner);
    _d.CPGF_MD_TEMPLATE _method("originCorner", &D::ClassType::originCorner);
    _d.CPGF_MD_TEMPLATE _method("itemAt", &D::ClassType::itemAt);
    _d.CPGF_MD_TEMPLATE _method("itemAtPosition", &D::ClassType::itemAtPosition);
    _d.CPGF_MD_TEMPLATE _method("takeAt", &D::ClassType::takeAt);
    _d.CPGF_MD_TEMPLATE _method("count", &D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("setGeometry", &D::ClassType::setGeometry);
    _d.CPGF_MD_TEMPLATE _method("addItem", (void (D::ClassType::*) (QLayoutItem *, int, int, int, int, Qt::Alignment))&D::ClassType::addItem)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(1))
        ._default(copyVariantFromCopyable(1))
    ;
    _d.CPGF_MD_TEMPLATE _method("setDefaultPositioning", &D::ClassType::setDefaultPositioning);
    _d.CPGF_MD_TEMPLATE _method("getItemPosition", &D::ClassType::getItemPosition);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QGridLayoutWrapper : public QGridLayout, public cpgf::GScriptWrapper {
public:
    
    QGridLayoutWrapper(QWidget * parent)
        : QGridLayout(parent) {}
    
    QGridLayoutWrapper()
        : QGridLayout() {}
    
    void connectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("connectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::connectNotify(signal);
    }
    void super_connectNotify(const QMetaMethod & signal)
    {
        QObject::connectNotify(signal);
    }
    
    void childEvent(QChildEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QLayout::childEvent(e);
    }
    void super_childEvent(QChildEvent * e)
    {
        QLayout::childEvent(e);
    }
    
    QSize sizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QGridLayout::sizeHint();
    }
    QSize super_sizeHint() const
    {
        return QGridLayout::sizeHint();
    }
    
    void widgetEvent(QEvent * __arg0)
    {
        QLayout::widgetEvent(__arg0);
    }
    
    QRect geometry() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("geometry"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayout::geometry();
    }
    QRect super_geometry() const
    {
        return QLayout::geometry();
    }
    
    QSize maximumSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("maximumSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QGridLayout::maximumSize();
    }
    QSize super_maximumSize() const
    {
        return QGridLayout::maximumSize();
    }
    
    QRect alignmentRect(const QRect & __arg0) const
    {
        return QLayout::alignmentRect(__arg0);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QGridLayout::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QGridLayout::qt_metacast(__arg0);
    }
    
    int minimumHeightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QGridLayout::minimumHeightForWidth(__arg0);
    }
    int super_minimumHeightForWidth(int __arg0) const
    {
        return QGridLayout::minimumHeightForWidth(__arg0);
    }
    
    QSpacerItem * spacerItem()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("spacerItem"));
        if(func)
        {
            return cpgf::fromVariant<QSpacerItem * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayoutItem::spacerItem();
    }
    QSpacerItem * super_spacerItem()
    {
        return QLayoutItem::spacerItem();
    }
    
    bool isEmpty() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isEmpty"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayout::isEmpty();
    }
    bool super_isEmpty() const
    {
        return QLayout::isEmpty();
    }
    
    int count() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("count"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QGridLayout::count();
    }
    int super_count() const
    {
        return QGridLayout::count();
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QObject::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QObject::event(__arg0);
    }
    
    void timerEvent(QTimerEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::timerEvent(__arg0);
    }
    void super_timerEvent(QTimerEvent * __arg0)
    {
        QObject::timerEvent(__arg0);
    }
    
    QWidget * widget()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("widget"));
        if(func)
        {
            return cpgf::fromVariant<QWidget * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayoutItem::widget();
    }
    QWidget * super_widget()
    {
        return QLayoutItem::widget();
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void setGeometry(const QRect & __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setGeometry"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QGridLayout::setGeometry(__arg0);
    }
    void super_setGeometry(const QRect & __arg0)
    {
        QGridLayout::setGeometry(__arg0);
    }
    
    void invalidate()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("invalidate"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QGridLayout::invalidate();
    }
    void super_invalidate()
    {
        QGridLayout::invalidate();
    }
    
    bool adoptLayout(QLayout * layout)
    {
        return QLayout::adoptLayout(layout);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    bool hasHeightForWidth() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QGridLayout::hasHeightForWidth();
    }
    bool super_hasHeightForWidth() const
    {
        return QGridLayout::hasHeightForWidth();
    }
    
    void addChildWidget(QWidget * w)
    {
        QLayout::addChildWidget(w);
    }
    
    QLayoutItem * takeAt(int index)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("takeAt"));
        if(func)
        {
            return cpgf::fromVariant<QLayoutItem * >(cpgf::invokeScriptFunction(func.get(), this, index));
        }
        return QGridLayout::takeAt(index);
    }
    QLayoutItem * super_takeAt(int index)
    {
        return QGridLayout::takeAt(index);
    }
    
    int indexOf(QWidget * __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOf"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QLayout::indexOf(__arg0);
    }
    int super_indexOf(QWidget * __arg0) const
    {
        return QLayout::indexOf(__arg0);
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1));
        }
        return QObject::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QObject::eventFilter(__arg0, __arg1);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QGridLayout::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QGridLayout::metaObject();
    }
    
    QSize minimumSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QGridLayout::minimumSize();
    }
    QSize super_minimumSize() const
    {
        return QGridLayout::minimumSize();
    }
    
    Qt::Orientations expandingDirections() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("expandingDirections"));
        if(func)
        {
            return cpgf::fromVariant<Qt::Orientations >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QGridLayout::expandingDirections();
    }
    Qt::Orientations super_expandingDirections() const
    {
        return QGridLayout::expandingDirections();
    }
    
    QSizePolicy::ControlTypes controlTypes() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("controlTypes"));
        if(func)
        {
            return cpgf::fromVariant<QSizePolicy::ControlTypes >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayout::controlTypes();
    }
    QSizePolicy::ControlTypes super_controlTypes() const
    {
        return QLayout::controlTypes();
    }
    
    void customEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("customEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::customEvent(__arg0);
    }
    void super_customEvent(QEvent * __arg0)
    {
        QObject::customEvent(__arg0);
    }
    
    void addItem(QLayoutItem * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("addItem"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QGridLayout::addItem(__arg0);
    }
    void super_addItem(QLayoutItem * __arg0)
    {
        QGridLayout::addItem(__arg0);
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2));
        }
        return QGridLayout::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QGridLayout::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    QLayout * layout()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("layout"));
        if(func)
        {
            return cpgf::fromVariant<QLayout * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayout::layout();
    }
    QLayout * super_layout()
    {
        return QLayout::layout();
    }
    
    void addChildLayout(QLayout * l)
    {
        QLayout::addChildLayout(l);
    }
    
    QLayoutItem * itemAt(int index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemAt"));
        if(func)
        {
            return cpgf::fromVariant<QLayoutItem * >(cpgf::invokeScriptFunction(func.get(), this, index));
        }
        return QGridLayout::itemAt(index);
    }
    QLayoutItem * super_itemAt(int index) const
    {
        return QGridLayout::itemAt(index);
    }
    
    void disconnectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("disconnectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::disconnectNotify(signal);
    }
    void super_disconnectNotify(const QMetaMethod & signal)
    {
        QObject::disconnectNotify(signal);
    }
    
    int heightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("heightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QGridLayout::heightForWidth(__arg0);
    }
    int super_heightForWidth(int __arg0) const
    {
        return QGridLayout::heightForWidth(__arg0);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("widgetEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::widgetEvent);
        _d.CPGF_MD_TEMPLATE _method("alignmentRect", (QRect (D::ClassType::*) (const QRect &) const)&D::ClassType::alignmentRect);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("adoptLayout", (bool (D::ClassType::*) (QLayout *))&D::ClassType::adoptLayout);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("addChildWidget", (void (D::ClassType::*) (QWidget *))&D::ClassType::addChildWidget);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("addItem", (void (D::ClassType::*) (QLayoutItem *))&D::ClassType::addItem);
        _d.CPGF_MD_TEMPLATE _method("addChildLayout", (void (D::ClassType::*) (QLayout *))&D::ClassType::addChildLayout);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_sizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_geometry", (QRect (D::ClassType::*) () const)&D::ClassType::super_geometry);
        _d.CPGF_MD_TEMPLATE _method("super_maximumSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_maximumSize);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_minimumHeightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_minimumHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_spacerItem", (QSpacerItem * (D::ClassType::*) ())&D::ClassType::super_spacerItem);
        _d.CPGF_MD_TEMPLATE _method("super_isEmpty", (bool (D::ClassType::*) () const)&D::ClassType::super_isEmpty);
        _d.CPGF_MD_TEMPLATE _method("super_count", (int (D::ClassType::*) () const)&D::ClassType::super_count);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_widget", (QWidget * (D::ClassType::*) ())&D::ClassType::super_widget);
        _d.CPGF_MD_TEMPLATE _method("super_setGeometry", (void (D::ClassType::*) (const QRect &))&D::ClassType::super_setGeometry);
        _d.CPGF_MD_TEMPLATE _method("super_invalidate", (void (D::ClassType::*) ())&D::ClassType::super_invalidate);
        _d.CPGF_MD_TEMPLATE _method("super_hasHeightForWidth", (bool (D::ClassType::*) () const)&D::ClassType::super_hasHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_takeAt", (QLayoutItem * (D::ClassType::*) (int))&D::ClassType::super_takeAt);
        _d.CPGF_MD_TEMPLATE _method("super_indexOf", (int (D::ClassType::*) (QWidget *) const)&D::ClassType::super_indexOf);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_minimumSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_minimumSize);
        _d.CPGF_MD_TEMPLATE _method("super_expandingDirections", (Qt::Orientations (D::ClassType::*) () const)&D::ClassType::super_expandingDirections);
        _d.CPGF_MD_TEMPLATE _method("super_controlTypes", (QSizePolicy::ControlTypes (D::ClassType::*) () const)&D::ClassType::super_controlTypes);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_addItem", (void (D::ClassType::*) (QLayoutItem *))&D::ClassType::super_addItem);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_layout", (QLayout * (D::ClassType::*) ())&D::ClassType::super_layout);
        _d.CPGF_MD_TEMPLATE _method("super_itemAt", (QLayoutItem * (D::ClassType::*) (int) const)&D::ClassType::super_itemAt);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_heightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_heightForWidth);
    }
};


template <typename D>
void buildMetaClass_QGridLayoutWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGridLayoutWrapper::cpgf__register(_d);
    
    buildMetaClass_QGridLayout<D>(_d);
}


} // namespace meta_qtwidgets




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
