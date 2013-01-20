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
#include "Box2D/Dynamics/Joints/b2PrismaticJoint.h"

#include "cpgf/metadata/box2d/meta_box2d_b2PrismaticJoint.h"

using namespace cpgf;

namespace meta_box2d { 


GDefineMetaInfo createMetaClass_B2PrismaticJoint()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2PrismaticJoint, b2Joint> _nd = GDefineMetaClass<b2PrismaticJoint, b2Joint>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent> >::declare("b2PrismaticJoint");
        buildMetaClass_B2PrismaticJoint(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2PrismaticJointDef()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2PrismaticJointDef, b2JointDef> _nd = GDefineMetaClass<b2PrismaticJointDef, b2JointDef>::declare("b2PrismaticJointDef");
        buildMetaClass_B2PrismaticJointDef(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_box2d


