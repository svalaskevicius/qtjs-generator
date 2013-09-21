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

#ifndef __META_BOX2D_B2TIMEOFIMPACT_H
#define __META_BOX2D_B2TIMEOFIMPACT_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_box2d { 


template <typename D>
void buildMetaClass_Global_b2timeofimpact(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("b2TimeOfImpact", (void (*) (b2TOIOutput *, const b2TOIInput *))&b2TimeOfImpact);
}


template <typename D>
void buildMetaClass_B2TOIInput(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("proxyA", &D::ClassType::proxyA);
    _d.CPGF_MD_TEMPLATE _field("proxyB", &D::ClassType::proxyB);
    _d.CPGF_MD_TEMPLATE _field("sweepA", &D::ClassType::sweepA);
    _d.CPGF_MD_TEMPLATE _field("sweepB", &D::ClassType::sweepB);
    _d.CPGF_MD_TEMPLATE _field("tMax", &D::ClassType::tMax);
}


template <typename D>
void buildMetaClass_B2TOIOutput(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("state", &D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _field("t", &D::ClassType::t);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::State>("State")
        ._element("e_unknown", D::ClassType::e_unknown)
        ._element("e_failed", D::ClassType::e_failed)
        ._element("e_overlapped", D::ClassType::e_overlapped)
        ._element("e_touching", D::ClassType::e_touching)
        ._element("e_separated", D::ClassType::e_separated)
    ;
}


} // namespace meta_box2d




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
