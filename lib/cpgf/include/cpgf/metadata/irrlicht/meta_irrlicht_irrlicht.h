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

#ifndef __META_IRRLICHT_IRRLICHT_H
#define __META_IRRLICHT_IRRLICHT_H


#include "gmetaobjectlifemanager_irrlicht_ireferencecounted.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace irr;
using namespace irr::core;
using namespace irr::gui;
using namespace irr::io;
using namespace irr::scene;
using namespace irr::video;


namespace meta_irrlicht { 


template <typename D>
void buildMetaClass_Global_irrlicht(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("createDevice", (IrrlichtDevice* (*) (video::E_DRIVER_TYPE, const core::dimension2d< u32 > &, u32, bool, bool, bool, IEventReceiver *))&createDevice)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(false))
        ._default(copyVariantFromCopyable(false))
        ._default(copyVariantFromCopyable(false))
        ._default(copyVariantFromCopyable(16))
        ._default(copyVariantFromCopyable((core::dimension2d< u32 >(640, 480))))
        ._default(copyVariantFromCopyable(video::EDT_SOFTWARE))
    ;
    _d.CPGF_MD_TEMPLATE _method("createDeviceEx", (IrrlichtDevice* (*) (const SIrrlichtCreationParameters &))&createDeviceEx);
}


} // namespace meta_irrlicht




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
