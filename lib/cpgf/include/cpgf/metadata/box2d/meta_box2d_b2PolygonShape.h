/*
  cpgf Library
  Copyright (C) 2011 - 2013 Wang Qi http://www.cpgf.org/
  All rights reserved.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/


// Auto generated file, don't modify.

#ifndef __META_BOX2D_B2POLYGONSHAPE_H
#define __META_BOX2D_B2POLYGONSHAPE_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_box2d { 


template <typename D>
void buildMetaClass_B2PolygonShape(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("m_centroid", &D::ClassType::m_centroid);
    _d.CPGF_MD_TEMPLATE _field("m_vertices", &D::ClassType::m_vertices);
    _d.CPGF_MD_TEMPLATE _field("m_normals", &D::ClassType::m_normals);
    _d.CPGF_MD_TEMPLATE _field("m_vertexCount", &D::ClassType::m_vertexCount);
    _d.CPGF_MD_TEMPLATE _method("Clone", &D::ClassType::Clone);
    _d.CPGF_MD_TEMPLATE _method("Set", &D::ClassType::Set);
    _d.CPGF_MD_TEMPLATE _method("SetAsBox", (void (D::ClassType::*) (float32, float32))&D::ClassType::SetAsBox);
    _d.CPGF_MD_TEMPLATE _method("SetAsBox", (void (D::ClassType::*) (float32, float32, const b2Vec2 &, float32))&D::ClassType::SetAsBox);
    _d.CPGF_MD_TEMPLATE _method("SetAsEdge", &D::ClassType::SetAsEdge);
    _d.CPGF_MD_TEMPLATE _method("TestPoint", &D::ClassType::TestPoint);
    _d.CPGF_MD_TEMPLATE _method("RayCast", &D::ClassType::RayCast);
    _d.CPGF_MD_TEMPLATE _method("ComputeAABB", &D::ClassType::ComputeAABB);
    _d.CPGF_MD_TEMPLATE _method("ComputeMass", &D::ClassType::ComputeMass);
    _d.CPGF_MD_TEMPLATE _method("GetSupport", &D::ClassType::GetSupport);
    _d.CPGF_MD_TEMPLATE _method("GetSupportVertex", &D::ClassType::GetSupportVertex);
    _d.CPGF_MD_TEMPLATE _method("GetVertexCount", &D::ClassType::GetVertexCount);
    _d.CPGF_MD_TEMPLATE _method("GetVertex", &D::ClassType::GetVertex);
}


} // namespace meta_box2d




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
