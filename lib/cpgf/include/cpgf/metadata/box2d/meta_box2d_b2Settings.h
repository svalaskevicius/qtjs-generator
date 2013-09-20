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

#ifndef __META_BOX2D_B2SETTINGS_H
#define __META_BOX2D_B2SETTINGS_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_box2d { 


template <typename D>
void buildMetaClass_Global_b2settings(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("b2_version", &b2_version);
    _d.CPGF_MD_TEMPLATE _method("b2Alloc", (void * (*) (int32))&b2Alloc);
    _d.CPGF_MD_TEMPLATE _method("b2Free", (void (*) (void *))&b2Free);
    _d.CPGF_MD_TEMPLATE _method("b2MixFriction", (float32 (*) (float32, float32))&b2MixFriction);
    _d.CPGF_MD_TEMPLATE _method("b2MixRestitution", (float32 (*) (float32, float32))&b2MixRestitution);
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_box2d_1")
        ._element("b2_maxFloat", b2_maxFloat)
        ._element("b2_epsilon", b2_epsilon)
        ._element("b2_pi", b2_pi)
        ._element("b2_maxManifoldPoints", b2_maxManifoldPoints)
        ._element("b2_maxPolygonVertices", b2_maxPolygonVertices)
        ._element("b2_aabbExtension", b2_aabbExtension)
        ._element("b2_aabbMultiplier", b2_aabbMultiplier)
        ._element("b2_linearSlop", b2_linearSlop)
        ._element("b2_angularSlop", b2_angularSlop)
        ._element("b2_polygonRadius", b2_polygonRadius)
        ._element("b2_maxTOIContacts", b2_maxTOIContacts)
        ._element("b2_velocityThreshold", b2_velocityThreshold)
        ._element("b2_maxLinearCorrection", b2_maxLinearCorrection)
        ._element("b2_maxAngularCorrection", b2_maxAngularCorrection)
        ._element("b2_maxTranslation", b2_maxTranslation)
        ._element("b2_maxTranslationSquared", b2_maxTranslationSquared)
        ._element("b2_maxRotation", b2_maxRotation)
        ._element("b2_maxRotationSquared", b2_maxRotationSquared)
        ._element("b2_contactBaumgarte", b2_contactBaumgarte)
        ._element("b2_timeToSleep", b2_timeToSleep)
        ._element("b2_linearSleepTolerance", b2_linearSleepTolerance)
        ._element("b2_angularSleepTolerance", b2_angularSleepTolerance)
    ;
}


template <typename D>
void buildMetaClass_B2Version(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("major", &D::ClassType::major);
    _d.CPGF_MD_TEMPLATE _field("minor", &D::ClassType::minor);
    _d.CPGF_MD_TEMPLATE _field("revision", &D::ClassType::revision);
}


} // namespace meta_box2d




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
