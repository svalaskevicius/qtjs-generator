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
#include "IEventReceiver.h"

#include "cpgf/metadata/irrlicht/meta_irrlicht_IEventReceiver.h"

using namespace cpgf;

namespace meta_irrlicht { 


GDefineMetaInfo createMetaClass_Global_ieventreceiver()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_ieventreceiver(0, _d);
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_IEventReceiver()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<irr::IEventReceiver> _nd = GDefineMetaClass<irr::IEventReceiver>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("IEventReceiver");
        buildMetaClass_IEventReceiver(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<IEventReceiverWrapper, irr::IEventReceiver> _nd = GDefineMetaClass<IEventReceiverWrapper, irr::IEventReceiver>::declare("IEventReceiverWrapper");
        buildMetaClass_IEventReceiverWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_SEvent()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<irr::SEvent> _nd = GDefineMetaClass<irr::SEvent>::declare("SEvent");
        buildMetaClass_SEvent(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


GDefineMetaInfo createMetaClass_SJoystickInfo()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<irr::SJoystickInfo> _nd = GDefineMetaClass<irr::SJoystickInfo>::declare("SJoystickInfo");
        buildMetaClass_SJoystickInfo(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_irrlicht


