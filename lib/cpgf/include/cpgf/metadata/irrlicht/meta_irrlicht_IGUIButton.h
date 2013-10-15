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

#ifndef __META_IRRLICHT_IGUIBUTTON_H
#define __META_IRRLICHT_IGUIBUTTON_H


#include "gmetaobjectlifemanager_irrlicht_ireferencecounted.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace irr;
using namespace irr::video;
using namespace irr::gui;


namespace meta_irrlicht { 


template <typename D>
void buildMetaClass_Global_iguibutton(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("GUIButtonStateNames", &GUIButtonStateNames);
    _d.CPGF_MD_TEMPLATE _enum<EGUI_BUTTON_STATE>("EGUI_BUTTON_STATE")
        ._element("EGBS_BUTTON_UP", irr::gui::EGBS_BUTTON_UP)
        ._element("EGBS_BUTTON_DOWN", irr::gui::EGBS_BUTTON_DOWN)
        ._element("EGBS_BUTTON_MOUSE_OVER", irr::gui::EGBS_BUTTON_MOUSE_OVER)
        ._element("EGBS_BUTTON_MOUSE_OFF", irr::gui::EGBS_BUTTON_MOUSE_OFF)
        ._element("EGBS_BUTTON_FOCUSED", irr::gui::EGBS_BUTTON_FOCUSED)
        ._element("EGBS_BUTTON_NOT_FOCUSED", irr::gui::EGBS_BUTTON_NOT_FOCUSED)
        ._element("EGBS_COUNT", irr::gui::EGBS_COUNT)
    ;
}


template <typename D>
void buildMetaClass_IGUIButton(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("setOverrideFont", &D::ClassType::setOverrideFont)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("getOverrideFont", &D::ClassType::getOverrideFont);
    _d.CPGF_MD_TEMPLATE _method("getActiveFont", &D::ClassType::getActiveFont);
    _d.CPGF_MD_TEMPLATE _method("setImage", (void (D::ClassType::*) (video::ITexture *))&D::ClassType::setImage)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setImage", (void (D::ClassType::*) (video::ITexture *, const core::rect< s32 > &))&D::ClassType::setImage);
    _d.CPGF_MD_TEMPLATE _method("setPressedImage", (void (D::ClassType::*) (video::ITexture *))&D::ClassType::setPressedImage)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setPressedImage", (void (D::ClassType::*) (video::ITexture *, const core::rect< s32 > &))&D::ClassType::setPressedImage);
    _d.CPGF_MD_TEMPLATE _method("setSpriteBank", &D::ClassType::setSpriteBank)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setSprite", &D::ClassType::setSprite)
        ._default(copyVariantFromCopyable(false))
        ._default(copyVariantFromCopyable(video::SColor(255, 255, 255, 255)))
    ;
    _d.CPGF_MD_TEMPLATE _method("setIsPushButton", &D::ClassType::setIsPushButton)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("setPressed", &D::ClassType::setPressed)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("isPressed", &D::ClassType::isPressed);
    _d.CPGF_MD_TEMPLATE _method("setUseAlphaChannel", &D::ClassType::setUseAlphaChannel)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("isAlphaChannelUsed", &D::ClassType::isAlphaChannelUsed);
    _d.CPGF_MD_TEMPLATE _method("isPushButton", &D::ClassType::isPushButton);
    _d.CPGF_MD_TEMPLATE _method("setDrawBorder", &D::ClassType::setDrawBorder)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("isDrawingBorder", &D::ClassType::isDrawingBorder);
    _d.CPGF_MD_TEMPLATE _method("setScaleImage", &D::ClassType::setScaleImage)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("isScalingImage", &D::ClassType::isScalingImage);
}


} // namespace meta_irrlicht




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
