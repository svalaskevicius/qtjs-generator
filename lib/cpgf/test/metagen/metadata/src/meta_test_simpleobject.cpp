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

#include "../../../testmetatraits.h"

#include "../../include/simpleobject.h"

#include "../include/meta_test_simpleobject.h"

using namespace cpgf;

namespace meta_test { 


GDefineMetaInfo createMetaClass_Global_simpleobject()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_simpleobject(0, _d);
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_SimpleAtom()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<SimpleAtom> _nd = GDefineMetaClass<SimpleAtom>::declare("SimpleAtom");
        buildMetaClass_SimpleAtom(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_SimpleData()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<SimpleData> _nd = GDefineMetaClass<SimpleData>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent> >::declare("SimpleData");
        buildMetaClass_SimpleData(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_SimpleObject()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<SimpleObject> _nd = GDefineMetaClass<SimpleObject>::declare("SimpleObject");
        buildMetaClass_SimpleObject(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_test


