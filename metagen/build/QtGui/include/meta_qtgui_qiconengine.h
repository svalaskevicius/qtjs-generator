// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QICONENGINE_H
#define CPGF_META_QTGUI_QICONENGINE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QIconEngine(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("paint", &D::ClassType::paint);
    _d.CPGF_MD_TEMPLATE _method("actualSize", &D::ClassType::actualSize);
    _d.CPGF_MD_TEMPLATE _method("pixmap", &D::ClassType::pixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("addPixmap", &D::ClassType::addPixmap);
    _d.CPGF_MD_TEMPLATE _method("addFile", &D::ClassType::addFile, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("key", &D::ClassType::key);
    _d.CPGF_MD_TEMPLATE _method("clone", &D::ClassType::clone);
    _d.CPGF_MD_TEMPLATE _method("read", &D::ClassType::read, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("write", &D::ClassType::write, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("availableSizes", &D::ClassType::availableSizes)
        ._default(copyVariantFromCopyable(QIcon::Off))
        ._default(copyVariantFromCopyable(QIcon::Normal))
    ;
    _d.CPGF_MD_TEMPLATE _method("iconName", &D::ClassType::iconName);
    _d.CPGF_MD_TEMPLATE _method("virtual_hook", &D::ClassType::virtual_hook);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::IconEngineHook>("IconEngineHook")
        ._element("AvailableSizesHook", D::ClassType::AvailableSizesHook)
        ._element("IconNameHook", D::ClassType::IconNameHook)
    ;
    {
        GDefineMetaClass<QIconEngine::AvailableSizesArgument> _nd = GDefineMetaClass<QIconEngine::AvailableSizesArgument>::declare("AvailableSizesArgument");
        _nd.CPGF_MD_TEMPLATE _field("mode", &QIconEngine::AvailableSizesArgument::mode);
        _nd.CPGF_MD_TEMPLATE _field("state", &QIconEngine::AvailableSizesArgument::state);
        _nd.CPGF_MD_TEMPLATE _field("sizes", &QIconEngine::AvailableSizesArgument::sizes);
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
