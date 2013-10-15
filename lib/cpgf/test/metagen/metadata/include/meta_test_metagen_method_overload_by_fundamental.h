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

#ifndef __META_TEST_METAGEN_METHOD_OVERLOAD_BY_FUNDAMENTAL_H
#define __META_TEST_METAGEN_METHOD_OVERLOAD_BY_FUNDAMENTAL_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_test { 


template <typename D>
void buildMetaClass_MetagenMethodOverloadByFundamental(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("overload_Boolean_Int", (std::string (D::ClassType::*) (bool))&D::ClassType::overload_Boolean_Int);
    _d.CPGF_MD_TEMPLATE _method("overload_Boolean_Int", (std::string (D::ClassType::*) (int))&D::ClassType::overload_Boolean_Int);
    _d.CPGF_MD_TEMPLATE _method("overload_Boolean_Real", (std::string (D::ClassType::*) (bool))&D::ClassType::overload_Boolean_Real);
    _d.CPGF_MD_TEMPLATE _method("overload_Boolean_Real", (std::string (D::ClassType::*) (double))&D::ClassType::overload_Boolean_Real);
    _d.CPGF_MD_TEMPLATE _method("overload_Boolean_Int_Real", (std::string (D::ClassType::*) (bool))&D::ClassType::overload_Boolean_Int_Real);
    _d.CPGF_MD_TEMPLATE _method("overload_Boolean_Int_Real", (std::string (D::ClassType::*) (int))&D::ClassType::overload_Boolean_Int_Real);
    _d.CPGF_MD_TEMPLATE _method("overload_Boolean_Int_Real", (std::string (D::ClassType::*) (double))&D::ClassType::overload_Boolean_Int_Real);
}


} // namespace meta_test




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
