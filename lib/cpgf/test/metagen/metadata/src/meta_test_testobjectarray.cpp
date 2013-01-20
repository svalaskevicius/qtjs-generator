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

#include "../../../testmetatraits.h"

#include "../../include/testobjectarray.h"

#include "../include/meta_test_testobjectarray.h"

using namespace cpgf;

namespace meta_test { 


GDefineMetaInfo createMetaClass_Global_testobjectarray()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_testobjectarray(0, _d);
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_OAData()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<OAData> _nd = GDefineMetaClass<OAData>::declare("OAData");
        buildMetaClass_OAData(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_OAObject()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<OAObject> _nd = GDefineMetaClass<OAObject>::declare("OAObject");
        buildMetaClass_OAObject(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_test


