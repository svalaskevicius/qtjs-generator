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

#include "Box2D/Box2D.h"
#include "Box2D/Collision/b2Collision.h"

#include "cpgf/metadata/box2d/meta_box2d_b2Collision.h"

using namespace cpgf;

namespace meta_box2d { 


GDefineMetaInfo createMetaClass_Global_b2collision()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_b2collision(0, _d);
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_Features()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2ContactID::Features> _nd = GDefineMetaClass<b2ContactID::Features>::declare("Features");
        buildMetaClass_Features(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2AABB()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2AABB> _nd = GDefineMetaClass<b2AABB>::declare("b2AABB");
        buildMetaClass_B2AABB(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2ClipVertex()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2ClipVertex> _nd = GDefineMetaClass<b2ClipVertex>::declare("b2ClipVertex");
        buildMetaClass_B2ClipVertex(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2Manifold()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2Manifold> _nd = GDefineMetaClass<b2Manifold>::declare("b2Manifold");
        buildMetaClass_B2Manifold(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2ManifoldPoint()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2ManifoldPoint> _nd = GDefineMetaClass<b2ManifoldPoint>::declare("b2ManifoldPoint");
        buildMetaClass_B2ManifoldPoint(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2RayCastInput()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2RayCastInput> _nd = GDefineMetaClass<b2RayCastInput>::declare("b2RayCastInput");
        buildMetaClass_B2RayCastInput(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2RayCastOutput()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2RayCastOutput> _nd = GDefineMetaClass<b2RayCastOutput>::declare("b2RayCastOutput");
        buildMetaClass_B2RayCastOutput(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2WorldManifold()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2WorldManifold> _nd = GDefineMetaClass<b2WorldManifold>::declare("b2WorldManifold");
        buildMetaClass_B2WorldManifold(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_box2d


