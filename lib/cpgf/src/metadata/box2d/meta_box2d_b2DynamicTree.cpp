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
#include "Box2D/Collision/b2DynamicTree.h"

#include "cpgf/metadata/box2d/meta_box2d_b2DynamicTree.h"

using namespace cpgf;

namespace meta_box2d { 


GDefineMetaInfo createMetaClass_Global_b2dynamictree()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_b2dynamictree(0, _d);
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2DynamicTree()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2DynamicTree> _nd = GDefineMetaClass<b2DynamicTree>::declare("b2DynamicTree");
        buildMetaClass_B2DynamicTree(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_B2DynamicTreeNode()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<b2DynamicTreeNode> _nd = GDefineMetaClass<b2DynamicTreeNode>::declare("b2DynamicTreeNode");
        buildMetaClass_B2DynamicTreeNode(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_box2d


