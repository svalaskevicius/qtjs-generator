// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QLAYOUTITEM_H
#define CPGF_META_QTWIDGETS_QLAYOUTITEM_H


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
void buildMetaClass_Global_qlayoutitem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("QLAYOUTSIZE_MAX", &QLAYOUTSIZE_MAX);
}


template <typename D>
void buildMetaClass_QLayoutItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("sizeHint", &D::ClassType::sizeHint);
    _d.CPGF_MD_TEMPLATE _method("minimumSize", &D::ClassType::minimumSize);
    _d.CPGF_MD_TEMPLATE _method("maximumSize", &D::ClassType::maximumSize);
    _d.CPGF_MD_TEMPLATE _method("expandingDirections", &D::ClassType::expandingDirections);
    _d.CPGF_MD_TEMPLATE _method("setGeometry", &D::ClassType::setGeometry);
    _d.CPGF_MD_TEMPLATE _method("geometry", &D::ClassType::geometry);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("hasHeightForWidth", &D::ClassType::hasHeightForWidth);
    _d.CPGF_MD_TEMPLATE _method("heightForWidth", &D::ClassType::heightForWidth);
    _d.CPGF_MD_TEMPLATE _method("minimumHeightForWidth", &D::ClassType::minimumHeightForWidth);
    _d.CPGF_MD_TEMPLATE _method("invalidate", &D::ClassType::invalidate);
    _d.CPGF_MD_TEMPLATE _method("widget", &D::ClassType::widget);
    _d.CPGF_MD_TEMPLATE _method("layout", &D::ClassType::layout);
    _d.CPGF_MD_TEMPLATE _method("spacerItem", &D::ClassType::spacerItem);
    _d.CPGF_MD_TEMPLATE _method("alignment", &D::ClassType::alignment);
    _d.CPGF_MD_TEMPLATE _method("setAlignment", &D::ClassType::setAlignment);
    _d.CPGF_MD_TEMPLATE _method("controlTypes", &D::ClassType::controlTypes);
}


class QLayoutItemWrapper : public QLayoutItem, public cpgf::GScriptWrapper {
public:
    
    QLayoutItemWrapper(Qt::Alignment alignment = 0)
        : QLayoutItem(alignment) {}
    
    void setGeometry(const QRect & __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setGeometry"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setGeometry(const QRect & __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void invalidate()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("invalidate"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QLayoutItem::invalidate();
    }
    void super_invalidate()
    {
        QLayoutItem::invalidate();
    }
    
