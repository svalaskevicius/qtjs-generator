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

#ifndef __META_IRRLICHT_EMATERIALTYPES_H
#define __META_IRRLICHT_EMATERIALTYPES_H


#include "gmetaobjectlifemanager_irrlicht_ireferencecounted.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace irr;
using namespace irr::video;


namespace meta_irrlicht { 


template <typename D>
void buildMetaClass_Global_ematerialtypes(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("sBuiltInMaterialTypeNames", &sBuiltInMaterialTypeNames);
    _d.CPGF_MD_TEMPLATE _enum<E_MATERIAL_TYPE>("E_MATERIAL_TYPE")
        ._element("EMT_SOLID", irr::video::EMT_SOLID)
        ._element("EMT_SOLID_2_LAYER", irr::video::EMT_SOLID_2_LAYER)
        ._element("EMT_LIGHTMAP", irr::video::EMT_LIGHTMAP)
        ._element("EMT_LIGHTMAP_ADD", irr::video::EMT_LIGHTMAP_ADD)
        ._element("EMT_LIGHTMAP_M2", irr::video::EMT_LIGHTMAP_M2)
        ._element("EMT_LIGHTMAP_M4", irr::video::EMT_LIGHTMAP_M4)
        ._element("EMT_LIGHTMAP_LIGHTING", irr::video::EMT_LIGHTMAP_LIGHTING)
        ._element("EMT_LIGHTMAP_LIGHTING_M2", irr::video::EMT_LIGHTMAP_LIGHTING_M2)
        ._element("EMT_LIGHTMAP_LIGHTING_M4", irr::video::EMT_LIGHTMAP_LIGHTING_M4)
        ._element("EMT_DETAIL_MAP", irr::video::EMT_DETAIL_MAP)
        ._element("EMT_SPHERE_MAP", irr::video::EMT_SPHERE_MAP)
        ._element("EMT_REFLECTION_2_LAYER", irr::video::EMT_REFLECTION_2_LAYER)
        ._element("EMT_TRANSPARENT_ADD_COLOR", irr::video::EMT_TRANSPARENT_ADD_COLOR)
        ._element("EMT_TRANSPARENT_ALPHA_CHANNEL", irr::video::EMT_TRANSPARENT_ALPHA_CHANNEL)
        ._element("EMT_TRANSPARENT_ALPHA_CHANNEL_REF", irr::video::EMT_TRANSPARENT_ALPHA_CHANNEL_REF)
        ._element("EMT_TRANSPARENT_VERTEX_ALPHA", irr::video::EMT_TRANSPARENT_VERTEX_ALPHA)
        ._element("EMT_TRANSPARENT_REFLECTION_2_LAYER", irr::video::EMT_TRANSPARENT_REFLECTION_2_LAYER)
        ._element("EMT_NORMAL_MAP_SOLID", irr::video::EMT_NORMAL_MAP_SOLID)
        ._element("EMT_NORMAL_MAP_TRANSPARENT_ADD_COLOR", irr::video::EMT_NORMAL_MAP_TRANSPARENT_ADD_COLOR)
        ._element("EMT_NORMAL_MAP_TRANSPARENT_VERTEX_ALPHA", irr::video::EMT_NORMAL_MAP_TRANSPARENT_VERTEX_ALPHA)
        ._element("EMT_PARALLAX_MAP_SOLID", irr::video::EMT_PARALLAX_MAP_SOLID)
        ._element("EMT_PARALLAX_MAP_TRANSPARENT_ADD_COLOR", irr::video::EMT_PARALLAX_MAP_TRANSPARENT_ADD_COLOR)
        ._element("EMT_PARALLAX_MAP_TRANSPARENT_VERTEX_ALPHA", irr::video::EMT_PARALLAX_MAP_TRANSPARENT_VERTEX_ALPHA)
        ._element("EMT_ONETEXTURE_BLEND", irr::video::EMT_ONETEXTURE_BLEND)
        ._element("EMT_FORCE_32BIT", irr::video::EMT_FORCE_32BIT)
    ;
}


} // namespace meta_irrlicht




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
