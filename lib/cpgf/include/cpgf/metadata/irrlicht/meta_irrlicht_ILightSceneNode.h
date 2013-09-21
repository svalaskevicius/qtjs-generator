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

#ifndef __META_IRRLICHT_ILIGHTSCENENODE_H
#define __META_IRRLICHT_ILIGHTSCENENODE_H


#include "gmetaobjectlifemanager_irrlicht_ireferencecounted.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace irr;
using namespace irr::scene;


namespace meta_irrlicht { 


template <typename D>
void buildMetaClass_ILightSceneNode(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("setLightData", &D::ClassType::setLightData);
    _d.CPGF_MD_TEMPLATE _method("getLightData", (const video::SLight & (D::ClassType::*) () const)&D::ClassType::getLightData);
    _d.CPGF_MD_TEMPLATE _method("getLightData", (video::SLight & (D::ClassType::*) ())&D::ClassType::getLightData);
    _d.CPGF_MD_TEMPLATE _method("setVisible", &D::ClassType::setVisible);
    _d.CPGF_MD_TEMPLATE _method("setRadius", &D::ClassType::setRadius);
    _d.CPGF_MD_TEMPLATE _method("getRadius", &D::ClassType::getRadius);
    _d.CPGF_MD_TEMPLATE _method("setLightType", &D::ClassType::setLightType);
    _d.CPGF_MD_TEMPLATE _method("getLightType", &D::ClassType::getLightType);
    _d.CPGF_MD_TEMPLATE _method("enableCastShadow", &D::ClassType::enableCastShadow)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("getCastShadow", &D::ClassType::getCastShadow);
}


} // namespace meta_irrlicht




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
