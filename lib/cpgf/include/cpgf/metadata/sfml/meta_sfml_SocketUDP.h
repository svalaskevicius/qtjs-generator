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

#ifndef __META_SFML_SOCKETUDP_H
#define __META_SFML_SOCKETUDP_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace sf;


namespace meta_sfml { 


inline bool opErAToRWrapper_SocketUDP__opEqual(const SocketUDP * self, const SocketUDP & Other) {
    return (*self) == Other;
}
inline bool opErAToRWrapper_SocketUDP__opNotEqual(const SocketUDP * self, const SocketUDP & Other) {
    return (*self) != Other;
}
inline bool opErAToRWrapper_SocketUDP__opLess(const SocketUDP * self, const SocketUDP & Other) {
    return (*self) < Other;
}


template <typename D>
void buildMetaClass_SocketUDP(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("SetBlocking", &D::ClassType::SetBlocking);
    _d.CPGF_MD_TEMPLATE _method("Bind", &D::ClassType::Bind);
    _d.CPGF_MD_TEMPLATE _method("Unbind", &D::ClassType::Unbind);
    _d.CPGF_MD_TEMPLATE _method("Send", (Socket::Status (D::ClassType::*) (const char *, std::size_t, const IPAddress &, unsigned short))&D::ClassType::Send, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("Receive", (Socket::Status (D::ClassType::*) (char *, std::size_t, std::size_t &, IPAddress &, unsigned short &))&D::ClassType::Receive);
    _d.CPGF_MD_TEMPLATE _method("Send", (Socket::Status (D::ClassType::*) (Packet &, const IPAddress &, unsigned short))&D::ClassType::Send, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("Receive", (Socket::Status (D::ClassType::*) (Packet &, IPAddress &, unsigned short &))&D::ClassType::Receive);
    _d.CPGF_MD_TEMPLATE _method("Close", &D::ClassType::Close);
    _d.CPGF_MD_TEMPLATE _method("IsValid", &D::ClassType::IsValid);
    _d.CPGF_MD_TEMPLATE _method("GetPort", &D::ClassType::GetPort);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const SocketUDP &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const SocketUDP *, const SocketUDP &))&opErAToRWrapper_SocketUDP__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const SocketUDP &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const SocketUDP *, const SocketUDP &))&opErAToRWrapper_SocketUDP__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const SocketUDP &)>(mopHolder < mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const SocketUDP *, const SocketUDP &))&opErAToRWrapper_SocketUDP__opLess, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_sfml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
