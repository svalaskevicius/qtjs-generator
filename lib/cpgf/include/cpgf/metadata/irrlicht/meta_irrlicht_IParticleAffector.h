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

#ifndef __META_IRRLICHT_IPARTICLEAFFECTOR_H
#define __META_IRRLICHT_IPARTICLEAFFECTOR_H


#include "gmetaobjectlifemanager_irrlicht_ireferencecounted.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace irr;
using namespace irr::scene;


namespace meta_irrlicht { 


template <typename D>
void buildMetaClass_Global_iparticleaffector(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("ParticleAffectorTypeNames", &ParticleAffectorTypeNames);
    _d.CPGF_MD_TEMPLATE _enum<E_PARTICLE_AFFECTOR_TYPE>("E_PARTICLE_AFFECTOR_TYPE")
        ._element("EPAT_NONE", irr::scene::EPAT_NONE)
        ._element("EPAT_ATTRACT", irr::scene::EPAT_ATTRACT)
        ._element("EPAT_FADE_OUT", irr::scene::EPAT_FADE_OUT)
        ._element("EPAT_GRAVITY", irr::scene::EPAT_GRAVITY)
        ._element("EPAT_ROTATE", irr::scene::EPAT_ROTATE)
        ._element("EPAT_SCALE", irr::scene::EPAT_SCALE)
        ._element("EPAT_COUNT", irr::scene::EPAT_COUNT)
    ;
}


template <typename D>
void buildMetaClass_IParticleAffector(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("affect", &D::ClassType::affect);
    _d.CPGF_MD_TEMPLATE _method("setEnabled", &D::ClassType::setEnabled);
    _d.CPGF_MD_TEMPLATE _method("getEnabled", &D::ClassType::getEnabled);
    _d.CPGF_MD_TEMPLATE _method("getType", &D::ClassType::getType);
}


} // namespace meta_irrlicht




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
