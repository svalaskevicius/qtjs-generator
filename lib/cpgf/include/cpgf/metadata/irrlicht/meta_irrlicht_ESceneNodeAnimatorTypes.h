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

#ifndef __META_IRRLICHT_ESCENENODEANIMATORTYPES_H
#define __META_IRRLICHT_ESCENENODEANIMATORTYPES_H


#include "gmetaobjectlifemanager_irrlicht_ireferencecounted.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace irr;
using namespace irr::scene;


namespace meta_irrlicht { 


template <typename D>
void buildMetaClass_Global_escenenodeanimatortypes(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<ESCENE_NODE_ANIMATOR_TYPE>("ESCENE_NODE_ANIMATOR_TYPE")
        ._element("ESNAT_FLY_CIRCLE", irr::scene::ESNAT_FLY_CIRCLE)
        ._element("ESNAT_FLY_STRAIGHT", irr::scene::ESNAT_FLY_STRAIGHT)
        ._element("ESNAT_FOLLOW_SPLINE", irr::scene::ESNAT_FOLLOW_SPLINE)
        ._element("ESNAT_ROTATION", irr::scene::ESNAT_ROTATION)
        ._element("ESNAT_TEXTURE", irr::scene::ESNAT_TEXTURE)
        ._element("ESNAT_DELETION", irr::scene::ESNAT_DELETION)
        ._element("ESNAT_COLLISION_RESPONSE", irr::scene::ESNAT_COLLISION_RESPONSE)
        ._element("ESNAT_CAMERA_FPS", irr::scene::ESNAT_CAMERA_FPS)
        ._element("ESNAT_CAMERA_MAYA", irr::scene::ESNAT_CAMERA_MAYA)
        ._element("ESNAT_COUNT", irr::scene::ESNAT_COUNT)
        ._element("ESNAT_UNKNOWN", irr::scene::ESNAT_UNKNOWN)
        ._element("ESNAT_FORCE_32_BIT", irr::scene::ESNAT_FORCE_32_BIT)
    ;
}


} // namespace meta_irrlicht




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
