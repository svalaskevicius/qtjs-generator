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

#ifndef __META_IRRLICHT_ISCENENODEANIMATORCAMERAFPS_H
#define __META_IRRLICHT_ISCENENODEANIMATORCAMERAFPS_H


#include "gmetaobjectlifemanager_irrlicht_ireferencecounted.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace irr;
using namespace irr::scene;


namespace meta_irrlicht { 


template <typename D>
void buildMetaClass_ISceneNodeAnimatorCameraFPS(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("getMoveSpeed", &D::ClassType::getMoveSpeed);
    _d.CPGF_MD_TEMPLATE _method("setMoveSpeed", &D::ClassType::setMoveSpeed);
    _d.CPGF_MD_TEMPLATE _method("getRotateSpeed", &D::ClassType::getRotateSpeed);
    _d.CPGF_MD_TEMPLATE _method("setRotateSpeed", &D::ClassType::setRotateSpeed);
    _d.CPGF_MD_TEMPLATE _method("setKeyMap", (void (D::ClassType::*) (SKeyMap *, u32))&D::ClassType::setKeyMap);
    _d.CPGF_MD_TEMPLATE _method("setKeyMap", (void (D::ClassType::*) (const core::array< SKeyMap > &))&D::ClassType::setKeyMap);
    _d.CPGF_MD_TEMPLATE _method("getKeyMap", &D::ClassType::getKeyMap);
    _d.CPGF_MD_TEMPLATE _method("setVerticalMovement", &D::ClassType::setVerticalMovement);
    _d.CPGF_MD_TEMPLATE _method("setInvertMouse", &D::ClassType::setInvertMouse);
}


} // namespace meta_irrlicht




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
