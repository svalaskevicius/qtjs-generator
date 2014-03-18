// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QARRAYDATA_H
#define CPGF_META_QTCORE_QARRAYDATA_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace QtPrivate;


namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qarraydata(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


template <typename D, class T, size_t N>
void buildMetaClass_QStaticArrayData(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("header", &D::ClassType::header);
    _d.CPGF_MD_TEMPLATE _field("data", &D::ClassType::data);
}


template <typename D, class T>
void buildMetaClass_QTypedArrayData(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("data", (T * (D::ClassType::*) ())&D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("data", (const T * (D::ClassType::*) () const)&D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("begin", (typename QTypedArrayData<T >::iterator (D::ClassType::*) (typename QTypedArrayData<T >::iterator))&D::ClassType::begin)
        ._default(copyVariantFromCopyable(QTypedArrayData<T>::iterator()))
    ;
    _d.CPGF_MD_TEMPLATE _method("end", (typename QTypedArrayData<T >::iterator (D::ClassType::*) (typename QTypedArrayData<T >::iterator))&D::ClassType::end)
        ._default(copyVariantFromCopyable(QTypedArrayData<T>::iterator()))
    ;
    _d.CPGF_MD_TEMPLATE _method("begin", (typename QTypedArrayData<T >::const_iterator (D::ClassType::*) (typename QTypedArrayData<T >::const_iterator) const)&D::ClassType::begin)
        ._default(copyVariantFromCopyable(QTypedArrayData<T>::const_iterator()))
    ;
    _d.CPGF_MD_TEMPLATE _method("end", (typename QTypedArrayData<T >::const_iterator (D::ClassType::*) (typename QTypedArrayData<T >::const_iterator) const)&D::ClassType::end)
        ._default(copyVariantFromCopyable(QTypedArrayData<T>::const_iterator()))
    ;
    _d.CPGF_MD_TEMPLATE _method("constBegin", &D::ClassType::constBegin)
        ._default(copyVariantFromCopyable(QTypedArrayData<T>::const_iterator()))
    ;
    _d.CPGF_MD_TEMPLATE _method("constEnd", &D::ClassType::constEnd)
        ._default(copyVariantFromCopyable(QTypedArrayData<T>::const_iterator()))
    ;
    _d.CPGF_MD_TEMPLATE _method("allocate", &D::ClassType::allocate)
        ._default(copyVariantFromCopyable(QTypedArrayData<T>::null))
    ;
    _d.CPGF_MD_TEMPLATE _method("deallocate", &D::ClassType::deallocate);
    _d.CPGF_MD_TEMPLATE _method("fromRawData", &D::ClassType::fromRawData)
        ._default(copyVariantFromCopyable(QTypedArrayData<T>::null))
    ;
    _d.CPGF_MD_TEMPLATE _method("sharedNull", &D::ClassType::sharedNull);
    _d.CPGF_MD_TEMPLATE _method("sharedEmpty", &D::ClassType::sharedEmpty);
    _d.CPGF_MD_TEMPLATE _method("unsharableEmpty", &D::ClassType::unsharableEmpty);
    {
        GDefineMetaClass<typename QTypedArrayData<T >::AlignmentDummy> _nd = GDefineMetaClass<typename QTypedArrayData<T >::AlignmentDummy>::declare("AlignmentDummy");
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