    QSize sizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QSize super_sizeHint() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool hasHeightForWidth() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QLayoutItem::hasHeightForWidth();
    }
    bool super_hasHeightForWidth() const
    {
        return QLayoutItem::hasHeightForWidth();
    }
    
    QRect geometry() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("geometry"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QRect super_geometry() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QSize maximumSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("maximumSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QSize super_maximumSize() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    int minimumHeightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QLayoutItem::minimumHeightForWidth(__arg0);
    }
    int super_minimumHeightForWidth(int __arg0) const
    {
        return QLayoutItem::minimumHeightForWidth(__arg0);
    }
    
    QSpacerItem * spacerItem()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("spacerItem"));
        if(func)
        {
            return cpgf::fromVariant<QSpacerItem * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QLayoutItem::spacerItem();
    }
    QSpacerItem * super_spacerItem()
    {
        return QLayoutItem::spacerItem();
    }
    
    QSize minimumSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QSize super_minimumSize() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    Qt::Orientations expandingDirections() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("expandingDirections"));
        if(func)
        {
            return cpgf::fromVariant<Qt::Orientations >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    Qt::Orientations super_expandingDirections() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool isEmpty() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isEmpty"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_isEmpty() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QSizePolicy::ControlTypes controlTypes() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("controlTypes"));
        if(func)
        {
            return cpgf::fromVariant<QSizePolicy::ControlTypes >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QLayoutItem::controlTypes();
    }
    QSizePolicy::ControlTypes super_controlTypes() const
    {
        return QLayoutItem::controlTypes();
    }
    
    QLayout * layout()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("layout"));
        if(func)
        {
            return cpgf::fromVariant<QLayout * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QLayoutItem::layout();
    }
    QLayout * super_layout()
    {
        return QLayoutItem::layout();
    }
    
    QWidget * widget()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("widget"));
        if(func)
        {
            return cpgf::fromVariant<QWidget * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QLayoutItem::widget();
    }
    QWidget * super_widget()
    {
        return QLayoutItem::widget();
    }
    
    int heightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("heightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QLayoutItem::heightForWidth(__arg0);
    }
    int super_heightForWidth(int __arg0) const
    {
        return QLayoutItem::heightForWidth(__arg0);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_setGeometry", (void (D::ClassType::*) (const QRect &))&D::ClassType::super_setGeometry);
        _d.CPGF_MD_TEMPLATE _method("super_invalidate", (void (D::ClassType::*) ())&D::ClassType::super_invalidate);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_sizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_hasHeightForWidth", (bool (D::ClassType::*) () const)&D::ClassType::super_hasHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_geometry", (QRect (D::ClassType::*) () const)&D::ClassType::super_geometry);
        _d.CPGF_MD_TEMPLATE _method("super_maximumSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_maximumSize);
        _d.CPGF_MD_TEMPLATE _method("super_minimumHeightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_minimumHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_spacerItem", (QSpacerItem * (D::ClassType::*) ())&D::ClassType::super_spacerItem);
        _d.CPGF_MD_TEMPLATE _method("super_minimumSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_minimumSize);
        _d.CPGF_MD_TEMPLATE _method("super_expandingDirections", (Qt::Orientations (D::ClassType::*) () const)&D::ClassType::super_expandingDirections);
        _d.CPGF_MD_TEMPLATE _method("super_isEmpty", (bool (D::ClassType::*) () const)&D::ClassType::super_isEmpty);
        _d.CPGF_MD_TEMPLATE _method("super_controlTypes", (QSizePolicy::ControlTypes (D::ClassType::*) () const)&D::ClassType::super_controlTypes);
        _d.CPGF_MD_TEMPLATE _method("super_layout", (QLayout * (D::ClassType::*) ())&D::ClassType::super_layout);
        _d.CPGF_MD_TEMPLATE _method("super_widget", (QWidget * (D::ClassType::*) ())&D::ClassType::super_widget);
        _d.CPGF_MD_TEMPLATE _method("super_heightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_heightForWidth);
    }
};


template <typename D>
void buildMetaClass_QLayoutItemWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (Qt::Alignment)>()
        ._default(copyVariantFromCopyable(0))
    ;
    
    QLayoutItemWrapper::cpgf__register(_d);
    
    buildMetaClass_QLayoutItem<D>(_d);
}


template <typename D>
void buildMetaClass_QSpacerItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int, QSizePolicy::Policy, QSizePolicy::Policy)>()
        ._default(copyVariantFromCopyable(QSizePolicy::Minimum))
        ._default(copyVariantFromCopyable(QSizePolicy::Minimum))
    ;
    _d.CPGF_MD_TEMPLATE _method("changeSize", &D::ClassType::changeSize)
        ._default(copyVariantFromCopyable(QSizePolicy::Minimum))
        ._default(copyVariantFromCopyable(QSizePolicy::Minimum))
    ;
    _d.CPGF_MD_TEMPLATE _method("sizeHint", &D::ClassType::sizeHint);
    _d.CPGF_MD_TEMPLATE _method("minimumSize", &D::ClassType::minimumSize);
    _d.CPGF_MD_TEMPLATE _method("maximumSize", &D::ClassType::maximumSize);
    _d.CPGF_MD_TEMPLATE _method("expandingDirections", &D::ClassType::expandingDirections);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("setGeometry", &D::ClassType::setGeometry);
    _d.CPGF_MD_TEMPLATE _method("geometry", &D::ClassType::geometry);
    _d.CPGF_MD_TEMPLATE _method("spacerItem", &D::ClassType::spacerItem);
}


class QSpacerItemWrapper : public QSpacerItem, public cpgf::GScriptWrapper {
public:
    
    QSpacerItemWrapper(int w, int h, QSizePolicy::Policy hData = QSizePolicy::Minimum, QSizePolicy::Policy vData = QSizePolicy::Minimum)
        : QSpacerItem(w, h, hData, vData) {}
    
    void setGeometry(const QRect & __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setGeometry"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QSpacerItem::setGeometry(__arg0);
    }
    void super_setGeometry(const QRect & __arg0)
    {
        QSpacerItem::setGeometry(__arg0);
    }
    
