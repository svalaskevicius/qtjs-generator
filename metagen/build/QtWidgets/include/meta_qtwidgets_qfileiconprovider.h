// Auto generated file, don't modify.

#ifndef __META_QTWIDGETS_QFILEICONPROVIDER_H
#define __META_QTWIDGETS_QFILEICONPROVIDER_H


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
void buildMetaClass_QFileIconProvider(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("icon", (QIcon (D::ClassType::*) (QFileIconProvider::IconType) const)&D::ClassType::icon);
    _d.CPGF_MD_TEMPLATE _method("icon", (QIcon (D::ClassType::*) (const QFileInfo &) const)&D::ClassType::icon, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setOptions", &D::ClassType::setOptions);
    _d.CPGF_MD_TEMPLATE _method("options", &D::ClassType::options);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::IconType>("IconType")
        ._element("Computer", D::ClassType::Computer)
        ._element("Desktop", D::ClassType::Desktop)
        ._element("Trashcan", D::ClassType::Trashcan)
        ._element("Network", D::ClassType::Network)
        ._element("Drive", D::ClassType::Drive)
        ._element("Folder", D::ClassType::Folder)
        ._element("File", D::ClassType::File)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Option>("Option")
        ._element("DontUseCustomDirectoryIcons", D::ClassType::DontUseCustomDirectoryIcons)
    ;
}


class QFileIconProviderWrapper : public QFileIconProvider, public cpgf::GScriptWrapper {
public:
    
    QFileIconProviderWrapper()
        : QFileIconProvider() {}
    
    QIcon icon(const QFileInfo & info) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("icon"));
        if(func)
        {
            return cpgf::fromVariant<QIcon >(cpgf::invokeScriptFunction(func.get(), this, info));
        }
        return QFileIconProvider::icon(info);
    }
    QIcon super_icon(const QFileInfo & info) const
    {
        return QFileIconProvider::icon(info);
    }
    
    QIcon icon(QFileIconProvider::IconType type) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("icon"));
        if(func)
        {
            return cpgf::fromVariant<QIcon >(cpgf::invokeScriptFunction(func.get(), this, type));
        }
        return QFileIconProvider::icon(type);
    }
    QIcon super_icon(QFileIconProvider::IconType type) const
    {
        return QFileIconProvider::icon(type);
    }
    
    QString type(const QFileInfo & info) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunction(func.get(), this, info));
        }
        return QFileIconProvider::type(info);
    }
    QString super_type(const QFileInfo & info) const
    {
        return QFileIconProvider::type(info);
    }
    template <typename D>
    static void cpgf__register(const cpgf::GMetaDataConfigFlags & config, D _d)
    {
        (void)config; (void)_d; (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_icon", (QIcon (D::ClassType::*) (const QFileInfo &) const)&D::ClassType::super_icon, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_icon", (QIcon (D::ClassType::*) (QFileIconProvider::IconType) const)&D::ClassType::super_icon);
        _d.CPGF_MD_TEMPLATE _method("super_type", (QString (D::ClassType::*) (const QFileInfo &) const)&D::ClassType::super_type, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    }
};


template <typename D>
void buildMetaClass_QFileIconProviderWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    
    QFileIconProviderWrapper::cpgf__register(config, _d);
    
    buildMetaClass_QFileIconProvider<D>(config, _d);
}


} // namespace meta_qtwidgets




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
