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

#include "../../include/simpleoverridefromscript.h"

#include "../include/meta_test_simpleoverridefromscript.h"

using namespace cpgf;

namespace meta_test { 


GDefineMetaInfo createMetaClass_SimpleOverride()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<SimpleOverride, SimpleOverrideBase> _nd = GDefineMetaClass<SimpleOverride, SimpleOverrideBase>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent> >::declare("SimpleOverride");
        buildMetaClass_SimpleOverride(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<SimpleOverrideWrapper, SimpleOverride> _nd = GDefineMetaClass<SimpleOverrideWrapper, SimpleOverride>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent> >::declare("SimpleOverrideWrapper");
        buildMetaClass_SimpleOverrideWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_SimpleOverrideBase()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<SimpleOverrideBase> _nd = GDefineMetaClass<SimpleOverrideBase>::declare("SimpleOverrideBase");
        buildMetaClass_SimpleOverrideBase(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_test