    void invalidate()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("invalidate"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QLayoutItem::invalidate();
    }
    void super_invalidate()
    {
        QLayoutItem::invalidate();
    }
    
    QSize sizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSpacerItem::sizeHint();
    }
    QSize super_sizeHint() const
    {
        return QSpacerItem::sizeHint();
    }
    
    bool hasHeightForWidth() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QLayoutItem::hasHeightForWidth();
    }
    bool super_hasHeightForWidth() const
    {
        return QLayoutItem::hasHeightForWidth();
    }
    
    QRect geometry() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("geometry"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSpacerItem::geometry();
    }
    QRect super_geometry() const
    {
        return QSpacerItem::geometry();
    }
    
    QSize maximumSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("maximumSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSpacerItem::maximumSize();
    }
    QSize super_maximumSize() const
    {
        return QSpacerItem::maximumSize();
    }
    
    int minimumHeightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QLayoutItem::minimumHeightForWidth(__arg0);
    }
    int super_minimumHeightForWidth(int __arg0) const
    {
        return QLayoutItem::minimumHeightForWidth(__arg0);
    }
    
    QSpacerItem * spacerItem()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("spacerItem"));
        if(func)
        {
            return cpgf::fromVariant<QSpacerItem * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSpacerItem::spacerItem();
    }
    QSpacerItem * super_spacerItem()
    {
        return QSpacerItem::spacerItem();
    }
    
    QSize minimumSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSpacerItem::minimumSize();
    }
    QSize super_minimumSize() const
    {
        return QSpacerItem::minimumSize();
    }
    
    Qt::Orientations expandingDirections() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("expandingDirections"));
        if(func)
        {
            return cpgf::fromVariant<Qt::Orientations >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSpacerItem::expandingDirections();
    }
    Qt::Orientations super_expandingDirections() const
    {
        return QSpacerItem::expandingDirections();
    }
    
    bool isEmpty() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isEmpty"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSpacerItem::isEmpty();
    }
    bool super_isEmpty() const
    {
        return QSpacerItem::isEmpty();
    }
    
    QSizePolicy::ControlTypes controlTypes() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("controlTypes"));
        if(func)
        {
            return cpgf::fromVariant<QSizePolicy::ControlTypes >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QLayoutItem::controlTypes();
    }
    QSizePolicy::ControlTypes super_controlTypes() const
    {
        return QLayoutItem::controlTypes();
    }
    
    QLayout * layout()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("layout"));
        if(func)
        {
            return cpgf::fromVariant<QLayout * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QLayoutItem::layout();
    }
    QLayout * super_layout()
    {
        return QLayoutItem::layout();
    }
    
    QWidget * widget()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("widget"));
        if(func)
        {
            return cpgf::fromVariant<QWidget * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QLayoutItem::widget();
    }
    QWidget * super_widget()
    {
        return QLayoutItem::widget();
    }
    
    int heightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("heightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QLayoutItem::heightForWidth(__arg0);
    }
    int super_heightForWidth(int __arg0) const
    {
        return QLayoutItem::heightForWidth(__arg0);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_setGeometry", (void (D::ClassType::*) (const QRect &))&D::ClassType::super_setGeometry);
        _d.CPGF_MD_TEMPLATE _method("super_invalidate", (void (D::ClassType::*) ())&D::ClassType::super_invalidate);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_sizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_hasHeightForWidth", (bool (D::ClassType::*) () const)&D::ClassType::super_hasHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_geometry", (QRect (D::ClassType::*) () const)&D::ClassType::super_geometry);
        _d.CPGF_MD_TEMPLATE _method("super_maximumSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_maximumSize);
        _d.CPGF_MD_TEMPLATE _method("super_minimumHeightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_minimumHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_spacerItem", (QSpacerItem * (D::ClassType::*) ())&D::ClassType::super_spacerItem);
        _d.CPGF_MD_TEMPLATE _method("super_minimumSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_minimumSize);
        _d.CPGF_MD_TEMPLATE _method("super_expandingDirections", (Qt::Orientations (D::ClassType::*) () const)&D::ClassType::super_expandingDirections);
        _d.CPGF_MD_TEMPLATE _method("super_isEmpty", (bool (D::ClassType::*) () const)&D::ClassType::super_isEmpty);
        _d.CPGF_MD_TEMPLATE _method("super_controlTypes", (QSizePolicy::ControlTypes (D::ClassType::*) () const)&D::ClassType::super_controlTypes);
        _d.CPGF_MD_TEMPLATE _method("super_layout", (QLayout * (D::ClassType::*) ())&D::ClassType::super_layout);
        _d.CPGF_MD_TEMPLATE _method("super_widget", (QWidget * (D::ClassType::*) ())&D::ClassType::super_widget);
        _d.CPGF_MD_TEMPLATE _method("super_heightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_heightForWidth);
    }
};


template <typename D>
void buildMetaClass_QSpacerItemWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSpacerItemWrapper::cpgf__register(_d);
    
    buildMetaClass_QSpacerItem<D>(_d);
}


