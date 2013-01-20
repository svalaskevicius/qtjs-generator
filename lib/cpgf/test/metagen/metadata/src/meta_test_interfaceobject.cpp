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

#include "../../include/interfaceobject.h"

#include "../include/meta_test_interfaceobject.h"

using namespace cpgf;

namespace meta_test { 


GDefineMetaInfo createMetaClass_MyInterfaceHolder()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<MyInterfaceHolder> _nd = GDefineMetaClass<MyInterfaceHolder>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent> >::declare("MyInterfaceHolder");
        buildMetaClass_MyInterfaceHolder(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_MyInterfaceObject()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<MyInterfaceObject, IObject> _nd = GDefineMetaClass<MyInterfaceObject, IObject>::declare("MyInterfaceObject");
        buildMetaClass_MyInterfaceObject(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_test


