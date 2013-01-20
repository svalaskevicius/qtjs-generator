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

#ifndef __META_IRRLICHT_IPARTICLECYLINDEREMITTER_H
#define __META_IRRLICHT_IPARTICLECYLINDEREMITTER_H


#include "gmetaobjectlifemanager_irrlicht_ireferencecounted.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace irr;
using namespace irr::scene;


namespace meta_irrlicht { 


template <typename D>
void buildMetaClass_IParticleCylinderEmitter(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("setCenter", &D::ClassType::setCenter);
    _d.CPGF_MD_TEMPLATE _method("setNormal", &D::ClassType::setNormal);
    _d.CPGF_MD_TEMPLATE _method("setRadius", &D::ClassType::setRadius);
    _d.CPGF_MD_TEMPLATE _method("setLength", &D::ClassType::setLength);
    _d.CPGF_MD_TEMPLATE _method("setOutlineOnly", &D::ClassType::setOutlineOnly)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("getCenter", &D::ClassType::getCenter);
    _d.CPGF_MD_TEMPLATE _method("getNormal", &D::ClassType::getNormal);
    _d.CPGF_MD_TEMPLATE _method("getRadius", &D::ClassType::getRadius);
    _d.CPGF_MD_TEMPLATE _method("getLength", &D::ClassType::getLength);
    _d.CPGF_MD_TEMPLATE _method("getOutlineOnly", &D::ClassType::getOutlineOnly);
    _d.CPGF_MD_TEMPLATE _method("getType", &D::ClassType::getType);
}


} // namespace meta_irrlicht




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
