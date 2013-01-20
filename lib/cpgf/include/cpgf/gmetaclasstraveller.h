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


#ifndef __GMETACLASSTRAVELLER_H
#define __GMETACLASSTRAVELLER_H


#include "cpgf/gclassutil.h"
#include "cpgf/gapi.h"
#include "cpgf/gsharedinterface.h"

#include <deque>

#include <stddef.h>


namespace cpgf {

struct IMetaClass;

class GMetaClassTraveller : public GNoncopyable
{
private:
	class Node {
	public:
		Node(IMetaClass * metaClass, void * instance, IMetaClass * derived);
		~Node();

		Node(const Node & other);
		Node & operator = (const Node & other);

	public:
		GSharedInterface<IMetaClass> metaClass;
		void * instance;
		GSharedInterface<IMetaClass> derived;
	};
	
	typedef std::deque<Node> ListType;
	
public:
	GMetaClassTraveller(IMetaClass * metaClass, void * instance);
	~GMetaClassTraveller();
	
	IMetaClass * next(void ** outInstance, IMetaClass ** outDerived);
	IMetaClass * next(void ** outInstance);

private:
	ListType traversal;
};



} // namespace cpgf


#endif

