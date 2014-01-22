// Auto generated file, don't modify.

#ifndef __META_QTGUI_QSURFACE_H
#define __META_QTGUI_QSURFACE_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


template <typename D>
void buildMetaClass_QSurface(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("surfaceClass", &D::ClassType::surfaceClass);
    _d.CPGF_MD_TEMPLATE _method("format", &D::ClassType::format);
    _d.CPGF_MD_TEMPLATE _method("surfaceType", &D::ClassType::surfaceType);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SurfaceClass>("SurfaceClass")
        ._element("Window", D::ClassType::Window)
        ._element("Offscreen", D::ClassType::Offscreen)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SurfaceType>("SurfaceType")
        ._element("RasterSurface", D::ClassType::RasterSurface)
        ._element("OpenGLSurface", D::ClassType::OpenGLSurface)
    ;
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
