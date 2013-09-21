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

#ifndef __META_IRRLICHT_EMESHWRITERENUMS_H
#define __META_IRRLICHT_EMESHWRITERENUMS_H


#include "gmetaobjectlifemanager_irrlicht_ireferencecounted.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace irr;
using namespace irr::scene;


namespace meta_irrlicht { 


template <typename D>
void buildMetaClass_Global_emeshwriterenums(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<EMESH_WRITER_TYPE>("EMESH_WRITER_TYPE")
        ._element("EMWT_IRR_MESH", irr::scene::EMWT_IRR_MESH)
        ._element("EMWT_COLLADA", irr::scene::EMWT_COLLADA)
        ._element("EMWT_STL", irr::scene::EMWT_STL)
        ._element("EMWT_OBJ", irr::scene::EMWT_OBJ)
        ._element("EMWT_PLY", irr::scene::EMWT_PLY)
    ;
    _d.CPGF_MD_TEMPLATE _enum<E_MESH_WRITER_FLAGS>("E_MESH_WRITER_FLAGS")
        ._element("EMWF_NONE", irr::scene::EMWF_NONE)
        ._element("EMWF_WRITE_LIGHTMAPS", irr::scene::EMWF_WRITE_LIGHTMAPS)
        ._element("EMWF_WRITE_COMPRESSED", irr::scene::EMWF_WRITE_COMPRESSED)
        ._element("EMWF_WRITE_BINARY", irr::scene::EMWF_WRITE_BINARY)
    ;
}


} // namespace meta_irrlicht




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
