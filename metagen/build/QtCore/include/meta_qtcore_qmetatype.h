// Auto generated file, don't modify.

#ifndef __META_QTCORE_QMETATYPE_H
#define __META_QTCORE_QMETATYPE_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace QtPrivate;
using namespace QtMetaTypePrivate;


namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qmetatype(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
}


template <typename D, typename T>
void buildMetaClass_BuiltInComparatorFunction(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("lessThan", &D::ClassType::lessThan);
    _d.CPGF_MD_TEMPLATE _method("equals", &D::ClassType::equals);
    _d.CPGF_MD_TEMPLATE _method("destroy", &D::ClassType::destroy);
}


template <typename D, typename T>
void buildMetaClass_BuiltInDebugStreamFunction(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("stream", &D::ClassType::stream);
    _d.CPGF_MD_TEMPLATE _method("destroy", &D::ClassType::destroy);
}


template <typename D, typename T, typename Category>
void buildMetaClass_CapabilitiesImpl(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
}


template <typename D, typename T>
void buildMetaClass_ContainerAPI(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
}


template <typename D, typename From, typename To, typename UnaryFunction>
void buildMetaClass_ConverterFunctor(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (UnaryFunction)>();
    _d.CPGF_MD_TEMPLATE _field("m_function", &D::ClassType::m_function);
    _d.CPGF_MD_TEMPLATE _method("convert", &D::ClassType::convert);
}


template <typename D, typename From, typename To>
void buildMetaClass_ConverterMemberFunction(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (To(From::*)() const)>();
    _d.CPGF_MD_TEMPLATE _field("m_function", &D::ClassType::m_function);
    _d.CPGF_MD_TEMPLATE _method("convert", &D::ClassType::convert);
}


template <typename D, typename From, typename To>
void buildMetaClass_ConverterMemberFunctionOk(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (To(From::*)(bool *) const)>();
    _d.CPGF_MD_TEMPLATE _field("m_function", &D::ClassType::m_function);
    _d.CPGF_MD_TEMPLATE _method("convert", &D::ClassType::convert);
}


template <typename D, typename T>
void buildMetaClass_IsAssociativeContainer(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtCore_1")
        ._element("Value", D::ClassType::Value)
    ;
}


template <typename D, typename T>
void buildMetaClass_IsPair(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("registerConverter", &D::ClassType::registerConverter);
}


template <typename D, typename T>
void buildMetaClass_IsPointerToTypeDerivedFromQObject(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtCore_1")
        ._element("Value", D::ClassType::Value)
    ;
}


template <typename D, typename T>
void buildMetaClass_IsSequentialContainer(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtCore_1")
        ._element("Value", D::ClassType::Value)
    ;
}


template <typename D, typename T>
void buildMetaClass_IsSharedPointerToTypeDerivedFromQObject(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtCore_1")
        ._element("Value", D::ClassType::Value)
    ;
}


template <typename D, typename T>
void buildMetaClass_IsTrackingPointerToTypeDerivedFromQObject(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtCore_1")
        ._element("Value", D::ClassType::Value)
    ;
}


template <typename D, typename T>
void buildMetaClass_IsWeakPointerToTypeDerivedFromQObject(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtCore_1")
        ._element("Value", D::ClassType::Value)
    ;
}


template <typename D, typename const_iterator>
void buildMetaClass_IteratorOwner(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("assign", &D::ClassType::assign);
    _d.CPGF_MD_TEMPLATE _method("advance", &D::ClassType::advance);
    _d.CPGF_MD_TEMPLATE _method("destroy", &D::ClassType::destroy);
    _d.CPGF_MD_TEMPLATE _method("getData", (const void * (*) (void *const *))&D::ClassType::getData);
    _d.CPGF_MD_TEMPLATE _method("getData", (const void * (*) (const_iterator))&D::ClassType::getData);
}


template <typename D, typename T, bool defined>
void buildMetaClass_MetaTypeDefinedHelper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::DefinedType>("DefinedType")
        ._element("Defined", D::ClassType::Defined)
    ;
}


template <typename D, typename T>
void buildMetaClass_MetaTypePairHelper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
}


