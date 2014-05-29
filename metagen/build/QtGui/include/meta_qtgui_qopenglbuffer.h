// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QOPENGLBUFFER_H
#define CPGF_META_QTGUI_QOPENGLBUFFER_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


inline QOpenGLBuffer & opErAToRWrapper_QOpenGLBuffer__opAssign(QOpenGLBuffer * self, const QOpenGLBuffer & other) {
    return (*self) = other;
}


template <typename D>
void buildMetaClass_QOpenGLBuffer(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QOpenGLBuffer::Type)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QOpenGLBuffer &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("usagePattern", &D::ClassType::usagePattern);
    _d.CPGF_MD_TEMPLATE _method("setUsagePattern", &D::ClassType::setUsagePattern);
    _d.CPGF_MD_TEMPLATE _method("create", &D::ClassType::create);
    _d.CPGF_MD_TEMPLATE _method("isCreated", &D::ClassType::isCreated);
    _d.CPGF_MD_TEMPLATE _method("destroy", &D::ClassType::destroy);
    _d.CPGF_MD_TEMPLATE _method("bind", &D::ClassType::bind);
    _d.CPGF_MD_TEMPLATE _method("release", (void (D::ClassType::*) ())&D::ClassType::release);
    _d.CPGF_MD_TEMPLATE _method("bufferId", &D::ClassType::bufferId);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("read", &D::ClassType::read);
    _d.CPGF_MD_TEMPLATE _method("write", &D::ClassType::write);
    _d.CPGF_MD_TEMPLATE _method("allocate", (void (D::ClassType::*) (const void *, int))&D::ClassType::allocate);
    _d.CPGF_MD_TEMPLATE _method("allocate", (void (D::ClassType::*) (int))&D::ClassType::allocate);
    _d.CPGF_MD_TEMPLATE _method("map", &D::ClassType::map);
    _d.CPGF_MD_TEMPLATE _method("unmap", &D::ClassType::unmap);
    _d.CPGF_MD_TEMPLATE _method("release", (void (*) (QOpenGLBuffer::Type))&D::ClassType::release);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Type>("Type")
        ._element("VertexBuffer", D::ClassType::VertexBuffer)
        ._element("IndexBuffer", D::ClassType::IndexBuffer)
        ._element("PixelPackBuffer", D::ClassType::PixelPackBuffer)
        ._element("PixelUnpackBuffer", D::ClassType::PixelUnpackBuffer)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::UsagePattern>("UsagePattern")
        ._element("StreamDraw", D::ClassType::StreamDraw)
        ._element("StreamRead", D::ClassType::StreamRead)
        ._element("StreamCopy", D::ClassType::StreamCopy)
        ._element("StaticDraw", D::ClassType::StaticDraw)
        ._element("StaticRead", D::ClassType::StaticRead)
        ._element("StaticCopy", D::ClassType::StaticCopy)
        ._element("DynamicDraw", D::ClassType::DynamicDraw)
        ._element("DynamicRead", D::ClassType::DynamicRead)
        ._element("DynamicCopy", D::ClassType::DynamicCopy)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Access>("Access")
        ._element("ReadOnly", D::ClassType::ReadOnly)
        ._element("WriteOnly", D::ClassType::WriteOnly)
        ._element("ReadWrite", D::ClassType::ReadWrite)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QOpenGLBuffer & (*)(cpgf::GMetaSelf, const QOpenGLBuffer &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QOpenGLBuffer & (*) (QOpenGLBuffer *, const QOpenGLBuffer &))&opErAToRWrapper_QOpenGLBuffer__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
