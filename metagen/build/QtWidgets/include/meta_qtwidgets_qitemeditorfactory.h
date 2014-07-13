// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QITEMEDITORFACTORY_H
#define CPGF_META_QTWIDGETS_QITEMEDITORFACTORY_H


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


template <typename D, class T>
void buildMetaClass_QItemEditorCreator(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QByteArray &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("createWidget", &D::ClassType::createWidget);
    _d.CPGF_MD_TEMPLATE _method("valuePropertyName", &D::ClassType::valuePropertyName);
}


template <typename D>
void buildMetaClass_QItemEditorCreatorBase(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("createWidget", &D::ClassType::createWidget);
    _d.CPGF_MD_TEMPLATE _method("valuePropertyName", &D::ClassType::valuePropertyName);
}


class QItemEditorCreatorBaseWrapper : public QItemEditorCreatorBase, public cpgf::GScriptWrapper {
public:
    
    QByteArray valuePropertyName() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("valuePropertyName"));
        if(func)
        {
            return cpgf::fromVariant<QByteArray >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QByteArray super_valuePropertyName() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QWidget * createWidget(QWidget * parent) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createWidget"));
        if(func)
        {
            return cpgf::fromVariant<QWidget * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, parent).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QWidget * super_createWidget(QWidget * parent) const
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_valuePropertyName", (QByteArray (D::ClassType::*) () const)&D::ClassType::super_valuePropertyName);
        _d.CPGF_MD_TEMPLATE _method("super_createWidget", (QWidget * (D::ClassType::*) (QWidget *) const)&D::ClassType::super_createWidget);
    }
};


template <typename D>
void buildMetaClass_QItemEditorCreatorBaseWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QItemEditorCreatorBaseWrapper::cpgf__register(_d);
    
    buildMetaClass_QItemEditorCreatorBase<D>(_d);
}


template <typename D>
void buildMetaClass_QItemEditorFactory(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("createEditor", &D::ClassType::createEditor);
    _d.CPGF_MD_TEMPLATE _method("valuePropertyName", &D::ClassType::valuePropertyName);
    _d.CPGF_MD_TEMPLATE _method("registerEditor", &D::ClassType::registerEditor);
    _d.CPGF_MD_TEMPLATE _method("defaultFactory", &D::ClassType::defaultFactory);
    _d.CPGF_MD_TEMPLATE _method("setDefaultFactory", &D::ClassType::setDefaultFactory);
}


class QItemEditorFactoryWrapper : public QItemEditorFactory, public cpgf::GScriptWrapper {
public:
    
    QItemEditorFactoryWrapper()
        : QItemEditorFactory() {}
    
    QWidget * createEditor(int userType, QWidget * parent) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createEditor"));
        if(func)
        {
            return cpgf::fromVariant<QWidget * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, userType, parent).getValue());
        }
        return QItemEditorFactory::createEditor(userType, parent);
    }
    QWidget * super_createEditor(int userType, QWidget * parent) const
    {
        return QItemEditorFactory::createEditor(userType, parent);
    }
    
    QByteArray valuePropertyName(int userType) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("valuePropertyName"));
        if(func)
        {
            return cpgf::fromVariant<QByteArray >(cpgf::invokeScriptFunctionOnObject(func.get(), this, userType).getValue());
        }
        return QItemEditorFactory::valuePropertyName(userType);
    }
    QByteArray super_valuePropertyName(int userType) const
    {
        return QItemEditorFactory::valuePropertyName(userType);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_createEditor", (QWidget * (D::ClassType::*) (int, QWidget *) const)&D::ClassType::super_createEditor);
        _d.CPGF_MD_TEMPLATE _method("super_valuePropertyName", (QByteArray (D::ClassType::*) (int) const)&D::ClassType::super_valuePropertyName);
    }
};


template <typename D>
void buildMetaClass_QItemEditorFactoryWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QItemEditorFactoryWrapper::cpgf__register(_d);
    
    buildMetaClass_QItemEditorFactory<D>(_d);
}


template <typename D, class T>
void buildMetaClass_QStandardItemEditorCreator(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("createWidget", &D::ClassType::createWidget);
    _d.CPGF_MD_TEMPLATE _method("valuePropertyName", &D::ClassType::valuePropertyName);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
