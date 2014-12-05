// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQML_H
#define CPGF_META_QTQML_QQML_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace QtQml;


namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qqml(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qmlExecuteDeferred", (void (*) (QObject *))&qmlExecuteDeferred);
    _d.CPGF_MD_TEMPLATE _method("qmlContext", (QQmlContext * (*) (const QObject *))&qmlContext);
    _d.CPGF_MD_TEMPLATE _method("qmlEngine", (QQmlEngine * (*) (const QObject *))&qmlEngine);
    _d.CPGF_MD_TEMPLATE _method("qmlAttachedPropertiesObjectById", (QObject * (*) (int, const QObject *, bool))&qmlAttachedPropertiesObjectById)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("qmlAttachedPropertiesObject", (QObject * (*) (int *, const QObject *, const QMetaObject *, bool))&qmlAttachedPropertiesObject);
    _d.CPGF_MD_TEMPLATE _method("qmlClearTypeRegistrations", (void (*) ())&qmlClearTypeRegistrations);
    _d.CPGF_MD_TEMPLATE _method("qmlRegisterTypeNotAvailable", (int (*) (const char *, int, int, const char *, const QString &))&qmlRegisterTypeNotAvailable, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<4> >());
    _d.CPGF_MD_TEMPLATE _method("qmlProtectModule", (bool (*) (const char *, int))&qmlProtectModule);
    _d.CPGF_MD_TEMPLATE _method("qmlRegisterBaseTypes", (void (*) (const char *, int, int))&qmlRegisterBaseTypes);
    _d.CPGF_MD_TEMPLATE _method("qmlRegisterSingletonType", (int (*) (const char *, int, int, const char *, QJSValue(*)(QQmlEngine *, QJSEngine *)))&qmlRegisterSingletonType);
    _d.CPGF_MD_TEMPLATE _method("qmlRegisterSingletonType", (int (*) (const QUrl &, const char *, int, int, const char *))&qmlRegisterSingletonType, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("qmlRegisterType", (int (*) (const QUrl &, const char *, int, int, const char *))&qmlRegisterType, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtQml_48")
        ._element("QML_HAS_ATTACHED_PROPERTIES", QML_HAS_ATTACHED_PROPERTIES)
    ;
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtQml_49")
        ._element("QmlCurrentSingletonTypeRegistrationVersion", QmlCurrentSingletonTypeRegistrationVersion)
    ;
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtQml_50")
        ._element("QML_VERSION", QML_VERSION)
        ._element("QML_VERSION_STR", QML_VERSION_STR)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
