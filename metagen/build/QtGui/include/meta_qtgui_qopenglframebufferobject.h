// Auto generated file, don't modify.

#ifndef __META_QTGUI_QOPENGLFRAMEBUFFEROBJECT_H
#define __META_QTGUI_QOPENGLFRAMEBUFFEROBJECT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QOpenGLFramebufferObject(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QSize &, GLenum)>()
        ._default(copyVariantFromCopyable(GL_TEXTURE_2D))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int, GLenum)>()
        ._default(copyVariantFromCopyable(GL_TEXTURE_2D))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QSize &, QOpenGLFramebufferObject::Attachment, GLenum, GLenum)>()
        ._default(copyVariantFromCopyable(GL_RGBA8))
        ._default(copyVariantFromCopyable(GL_TEXTURE_2D))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int, QOpenGLFramebufferObject::Attachment, GLenum, GLenum)>()
        ._default(copyVariantFromCopyable(GL_RGBA8))
        ._default(copyVariantFromCopyable(GL_TEXTURE_2D))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QSize &, const QOpenGLFramebufferObjectFormat &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int, const QOpenGLFramebufferObjectFormat &)>();
    _d.CPGF_MD_TEMPLATE _method("format", &D::ClassType::format);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("isBound", &D::ClassType::isBound);
    _d.CPGF_MD_TEMPLATE _method("bind", &D::ClassType::bind);
    _d.CPGF_MD_TEMPLATE _method("release", &D::ClassType::release);
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("height", &D::ClassType::height);
    _d.CPGF_MD_TEMPLATE _method("texture", &D::ClassType::texture);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("toImage", &D::ClassType::toImage, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("attachment", &D::ClassType::attachment);
    _d.CPGF_MD_TEMPLATE _method("setAttachment", &D::ClassType::setAttachment);
    _d.CPGF_MD_TEMPLATE _method("handle", &D::ClassType::handle);
    _d.CPGF_MD_TEMPLATE _method("bindDefault", &D::ClassType::bindDefault);
    _d.CPGF_MD_TEMPLATE _method("hasOpenGLFramebufferObjects", &D::ClassType::hasOpenGLFramebufferObjects);
    _d.CPGF_MD_TEMPLATE _method("hasOpenGLFramebufferBlit", &D::ClassType::hasOpenGLFramebufferBlit);
    _d.CPGF_MD_TEMPLATE _method("blitFramebuffer", (void (*) (QOpenGLFramebufferObject *, const QRect &, QOpenGLFramebufferObject *, const QRect &, GLbitfield, GLenum))&D::ClassType::blitFramebuffer)
        ._default(copyVariantFromCopyable(GL_NEAREST))
        ._default(copyVariantFromCopyable(GL_COLOR_BUFFER_BIT))
    ;
    _d.CPGF_MD_TEMPLATE _method("blitFramebuffer", (void (*) (QOpenGLFramebufferObject *, QOpenGLFramebufferObject *, GLbitfield, GLenum))&D::ClassType::blitFramebuffer)
        ._default(copyVariantFromCopyable(GL_NEAREST))
        ._default(copyVariantFromCopyable(GL_COLOR_BUFFER_BIT))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Attachment>("Attachment")
        ._element("NoAttachment", D::ClassType::NoAttachment)
        ._element("CombinedDepthStencil", D::ClassType::CombinedDepthStencil)
        ._element("Depth", D::ClassType::Depth)
    ;
}


inline QOpenGLFramebufferObjectFormat & opErAToRWrapper_QOpenGLFramebufferObjectFormat__opAssign(QOpenGLFramebufferObjectFormat * self, const QOpenGLFramebufferObjectFormat & other) {
    return (*self) = other;
}
inline bool opErAToRWrapper_QOpenGLFramebufferObjectFormat__opEqual(const QOpenGLFramebufferObjectFormat * self, const QOpenGLFramebufferObjectFormat & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QOpenGLFramebufferObjectFormat__opNotEqual(const QOpenGLFramebufferObjectFormat * self, const QOpenGLFramebufferObjectFormat & other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QOpenGLFramebufferObjectFormat(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QOpenGLFramebufferObjectFormat &)>();
    _d.CPGF_MD_TEMPLATE _method("setSamples", &D::ClassType::setSamples);
    _d.CPGF_MD_TEMPLATE _method("samples", &D::ClassType::samples);
    _d.CPGF_MD_TEMPLATE _method("setMipmap", &D::ClassType::setMipmap);
    _d.CPGF_MD_TEMPLATE _method("mipmap", &D::ClassType::mipmap);
    _d.CPGF_MD_TEMPLATE _method("setAttachment", &D::ClassType::setAttachment);
    _d.CPGF_MD_TEMPLATE _method("attachment", &D::ClassType::attachment);
    _d.CPGF_MD_TEMPLATE _method("setTextureTarget", &D::ClassType::setTextureTarget);
    _d.CPGF_MD_TEMPLATE _method("textureTarget", &D::ClassType::textureTarget);
    _d.CPGF_MD_TEMPLATE _method("setInternalTextureFormat", &D::ClassType::setInternalTextureFormat);
    _d.CPGF_MD_TEMPLATE _method("internalTextureFormat", &D::ClassType::internalTextureFormat);
    _d.CPGF_MD_TEMPLATE _operator<QOpenGLFramebufferObjectFormat & (*)(cpgf::GMetaSelf, const QOpenGLFramebufferObjectFormat &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QOpenGLFramebufferObjectFormat & (*) (QOpenGLFramebufferObjectFormat *, const QOpenGLFramebufferObjectFormat &))&opErAToRWrapper_QOpenGLFramebufferObjectFormat__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QOpenGLFramebufferObjectFormat &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QOpenGLFramebufferObjectFormat *, const QOpenGLFramebufferObjectFormat &))&opErAToRWrapper_QOpenGLFramebufferObjectFormat__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QOpenGLFramebufferObjectFormat &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QOpenGLFramebufferObjectFormat *, const QOpenGLFramebufferObjectFormat &))&opErAToRWrapper_QOpenGLFramebufferObjectFormat__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
