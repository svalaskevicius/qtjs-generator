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


#ifndef __GOBJECTDELETERINTERFACE_H
#define __GOBJECTDELETERINTERFACE_H


#include "cpgf/gapiutil.h"
#include "cpgf/gtypeutil.h"


namespace cpgf {

class GObjectDeleterInterface : public IObject
{
	G_INTERFACE_IMPL_OBJECT
	
public:
	GObjectDeleterInterface(const GTypeDeleterCallback & deleter, void * instance)
		: deleter(deleter), instance(instance)
	{
	}
	
	virtual ~GObjectDeleterInterface() {
		this->deleter(this->instance);
	}
	
private:
	GTypeDeleterCallback deleter;
	void * instance;
};

template <typename T>
IObject * createObjectDeleterInterface(T * instance)
{
	return new GObjectDeleterInterface(GTypeDeleter_Delete<T>(), instance);
}


} // namespace cpgf



#endif

