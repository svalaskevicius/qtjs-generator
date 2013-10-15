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

#ifndef __META_IRRLICHT_IGUITABCONTROL_H
#define __META_IRRLICHT_IGUITABCONTROL_H


#include "gmetaobjectlifemanager_irrlicht_ireferencecounted.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace irr;
using namespace irr::gui;


namespace meta_irrlicht { 


template <typename D>
void buildMetaClass_IGUITab(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("getNumber", &D::ClassType::getNumber);
    _d.CPGF_MD_TEMPLATE _method("setDrawBackground", &D::ClassType::setDrawBackground)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("setBackgroundColor", &D::ClassType::setBackgroundColor);
    _d.CPGF_MD_TEMPLATE _method("isDrawingBackground", &D::ClassType::isDrawingBackground);
    _d.CPGF_MD_TEMPLATE _method("getBackgroundColor", &D::ClassType::getBackgroundColor);
    _d.CPGF_MD_TEMPLATE _method("setTextColor", &D::ClassType::setTextColor);
    _d.CPGF_MD_TEMPLATE _method("getTextColor", &D::ClassType::getTextColor);
}


template <typename D>
void buildMetaClass_IGUITabControl(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("addTab", &D::ClassType::addTab)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("insertTab", &D::ClassType::insertTab)
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _method("removeTab", &D::ClassType::removeTab);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("getTabCount", &D::ClassType::getTabCount);
    _d.CPGF_MD_TEMPLATE _method("getTab", &D::ClassType::getTab);
    _d.CPGF_MD_TEMPLATE _method("setActiveTab", (bool (D::ClassType::*) (s32))&D::ClassType::setActiveTab);
    _d.CPGF_MD_TEMPLATE _method("setActiveTab", (bool (D::ClassType::*) (IGUITab *))&D::ClassType::setActiveTab);
    _d.CPGF_MD_TEMPLATE _method("getActiveTab", &D::ClassType::getActiveTab);
    _d.CPGF_MD_TEMPLATE _method("getTabAt", &D::ClassType::getTabAt);
    _d.CPGF_MD_TEMPLATE _method("setTabHeight", &D::ClassType::setTabHeight);
    _d.CPGF_MD_TEMPLATE _method("getTabHeight", &D::ClassType::getTabHeight);
    _d.CPGF_MD_TEMPLATE _method("setTabMaxWidth", &D::ClassType::setTabMaxWidth);
    _d.CPGF_MD_TEMPLATE _method("getTabMaxWidth", &D::ClassType::getTabMaxWidth);
    _d.CPGF_MD_TEMPLATE _method("setTabVerticalAlignment", &D::ClassType::setTabVerticalAlignment);
    _d.CPGF_MD_TEMPLATE _method("getTabVerticalAlignment", &D::ClassType::getTabVerticalAlignment);
    _d.CPGF_MD_TEMPLATE _method("setTabExtraWidth", &D::ClassType::setTabExtraWidth);
    _d.CPGF_MD_TEMPLATE _method("getTabExtraWidth", &D::ClassType::getTabExtraWidth);
}


} // namespace meta_irrlicht




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
