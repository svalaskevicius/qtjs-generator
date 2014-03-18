// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QPIXMAPCACHE_H
#define CPGF_META_QTGUI_QPIXMAPCACHE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


inline bool opErAToRWrapper_QPixmapCache_Key__opEqual(const QPixmapCache::Key * self, const QPixmapCache::Key& key) {
    return (*self) == key;
}
inline bool opErAToRWrapper_QPixmapCache_Key__opNotEqual(const QPixmapCache::Key * self, const QPixmapCache::Key& key) {
    return (*self) != key;
}
inline QPixmapCache::Key& opErAToRWrapper_QPixmapCache_Key__opAssign(QPixmapCache::Key * self, const QPixmapCache::Key& other) {
    return (*self) = other;
}


template <typename D>
void buildMetaClass_QPixmapCache(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("cacheLimit", &D::ClassType::cacheLimit);
    _d.CPGF_MD_TEMPLATE _method("setCacheLimit", &D::ClassType::setCacheLimit);
    _d.CPGF_MD_TEMPLATE _method("find", (QPixmap * (*) (const QString &))&D::ClassType::find, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("find", (bool (*) (const QString &, QPixmap &))&D::ClassType::find, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleParamNoncopyable<1> >());
    _d.CPGF_MD_TEMPLATE _method("find", (bool (*) (const QString &, QPixmap *))&D::ClassType::find, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("find", (bool (*) (const QPixmapCache::Key&, QPixmap *))&D::ClassType::find);
    _d.CPGF_MD_TEMPLATE _method("insert", (bool (*) (const QString &, const QPixmap &))&D::ClassType::insert, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("insert", (QPixmapCache::Key (*) (const QPixmap &))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("replace", &D::ClassType::replace);
    _d.CPGF_MD_TEMPLATE _method("remove", (void (*) (const QString &))&D::ClassType::remove, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("remove", (void (*) (const QPixmapCache::Key&))&D::ClassType::remove);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    {
        GDefineMetaClass<QPixmapCache::Key> _nd = GDefineMetaClass<QPixmapCache::Key>::declare("Key");
        _nd.CPGF_MD_TEMPLATE _constructor<void * ()>();
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const QPixmapCache::Key&)>();
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QPixmapCache::Key&)>(mopHolder == mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QPixmapCache::Key *, const QPixmapCache::Key&))&opErAToRWrapper_QPixmapCache_Key__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QPixmapCache::Key&)>(mopHolder != mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QPixmapCache::Key *, const QPixmapCache::Key&))&opErAToRWrapper_QPixmapCache_Key__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QPixmapCache::Key& (*)(cpgf::GMetaSelf, const QPixmapCache::Key&)>(mopHolder = mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAssign", (QPixmapCache::Key& (*) (QPixmapCache::Key *, const QPixmapCache::Key&))&opErAToRWrapper_QPixmapCache_Key__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
