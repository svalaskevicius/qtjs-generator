// Auto generated file, don't modify.

#ifndef __META_QTQML_QSGGEOMETRY_H
#define __META_QTQML_QSGGEOMETRY_H


#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtqml { 


inline uint bItFiEldWrapper_QSGGeometry_Attribute_isVertexCoordinate_getter(QSGGeometry::Attribute * self) {
    return self->isVertexCoordinate;
}

inline void bItFiEldWrapper_QSGGeometry_Attribute_isVertexCoordinate_setter(QSGGeometry::Attribute * self, uint value) {
    self->isVertexCoordinate = value;
}
inline uint bItFiEldWrapper_QSGGeometry_Attribute_reserved_getter(QSGGeometry::Attribute * self) {
    return self->reserved;
}

inline void bItFiEldWrapper_QSGGeometry_Attribute_reserved_setter(QSGGeometry::Attribute * self, uint value) {
    self->reserved = value;
}


template <typename D>
void buildMetaClass_QSGGeometry(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QSGGeometry::AttributeSet &, int, int, int)>()
        ._default(copyVariantFromCopyable(GL_UNSIGNED_SHORT))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("defaultAttributes_Point2D", &D::ClassType::defaultAttributes_Point2D);
    _d.CPGF_MD_TEMPLATE _method("defaultAttributes_TexturedPoint2D", &D::ClassType::defaultAttributes_TexturedPoint2D);
    _d.CPGF_MD_TEMPLATE _method("defaultAttributes_ColoredPoint2D", &D::ClassType::defaultAttributes_ColoredPoint2D);
    _d.CPGF_MD_TEMPLATE _method("updateRectGeometry", &D::ClassType::updateRectGeometry);
    _d.CPGF_MD_TEMPLATE _method("updateTexturedRectGeometry", &D::ClassType::updateTexturedRectGeometry);
    _d.CPGF_MD_TEMPLATE _method("setDrawingMode", &D::ClassType::setDrawingMode);
    _d.CPGF_MD_TEMPLATE _method("drawingMode", &D::ClassType::drawingMode);
    _d.CPGF_MD_TEMPLATE _method("allocate", &D::ClassType::allocate)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("vertexCount", &D::ClassType::vertexCount);
    _d.CPGF_MD_TEMPLATE _method("vertexData", (void * (D::ClassType::*) ())&D::ClassType::vertexData);
    _d.CPGF_MD_TEMPLATE _method("vertexDataAsPoint2D", (QSGGeometry::Point2D* (D::ClassType::*) ())&D::ClassType::vertexDataAsPoint2D);
    _d.CPGF_MD_TEMPLATE _method("vertexDataAsTexturedPoint2D", (QSGGeometry::TexturedPoint2D* (D::ClassType::*) ())&D::ClassType::vertexDataAsTexturedPoint2D);
    _d.CPGF_MD_TEMPLATE _method("vertexDataAsColoredPoint2D", (QSGGeometry::ColoredPoint2D* (D::ClassType::*) ())&D::ClassType::vertexDataAsColoredPoint2D);
    _d.CPGF_MD_TEMPLATE _method("vertexData", (const void * (D::ClassType::*) () const)&D::ClassType::vertexData);
    _d.CPGF_MD_TEMPLATE _method("vertexDataAsPoint2D", (const QSGGeometry::Point2D* (D::ClassType::*) () const)&D::ClassType::vertexDataAsPoint2D);
    _d.CPGF_MD_TEMPLATE _method("vertexDataAsTexturedPoint2D", (const QSGGeometry::TexturedPoint2D* (D::ClassType::*) () const)&D::ClassType::vertexDataAsTexturedPoint2D);
    _d.CPGF_MD_TEMPLATE _method("vertexDataAsColoredPoint2D", (const QSGGeometry::ColoredPoint2D* (D::ClassType::*) () const)&D::ClassType::vertexDataAsColoredPoint2D);
    _d.CPGF_MD_TEMPLATE _method("indexType", &D::ClassType::indexType);
    _d.CPGF_MD_TEMPLATE _method("indexCount", &D::ClassType::indexCount);
    _d.CPGF_MD_TEMPLATE _method("indexData", (void * (D::ClassType::*) ())&D::ClassType::indexData);
    _d.CPGF_MD_TEMPLATE _method("indexDataAsUInt", (uint * (D::ClassType::*) ())&D::ClassType::indexDataAsUInt);
    _d.CPGF_MD_TEMPLATE _method("indexDataAsUShort", (quint16 * (D::ClassType::*) ())&D::ClassType::indexDataAsUShort);
    _d.CPGF_MD_TEMPLATE _method("sizeOfIndex", &D::ClassType::sizeOfIndex);
    _d.CPGF_MD_TEMPLATE _method("indexData", (const void * (D::ClassType::*) () const)&D::ClassType::indexData);
    _d.CPGF_MD_TEMPLATE _method("indexDataAsUInt", (const uint * (D::ClassType::*) () const)&D::ClassType::indexDataAsUInt);
    _d.CPGF_MD_TEMPLATE _method("indexDataAsUShort", (const quint16 * (D::ClassType::*) () const)&D::ClassType::indexDataAsUShort);
    _d.CPGF_MD_TEMPLATE _method("attributeCount", &D::ClassType::attributeCount);
    _d.CPGF_MD_TEMPLATE _method("attributes", &D::ClassType::attributes);
    _d.CPGF_MD_TEMPLATE _method("sizeOfVertex", &D::ClassType::sizeOfVertex);
    _d.CPGF_MD_TEMPLATE _method("setIndexDataPattern", &D::ClassType::setIndexDataPattern);
    _d.CPGF_MD_TEMPLATE _method("indexDataPattern", &D::ClassType::indexDataPattern);
    _d.CPGF_MD_TEMPLATE _method("setVertexDataPattern", &D::ClassType::setVertexDataPattern);
    _d.CPGF_MD_TEMPLATE _method("vertexDataPattern", &D::ClassType::vertexDataPattern);
    _d.CPGF_MD_TEMPLATE _method("markIndexDataDirty", &D::ClassType::markIndexDataDirty);
    _d.CPGF_MD_TEMPLATE _method("markVertexDataDirty", &D::ClassType::markVertexDataDirty);
    _d.CPGF_MD_TEMPLATE _method("lineWidth", &D::ClassType::lineWidth);
    _d.CPGF_MD_TEMPLATE _method("setLineWidth", &D::ClassType::setLineWidth);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::DataPattern>("DataPattern")
        ._element("AlwaysUploadPattern", D::ClassType::AlwaysUploadPattern)
        ._element("StreamPattern", D::ClassType::StreamPattern)
        ._element("DynamicPattern", D::ClassType::DynamicPattern)
        ._element("StaticPattern", D::ClassType::StaticPattern)
    ;
    {
        GDefineMetaClass<QSGGeometry::Attribute> _nd = GDefineMetaClass<QSGGeometry::Attribute>::declare("Attribute");
        _nd.CPGF_MD_TEMPLATE _field("position", &QSGGeometry::Attribute::position);
        _nd.CPGF_MD_TEMPLATE _field("tupleSize", &QSGGeometry::Attribute::tupleSize);
        _nd.CPGF_MD_TEMPLATE _field("type", &QSGGeometry::Attribute::type);
        _nd.CPGF_MD_TEMPLATE _property("isVertexCoordinate", &bItFiEldWrapper_QSGGeometry_Attribute_isVertexCoordinate_getter, &bItFiEldWrapper_QSGGeometry_Attribute_isVertexCoordinate_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _property("reserved", &bItFiEldWrapper_QSGGeometry_Attribute_reserved_getter, &bItFiEldWrapper_QSGGeometry_Attribute_reserved_setter, cpgf::MakePolicy<cpgf::GMetaRuleGetterExplicitThis, cpgf::GMetaRuleSetterExplicitThis>());
        _nd.CPGF_MD_TEMPLATE _method("create", &QSGGeometry::Attribute::create)
            ._default(copyVariantFromCopyable(false))
        ;
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
    {
        GDefineMetaClass<QSGGeometry::AttributeSet> _nd = GDefineMetaClass<QSGGeometry::AttributeSet>::declare("AttributeSet");
        _nd.CPGF_MD_TEMPLATE _field("count", &QSGGeometry::AttributeSet::count);
        _nd.CPGF_MD_TEMPLATE _field("stride", &QSGGeometry::AttributeSet::stride);
        _nd.CPGF_MD_TEMPLATE _field("attributes", &QSGGeometry::AttributeSet::attributes);
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
    {
        GDefineMetaClass<QSGGeometry::ColoredPoint2D> _nd = GDefineMetaClass<QSGGeometry::ColoredPoint2D>::declare("ColoredPoint2D");
        _nd.CPGF_MD_TEMPLATE _field("x", &QSGGeometry::ColoredPoint2D::x);
        _nd.CPGF_MD_TEMPLATE _field("y", &QSGGeometry::ColoredPoint2D::y);
        _nd.CPGF_MD_TEMPLATE _field("r", &QSGGeometry::ColoredPoint2D::r);
        _nd.CPGF_MD_TEMPLATE _field("g", &QSGGeometry::ColoredPoint2D::g);
        _nd.CPGF_MD_TEMPLATE _field("b", &QSGGeometry::ColoredPoint2D::b);
        _nd.CPGF_MD_TEMPLATE _field("a", &QSGGeometry::ColoredPoint2D::a);
        _nd.CPGF_MD_TEMPLATE _method("set", &QSGGeometry::ColoredPoint2D::set);
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
    {
        GDefineMetaClass<QSGGeometry::Point2D> _nd = GDefineMetaClass<QSGGeometry::Point2D>::declare("Point2D");
        _nd.CPGF_MD_TEMPLATE _field("x", &QSGGeometry::Point2D::x);
        _nd.CPGF_MD_TEMPLATE _field("y", &QSGGeometry::Point2D::y);
        _nd.CPGF_MD_TEMPLATE _method("set", &QSGGeometry::Point2D::set);
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
    {
        GDefineMetaClass<QSGGeometry::TexturedPoint2D> _nd = GDefineMetaClass<QSGGeometry::TexturedPoint2D>::declare("TexturedPoint2D");
        _nd.CPGF_MD_TEMPLATE _field("x", &QSGGeometry::TexturedPoint2D::x);
        _nd.CPGF_MD_TEMPLATE _field("y", &QSGGeometry::TexturedPoint2D::y);
        _nd.CPGF_MD_TEMPLATE _field("tx", &QSGGeometry::TexturedPoint2D::tx);
        _nd.CPGF_MD_TEMPLATE _field("ty", &QSGGeometry::TexturedPoint2D::ty);
        _nd.CPGF_MD_TEMPLATE _method("set", &QSGGeometry::TexturedPoint2D::set);
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


} // namespace meta_qtqml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