template <typename D>
void buildMetaClass_QWidgetItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("sizeHint", &D::ClassType::sizeHint);
    _d.CPGF_MD_TEMPLATE _method("minimumSize", &D::ClassType::minimumSize);
    _d.CPGF_MD_TEMPLATE _method("maximumSize", &D::ClassType::maximumSize);
    _d.CPGF_MD_TEMPLATE _method("expandingDirections", &D::ClassType::expandingDirections);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("setGeometry", &D::ClassType::setGeometry);
    _d.CPGF_MD_TEMPLATE _method("geometry", &D::ClassType::geometry);
    _d.CPGF_MD_TEMPLATE _method("widget", &D::ClassType::widget);
    _d.CPGF_MD_TEMPLATE _method("hasHeightForWidth", &D::ClassType::hasHeightForWidth);
    _d.CPGF_MD_TEMPLATE _method("heightForWidth", &D::ClassType::heightForWidth);
    _d.CPGF_MD_TEMPLATE _method("controlTypes", &D::ClassType::controlTypes);
}


class QWidgetItemWrapper : public QWidgetItem, public cpgf::GScriptWrapper {
public:
    
    QWidgetItemWrapper(QWidget * w)
        : QWidgetItem(w) {}
    
    void setGeometry(const QRect & __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setGeometry"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidgetItem::setGeometry(__arg0);
    }
    void super_setGeometry(const QRect & __arg0)
    {
        QWidgetItem::setGeometry(__arg0);
    }
    
    void invalidate()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("invalidate"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QLayoutItem::invalidate();
    }
    void super_invalidate()
    {
        QLayoutItem::invalidate();
    }
    
