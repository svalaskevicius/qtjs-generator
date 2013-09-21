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

#ifndef __META_IRRLICHT_IBILLBOARDSCENENODE_H
#define __META_IRRLICHT_IBILLBOARDSCENENODE_H


#include "gmetaobjectlifemanager_irrlicht_ireferencecounted.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace irr;
using namespace irr::scene;


namespace meta_irrlicht { 


template <typename D>
void buildMetaClass_IBillboardSceneNode(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("setSize", (void (D::ClassType::*) (const core::dimension2d< f32 > &))&D::ClassType::setSize);
    _d.CPGF_MD_TEMPLATE _method("setSize", (void (D::ClassType::*) (f32, f32, f32))&D::ClassType::setSize);
    _d.CPGF_MD_TEMPLATE _method("getSize", (const core::dimension2d< f32 > & (D::ClassType::*) () const)&D::ClassType::getSize);
    _d.CPGF_MD_TEMPLATE _method("getSize", (void (D::ClassType::*) (f32 &, f32 &, f32 &) const)&D::ClassType::getSize);
    _d.CPGF_MD_TEMPLATE _method("setColor", (void (D::ClassType::*) (const video::SColor &))&D::ClassType::setColor);
    _d.CPGF_MD_TEMPLATE _method("setColor", (void (D::ClassType::*) (const video::SColor &, const video::SColor &))&D::ClassType::setColor);
    _d.CPGF_MD_TEMPLATE _method("getColor", &D::ClassType::getColor);
}


} // namespace meta_irrlicht




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
