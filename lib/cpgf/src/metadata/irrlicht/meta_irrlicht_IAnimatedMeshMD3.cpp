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

#include "irrlicht.h"
#include "IAnimatedMeshMD3.h"

#include "cpgf/metadata/irrlicht/meta_irrlicht_IAnimatedMeshMD3.h"

using namespace cpgf;

namespace meta_irrlicht { 


GDefineMetaInfo createMetaClass_Global_ianimatedmeshmd3()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_ianimatedmeshmd3(0, _d);
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_IAnimatedMeshMD3()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<irr::scene::IAnimatedMeshMD3, irr::scene::IAnimatedMesh> _nd = GDefineMetaClass<irr::scene::IAnimatedMeshMD3, irr::scene::IAnimatedMesh>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("IAnimatedMeshMD3");
        buildMetaClass_IAnimatedMeshMD3(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_SMD3AnimationInfo()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<irr::scene::SMD3AnimationInfo> _nd = GDefineMetaClass<irr::scene::SMD3AnimationInfo>::declare("SMD3AnimationInfo");
        buildMetaClass_SMD3AnimationInfo(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_SMD3Face()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<irr::scene::SMD3Face> _nd = GDefineMetaClass<irr::scene::SMD3Face>::declare("SMD3Face");
        buildMetaClass_SMD3Face(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_SMD3Header()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<irr::scene::SMD3Header> _nd = GDefineMetaClass<irr::scene::SMD3Header>::declare("SMD3Header");
        buildMetaClass_SMD3Header(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_SMD3Mesh()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<irr::scene::SMD3Mesh, irr::IReferenceCounted> _nd = GDefineMetaClass<irr::scene::SMD3Mesh, irr::IReferenceCounted>::declare("SMD3Mesh");
        buildMetaClass_SMD3Mesh(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_SMD3MeshBuffer()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<irr::scene::SMD3MeshBuffer, irr::IReferenceCounted> _nd = GDefineMetaClass<irr::scene::SMD3MeshBuffer, irr::IReferenceCounted>::declare("SMD3MeshBuffer");
        buildMetaClass_SMD3MeshBuffer(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_SMD3MeshHeader()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<irr::scene::SMD3MeshHeader> _nd = GDefineMetaClass<irr::scene::SMD3MeshHeader>::declare("SMD3MeshHeader");
        buildMetaClass_SMD3MeshHeader(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_SMD3QuaternionTag()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<irr::scene::SMD3QuaternionTag> _nd = GDefineMetaClass<irr::scene::SMD3QuaternionTag>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent> >::declare("SMD3QuaternionTag");
        buildMetaClass_SMD3QuaternionTag(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_SMD3QuaternionTagList()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<irr::scene::SMD3QuaternionTagList> _nd = GDefineMetaClass<irr::scene::SMD3QuaternionTagList>::declare("SMD3QuaternionTagList");
        buildMetaClass_SMD3QuaternionTagList(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_SMD3TexCoord()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<irr::scene::SMD3TexCoord> _nd = GDefineMetaClass<irr::scene::SMD3TexCoord>::declare("SMD3TexCoord");
        buildMetaClass_SMD3TexCoord(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_SMD3Vertex()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<irr::scene::SMD3Vertex> _nd = GDefineMetaClass<irr::scene::SMD3Vertex>::declare("SMD3Vertex");
        buildMetaClass_SMD3Vertex(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_irrlicht