    QSize sizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidgetItem::sizeHint();
    }
    QSize super_sizeHint() const
    {
        return QWidgetItem::sizeHint();
    }
    
    bool hasHeightForWidth() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidgetItem::hasHeightForWidth();
    }
    bool super_hasHeightForWidth() const
    {
        return QWidgetItem::hasHeightForWidth();
    }
    
    QRect geometry() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("geometry"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidgetItem::geometry();
    }
    QRect super_geometry() const
    {
        return QWidgetItem::geometry();
    }
    
    QSize maximumSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("maximumSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidgetItem::maximumSize();
    }
    QSize super_maximumSize() const
    {
        return QWidgetItem::maximumSize();
    }
    
    int minimumHeightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QLayoutItem::minimumHeightForWidth(__arg0);
    }
    int super_minimumHeightForWidth(int __arg0) const
    {
        return QLayoutItem::minimumHeightForWidth(__arg0);
    }
    
    QSpacerItem * spacerItem()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("spacerItem"));
        if(func)
        {
            return cpgf::fromVariant<QSpacerItem * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QLayoutItem::spacerItem();
    }
    QSpacerItem * super_spacerItem()
    {
        return QLayoutItem::spacerItem();
    }
    
    QSize minimumSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidgetItem::minimumSize();
    }
    QSize super_minimumSize() const
    {
        return QWidgetItem::minimumSize();
    }
    
    Qt::Orientations expandingDirections() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("expandingDirections"));
        if(func)
        {
            return cpgf::fromVariant<Qt::Orientations >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidgetItem::expandingDirections();
    }
    Qt::Orientations super_expandingDirections() const
    {
        return QWidgetItem::expandingDirections();
    }
    
    bool isEmpty() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isEmpty"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidgetItem::isEmpty();
    }
    bool super_isEmpty() const
    {
        return QWidgetItem::isEmpty();
    }
    
    QSizePolicy::ControlTypes controlTypes() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("controlTypes"));
        if(func)
        {
            return cpgf::fromVariant<QSizePolicy::ControlTypes >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidgetItem::controlTypes();
    }
    QSizePolicy::ControlTypes super_controlTypes() const
    {
        return QWidgetItem::controlTypes();
    }
    
    QLayout * layout()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("layout"));
        if(func)
        {
            return cpgf::fromVariant<QLayout * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QLayoutItem::layout();
    }
    QLayout * super_layout()
    {
        return QLayoutItem::layout();
    }
    
    QWidget * widget()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("widget"));
        if(func)
        {
            return cpgf::fromVariant<QWidget * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidgetItem::widget();
    }
    QWidget * super_widget()
    {
        return QWidgetItem::widget();
    }
    
    int heightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("heightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QWidgetItem::heightForWidth(__arg0);
    }
    int super_heightForWidth(int __arg0) const
    {
        return QWidgetItem::heightForWidth(__arg0);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_setGeometry", (void (D::ClassType::*) (const QRect &))&D::ClassType::super_setGeometry);
        _d.CPGF_MD_TEMPLATE _method("super_invalidate", (void (D::ClassType::*) ())&D::ClassType::super_invalidate);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_sizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_hasHeightForWidth", (bool (D::ClassType::*) () const)&D::ClassType::super_hasHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_geometry", (QRect (D::ClassType::*) () const)&D::ClassType::super_geometry);
        _d.CPGF_MD_TEMPLATE _method("super_maximumSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_maximumSize);
        _d.CPGF_MD_TEMPLATE _method("super_minimumHeightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_minimumHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_spacerItem", (QSpacerItem * (D::ClassType::*) ())&D::ClassType::super_spacerItem);
        _d.CPGF_MD_TEMPLATE _method("super_minimumSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_minimumSize);
        _d.CPGF_MD_TEMPLATE _method("super_expandingDirections", (Qt::Orientations (D::ClassType::*) () const)&D::ClassType::super_expandingDirections);
        _d.CPGF_MD_TEMPLATE _method("super_isEmpty", (bool (D::ClassType::*) () const)&D::ClassType::super_isEmpty);
        _d.CPGF_MD_TEMPLATE _method("super_controlTypes", (QSizePolicy::ControlTypes (D::ClassType::*) () const)&D::ClassType::super_controlTypes);
        _d.CPGF_MD_TEMPLATE _method("super_layout", (QLayout * (D::ClassType::*) ())&D::ClassType::super_layout);
        _d.CPGF_MD_TEMPLATE _method("super_widget", (QWidget * (D::ClassType::*) ())&D::ClassType::super_widget);
        _d.CPGF_MD_TEMPLATE _method("super_heightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_heightForWidth);
    }
};


template <typename D>
void buildMetaClass_QWidgetItemWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QWidgetItemWrapper::cpgf__register(_d);
    
    buildMetaClass_QWidgetItem<D>(_d);
}


template <typename D>
void buildMetaClass_QWidgetItemV2(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _method("sizeHint", &D::ClassType::sizeHint);
    _d.CPGF_MD_TEMPLATE _method("minimumSize", &D::ClassType::minimumSize);
    _d.CPGF_MD_TEMPLATE _method("maximumSize", &D::ClassType::maximumSize);
    _d.CPGF_MD_TEMPLATE _method("heightForWidth", &D::ClassType::heightForWidth);
}


class QWidgetItemV2Wrapper : public QWidgetItemV2, public cpgf::GScriptWrapper {
public:
    
    QWidgetItemV2Wrapper(QWidget * widget)
        : QWidgetItemV2(widget) {}
    
    void setGeometry(const QRect & __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setGeometry"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidgetItem::setGeometry(__arg0);
    }
    void super_setGeometry(const QRect & __arg0)
    {
        QWidgetItem::setGeometry(__arg0);
    }
    
    void invalidate()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("invalidate"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QLayoutItem::invalidate();
    }
    void super_invalidate()
    {
        QLayoutItem::invalidate();
    }
    
