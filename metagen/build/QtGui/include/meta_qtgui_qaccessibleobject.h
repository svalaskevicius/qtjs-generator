// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QACCESSIBLEOBJECT_H
#define CPGF_META_QTGUI_QACCESSIBLEOBJECT_H


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
void buildMetaClass_QAccessibleApplication(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("window", &D::ClassType::window);
    _d.CPGF_MD_TEMPLATE _method("childCount", &D::ClassType::childCount);
    _d.CPGF_MD_TEMPLATE _method("indexOfChild", &D::ClassType::indexOfChild);
    _d.CPGF_MD_TEMPLATE _method("focusChild", &D::ClassType::focusChild);
    _d.CPGF_MD_TEMPLATE _method("parent", &D::ClassType::parent);
    _d.CPGF_MD_TEMPLATE _method("child", &D::ClassType::child);
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("role", &D::ClassType::role);
    _d.CPGF_MD_TEMPLATE _method("state", &D::ClassType::state);
}


class QAccessibleApplicationWrapper : public QAccessibleApplication, public cpgf::GScriptWrapper {
public:
    
    QAccessibleApplicationWrapper()
        : QAccessibleApplication() {}
    
    QAccessibleInterface * focusChild() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusChild"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleApplication::focusChild();
    }
    QAccessibleInterface * super_focusChild() const
    {
        return QAccessibleApplication::focusChild();
    }
    
    int childCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleApplication::childCount();
    }
    int super_childCount() const
    {
        return QAccessibleApplication::childCount();
    }
    
    QString text(QAccessible::Text t) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("text"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, t).getValue());
        }
        return QAccessibleApplication::text(t);
    }
    QString super_text(QAccessible::Text t) const
    {
        return QAccessibleApplication::text(t);
    }
    
    QAccessibleInterface * childAt(int x, int y) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childAt"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, x, y).getValue());
        }
        return QAccessibleObject::childAt(x, y);
    }
    QAccessibleInterface * super_childAt(int x, int y) const
    {
        return QAccessibleObject::childAt(x, y);
    }
    
    bool isValid() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isValid"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleObject::isValid();
    }
    bool super_isValid() const
    {
        return QAccessibleObject::isValid();
    }
    
    QRect rect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleObject::rect();
    }
    QRect super_rect() const
    {
        return QAccessibleObject::rect();
    }
    
    void setText(QAccessible::Text t, const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setText"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, t, text);
            return;
        }
        QAccessibleObject::setText(t, text);
    }
    void super_setText(QAccessible::Text t, const QString & text)
    {
        QAccessibleObject::setText(t, text);
    }
    
    QAccessibleInterface * child(int index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("child"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QAccessibleApplication::child(index);
    }
    QAccessibleInterface * super_child(int index) const
    {
        return QAccessibleApplication::child(index);
    }
    
    void virtual_hook(int id, void * data)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("virtual_hook"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, id, data);
            return;
        }
        QAccessibleInterface::virtual_hook(id, data);
    }
    void super_virtual_hook(int id, void * data)
    {
        QAccessibleInterface::virtual_hook(id, data);
    }
    
    QColor backgroundColor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("backgroundColor"));
        if(func)
        {
            return cpgf::fromVariant<QColor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleInterface::backgroundColor();
    }
    QColor super_backgroundColor() const
    {
        return QAccessibleInterface::backgroundColor();
    }
    
    QObject * object() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("object"));
        if(func)
        {
            return cpgf::fromVariant<QObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleObject::object();
    }
    QObject * super_object() const
    {
        return QAccessibleObject::object();
    }
    
    int indexOfChild(const QAccessibleInterface * __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOfChild"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QAccessibleApplication::indexOfChild(__arg0);
    }
    int super_indexOfChild(const QAccessibleInterface * __arg0) const
    {
        return QAccessibleApplication::indexOfChild(__arg0);
    }
    
    QAccessible::Role role() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("role"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::Role >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleApplication::role();
    }
    QAccessible::Role super_role() const
    {
        return QAccessibleApplication::role();
    }
    
    QWindow * window() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("window"));
        if(func)
        {
            return cpgf::fromVariant<QWindow * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleApplication::window();
    }
    QWindow * super_window() const
    {
        return QAccessibleApplication::window();
    }
    
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("relations"));
        if(func)
        {
            return cpgf::fromVariant<QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > >(cpgf::invokeScriptFunctionOnObject(func.get(), this, match).getValue());
        }
        return QAccessibleInterface::relations(match);
    }
    QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > super_relations(QAccessible::Relation match = QAccessible::AllRelations) const
    {
        return QAccessibleInterface::relations(match);
    }
    
    QAccessibleInterface * parent() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("parent"));
        if(func)
        {
            return cpgf::fromVariant<QAccessibleInterface * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleApplication::parent();
    }
    QAccessibleInterface * super_parent() const
    {
        return QAccessibleApplication::parent();
    }
    
    QColor foregroundColor() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("foregroundColor"));
        if(func)
        {
            return cpgf::fromVariant<QColor >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleInterface::foregroundColor();
    }
    QColor super_foregroundColor() const
    {
        return QAccessibleInterface::foregroundColor();
    }
    
    QAccessible::State state() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("state"));
        if(func)
        {
            return cpgf::fromVariant<QAccessible::State >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAccessibleApplication::state();
    }
    QAccessible::State super_state() const
    {
        return QAccessibleApplication::state();
    }
    
    void * interface_cast(QAccessible::InterfaceType __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("interface_cast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QAccessibleInterface::interface_cast(__arg0);
    }
    void * super_interface_cast(QAccessible::InterfaceType __arg0)
    {
        return QAccessibleInterface::interface_cast(__arg0);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_focusChild", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_focusChild);
        _d.CPGF_MD_TEMPLATE _method("super_childCount", (int (D::ClassType::*) () const)&D::ClassType::super_childCount);
        _d.CPGF_MD_TEMPLATE _method("super_text", (QString (D::ClassType::*) (QAccessible::Text) const)&D::ClassType::super_text);
        _d.CPGF_MD_TEMPLATE _method("super_childAt", (QAccessibleInterface * (D::ClassType::*) (int, int) const)&D::ClassType::super_childAt);
        _d.CPGF_MD_TEMPLATE _method("super_isValid", (bool (D::ClassType::*) () const)&D::ClassType::super_isValid);
        _d.CPGF_MD_TEMPLATE _method("super_rect", (QRect (D::ClassType::*) () const)&D::ClassType::super_rect);
        _d.CPGF_MD_TEMPLATE _method("super_setText", (void (D::ClassType::*) (QAccessible::Text, const QString &))&D::ClassType::super_setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_child", (QAccessibleInterface * (D::ClassType::*) (int) const)&D::ClassType::super_child);
        _d.CPGF_MD_TEMPLATE _method("super_virtual_hook", (void (D::ClassType::*) (int, void *))&D::ClassType::super_virtual_hook);
        _d.CPGF_MD_TEMPLATE _method("super_backgroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_backgroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_object", (QObject * (D::ClassType::*) () const)&D::ClassType::super_object);
        _d.CPGF_MD_TEMPLATE _method("super_indexOfChild", (int (D::ClassType::*) (const QAccessibleInterface *) const)&D::ClassType::super_indexOfChild);
        _d.CPGF_MD_TEMPLATE _method("super_role", (QAccessible::Role (D::ClassType::*) () const)&D::ClassType::super_role);
        _d.CPGF_MD_TEMPLATE _method("super_window", (QWindow * (D::ClassType::*) () const)&D::ClassType::super_window);
        _d.CPGF_MD_TEMPLATE _method("super_relations", (QVector< QPair< QAccessibleInterface *, QAccessible::Relation > > (D::ClassType::*) (QAccessible::Relation) const)&D::ClassType::super_relations)
            ._default(copyVariantFromCopyable(QAccessible::AllRelations))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QAccessibleInterface * (D::ClassType::*) () const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_foregroundColor", (QColor (D::ClassType::*) () const)&D::ClassType::super_foregroundColor);
        _d.CPGF_MD_TEMPLATE _method("super_state", (QAccessible::State (D::ClassType::*) () const)&D::ClassType::super_state);
        _d.CPGF_MD_TEMPLATE _method("super_interface_cast", (void * (D::ClassType::*) (QAccessible::InterfaceType))&D::ClassType::super_interface_cast);
    }
};


template <typename D>
void buildMetaClass_QAccessibleApplicationWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAccessibleApplicationWrapper::cpgf__register(_d);
    
    buildMetaClass_QAccessibleApplication<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
