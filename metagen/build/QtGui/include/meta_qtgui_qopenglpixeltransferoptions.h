// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QOPENGLPIXELTRANSFEROPTIONS_H
#define CPGF_META_QTGUI_QOPENGLPIXELTRANSFEROPTIONS_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


inline QOpenGLPixelTransferOptions & opErAToRWrapper_QOpenGLPixelTransferOptions__opAssign(QOpenGLPixelTransferOptions * self, const QOpenGLPixelTransferOptions & __arg0) {
    return (*self) = __arg0;
}


template <typename D>
void buildMetaClass_QOpenGLPixelTransferOptions(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QOpenGLPixelTransferOptions &)>();
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("setAlignment", &D::ClassType::setAlignment);
    _d.CPGF_MD_TEMPLATE _method("alignment", &D::ClassType::alignment);
    _d.CPGF_MD_TEMPLATE _method("setSkipImages", &D::ClassType::setSkipImages);
    _d.CPGF_MD_TEMPLATE _method("skipImages", &D::ClassType::skipImages);
    _d.CPGF_MD_TEMPLATE _method("setSkipRows", &D::ClassType::setSkipRows);
    _d.CPGF_MD_TEMPLATE _method("skipRows", &D::ClassType::skipRows);
    _d.CPGF_MD_TEMPLATE _method("setSkipPixels", &D::ClassType::setSkipPixels);
    _d.CPGF_MD_TEMPLATE _method("skipPixels", &D::ClassType::skipPixels);
    _d.CPGF_MD_TEMPLATE _method("setImageHeight", &D::ClassType::setImageHeight);
    _d.CPGF_MD_TEMPLATE _method("imageHeight", &D::ClassType::imageHeight);
    _d.CPGF_MD_TEMPLATE _method("setRowLength", &D::ClassType::setRowLength);
    _d.CPGF_MD_TEMPLATE _method("rowLength", &D::ClassType::rowLength);
    _d.CPGF_MD_TEMPLATE _method("setLeastSignificantByteFirst", &D::ClassType::setLeastSignificantByteFirst);
    _d.CPGF_MD_TEMPLATE _method("isLeastSignificantBitFirst", &D::ClassType::isLeastSignificantBitFirst);
    _d.CPGF_MD_TEMPLATE _method("setSwapBytesEnabled", &D::ClassType::setSwapBytesEnabled);
    _d.CPGF_MD_TEMPLATE _method("isSwapBytesEnabled", &D::ClassType::isSwapBytesEnabled);
    _d.CPGF_MD_TEMPLATE _operator<QOpenGLPixelTransferOptions & (*)(cpgf::GMetaSelf, const QOpenGLPixelTransferOptions &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QOpenGLPixelTransferOptions & (*) (QOpenGLPixelTransferOptions *, const QOpenGLPixelTransferOptions &))&opErAToRWrapper_QOpenGLPixelTransferOptions__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
