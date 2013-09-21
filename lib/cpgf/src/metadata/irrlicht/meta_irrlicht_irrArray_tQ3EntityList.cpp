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

#include "irrlicht.h"
#include "irrArray.h"

#include "cpgf/metadata/irrlicht/meta_irrlicht_irrArray.h"

using namespace cpgf;

namespace meta_irrlicht { 


GDefineMetaInfo createMetaClass_Array_TemplateInstance_tQ3EntityList()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<array<irr::scene::quake3::IEntity, irrAllocator<irr::scene::quake3::IEntity> > > _nd = GDefineMetaClass<array<irr::scene::quake3::IEntity, irrAllocator<irr::scene::quake3::IEntity> > >::declare("tQ3EntityList");
        buildMetaClass_Array<GDefineMetaClass<array<irr::scene::quake3::IEntity, irrAllocator<irr::scene::quake3::IEntity> > >, irr::scene::quake3::IEntity, irrAllocator<irr::scene::quake3::IEntity>  >(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}
} // namespace meta_irrlicht


