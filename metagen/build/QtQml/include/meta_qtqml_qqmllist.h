// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQMLLIST_H
#define CPGF_META_QTQML_QQMLLIST_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qqmllist(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtQml_32")
    ;
}


template <typename D, typename T>
void buildMetaClass_QQmlListProperty(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *, QList< T * > &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *, void *, typename QQmlListProperty<T >::AppendFunction, typename QQmlListProperty<T >::CountFunction, typename QQmlListProperty<T >::AtFunction, typename QQmlListProperty<T >::ClearFunction)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *, void *, typename QQmlListProperty<T >::CountFunction, typename QQmlListProperty<T >::AtFunction)>();
    _d.CPGF_MD_TEMPLATE _field("object", &D::ClassType::object);
    _d.CPGF_MD_TEMPLATE _field("data", &D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _field("append", &D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _field("count", &D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _field("at", &D::ClassType::at);
    _d.CPGF_MD_TEMPLATE _field("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _field("dummy1", &D::ClassType::dummy1);
    _d.CPGF_MD_TEMPLATE _field("dummy2", &D::ClassType::dummy2);
}


inline QQmlListReference & opErAToRWrapper_QQmlListReference__opAssign(QQmlListReference * self, const QQmlListReference & __arg0) {
    return (*self) = __arg0;
}


template <typename D>
void buildMetaClass_QQmlListReference(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *, const char *, QQmlEngine *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QQmlListReference &)>();
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("object", &D::ClassType::object);
    _d.CPGF_MD_TEMPLATE _method("listElementType", &D::ClassType::listElementType);
    _d.CPGF_MD_TEMPLATE _method("canAppend", &D::ClassType::canAppend);
    _d.CPGF_MD_TEMPLATE _method("canAt", &D::ClassType::canAt);
    _d.CPGF_MD_TEMPLATE _method("canClear", &D::ClassType::canClear);
    _d.CPGF_MD_TEMPLATE _method("canCount", &D::ClassType::canCount);
    _d.CPGF_MD_TEMPLATE _method("isManipulable", &D::ClassType::isManipulable);
    _d.CPGF_MD_TEMPLATE _method("isReadable", &D::ClassType::isReadable);
    _d.CPGF_MD_TEMPLATE _method("append", &D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("at", &D::ClassType::at);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("count", &D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _operator<QQmlListReference & (*)(cpgf::GMetaSelf, const QQmlListReference &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QQmlListReference & (*) (QQmlListReference *, const QQmlListReference &))&opErAToRWrapper_QQmlListReference__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
