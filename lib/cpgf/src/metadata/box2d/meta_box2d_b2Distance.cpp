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
#include "Box2D/Collision/b2Distance.h"

#include "cpgf/metadata/box2d/meta_box2d_b2Distance.h"

using namespace cpgf;

namespace meta_box2d { 


GDefineMetaInfo createMetaClass_Global_b2distance()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_b2distance(0, _d);
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2DistanceInput()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2DistanceInput> _nd = GDefineMetaClass<b2DistanceInput>::declare("b2DistanceInput");
        buildMetaClass_B2DistanceInput(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2DistanceOutput()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2DistanceOutput> _nd = GDefineMetaClass<b2DistanceOutput>::declare("b2DistanceOutput");
        buildMetaClass_B2DistanceOutput(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2DistanceProxy()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2DistanceProxy> _nd = GDefineMetaClass<b2DistanceProxy>::declare("b2DistanceProxy");
        buildMetaClass_B2DistanceProxy(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2SimplexCache()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2SimplexCache> _nd = GDefineMetaClass<b2SimplexCache>::declare("b2SimplexCache");
        buildMetaClass_B2SimplexCache(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_box2d