    QSize sizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidgetItemV2::sizeHint();
    }
    QSize super_sizeHint() const
    {
        return QWidgetItemV2::sizeHint();
    }
    
    bool hasHeightForWidth() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidgetItem::hasHeightForWidth();
    }
    bool super_hasHeightForWidth() const
    {
        return QWidgetItem::hasHeightForWidth();
    }
    
    QRect geometry() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("geometry"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidgetItem::geometry();
    }
    QRect super_geometry() const
    {
        return QWidgetItem::geometry();
    }
    
    QSize maximumSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("maximumSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidgetItemV2::maximumSize();
    }
    QSize super_maximumSize() const
    {
        return QWidgetItemV2::maximumSize();
    }
    
    int minimumHeightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QLayoutItem::minimumHeightForWidth(__arg0);
    }
    int super_minimumHeightForWidth(int __arg0) const
    {
        return QLayoutItem::minimumHeightForWidth(__arg0);
    }
    
    QSpacerItem * spacerItem()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("spacerItem"));
        if(func)
        {
            return cpgf::fromVariant<QSpacerItem * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QLayoutItem::spacerItem();
    }
    QSpacerItem * super_spacerItem()
    {
        return QLayoutItem::spacerItem();
    }
    
    QSize minimumSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidgetItemV2::minimumSize();
    }
    QSize super_minimumSize() const
    {
        return QWidgetItemV2::minimumSize();
    }
    
    Qt::Orientations expandingDirections() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("expandingDirections"));
        if(func)
        {
            return cpgf::fromVariant<Qt::Orientations >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidgetItem::expandingDirections();
    }
    Qt::Orientations super_expandingDirections() const
    {
        return QWidgetItem::expandingDirections();
    }
    
    bool isEmpty() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isEmpty"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidgetItem::isEmpty();
    }
    bool super_isEmpty() const
    {
        return QWidgetItem::isEmpty();
    }
    
    QSizePolicy::ControlTypes controlTypes() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("controlTypes"));
        if(func)
        {
            return cpgf::fromVariant<QSizePolicy::ControlTypes >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidgetItem::controlTypes();
    }
    QSizePolicy::ControlTypes super_controlTypes() const
    {
        return QWidgetItem::controlTypes();
    }
    
    QLayout * layout()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("layout"));
        if(func)
        {
            return cpgf::fromVariant<QLayout * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QLayoutItem::layout();
    }
    QLayout * super_layout()
    {
        return QLayoutItem::layout();
    }
    
    QWidget * widget()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("widget"));
        if(func)
        {
            return cpgf::fromVariant<QWidget * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidgetItem::widget();
    }
    QWidget * super_widget()
    {
        return QWidgetItem::widget();
    }
    
    int heightForWidth(int width) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("heightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, width).getValue());
        }
        return QWidgetItemV2::heightForWidth(width);
    }
    int super_heightForWidth(int width) const
    {
        return QWidgetItemV2::heightForWidth(width);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_setGeometry", (void (D::ClassType::*) (const QRect &))&D::ClassType::super_setGeometry);
        _d.CPGF_MD_TEMPLATE _method("super_invalidate", (void (D::ClassType::*) ())&D::ClassType::super_invalidate);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_sizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_hasHeightForWidth", (bool (D::ClassType::*) () const)&D::ClassType::super_hasHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_geometry", (QRect (D::ClassType::*) () const)&D::ClassType::super_geometry);
        _d.CPGF_MD_TEMPLATE _method("super_maximumSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_maximumSize);
        _d.CPGF_MD_TEMPLATE _method("super_minimumHeightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_minimumHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_spacerItem", (QSpacerItem * (D::ClassType::*) ())&D::ClassType::super_spacerItem);
        _d.CPGF_MD_TEMPLATE _method("super_minimumSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_minimumSize);
        _d.CPGF_MD_TEMPLATE _method("super_expandingDirections", (Qt::Orientations (D::ClassType::*) () const)&D::ClassType::super_expandingDirections);
        _d.CPGF_MD_TEMPLATE _method("super_isEmpty", (bool (D::ClassType::*) () const)&D::ClassType::super_isEmpty);
        _d.CPGF_MD_TEMPLATE _method("super_controlTypes", (QSizePolicy::ControlTypes (D::ClassType::*) () const)&D::ClassType::super_controlTypes);
        _d.CPGF_MD_TEMPLATE _method("super_layout", (QLayout * (D::ClassType::*) ())&D::ClassType::super_layout);
        _d.CPGF_MD_TEMPLATE _method("super_widget", (QWidget * (D::ClassType::*) ())&D::ClassType::super_widget);
        _d.CPGF_MD_TEMPLATE _method("super_heightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_heightForWidth);
    }
};


template <typename D>
void buildMetaClass_QWidgetItemV2Wrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QWidgetItemV2Wrapper::cpgf__register(_d);
    
    buildMetaClass_QWidgetItemV2<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
