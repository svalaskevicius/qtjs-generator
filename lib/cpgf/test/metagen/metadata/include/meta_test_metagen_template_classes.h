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

#ifndef __META_TEST_METAGEN_TEMPLATE_CLASSES_H
#define __META_TEST_METAGEN_TEMPLATE_CLASSES_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace NS1;
using namespace NS1::NS2;


namespace meta_test { 


template <typename D>
void buildMetaClass_TemplateBase(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
}


template <typename D, typename T, typename U, int N>
void buildMetaClass_TemplateClassA(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("a", &D::ClassType::a);
    _d.CPGF_MD_TEMPLATE _method("b", (void (D::ClassType::*) (typename TemplateClassA<T, U, N >::Shared*))&D::ClassType::b);
    _d.CPGF_MD_TEMPLATE _method("b", (void (D::ClassType::*) (void *))&D::ClassType::b);
    {
        GDefineMetaClass<typename TemplateClassA<T, U, N >::Shared> _nd = GDefineMetaClass<typename TemplateClassA<T, U, N >::Shared>::declare("Shared");
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


template <typename D, typename T>
void buildMetaClass_TemplateClassB(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("b", (void (D::ClassType::*) (typename TemplateClassB<T >::Shared*))&D::ClassType::b);
    _d.CPGF_MD_TEMPLATE _method("b", (void (D::ClassType::*) (void *))&D::ClassType::b);
    {
        GDefineMetaClass<typename TemplateClassB<T >::Shared> _nd = GDefineMetaClass<typename TemplateClassB<T >::Shared>::declare("Shared");
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


} // namespace meta_test




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
