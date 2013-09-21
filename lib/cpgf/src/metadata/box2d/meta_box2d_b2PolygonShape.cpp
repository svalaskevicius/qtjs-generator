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

#include "Box2D/Box2D.h"
#include "Box2D/Collision/Shapes/b2PolygonShape.h"

#include "cpgf/metadata/box2d/meta_box2d_b2PolygonShape.h"

using namespace cpgf;

namespace meta_box2d { 


GDefineMetaInfo createMetaClass_B2PolygonShape()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2PolygonShape, b2Shape> _nd = GDefineMetaClass<b2PolygonShape, b2Shape>::declare("b2PolygonShape");
        buildMetaClass_B2PolygonShape(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_box2d


