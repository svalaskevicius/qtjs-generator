// Auto generated file, don't modify.

#ifndef __META_QTWIDGETS_QGRAPHICSANCHORLAYOUT_H
#define __META_QTWIDGETS_QGRAPHICSANCHORLAYOUT_H


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
void buildMetaClass_QGraphicsAnchor(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("setSpacing", &D::ClassType::setSpacing);
    _d.CPGF_MD_TEMPLATE _method("unsetSpacing", &D::ClassType::unsetSpacing);
    _d.CPGF_MD_TEMPLATE _method("spacing", &D::ClassType::spacing);
    _d.CPGF_MD_TEMPLATE _method("setSizePolicy", &D::ClassType::setSizePolicy);
    _d.CPGF_MD_TEMPLATE _method("sizePolicy", &D::ClassType::sizePolicy);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QGraphicsAnchorWrapper : public QGraphicsAnchor, public cpgf::GScriptWrapper {
public:
    
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
    
    void childEvent(QChildEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::childEvent(__arg0);
    }
    void super_childEvent(QChildEvent * __arg0)
    {
        QObject::childEvent(__arg0);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
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
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2));
        }
        return QGraphicsAnchor::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QGraphicsAnchor::qt_metacall(__arg0, __arg1, __arg2);
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
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
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
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QGraphicsAnchor::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QGraphicsAnchor::qt_metacast(__arg0);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QGraphicsAnchor::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QGraphicsAnchor::metaObject();
    }
};


template <typename D>
void buildMetaClass_QGraphicsAnchorWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    
    _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
    _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
    _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
    _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
    _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
    _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
    _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
    _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
    _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
    _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
    _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
    _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
    _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
    _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
    _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
    _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
    _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
    
    buildMetaClass_QGraphicsAnchor<D>(config, _d);
}


template <typename D>
void buildMetaClass_QGraphicsAnchorLayout(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QGraphicsLayoutItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("addAnchor", &D::ClassType::addAnchor);
    _d.CPGF_MD_TEMPLATE _method("anchor", &D::ClassType::anchor);
    _d.CPGF_MD_TEMPLATE _method("addCornerAnchors", &D::ClassType::addCornerAnchors);
    _d.CPGF_MD_TEMPLATE _method("addAnchors", &D::ClassType::addAnchors)
        ._default(copyVariantFromCopyable(Qt::Horizontal|Qt::Vertical))
    ;
    _d.CPGF_MD_TEMPLATE _method("setHorizontalSpacing", &D::ClassType::setHorizontalSpacing);
    _d.CPGF_MD_TEMPLATE _method("setVerticalSpacing", &D::ClassType::setVerticalSpacing);
    _d.CPGF_MD_TEMPLATE _method("setSpacing", &D::ClassType::setSpacing);
    _d.CPGF_MD_TEMPLATE _method("horizontalSpacing", &D::ClassType::horizontalSpacing);
    _d.CPGF_MD_TEMPLATE _method("verticalSpacing", &D::ClassType::verticalSpacing);
    _d.CPGF_MD_TEMPLATE _method("removeAt", &D::ClassType::removeAt);
    _d.CPGF_MD_TEMPLATE _method("setGeometry", &D::ClassType::setGeometry);
    _d.CPGF_MD_TEMPLATE _method("count", &D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("itemAt", &D::ClassType::itemAt);
    _d.CPGF_MD_TEMPLATE _method("invalidate", &D::ClassType::invalidate);
}


class QGraphicsAnchorLayoutWrapper : public QGraphicsAnchorLayout, public cpgf::GScriptWrapper {
public:
    
    QGraphicsAnchorLayoutWrapper(QGraphicsLayoutItem * parent = 0)
        : QGraphicsAnchorLayout(parent) {}
    
    void invalidate()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("invalidate"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QGraphicsAnchorLayout::invalidate();
    }
    void super_invalidate()
    {
        QGraphicsAnchorLayout::invalidate();
    }
    
    QSizeF sizeHint(Qt::SizeHint which, const QSizeF & constraint = QSizeF()) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSizeF >(cpgf::invokeScriptFunction(func.get(), this, which, constraint));
        }
        return QGraphicsAnchorLayout::sizeHint(which, constraint);
    }
    QSizeF super_sizeHint(Qt::SizeHint which, const QSizeF & constraint = QSizeF()) const
    {
        return QGraphicsAnchorLayout::sizeHint(which, constraint);
    }
    
    void setGraphicsItem(QGraphicsItem * item)
    {
        QGraphicsLayoutItem::setGraphicsItem(item);
    }
    
    void setOwnedByLayout(bool ownedByLayout)
    {
        QGraphicsLayoutItem::setOwnedByLayout(ownedByLayout);
    }
    
    int count() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("count"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QGraphicsAnchorLayout::count();
    }
    int super_count() const
    {
        return QGraphicsAnchorLayout::count();
    }
    
    void updateGeometry()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updateGeometry"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QGraphicsLayout::updateGeometry();
    }
    void super_updateGeometry()
    {
        QGraphicsLayout::updateGeometry();
    }
    
    void widgetEvent(QEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("widgetEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QGraphicsLayout::widgetEvent(e);
    }
    void super_widgetEvent(QEvent * e)
    {
        QGraphicsLayout::widgetEvent(e);
    }
    
    QGraphicsLayoutItem * itemAt(int index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemAt"));
        if(func)
        {
            return cpgf::fromVariant<QGraphicsLayoutItem * >(cpgf::invokeScriptFunction(func.get(), this, index));
        }
        return QGraphicsAnchorLayout::itemAt(index);
    }
    QGraphicsLayoutItem * super_itemAt(int index) const
    {
        return QGraphicsAnchorLayout::itemAt(index);
    }
    
    void removeAt(int index)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("removeAt"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, index);
            return;
        }
        QGraphicsAnchorLayout::removeAt(index);
    }
    void super_removeAt(int index)
    {
        QGraphicsAnchorLayout::removeAt(index);
    }
    
    void addChildLayoutItem(QGraphicsLayoutItem * layoutItem)
    {
        QGraphicsLayout::addChildLayoutItem(layoutItem);
    }
    
    void getContentsMargins(qreal * left, qreal * top, qreal * right, qreal * bottom) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("getContentsMargins"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, left, top, right, bottom);
            return;
        }
        QGraphicsLayout::getContentsMargins(left, top, right, bottom);
    }
    void super_getContentsMargins(qreal * left, qreal * top, qreal * right, qreal * bottom) const
    {
        QGraphicsLayout::getContentsMargins(left, top, right, bottom);
    }
    
    void setGeometry(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setGeometry"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, rect);
            return;
        }
        QGraphicsAnchorLayout::setGeometry(rect);
    }
    void super_setGeometry(const QRectF & rect)
    {
        QGraphicsAnchorLayout::setGeometry(rect);
    }
};


