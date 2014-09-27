// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QGESTURERECOGNIZER_H
#define CPGF_META_QTWIDGETS_QGESTURERECOGNIZER_H


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
void buildMetaClass_QGestureRecognizer(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("create", &D::ClassType::create);
    _d.CPGF_MD_TEMPLATE _method("recognize", &D::ClassType::recognize);
    _d.CPGF_MD_TEMPLATE _method("reset", &D::ClassType::reset);
    _d.CPGF_MD_TEMPLATE _method("registerRecognizer", &D::ClassType::registerRecognizer);
    _d.CPGF_MD_TEMPLATE _method("unregisterRecognizer", &D::ClassType::unregisterRecognizer);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ResultFlag>("ResultFlag")
        ._element("Ignore", D::ClassType::Ignore)
        ._element("MayBeGesture", D::ClassType::MayBeGesture)
        ._element("TriggerGesture", D::ClassType::TriggerGesture)
        ._element("FinishGesture", D::ClassType::FinishGesture)
        ._element("CancelGesture", D::ClassType::CancelGesture)
        ._element("ResultState_Mask", D::ClassType::ResultState_Mask)
        ._element("ConsumeEventHint", D::ClassType::ConsumeEventHint)
        ._element("ResultHint_Mask", D::ClassType::ResultHint_Mask)
    ;
    {
        GDefineMetaClass<QFlags<typename QGestureRecognizer::ResultFlag > > _t_d = GDefineMetaClass<QFlags<typename QGestureRecognizer::ResultFlag > >::lazyDeclare("Result", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QGestureRecognizer::ResultFlag > >, typename QGestureRecognizer::ResultFlag >);
        _d._class(_t_d);
    }
}


class QGestureRecognizerWrapper : public QGestureRecognizer, public cpgf::GScriptWrapper {
public:
    
    QGestureRecognizerWrapper()
        : QGestureRecognizer() {}
    
    QGestureRecognizer::Result recognize(QGesture * state, QObject * watched, QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("recognize"));
        if(func)
        {
            return cpgf::fromVariant<QGestureRecognizer::Result >(cpgf::invokeScriptFunctionOnObject(func.get(), this, state, watched, event).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QGestureRecognizer::Result super_recognize(QGesture * state, QObject * watched, QEvent * event)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void reset(QGesture * state)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("reset"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, state);
            return;
        }
        QGestureRecognizer::reset(state);
    }
    void super_reset(QGesture * state)
    {
        QGestureRecognizer::reset(state);
    }
    
    QGesture * create(QObject * target)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("create"));
        if(func)
        {
            return cpgf::fromVariant<QGesture * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, target).getValue());
        }
        return QGestureRecognizer::create(target);
    }
    QGesture * super_create(QObject * target)
    {
        return QGestureRecognizer::create(target);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_recognize", (QGestureRecognizer::Result (D::ClassType::*) (QGesture *, QObject *, QEvent *))&D::ClassType::super_recognize);
        _d.CPGF_MD_TEMPLATE _method("super_reset", (void (D::ClassType::*) (QGesture *))&D::ClassType::super_reset);
        _d.CPGF_MD_TEMPLATE _method("super_create", (QGesture * (D::ClassType::*) (QObject *))&D::ClassType::super_create);
    }
};


template <typename D>
void buildMetaClass_QGestureRecognizerWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    
    QGestureRecognizerWrapper::cpgf__register(_d);
    
    buildMetaClass_QGestureRecognizer<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