template <typename D, typename , typename >
void buildMetaClass_MetaTypeSmartPointerHelper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("registerConverter", &D::ClassType::registerConverter);
}


template <typename From>
inline QAssociativeIterableImpl opErAToRWrapper_QAssociativeIterableConvertFunctor__opFunction(const QAssociativeIterableConvertFunctor<From > * self, const From & f) {
    return (*self)(f);
}


template <typename D, typename From>
void buildMetaClass_QAssociativeIterableConvertFunctor(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QAssociativeIterableImpl (*)(const From &)>(mopHolder(mopHolder));
    _d.CPGF_MD_TEMPLATE _method("_opFunction", (QAssociativeIterableImpl (*) (const QAssociativeIterableConvertFunctor<From > *, const From &))&opErAToRWrapper_QAssociativeIterableConvertFunctor__opFunction<From>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


template <typename D>
void buildMetaClass_QAssociativeIterableImpl(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("_iterable", &D::ClassType::_iterable);
    _d.CPGF_MD_TEMPLATE _field("_iterator", &D::ClassType::_iterator);
    _d.CPGF_MD_TEMPLATE _field("_metaType_id_key", &D::ClassType::_metaType_id_key);
    _d.CPGF_MD_TEMPLATE _field("_metaType_flags_key", &D::ClassType::_metaType_flags_key);
    _d.CPGF_MD_TEMPLATE _field("_metaType_id_value", &D::ClassType::_metaType_id_value);
    _d.CPGF_MD_TEMPLATE _field("_metaType_flags_value", &D::ClassType::_metaType_flags_value);
    _d.CPGF_MD_TEMPLATE _field("_size", &D::ClassType::_size);
    _d.CPGF_MD_TEMPLATE _field("_find", &D::ClassType::_find);
    _d.CPGF_MD_TEMPLATE _field("_begin", &D::ClassType::_begin);
    _d.CPGF_MD_TEMPLATE _field("_end", &D::ClassType::_end);
    _d.CPGF_MD_TEMPLATE _field("_advance", &D::ClassType::_advance);
    _d.CPGF_MD_TEMPLATE _field("_getKey", &D::ClassType::_getKey);
    _d.CPGF_MD_TEMPLATE _field("_getValue", &D::ClassType::_getValue);
    _d.CPGF_MD_TEMPLATE _field("_destroyIter", &D::ClassType::_destroyIter);
    _d.CPGF_MD_TEMPLATE _field("_equalIter", &D::ClassType::_equalIter);
    _d.CPGF_MD_TEMPLATE _field("_copyIter", &D::ClassType::_copyIter);
    _d.CPGF_MD_TEMPLATE _method("begin", &D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("end", &D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("advance", &D::ClassType::advance);
    _d.CPGF_MD_TEMPLATE _method("destroyIter", &D::ClassType::destroyIter);
    _d.CPGF_MD_TEMPLATE _method("getCurrentKey", &D::ClassType::getCurrentKey);
    _d.CPGF_MD_TEMPLATE _method("getCurrentValue", &D::ClassType::getCurrentValue);
    _d.CPGF_MD_TEMPLATE _method("find", &D::ClassType::find);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
}


template <typename D, typename T, bool Accepted>
void buildMetaClass_QMetaTypeFunctionHelper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("Delete", &D::ClassType::Delete);
    _d.CPGF_MD_TEMPLATE _method("Create", &D::ClassType::Create);
    _d.CPGF_MD_TEMPLATE _method("Destruct", &D::ClassType::Destruct);
    _d.CPGF_MD_TEMPLATE _method("Construct", &D::ClassType::Construct);
    _d.CPGF_MD_TEMPLATE _method("Save", &D::ClassType::Save, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("Load", &D::ClassType::Load, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
}


template <typename D, typename T>
void buildMetaClass_QMetaTypeId(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
}


template <typename D, typename T, bool Defined>
void buildMetaClass_QMetaTypeIdHelper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qt_metatype_id", &D::ClassType::qt_metatype_id);
}


template <typename D, typename T>
void buildMetaClass_QMetaTypeTypeFlags(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalEnum_QtCore_1")
        ._element("Flags", D::ClassType::Flags)
    ;
}


template <typename D, typename From>
void buildMetaClass_QPairVariantInterfaceConvertFunctor(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
}


template <typename D>
void buildMetaClass_QPairVariantInterfaceImpl(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("first", &D::ClassType::first);
    _d.CPGF_MD_TEMPLATE _method("second", &D::ClassType::second);
}


template <typename From>
inline QSequentialIterableImpl opErAToRWrapper_QSequentialIterableConvertFunctor__opFunction(const QSequentialIterableConvertFunctor<From > * self, const From & f) {
    return (*self)(f);
}


template <typename D, typename From>
void buildMetaClass_QSequentialIterableConvertFunctor(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QSequentialIterableImpl (*)(const From &)>(mopHolder(mopHolder));
    _d.CPGF_MD_TEMPLATE _method("_opFunction", (QSequentialIterableImpl (*) (const QSequentialIterableConvertFunctor<From > *, const From &))&opErAToRWrapper_QSequentialIterableConvertFunctor__opFunction<From>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


template <typename D>
void buildMetaClass_QSequentialIterableImpl(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("_iterable", &D::ClassType::_iterable);
    _d.CPGF_MD_TEMPLATE _field("_iterator", &D::ClassType::_iterator);
    _d.CPGF_MD_TEMPLATE _field("_metaType_id", &D::ClassType::_metaType_id);
    _d.CPGF_MD_TEMPLATE _field("_metaType_flags", &D::ClassType::_metaType_flags);
    _d.CPGF_MD_TEMPLATE _field("_iteratorCapabilities", &D::ClassType::_iteratorCapabilities);
    _d.CPGF_MD_TEMPLATE _field("_size", &D::ClassType::_size);
    _d.CPGF_MD_TEMPLATE _field("_at", &D::ClassType::_at);
    _d.CPGF_MD_TEMPLATE _field("_moveToBegin", &D::ClassType::_moveToBegin);
    _d.CPGF_MD_TEMPLATE _field("_moveToEnd", &D::ClassType::_moveToEnd);
    _d.CPGF_MD_TEMPLATE _field("_advance", &D::ClassType::_advance);
    _d.CPGF_MD_TEMPLATE _field("_get", &D::ClassType::_get);
    _d.CPGF_MD_TEMPLATE _field("_destroyIter", &D::ClassType::_destroyIter);
    _d.CPGF_MD_TEMPLATE _field("_equalIter", &D::ClassType::_equalIter);
    _d.CPGF_MD_TEMPLATE _field("_copyIter", &D::ClassType::_copyIter);
    _d.CPGF_MD_TEMPLATE _method("moveToBegin", &D::ClassType::moveToBegin);
    _d.CPGF_MD_TEMPLATE _method("moveToEnd", &D::ClassType::moveToEnd);
    _d.CPGF_MD_TEMPLATE _method("advance", &D::ClassType::advance);
    _d.CPGF_MD_TEMPLATE _method("getCurrent", &D::ClassType::getCurrent);
    _d.CPGF_MD_TEMPLATE _method("at", &D::ClassType::at);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("destroyIter", &D::ClassType::destroyIter);
}


template <typename SmartPointer>
inline QObject * opErAToRWrapper_QSmartPointerConvertFunctor__opFunction(const QSmartPointerConvertFunctor<SmartPointer > * self, const SmartPointer & p) {
    return (*self)(p);
}


template <typename D, typename SmartPointer>
void buildMetaClass_QSmartPointerConvertFunctor(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QObject * (*)(const SmartPointer &)>(mopHolder(mopHolder));
    _d.CPGF_MD_TEMPLATE _method("_opFunction", (QObject * (*) (const QSmartPointerConvertFunctor<SmartPointer > *, const SmartPointer &))&opErAToRWrapper_QSmartPointerConvertFunctor__opFunction<SmartPointer>, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


template <typename D>
void buildMetaClass_VariantData(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const int, const void *, const uint)>();
    _d.CPGF_MD_TEMPLATE _field("metaTypeId", &D::ClassType::metaTypeId);
    _d.CPGF_MD_TEMPLATE _field("data", &D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _field("flags", &D::ClassType::flags);
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
