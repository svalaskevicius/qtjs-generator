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


#ifndef __GSCOPEDINTERFACE_H
#define __GSCOPEDINTERFACE_H

#include "cpgf/gscopedptr.h"

#include <cstddef>
#include <algorithm>


namespace cpgf {


template <typename T>
struct GScopedInterfaceDeleter
{
	static inline void Delete(T * p) {
		if(p) {
			p->releaseReference();
		}
	}
};

template <typename T>
struct GScopedInterfaceResetPredict
{
	// dont restrict that p != this->rawPointer
	// even if the pointer is the same, it's necessary to reset to release one reference count.
	static inline bool CanReset(T * /*pointerOfMine*/, T * /*pointerToReset*/) {
		return true;
	}
};

template <typename T>
class GScopedInterface : public GScopedPointer<T, GScopedInterfaceDeleter<T>, GScopedInterfaceResetPredict<T> >
{
private:
	typedef GScopedPointer<T, GScopedInterfaceDeleter<T>, GScopedInterfaceResetPredict<T> > super;

public:
	GScopedInterface(): super() {
	}

	explicit GScopedInterface(T * p) : super(p) {
	}

};


} // namespace cpgf


#endif
