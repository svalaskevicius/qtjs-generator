// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQMLINCUBATOR_H
#define CPGF_META_QTQML_QQMLINCUBATOR_H


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
void buildMetaClass_QQmlIncubationController(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("engine", &D::ClassType::engine);
    _d.CPGF_MD_TEMPLATE _method("incubatingObjectCount", &D::ClassType::incubatingObjectCount);
    _d.CPGF_MD_TEMPLATE _method("incubateFor", &D::ClassType::incubateFor);
    _d.CPGF_MD_TEMPLATE _method("incubateWhile", &D::ClassType::incubateWhile)
        ._default(copyVariantFromCopyable(0))
    ;
}


class QQmlIncubationControllerWrapper : public QQmlIncubationController, public cpgf::GScriptWrapper {
public:
    
    QQmlIncubationControllerWrapper()
        : QQmlIncubationController() {}
    
    void incubatingObjectCountChanged(int __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("incubatingObjectCountChanged"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QQmlIncubationController::incubatingObjectCountChanged(__arg0);
    }
    void super_incubatingObjectCountChanged(int __arg0)
    {
        QQmlIncubationController::incubatingObjectCountChanged(__arg0);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("incubatingObjectCountChanged", (void (D::ClassType::*) (int))&D::ClassType::incubatingObjectCountChanged);
        _d.CPGF_MD_TEMPLATE _method("super_incubatingObjectCountChanged", (void (D::ClassType::*) (int))&D::ClassType::super_incubatingObjectCountChanged);
    }
};


template <typename D>
void buildMetaClass_QQmlIncubationControllerWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QQmlIncubationControllerWrapper::cpgf__register(_d);
    
    buildMetaClass_QQmlIncubationController<D>(_d);
}


template <typename D>
void buildMetaClass_QQmlIncubator(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQmlIncubator::IncubationMode)>()
        ._default(copyVariantFromCopyable(QQmlIncubator::Asynchronous))
    ;
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("forceCompletion", &D::ClassType::forceCompletion);
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("isReady", &D::ClassType::isReady);
    _d.CPGF_MD_TEMPLATE _method("isError", &D::ClassType::isError);
    _d.CPGF_MD_TEMPLATE _method("isLoading", &D::ClassType::isLoading);
    _d.CPGF_MD_TEMPLATE _method("errors", &D::ClassType::errors);
    _d.CPGF_MD_TEMPLATE _method("incubationMode", &D::ClassType::incubationMode);
    _d.CPGF_MD_TEMPLATE _method("status", &D::ClassType::status);
    _d.CPGF_MD_TEMPLATE _method("object", &D::ClassType::object);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::IncubationMode>("IncubationMode")
        ._element("Asynchronous", D::ClassType::Asynchronous)
        ._element("AsynchronousIfNested", D::ClassType::AsynchronousIfNested)
        ._element("Synchronous", D::ClassType::Synchronous)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Status>("Status")
        ._element("Null", D::ClassType::Null)
        ._element("Ready", D::ClassType::Ready)
        ._element("Loading", D::ClassType::Loading)
        ._element("Error", D::ClassType::Error)
    ;
}


class QQmlIncubatorWrapper : public QQmlIncubator, public cpgf::GScriptWrapper {
public:
    
    QQmlIncubatorWrapper(QQmlIncubator::IncubationMode __arg0 = QQmlIncubator::Asynchronous)
        : QQmlIncubator(__arg0) {}
    
    void setInitialState(QObject * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setInitialState"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QQmlIncubator::setInitialState(__arg0);
    }
    void super_setInitialState(QObject * __arg0)
    {
        QQmlIncubator::setInitialState(__arg0);
    }
    
    void statusChanged(QQmlIncubator::Status __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("statusChanged"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QQmlIncubator::statusChanged(__arg0);
    }
    void super_statusChanged(QQmlIncubator::Status __arg0)
    {
        QQmlIncubator::statusChanged(__arg0);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("setInitialState", (void (D::ClassType::*) (QObject *))&D::ClassType::setInitialState);
        _d.CPGF_MD_TEMPLATE _method("statusChanged", (void (D::ClassType::*) (QQmlIncubator::Status))&D::ClassType::statusChanged);
        _d.CPGF_MD_TEMPLATE _method("super_setInitialState", (void (D::ClassType::*) (QObject *))&D::ClassType::super_setInitialState);
        _d.CPGF_MD_TEMPLATE _method("super_statusChanged", (void (D::ClassType::*) (QQmlIncubator::Status))&D::ClassType::super_statusChanged);
    }
};


template <typename D>
void buildMetaClass_QQmlIncubatorWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QQmlIncubatorWrapper::cpgf__register(_d);
    
    buildMetaClass_QQmlIncubator<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
