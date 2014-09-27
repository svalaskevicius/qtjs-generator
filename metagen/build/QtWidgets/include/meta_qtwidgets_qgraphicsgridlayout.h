// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QGRAPHICSGRIDLAYOUT_H
#define CPGF_META_QTWIDGETS_QGRAPHICSGRIDLAYOUT_H


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
void buildMetaClass_QGraphicsGridLayout(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QGraphicsLayoutItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("addItem", (void (D::ClassType::*) (QGraphicsLayoutItem *, int, int, int, int, Qt::Alignment))&D::ClassType::addItem)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("addItem", (void (D::ClassType::*) (QGraphicsLayoutItem *, int, int, Qt::Alignment))&D::ClassType::addItem)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setHorizontalSpacing", &D::ClassType::setHorizontalSpacing);
    _d.CPGF_MD_TEMPLATE _method("horizontalSpacing", &D::ClassType::horizontalSpacing);
    _d.CPGF_MD_TEMPLATE _method("setVerticalSpacing", &D::ClassType::setVerticalSpacing);
    _d.CPGF_MD_TEMPLATE _method("verticalSpacing", &D::ClassType::verticalSpacing);
    _d.CPGF_MD_TEMPLATE _method("setSpacing", &D::ClassType::setSpacing);
    _d.CPGF_MD_TEMPLATE _method("setRowSpacing", &D::ClassType::setRowSpacing);
    _d.CPGF_MD_TEMPLATE _method("rowSpacing", &D::ClassType::rowSpacing);
    _d.CPGF_MD_TEMPLATE _method("setColumnSpacing", &D::ClassType::setColumnSpacing);
    _d.CPGF_MD_TEMPLATE _method("columnSpacing", &D::ClassType::columnSpacing);
    _d.CPGF_MD_TEMPLATE _method("setRowStretchFactor", &D::ClassType::setRowStretchFactor);
    _d.CPGF_MD_TEMPLATE _method("rowStretchFactor", &D::ClassType::rowStretchFactor);
    _d.CPGF_MD_TEMPLATE _method("setColumnStretchFactor", &D::ClassType::setColumnStretchFactor);
    _d.CPGF_MD_TEMPLATE _method("columnStretchFactor", &D::ClassType::columnStretchFactor);
    _d.CPGF_MD_TEMPLATE _method("setRowMinimumHeight", &D::ClassType::setRowMinimumHeight);
    _d.CPGF_MD_TEMPLATE _method("rowMinimumHeight", &D::ClassType::rowMinimumHeight);
    _d.CPGF_MD_TEMPLATE _method("setRowPreferredHeight", &D::ClassType::setRowPreferredHeight);
    _d.CPGF_MD_TEMPLATE _method("rowPreferredHeight", &D::ClassType::rowPreferredHeight);
    _d.CPGF_MD_TEMPLATE _method("setRowMaximumHeight", &D::ClassType::setRowMaximumHeight);
    _d.CPGF_MD_TEMPLATE _method("rowMaximumHeight", &D::ClassType::rowMaximumHeight);
    _d.CPGF_MD_TEMPLATE _method("setRowFixedHeight", &D::ClassType::setRowFixedHeight);
    _d.CPGF_MD_TEMPLATE _method("setColumnMinimumWidth", &D::ClassType::setColumnMinimumWidth);
    _d.CPGF_MD_TEMPLATE _method("columnMinimumWidth", &D::ClassType::columnMinimumWidth);
    _d.CPGF_MD_TEMPLATE _method("setColumnPreferredWidth", &D::ClassType::setColumnPreferredWidth);
    _d.CPGF_MD_TEMPLATE _method("columnPreferredWidth", &D::ClassType::columnPreferredWidth);
    _d.CPGF_MD_TEMPLATE _method("setColumnMaximumWidth", &D::ClassType::setColumnMaximumWidth);
    _d.CPGF_MD_TEMPLATE _method("columnMaximumWidth", &D::ClassType::columnMaximumWidth);
    _d.CPGF_MD_TEMPLATE _method("setColumnFixedWidth", &D::ClassType::setColumnFixedWidth);
    _d.CPGF_MD_TEMPLATE _method("setRowAlignment", &D::ClassType::setRowAlignment);
    _d.CPGF_MD_TEMPLATE _method("rowAlignment", &D::ClassType::rowAlignment);
    _d.CPGF_MD_TEMPLATE _method("setColumnAlignment", &D::ClassType::setColumnAlignment);
    _d.CPGF_MD_TEMPLATE _method("columnAlignment", &D::ClassType::columnAlignment);
    _d.CPGF_MD_TEMPLATE _method("setAlignment", &D::ClassType::setAlignment);
    _d.CPGF_MD_TEMPLATE _method("alignment", &D::ClassType::alignment);
    _d.CPGF_MD_TEMPLATE _method("rowCount", &D::ClassType::rowCount);
    _d.CPGF_MD_TEMPLATE _method("columnCount", &D::ClassType::columnCount);
    _d.CPGF_MD_TEMPLATE _method("itemAt", (QGraphicsLayoutItem * (D::ClassType::*) (int, int) const)&D::ClassType::itemAt);
    _d.CPGF_MD_TEMPLATE _method("count", &D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("itemAt", (QGraphicsLayoutItem * (D::ClassType::*) (int) const)&D::ClassType::itemAt);
    _d.CPGF_MD_TEMPLATE _method("removeAt", &D::ClassType::removeAt);
    _d.CPGF_MD_TEMPLATE _method("removeItem", &D::ClassType::removeItem);
    _d.CPGF_MD_TEMPLATE _method("invalidate", &D::ClassType::invalidate);
    _d.CPGF_MD_TEMPLATE _method("setGeometry", &D::ClassType::setGeometry, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("sizeHint", &D::ClassType::sizeHint, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QSizeF()))
    ;
}


class QGraphicsGridLayoutWrapper : public QGraphicsGridLayout, public cpgf::GScriptWrapper {
public:
    
    QGraphicsGridLayoutWrapper(QGraphicsLayoutItem * parent = 0)
        : QGraphicsGridLayout(parent) {}
    
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
        QGraphicsGridLayout::setGeometry(rect);
    }
    void super_setGeometry(const QRectF & rect)
    {
        QGraphicsGridLayout::setGeometry(rect);
    }
    
    void removeAt(int index)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("removeAt"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, index);
            return;
        }
        QGraphicsGridLayout::removeAt(index);
    }
    void super_removeAt(int index)
    {
        QGraphicsGridLayout::removeAt(index);
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
        return QGraphicsGridLayout::count();
    }
    int super_count() const
    {
        return QGraphicsGridLayout::count();
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
        return QGraphicsGridLayout::sizeHint(which, constraint);
    }
    QSizeF super_sizeHint(Qt::SizeHint which, const QSizeF & constraint = QSizeF()) const
    {
        return QGraphicsGridLayout::sizeHint(which, constraint);
    }
    
    void invalidate()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("invalidate"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QGraphicsGridLayout::invalidate();
    }
    void super_invalidate()
    {
        QGraphicsGridLayout::invalidate();
    }
    
    QGraphicsLayoutItem * itemAt(int index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemAt"));
        if(func)
        {
            return cpgf::fromVariant<QGraphicsLayoutItem * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QGraphicsGridLayout::itemAt(index);
    }
    QGraphicsLayoutItem * super_itemAt(int index) const
    {
        return QGraphicsGridLayout::itemAt(index);
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
void buildMetaClass_QGraphicsGridLayoutWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QGraphicsGridLayoutWrapper::cpgf__register(_d);
    
    buildMetaClass_QGraphicsGridLayout<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
