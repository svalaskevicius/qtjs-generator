// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QGRAPHICSLINEARLAYOUT_H
#define CPGF_META_QTWIDGETS_QGRAPHICSLINEARLAYOUT_H


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
void buildMetaClass_QGraphicsLinearLayout(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QGraphicsLayoutItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (Qt::Orientation, QGraphicsLayoutItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setOrientation", &D::ClassType::setOrientation);
    _d.CPGF_MD_TEMPLATE _method("orientation", &D::ClassType::orientation);
    _d.CPGF_MD_TEMPLATE _method("addItem", &D::ClassType::addItem);
    _d.CPGF_MD_TEMPLATE _method("addStretch", &D::ClassType::addStretch)
        ._default(copyVariantFromCopyable(1))
    ;
    _d.CPGF_MD_TEMPLATE _method("insertItem", &D::ClassType::insertItem);
    _d.CPGF_MD_TEMPLATE _method("insertStretch", &D::ClassType::insertStretch)
        ._default(copyVariantFromCopyable(1))
    ;
    _d.CPGF_MD_TEMPLATE _method("removeItem", &D::ClassType::removeItem);
    _d.CPGF_MD_TEMPLATE _method("removeAt", &D::ClassType::removeAt);
    _d.CPGF_MD_TEMPLATE _method("setSpacing", &D::ClassType::setSpacing);
    _d.CPGF_MD_TEMPLATE _method("spacing", &D::ClassType::spacing);
    _d.CPGF_MD_TEMPLATE _method("setItemSpacing", &D::ClassType::setItemSpacing);
    _d.CPGF_MD_TEMPLATE _method("itemSpacing", &D::ClassType::itemSpacing);
    _d.CPGF_MD_TEMPLATE _method("setStretchFactor", &D::ClassType::setStretchFactor);
    _d.CPGF_MD_TEMPLATE _method("stretchFactor", &D::ClassType::stretchFactor);
    _d.CPGF_MD_TEMPLATE _method("setAlignment", &D::ClassType::setAlignment);
    _d.CPGF_MD_TEMPLATE _method("alignment", &D::ClassType::alignment);
    _d.CPGF_MD_TEMPLATE _method("setGeometry", &D::ClassType::setGeometry, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("count", &D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("itemAt", &D::ClassType::itemAt);
    _d.CPGF_MD_TEMPLATE _method("invalidate", &D::ClassType::invalidate);
    _d.CPGF_MD_TEMPLATE _method("sizeHint", &D::ClassType::sizeHint, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QSizeF()))
    ;
    _d.CPGF_MD_TEMPLATE _method("dump", &D::ClassType::dump)
        ._default(copyVariantFromCopyable(0))
    ;
}


class QGraphicsLinearLayoutWrapper : public QGraphicsLinearLayout, public cpgf::GScriptWrapper {
public:
    
    QGraphicsLinearLayoutWrapper(QGraphicsLayoutItem * parent = 0)
        : QGraphicsLinearLayout(parent) {}
    
    QGraphicsLinearLayoutWrapper(Qt::Orientation orientation, QGraphicsLayoutItem * parent = 0)
        : QGraphicsLinearLayout(orientation, parent) {}
    
    void getContentsMargins(qreal * left, qreal * top, qreal * right, qreal * bottom) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("getContentsMargins"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, left, top, right, bottom);
            return;
        }
        QGraphicsLayout::getContentsMargins(left, top, right, bottom);
    }
    void super_getContentsMargins(qreal * left, qreal * top, qreal * right, qreal * bottom) const
    {
        QGraphicsLayout::getContentsMargins(left, top, right, bottom);
    }
    
    void setGraphicsItem(QGraphicsItem * item)
    {
        QGraphicsLayoutItem::setGraphicsItem(item);
    }
    
    void addChildLayoutItem(QGraphicsLayoutItem * layoutItem)
    {
        QGraphicsLayout::addChildLayoutItem(layoutItem);
    }
    
    void setGeometry(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setGeometry"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rect);
            return;
        }
        QGraphicsLinearLayout::setGeometry(rect);
    }
    void super_setGeometry(const QRectF & rect)
    {
        QGraphicsLinearLayout::setGeometry(rect);
    }
    
    void removeAt(int index)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("removeAt"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, index);
            return;
        }
        QGraphicsLinearLayout::removeAt(index);
    }
    void super_removeAt(int index)
    {
        QGraphicsLinearLayout::removeAt(index);
    }
    
    void widgetEvent(QEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("widgetEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, e);
            return;
        }
        QGraphicsLayout::widgetEvent(e);
    }
    void super_widgetEvent(QEvent * e)
    {
        QGraphicsLayout::widgetEvent(e);
    }
    
    int count() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("count"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QGraphicsLinearLayout::count();
    }
    int super_count() const
    {
        return QGraphicsLinearLayout::count();
    }
    
    void updateGeometry()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updateGeometry"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QGraphicsLayout::updateGeometry();
    }
    void super_updateGeometry()
    {
        QGraphicsLayout::updateGeometry();
    }
    
    QSizeF sizeHint(Qt::SizeHint which, const QSizeF & constraint = QSizeF()) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSizeF >(cpgf::invokeScriptFunctionOnObject(func.get(), this, which, constraint).getValue());
        }
        return QGraphicsLinearLayout::sizeHint(which, constraint);
    }
    QSizeF super_sizeHint(Qt::SizeHint which, const QSizeF & constraint = QSizeF()) const
    {
        return QGraphicsLinearLayout::sizeHint(which, constraint);
    }
    
    void invalidate()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("invalidate"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QGraphicsLinearLayout::invalidate();
    }
    void super_invalidate()
    {
        QGraphicsLinearLayout::invalidate();
    }
    
    QGraphicsLayoutItem * itemAt(int index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemAt"));
        if(func)
        {
            return cpgf::fromVariant<QGraphicsLayoutItem * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QGraphicsLinearLayout::itemAt(index);
    }
    QGraphicsLayoutItem * super_itemAt(int index) const
    {
        return QGraphicsLinearLayout::itemAt(index);
    }
    
    void setOwnedByLayout(bool ownedByLayout)
    {
        QGraphicsLayoutItem::setOwnedByLayout(ownedByLayout);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("setGraphicsItem", (void (D::ClassType::*) (QGraphicsItem *))&D::ClassType::setGraphicsItem);
        _d.CPGF_MD_TEMPLATE _method("addChildLayoutItem", (void (D::ClassType::*) (QGraphicsLayoutItem *))&D::ClassType::addChildLayoutItem);
        _d.CPGF_MD_TEMPLATE _method("setOwnedByLayout", (void (D::ClassType::*) (bool))&D::ClassType::setOwnedByLayout);
        _d.CPGF_MD_TEMPLATE _method("super_getContentsMargins", (void (D::ClassType::*) (qreal *, qreal *, qreal *, qreal *) const)&D::ClassType::super_getContentsMargins);
        _d.CPGF_MD_TEMPLATE _method("super_setGeometry", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setGeometry, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_removeAt", (void (D::ClassType::*) (int))&D::ClassType::super_removeAt);
        _d.CPGF_MD_TEMPLATE _method("super_widgetEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_widgetEvent);
        _d.CPGF_MD_TEMPLATE _method("super_count", (int (D::ClassType::*) () const)&D::ClassType::super_count);
        _d.CPGF_MD_TEMPLATE _method("super_updateGeometry", (void (D::ClassType::*) ())&D::ClassType::super_updateGeometry);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSizeF (D::ClassType::*) (Qt::SizeHint, const QSizeF &) const)&D::ClassType::super_sizeHint, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
            ._default(copyVariantFromCopyable(QSizeF()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_invalidate", (void (D::ClassType::*) ())&D::ClassType::super_invalidate);
        _d.CPGF_MD_TEMPLATE _method("super_itemAt", (QGraphicsLayoutItem * (D::ClassType::*) (int) const)&D::ClassType::super_itemAt);
    }
};


template <typename D>
void buildMetaClass_QGraphicsLinearLayoutWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGraphicsLinearLayoutWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsLinearLayout<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
