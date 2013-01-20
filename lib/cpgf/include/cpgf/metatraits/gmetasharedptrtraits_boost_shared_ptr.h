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


#ifndef __GMETASHAREDPTRTRAITS_BOOST_SHARED_PTR_H
#define __GMETASHAREDPTRTRAITS_BOOST_SHARED_PTR_H

#include "cpgf/metatraits/gmetasharedptrtraits.h"

#include <boost/shared_ptr.hpp>


namespace cpgf {

template <typename T>
struct GMetaTraitsCreateSharedPointerTraits <boost::shared_ptr<T>, void >
{
	static IMetaSharedPointerTraits * createSharedPointerTraits(const GMetaTraitsParam &) {
		return new gmetasharedptrtraits_internal::GMetaTraitsCreateSharedPointerTraitsGeneral<T, boost::shared_ptr<T> >();
	}
};


} // namespace cpgf


#endif
