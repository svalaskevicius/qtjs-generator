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

#ifndef __META_IRRLICHT_IGUIWINDOW_H
#define __META_IRRLICHT_IGUIWINDOW_H


#include "gmetaobjectlifemanager_irrlicht_ireferencecounted.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace irr;
using namespace irr::gui;


namespace meta_irrlicht { 


template <typename D>
void buildMetaClass_IGUIWindow(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("getCloseButton", &D::ClassType::getCloseButton);
    _d.CPGF_MD_TEMPLATE _method("getMinimizeButton", &D::ClassType::getMinimizeButton);
    _d.CPGF_MD_TEMPLATE _method("getMaximizeButton", &D::ClassType::getMaximizeButton);
    _d.CPGF_MD_TEMPLATE _method("isDraggable", &D::ClassType::isDraggable);
    _d.CPGF_MD_TEMPLATE _method("setDraggable", &D::ClassType::setDraggable);
    _d.CPGF_MD_TEMPLATE _method("setDrawBackground", &D::ClassType::setDrawBackground);
    _d.CPGF_MD_TEMPLATE _method("getDrawBackground", &D::ClassType::getDrawBackground);
    _d.CPGF_MD_TEMPLATE _method("setDrawTitlebar", &D::ClassType::setDrawTitlebar);
    _d.CPGF_MD_TEMPLATE _method("getDrawTitlebar", &D::ClassType::getDrawTitlebar);
    _d.CPGF_MD_TEMPLATE _method("getClientRect", &D::ClassType::getClientRect);
}


} // namespace meta_irrlicht




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
