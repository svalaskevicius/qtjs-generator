/*
  cpgf Library
  Copyright (C) 2011, 2012 Wang Qi http://www.cpgf.org/
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

#ifndef __META_IRRLICHT_SANIMATEDMESH_H
#define __META_IRRLICHT_SANIMATEDMESH_H


#include "gmetaobjectlifemanager_irrlicht_ireferencecounted.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace irr;
using namespace irr::scene;


namespace meta_irrlicht { 


template <typename D>
void buildMetaClass_SAnimatedMesh(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (scene::IMesh *, scene::E_ANIMATED_MESH_TYPE)>()
        ._default(copyVariantFromCopyable(scene::EAMT_UNKNOWN))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("Meshes", &D::ClassType::Meshes);
    _d.CPGF_MD_TEMPLATE _field("Box", &D::ClassType::Box);
    _d.CPGF_MD_TEMPLATE _field("FramesPerSecond", &D::ClassType::FramesPerSecond);
    _d.CPGF_MD_TEMPLATE _field("Type", &D::ClassType::Type);
    _d.CPGF_MD_TEMPLATE _method("getFrameCount", &D::ClassType::getFrameCount);
    _d.CPGF_MD_TEMPLATE _method("getAnimationSpeed", &D::ClassType::getAnimationSpeed);
    _d.CPGF_MD_TEMPLATE _method("setAnimationSpeed", &D::ClassType::setAnimationSpeed);
    _d.CPGF_MD_TEMPLATE _method("getMesh", &D::ClassType::getMesh)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(255))
    ;
    _d.CPGF_MD_TEMPLATE _method("addMesh", &D::ClassType::addMesh);
    _d.CPGF_MD_TEMPLATE _method("getBoundingBox", &D::ClassType::getBoundingBox);
    _d.CPGF_MD_TEMPLATE _method("setBoundingBox", &D::ClassType::setBoundingBox);
    _d.CPGF_MD_TEMPLATE _method("recalculateBoundingBox", &D::ClassType::recalculateBoundingBox);
    _d.CPGF_MD_TEMPLATE _method("getMeshType", &D::ClassType::getMeshType);
    _d.CPGF_MD_TEMPLATE _method("getMeshBufferCount", &D::ClassType::getMeshBufferCount);
    _d.CPGF_MD_TEMPLATE _method("getMeshBuffer", (IMeshBuffer * (D::ClassType::*) (u32) const)&D::ClassType::getMeshBuffer);
    _d.CPGF_MD_TEMPLATE _method("getMeshBuffer", (IMeshBuffer * (D::ClassType::*) (const video::SMaterial &) const)&D::ClassType::getMeshBuffer);
    _d.CPGF_MD_TEMPLATE _method("setMaterialFlag", &D::ClassType::setMaterialFlag);
    _d.CPGF_MD_TEMPLATE _method("setHardwareMappingHint", &D::ClassType::setHardwareMappingHint)
        ._default(copyVariantFromCopyable(EBT_VERTEX_AND_INDEX))
    ;
    _d.CPGF_MD_TEMPLATE _method("setDirty", &D::ClassType::setDirty)
        ._default(copyVariantFromCopyable(EBT_VERTEX_AND_INDEX))
    ;
}


} // namespace meta_irrlicht




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
