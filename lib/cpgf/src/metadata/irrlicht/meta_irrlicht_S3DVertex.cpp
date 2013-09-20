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
#include "S3DVertex.h"

#include "cpgf/metadata/irrlicht/meta_irrlicht_S3DVertex.h"

using namespace cpgf;

namespace meta_irrlicht { 


GDefineMetaInfo createMetaClass_Global_s3dvertex()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_s3dvertex(0, _d);
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_S3DVertex()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<irr::video::S3DVertex> _nd = GDefineMetaClass<irr::video::S3DVertex>::declare("S3DVertex");
        buildMetaClass_S3DVertex(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_S3DVertex2TCoords()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<irr::video::S3DVertex2TCoords, irr::video::S3DVertex> _nd = GDefineMetaClass<irr::video::S3DVertex2TCoords, irr::video::S3DVertex>::declare("S3DVertex2TCoords");
        buildMetaClass_S3DVertex2TCoords(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_S3DVertexTangents()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<irr::video::S3DVertexTangents, irr::video::S3DVertex> _nd = GDefineMetaClass<irr::video::S3DVertexTangents, irr::video::S3DVertex>::declare("S3DVertexTangents");
        buildMetaClass_S3DVertexTangents(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_irrlicht