template <typename D>
void buildMetaClass_QGraphicsAnchorLayoutWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    
    _d.CPGF_MD_TEMPLATE _method("sizeHint", (QSizeF (D::ClassType::*) (Qt::SizeHint, const QSizeF &) const)&D::ClassType::sizeHint)
        ._default(copyVariantFromCopyable(QSizeF()))
    ;
    _d.CPGF_MD_TEMPLATE _method("setGraphicsItem", (void (D::ClassType::*) (QGraphicsItem *))&D::ClassType::setGraphicsItem);
    _d.CPGF_MD_TEMPLATE _method("setOwnedByLayout", (void (D::ClassType::*) (bool))&D::ClassType::setOwnedByLayout);
    _d.CPGF_MD_TEMPLATE _method("addChildLayoutItem", (void (D::ClassType::*) (QGraphicsLayoutItem *))&D::ClassType::addChildLayoutItem);
    _d.CPGF_MD_TEMPLATE _method("super_invalidate", (void (D::ClassType::*) ())&D::ClassType::super_invalidate);
    _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSizeF (D::ClassType::*) (Qt::SizeHint, const QSizeF &) const)&D::ClassType::super_sizeHint)
        ._default(copyVariantFromCopyable(QSizeF()))
    ;
    _d.CPGF_MD_TEMPLATE _method("super_count", (int (D::ClassType::*) () const)&D::ClassType::super_count);
    _d.CPGF_MD_TEMPLATE _method("super_updateGeometry", (void (D::ClassType::*) ())&D::ClassType::super_updateGeometry);
    _d.CPGF_MD_TEMPLATE _method("super_widgetEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_widgetEvent);
    _d.CPGF_MD_TEMPLATE _method("super_itemAt", (QGraphicsLayoutItem * (D::ClassType::*) (int) const)&D::ClassType::super_itemAt);
    _d.CPGF_MD_TEMPLATE _method("super_removeAt", (void (D::ClassType::*) (int))&D::ClassType::super_removeAt);
    _d.CPGF_MD_TEMPLATE _method("super_getContentsMargins", (void (D::ClassType::*) (qreal *, qreal *, qreal *, qreal *) const)&D::ClassType::super_getContentsMargins);
    _d.CPGF_MD_TEMPLATE _method("super_setGeometry", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setGeometry);
    
    buildMetaClass_QGraphicsAnchorLayout<D>(config, _d);
}


} // namespace meta_qtwidgets




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
