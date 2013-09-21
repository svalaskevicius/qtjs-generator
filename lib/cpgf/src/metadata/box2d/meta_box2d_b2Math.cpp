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
#include "Box2D/Common/b2Math.h"

#include "cpgf/metadata/box2d/meta_box2d_b2Math.h"

using namespace cpgf;

namespace meta_box2d { 


GDefineMetaInfo createMetaClass_Global_b2math()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_b2math(0, _d);
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2Mat22()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2Mat22> _nd = GDefineMetaClass<b2Mat22>::declare("b2Mat22");
        buildMetaClass_B2Mat22(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2Mat33()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2Mat33> _nd = GDefineMetaClass<b2Mat33>::declare("b2Mat33");
        buildMetaClass_B2Mat33(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2Sweep()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2Sweep> _nd = GDefineMetaClass<b2Sweep>::declare("b2Sweep");
        buildMetaClass_B2Sweep(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2Transform()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2Transform> _nd = GDefineMetaClass<b2Transform>::declare("b2Transform");
        buildMetaClass_B2Transform(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2Vec2()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2Vec2> _nd = GDefineMetaClass<b2Vec2>::declare("b2Vec2");
        buildMetaClass_B2Vec2(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2Vec3()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2Vec3> _nd = GDefineMetaClass<b2Vec3>::declare("b2Vec3");
        buildMetaClass_B2Vec3(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_box2d


