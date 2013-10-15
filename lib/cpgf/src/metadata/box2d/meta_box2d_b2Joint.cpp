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
#include "Box2D/Dynamics/Joints/b2Joint.h"

#include "cpgf/metadata/box2d/meta_box2d_b2Joint.h"

using namespace cpgf;

namespace meta_box2d { 


GDefineMetaInfo createMetaClass_Global_b2joint()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_b2joint(0, _d);
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2Jacobian()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2Jacobian> _nd = GDefineMetaClass<b2Jacobian>::declare("b2Jacobian");
        buildMetaClass_B2Jacobian(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2Joint()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2Joint> _nd = GDefineMetaClass<b2Joint>::Policy<MakePolicy<GMetaRuleDestructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("b2Joint");
        buildMetaClass_B2Joint(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2JointDef()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2JointDef> _nd = GDefineMetaClass<b2JointDef>::declare("b2JointDef");
        buildMetaClass_B2JointDef(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2JointEdge()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2JointEdge> _nd = GDefineMetaClass<b2JointEdge>::declare("b2JointEdge");
        buildMetaClass_B2JointEdge(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_box2d


