// Auto generated file, don't modify.

#ifndef __META_QTGUI_QCLIPBOARD_H
#define __META_QTGUI_QCLIPBOARD_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QClipboard(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear)
        ._default(copyVariantFromCopyable(QClipboard::Clipboard))
    ;
    _d.CPGF_MD_TEMPLATE _method("supportsSelection", &D::ClassType::supportsSelection);
    _d.CPGF_MD_TEMPLATE _method("supportsFindBuffer", &D::ClassType::supportsFindBuffer);
    _d.CPGF_MD_TEMPLATE _method("ownsSelection", &D::ClassType::ownsSelection);
    _d.CPGF_MD_TEMPLATE _method("ownsClipboard", &D::ClassType::ownsClipboard);
    _d.CPGF_MD_TEMPLATE _method("ownsFindBuffer", &D::ClassType::ownsFindBuffer);
    _d.CPGF_MD_TEMPLATE _method("text", (QString (D::ClassType::*) (QClipboard::Mode) const)&D::ClassType::text)
        ._default(copyVariantFromCopyable(QClipboard::Clipboard))
    ;
    _d.CPGF_MD_TEMPLATE _method("text", (QString (D::ClassType::*) (QString &, QClipboard::Mode) const)&D::ClassType::text)
        ._default(copyVariantFromCopyable(QClipboard::Clipboard))
    ;
    _d.CPGF_MD_TEMPLATE _method("setText", &D::ClassType::setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QClipboard::Clipboard))
    ;
    _d.CPGF_MD_TEMPLATE _method("mimeData", &D::ClassType::mimeData)
        ._default(copyVariantFromCopyable(QClipboard::Clipboard))
    ;
    _d.CPGF_MD_TEMPLATE _method("setMimeData", &D::ClassType::setMimeData)
        ._default(copyVariantFromCopyable(QClipboard::Clipboard))
    ;
    _d.CPGF_MD_TEMPLATE _method("image", &D::ClassType::image, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(QClipboard::Clipboard))
    ;
    _d.CPGF_MD_TEMPLATE _method("pixmap", &D::ClassType::pixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(QClipboard::Clipboard))
    ;
    _d.CPGF_MD_TEMPLATE _method("setImage", &D::ClassType::setImage)
        ._default(copyVariantFromCopyable(QClipboard::Clipboard))
    ;
    _d.CPGF_MD_TEMPLATE _method("setPixmap", &D::ClassType::setPixmap)
        ._default(copyVariantFromCopyable(QClipboard::Clipboard))
    ;
    _d.CPGF_MD_TEMPLATE _method("changed", &D::ClassType::changed);
    _d.CPGF_MD_TEMPLATE _method("selectionChanged", &D::ClassType::selectionChanged);
    _d.CPGF_MD_TEMPLATE _method("findBufferChanged", &D::ClassType::findBufferChanged);
    _d.CPGF_MD_TEMPLATE _method("dataChanged", &D::ClassType::dataChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Mode>("Mode")
        ._element("Clipboard", D::ClassType::Clipboard)
        ._element("Selection", D::ClassType::Selection)
        ._element("FindBuffer", D::ClassType::FindBuffer)
        ._element("LastMode", D::ClassType::LastMode)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
