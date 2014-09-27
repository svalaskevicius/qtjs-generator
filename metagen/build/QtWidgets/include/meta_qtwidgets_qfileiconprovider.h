// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QFILEICONPROVIDER_H
#define CPGF_META_QTWIDGETS_QFILEICONPROVIDER_H


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
void buildMetaClass_QFileIconProvider(D _d)
{
    (void)_d;
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
    {
        GDefineMetaClass<QFlags<typename QFileIconProvider::Option > > _t_d = GDefineMetaClass<QFlags<typename QFileIconProvider::Option > >::lazyDeclare("Options", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QFileIconProvider::Option > >, typename QFileIconProvider::Option >);
        _d._class(_t_d);
    }
}


class QFileIconProviderWrapper : public QFileIconProvider, public cpgf::GScriptWrapper {
public:
    
    QFileIconProviderWrapper()
        : QFileIconProvider() {}
    
    QString type(const QFileInfo & info) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunctionOnObject(func.get(), this, info).getValue());
        }
        return QFileIconProvider::type(info);
    }
    QString super_type(const QFileInfo & info) const
    {
        return QFileIconProvider::type(info);
    }
    
    QIcon icon(const QFileInfo & info) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("icon"));
        if(func)
        {
            return cpgf::fromVariant<QIcon >(cpgf::invokeScriptFunctionOnObject(func.get(), this, info).getValue());
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
            return cpgf::fromVariant<QIcon >(cpgf::invokeScriptFunctionOnObject(func.get(), this, type).getValue());
        }
        return QFileIconProvider::icon(type);
    }
    QIcon super_icon(QFileIconProvider::IconType type) const
    {
        return QFileIconProvider::icon(type);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_type", (QString (D::ClassType::*) (const QFileInfo &) const)&D::ClassType::super_type, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_icon", (QIcon (D::ClassType::*) (const QFileInfo &) const)&D::ClassType::super_icon, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_icon", (QIcon (D::ClassType::*) (QFileIconProvider::IconType) const)&D::ClassType::super_icon);
    }
};


template <typename D>
void buildMetaClass_QFileIconProviderWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QFileIconProviderWrapper::cpgf__register(_d);
    
    buildMetaClass_QFileIconProvider<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
