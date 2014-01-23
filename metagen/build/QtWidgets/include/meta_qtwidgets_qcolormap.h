// Auto generated file, don't modify.

#ifndef __META_QTWIDGETS_QCOLORMAP_H
#define __META_QTWIDGETS_QCOLORMAP_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


inline QColormap & opErAToRWrapper_QColormap__opAssign(QColormap * self, const QColormap & colormap) {
    return (*self) = colormap;
}


template <typename D>
void buildMetaClass_QColormap(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QColormap &)>();
    _d.CPGF_MD_TEMPLATE _method("initialize", &D::ClassType::initialize);
    _d.CPGF_MD_TEMPLATE _method("cleanup", &D::ClassType::cleanup);
    _d.CPGF_MD_TEMPLATE _method("instance", &D::ClassType::instance)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("mode", &D::ClassType::mode);
    _d.CPGF_MD_TEMPLATE _method("depth", &D::ClassType::depth);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("pixel", &D::ClassType::pixel, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("colorAt", &D::ClassType::colorAt);
    _d.CPGF_MD_TEMPLATE _method("colormap", &D::ClassType::colormap);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Mode>("Mode")
        ._element("Direct", D::ClassType::Direct)
        ._element("Indexed", D::ClassType::Indexed)
        ._element("Gray", D::ClassType::Gray)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QColormap & (*)(cpgf::GMetaSelf, const QColormap &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QColormap & (*) (QColormap *, const QColormap &))&opErAToRWrapper_QColormap__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
