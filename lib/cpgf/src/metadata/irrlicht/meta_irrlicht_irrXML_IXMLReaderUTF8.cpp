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
#include "irrXML.h"

#include "cpgf/metadata/irrlicht/meta_irrlicht_irrXML.h"

using namespace cpgf;

namespace meta_irrlicht { 


GDefineMetaInfo createMetaClass_IIrrXMLReader_TemplateInstance_IXMLReaderUTF8()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<IIrrXMLReader<c8, IReferenceCounted>, IReferenceCounted > _nd = GDefineMetaClass<IIrrXMLReader<c8, IReferenceCounted>, IReferenceCounted >::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("IXMLReaderUTF8");
        buildMetaClass_IIrrXMLReader<GDefineMetaClass<IIrrXMLReader<c8, IReferenceCounted>, IReferenceCounted >, c8, IReferenceCounted >(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}
} // namespace meta_irrlicht


