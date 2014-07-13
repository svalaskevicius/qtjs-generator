// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QSGSIMPLERECTNODE_H
#define CPGF_META_QTQML_QSGSIMPLERECTNODE_H


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
void buildMetaClass_QSGSimpleRectNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QRectF &, const QColor &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("setRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::setRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setRect", (void (D::ClassType::*) (qreal, qreal, qreal, qreal))&D::ClassType::setRect);
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("setColor", &D::ClassType::setColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("color", &D::ClassType::color);
}


class QSGSimpleRectNodeWrapper : public QSGSimpleRectNode, public cpgf::GScriptWrapper {
public:
    
    QSGSimpleRectNodeWrapper(const QRectF & rect, const QColor & color)
        : QSGSimpleRectNode(rect, color) {}
    
    QSGSimpleRectNodeWrapper()
        : QSGSimpleRectNode() {}
    
    bool isSubtreeBlocked() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isSubtreeBlocked"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGNode::isSubtreeBlocked();
    }
    bool super_isSubtreeBlocked() const
    {
        return QSGNode::isSubtreeBlocked();
    }
    
    void preprocess()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("preprocess"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QSGNode::preprocess();
    }
    void super_preprocess()
    {
        QSGNode::preprocess();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
    }
};


template <typename D>
void buildMetaClass_QSGSimpleRectNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGSimpleRectNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGSimpleRectNode<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
