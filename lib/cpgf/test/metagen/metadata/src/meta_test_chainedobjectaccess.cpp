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

#include "../../include/chainedobjectaccess.h"

#include "../include/meta_test_chainedobjectaccess.h"

using namespace cpgf;

namespace meta_test { 


GDefineMetaInfo createMetaClass_ChainedObjectA()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<ChainedObjectA> _nd = GDefineMetaClass<ChainedObjectA>::declare("ChainedObjectA");
        buildMetaClass_ChainedObjectA(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_ChainedObjectB()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<ChainedObjectB> _nd = GDefineMetaClass<ChainedObjectB>::declare("ChainedObjectB");
        buildMetaClass_ChainedObjectB(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_ChainedObjectC()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<ChainedObjectC> _nd = GDefineMetaClass<ChainedObjectC>::declare("ChainedObjectC");
        buildMetaClass_ChainedObjectC(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_test


