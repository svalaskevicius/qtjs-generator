// Auto generated file, don't modify.

#ifndef __META_QTGUI_QSURFACEFORMAT_H
#define __META_QTGUI_QSURFACEFORMAT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qsurfaceformat(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QSurfaceFormat &, const QSurfaceFormat &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QSurfaceFormat &, const QSurfaceFormat &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QSurfaceFormat &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline QSurfaceFormat & opErAToRWrapper_QSurfaceFormat__opAssign(QSurfaceFormat * self, const QSurfaceFormat & other) {
    return (*self) = other;
}


template <typename D>
void buildMetaClass_QSurfaceFormat(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QSurfaceFormat::FormatOptions)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QSurfaceFormat &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setDepthBufferSize", &D::ClassType::setDepthBufferSize);
    _d.CPGF_MD_TEMPLATE _method("depthBufferSize", &D::ClassType::depthBufferSize);
    _d.CPGF_MD_TEMPLATE _method("setStencilBufferSize", &D::ClassType::setStencilBufferSize);
    _d.CPGF_MD_TEMPLATE _method("stencilBufferSize", &D::ClassType::stencilBufferSize);
    _d.CPGF_MD_TEMPLATE _method("setRedBufferSize", &D::ClassType::setRedBufferSize);
    _d.CPGF_MD_TEMPLATE _method("redBufferSize", &D::ClassType::redBufferSize);
    _d.CPGF_MD_TEMPLATE _method("setGreenBufferSize", &D::ClassType::setGreenBufferSize);
    _d.CPGF_MD_TEMPLATE _method("greenBufferSize", &D::ClassType::greenBufferSize);
    _d.CPGF_MD_TEMPLATE _method("setBlueBufferSize", &D::ClassType::setBlueBufferSize);
    _d.CPGF_MD_TEMPLATE _method("blueBufferSize", &D::ClassType::blueBufferSize);
    _d.CPGF_MD_TEMPLATE _method("setAlphaBufferSize", &D::ClassType::setAlphaBufferSize);
    _d.CPGF_MD_TEMPLATE _method("alphaBufferSize", &D::ClassType::alphaBufferSize);
    _d.CPGF_MD_TEMPLATE _method("setSamples", &D::ClassType::setSamples);
    _d.CPGF_MD_TEMPLATE _method("samples", &D::ClassType::samples);
    _d.CPGF_MD_TEMPLATE _method("setSwapBehavior", &D::ClassType::setSwapBehavior);
    _d.CPGF_MD_TEMPLATE _method("swapBehavior", &D::ClassType::swapBehavior);
    _d.CPGF_MD_TEMPLATE _method("hasAlpha", &D::ClassType::hasAlpha);
    _d.CPGF_MD_TEMPLATE _method("setProfile", &D::ClassType::setProfile);
    _d.CPGF_MD_TEMPLATE _method("profile", &D::ClassType::profile);
    _d.CPGF_MD_TEMPLATE _method("setRenderableType", &D::ClassType::setRenderableType);
    _d.CPGF_MD_TEMPLATE _method("renderableType", &D::ClassType::renderableType);
    _d.CPGF_MD_TEMPLATE _method("setMajorVersion", &D::ClassType::setMajorVersion);
    _d.CPGF_MD_TEMPLATE _method("majorVersion", &D::ClassType::majorVersion);
    _d.CPGF_MD_TEMPLATE _method("setMinorVersion", &D::ClassType::setMinorVersion);
    _d.CPGF_MD_TEMPLATE _method("minorVersion", &D::ClassType::minorVersion);
    _d.CPGF_MD_TEMPLATE _method("version", &D::ClassType::version);
    _d.CPGF_MD_TEMPLATE _method("setVersion", &D::ClassType::setVersion);
    _d.CPGF_MD_TEMPLATE _method("stereo", &D::ClassType::stereo);
    _d.CPGF_MD_TEMPLATE _method("setStereo", &D::ClassType::setStereo);
    _d.CPGF_MD_TEMPLATE _method("setOption", &D::ClassType::setOption);
    _d.CPGF_MD_TEMPLATE _method("testOption", &D::ClassType::testOption);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::FormatOption>("FormatOption")
        ._element("StereoBuffers", D::ClassType::StereoBuffers)
        ._element("DebugContext", D::ClassType::DebugContext)
        ._element("DeprecatedFunctions", D::ClassType::DeprecatedFunctions)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SwapBehavior>("SwapBehavior")
        ._element("DefaultSwapBehavior", D::ClassType::DefaultSwapBehavior)
        ._element("SingleBuffer", D::ClassType::SingleBuffer)
        ._element("DoubleBuffer", D::ClassType::DoubleBuffer)
        ._element("TripleBuffer", D::ClassType::TripleBuffer)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::RenderableType>("RenderableType")
        ._element("DefaultRenderableType", D::ClassType::DefaultRenderableType)
        ._element("OpenGL", D::ClassType::OpenGL)
        ._element("OpenGLES", D::ClassType::OpenGLES)
        ._element("OpenVG", D::ClassType::OpenVG)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::OpenGLContextProfile>("OpenGLContextProfile")
        ._element("NoProfile", D::ClassType::NoProfile)
        ._element("CoreProfile", D::ClassType::CoreProfile)
        ._element("CompatibilityProfile", D::ClassType::CompatibilityProfile)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QSurfaceFormat & (*)(cpgf::GMetaSelf, const QSurfaceFormat &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QSurfaceFormat & (*) (QSurfaceFormat *, const QSurfaceFormat &))&opErAToRWrapper_QSurfaceFormat__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    {
        GDefineMetaClass<QFlags<typename QSurfaceFormat::FormatOption > > _t_d = GDefineMetaClass<QFlags<typename QSurfaceFormat::FormatOption > >::lazyDeclare("FormatOptions", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QSurfaceFormat::FormatOption > >, typename QSurfaceFormat::FormatOption >);
        _d._class(_t_d);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
