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

#ifndef __META_BOX2D_B2MOUSEJOINT_H
#define __META_BOX2D_B2MOUSEJOINT_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_box2d { 


template <typename D>
void buildMetaClass_B2MouseJoint(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("GetAnchorA", &D::ClassType::GetAnchorA);
    _d.CPGF_MD_TEMPLATE _method("GetAnchorB", &D::ClassType::GetAnchorB);
    _d.CPGF_MD_TEMPLATE _method("GetReactionForce", &D::ClassType::GetReactionForce);
    _d.CPGF_MD_TEMPLATE _method("GetReactionTorque", &D::ClassType::GetReactionTorque);
    _d.CPGF_MD_TEMPLATE _method("SetTarget", &D::ClassType::SetTarget);
    _d.CPGF_MD_TEMPLATE _method("GetTarget", &D::ClassType::GetTarget);
    _d.CPGF_MD_TEMPLATE _method("SetMaxForce", &D::ClassType::SetMaxForce);
    _d.CPGF_MD_TEMPLATE _method("GetMaxForce", &D::ClassType::GetMaxForce);
    _d.CPGF_MD_TEMPLATE _method("SetFrequency", &D::ClassType::SetFrequency);
    _d.CPGF_MD_TEMPLATE _method("GetFrequency", &D::ClassType::GetFrequency);
    _d.CPGF_MD_TEMPLATE _method("SetDampingRatio", &D::ClassType::SetDampingRatio);
    _d.CPGF_MD_TEMPLATE _method("GetDampingRatio", &D::ClassType::GetDampingRatio);
}


template <typename D>
void buildMetaClass_B2MouseJointDef(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _field("target", &D::ClassType::target);
    _d.CPGF_MD_TEMPLATE _field("maxForce", &D::ClassType::maxForce);
    _d.CPGF_MD_TEMPLATE _field("frequencyHz", &D::ClassType::frequencyHz);
    _d.CPGF_MD_TEMPLATE _field("dampingRatio", &D::ClassType::dampingRatio);
}


} // namespace meta_box2d




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
