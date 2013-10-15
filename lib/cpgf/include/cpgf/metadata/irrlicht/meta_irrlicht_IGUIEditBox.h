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

#ifndef __META_IRRLICHT_IGUIEDITBOX_H
#define __META_IRRLICHT_IGUIEDITBOX_H


#include "gmetaobjectlifemanager_irrlicht_ireferencecounted.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace irr;
using namespace irr::gui;


namespace meta_irrlicht { 


template <typename D>
void buildMetaClass_IGUIEditBox(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("setOverrideFont", &D::ClassType::setOverrideFont)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("getOverrideFont", &D::ClassType::getOverrideFont);
    _d.CPGF_MD_TEMPLATE _method("getActiveFont", &D::ClassType::getActiveFont);
    _d.CPGF_MD_TEMPLATE _method("setOverrideColor", &D::ClassType::setOverrideColor);
    _d.CPGF_MD_TEMPLATE _method("getOverrideColor", &D::ClassType::getOverrideColor);
    _d.CPGF_MD_TEMPLATE _method("enableOverrideColor", &D::ClassType::enableOverrideColor);
    _d.CPGF_MD_TEMPLATE _method("isOverrideColorEnabled", &D::ClassType::isOverrideColorEnabled);
    _d.CPGF_MD_TEMPLATE _method("setDrawBackground", &D::ClassType::setDrawBackground);
    _d.CPGF_MD_TEMPLATE _method("setDrawBorder", &D::ClassType::setDrawBorder);
    _d.CPGF_MD_TEMPLATE _method("setTextAlignment", &D::ClassType::setTextAlignment);
    _d.CPGF_MD_TEMPLATE _method("setWordWrap", &D::ClassType::setWordWrap);
    _d.CPGF_MD_TEMPLATE _method("isWordWrapEnabled", &D::ClassType::isWordWrapEnabled);
    _d.CPGF_MD_TEMPLATE _method("setMultiLine", &D::ClassType::setMultiLine);
    _d.CPGF_MD_TEMPLATE _method("isMultiLineEnabled", &D::ClassType::isMultiLineEnabled);
    _d.CPGF_MD_TEMPLATE _method("setAutoScroll", &D::ClassType::setAutoScroll);
    _d.CPGF_MD_TEMPLATE _method("isAutoScrollEnabled", &D::ClassType::isAutoScrollEnabled);
    _d.CPGF_MD_TEMPLATE _method("setPasswordBox", &D::ClassType::setPasswordBox)
        ._default(copyVariantFromCopyable(L'*'))
    ;
    _d.CPGF_MD_TEMPLATE _method("isPasswordBox", &D::ClassType::isPasswordBox);
    _d.CPGF_MD_TEMPLATE _method("getTextDimension", &D::ClassType::getTextDimension);
    _d.CPGF_MD_TEMPLATE _method("setMax", &D::ClassType::setMax);
    _d.CPGF_MD_TEMPLATE _method("getMax", &D::ClassType::getMax);
}


} // namespace meta_irrlicht




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
