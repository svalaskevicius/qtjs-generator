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

#ifndef __META_IRRLICHT_IRRLICHTDEVICE_H
#define __META_IRRLICHT_IRRLICHTDEVICE_H


#include "gmetaobjectlifemanager_irrlicht_ireferencecounted.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace irr;
using namespace irr::io;
using namespace irr::gui;
using namespace irr::scene;


namespace meta_irrlicht { 


template <typename D>
void buildMetaClass_IrrlichtDevice(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("run", &D::ClassType::run);
    _d.CPGF_MD_TEMPLATE _method("yield", &D::ClassType::yield);
    _d.CPGF_MD_TEMPLATE _method("sleep", &D::ClassType::sleep)
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("getVideoDriver", &D::ClassType::getVideoDriver);
    _d.CPGF_MD_TEMPLATE _method("getFileSystem", &D::ClassType::getFileSystem);
    _d.CPGF_MD_TEMPLATE _method("getGUIEnvironment", &D::ClassType::getGUIEnvironment);
    _d.CPGF_MD_TEMPLATE _method("getSceneManager", &D::ClassType::getSceneManager);
    _d.CPGF_MD_TEMPLATE _method("getCursorControl", &D::ClassType::getCursorControl);
    _d.CPGF_MD_TEMPLATE _method("getLogger", &D::ClassType::getLogger);
    _d.CPGF_MD_TEMPLATE _method("getVideoModeList", &D::ClassType::getVideoModeList);
    _d.CPGF_MD_TEMPLATE _method("getOSOperator", &D::ClassType::getOSOperator);
    _d.CPGF_MD_TEMPLATE _method("getTimer", &D::ClassType::getTimer);
    _d.CPGF_MD_TEMPLATE _method("getRandomizer", &D::ClassType::getRandomizer);
    _d.CPGF_MD_TEMPLATE _method("setRandomizer", &D::ClassType::setRandomizer);
    _d.CPGF_MD_TEMPLATE _method("createDefaultRandomizer", &D::ClassType::createDefaultRandomizer);
    _d.CPGF_MD_TEMPLATE _method("setWindowCaption", &D::ClassType::setWindowCaption);
    _d.CPGF_MD_TEMPLATE _method("isWindowActive", &D::ClassType::isWindowActive);
    _d.CPGF_MD_TEMPLATE _method("isWindowFocused", &D::ClassType::isWindowFocused);
    _d.CPGF_MD_TEMPLATE _method("isWindowMinimized", &D::ClassType::isWindowMinimized);
    _d.CPGF_MD_TEMPLATE _method("isFullscreen", &D::ClassType::isFullscreen);
    _d.CPGF_MD_TEMPLATE _method("getColorFormat", &D::ClassType::getColorFormat);
    _d.CPGF_MD_TEMPLATE _method("closeDevice", &D::ClassType::closeDevice);
    _d.CPGF_MD_TEMPLATE _method("getVersion", &D::ClassType::getVersion);
    _d.CPGF_MD_TEMPLATE _method("setEventReceiver", &D::ClassType::setEventReceiver);
    _d.CPGF_MD_TEMPLATE _method("getEventReceiver", &D::ClassType::getEventReceiver);
    _d.CPGF_MD_TEMPLATE _method("postEventFromUser", &D::ClassType::postEventFromUser);
    _d.CPGF_MD_TEMPLATE _method("setInputReceivingSceneManager", &D::ClassType::setInputReceivingSceneManager);
    _d.CPGF_MD_TEMPLATE _method("setResizable", &D::ClassType::setResizable)
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("minimizeWindow", &D::ClassType::minimizeWindow);
    _d.CPGF_MD_TEMPLATE _method("maximizeWindow", &D::ClassType::maximizeWindow);
    _d.CPGF_MD_TEMPLATE _method("restoreWindow", &D::ClassType::restoreWindow);
    _d.CPGF_MD_TEMPLATE _method("activateJoysticks", &D::ClassType::activateJoysticks);
    _d.CPGF_MD_TEMPLATE _method("setGammaRamp", &D::ClassType::setGammaRamp);
    _d.CPGF_MD_TEMPLATE _method("getGammaRamp", &D::ClassType::getGammaRamp);
    _d.CPGF_MD_TEMPLATE _method("clearSystemMessages", &D::ClassType::clearSystemMessages);
    _d.CPGF_MD_TEMPLATE _method("getType", &D::ClassType::getType);
    _d.CPGF_MD_TEMPLATE _method("isDriverSupported", &D::ClassType::isDriverSupported);
}


} // namespace meta_irrlicht




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
