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

#ifndef __META_IRRLICHT_IGUICOMBOBOX_H
#define __META_IRRLICHT_IGUICOMBOBOX_H


#include "gmetaobjectlifemanager_irrlicht_ireferencecounted.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace irr;
using namespace irr::gui;


namespace meta_irrlicht { 


template <typename D>
void buildMetaClass_IGUIComboBox(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("getItemCount", &D::ClassType::getItemCount);
    _d.CPGF_MD_TEMPLATE _method("getItem", &D::ClassType::getItem);
    _d.CPGF_MD_TEMPLATE _method("getItemData", &D::ClassType::getItemData);
    _d.CPGF_MD_TEMPLATE _method("getIndexForItemData", &D::ClassType::getIndexForItemData);
    _d.CPGF_MD_TEMPLATE _method("addItem", &D::ClassType::addItem)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("removeItem", &D::ClassType::removeItem);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("getSelected", &D::ClassType::getSelected);
    _d.CPGF_MD_TEMPLATE _method("setSelected", &D::ClassType::setSelected);
    _d.CPGF_MD_TEMPLATE _method("setTextAlignment", &D::ClassType::setTextAlignment);
    _d.CPGF_MD_TEMPLATE _method("setMaxSelectionRows", &D::ClassType::setMaxSelectionRows);
    _d.CPGF_MD_TEMPLATE _method("getMaxSelectionRows", &D::ClassType::getMaxSelectionRows);
}


} // namespace meta_irrlicht




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
