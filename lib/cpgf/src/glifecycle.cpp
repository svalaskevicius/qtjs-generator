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


#include "cpgf/glifecycle.h"
#include "cpgf/gscopedptr.h"

#include <algorithm>
#include <vector>


using namespace std;

namespace cpgf {

namespace {

bool libraryIsActive = true;

class GOrderedStaticUninitializerManager
{
private:
	struct Item
	{
		GStaticUninitializationOrderType order;
		GStaticUninitializerType uninitializer;

		bool operator < (const Item & other) const {
			return this->order < other.order;
		}
	};

	typedef vector<Item> ListType;

public:
	~GOrderedStaticUninitializerManager() {
		sort(this->itemList.begin(), this->itemList.end());
		for(ListType::iterator it = this->itemList.begin(); it != this->itemList.end(); ++it) {
			it->uninitializer();
		}
	}

	void add(GStaticUninitializationOrderType order, const GStaticUninitializerType & uninitializer)
	{
		Item item;
		item.order = order;
		item.uninitializer = uninitializer;
		this->itemList.push_back(item);
	}

private:
	ListType itemList;
};

GScopedPointer<GOrderedStaticUninitializerManager> orderedStaticUninitializerManager;

} // unnamed namespace

void shutDownLibrary()
{
	libraryIsActive = false;
}

bool isLibraryLive()
{
	return libraryIsActive;
}


void addOrderedStaticUninitializer(GStaticUninitializationOrderType order, const GStaticUninitializerType & uninitializer)
{
	if(! orderedStaticUninitializerManager) {
		orderedStaticUninitializerManager.reset(new GOrderedStaticUninitializerManager());
	}

	orderedStaticUninitializerManager->add(order, uninitializer);
}

G_GUARD_LIBRARY_LIFE


} // namespace cpgf
