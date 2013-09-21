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

#ifndef __META_IRRLICHT_EPRIMITIVETYPES_H
#define __META_IRRLICHT_EPRIMITIVETYPES_H


#include "gmetaobjectlifemanager_irrlicht_ireferencecounted.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace irr;
using namespace irr::scene;


namespace meta_irrlicht { 


template <typename D>
void buildMetaClass_Global_eprimitivetypes(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<E_PRIMITIVE_TYPE>("E_PRIMITIVE_TYPE")
        ._element("EPT_POINTS", irr::scene::EPT_POINTS)
        ._element("EPT_LINE_STRIP", irr::scene::EPT_LINE_STRIP)
        ._element("EPT_LINE_LOOP", irr::scene::EPT_LINE_LOOP)
        ._element("EPT_LINES", irr::scene::EPT_LINES)
        ._element("EPT_TRIANGLE_STRIP", irr::scene::EPT_TRIANGLE_STRIP)
        ._element("EPT_TRIANGLE_FAN", irr::scene::EPT_TRIANGLE_FAN)
        ._element("EPT_TRIANGLES", irr::scene::EPT_TRIANGLES)
        ._element("EPT_QUAD_STRIP", irr::scene::EPT_QUAD_STRIP)
        ._element("EPT_QUADS", irr::scene::EPT_QUADS)
        ._element("EPT_POLYGON", irr::scene::EPT_POLYGON)
        ._element("EPT_POINT_SPRITES", irr::scene::EPT_POINT_SPRITES)
    ;
}


} // namespace meta_irrlicht




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
