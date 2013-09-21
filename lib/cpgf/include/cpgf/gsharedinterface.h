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


#ifndef __GSHAREDINTERFACE_H
#define __GSHAREDINTERFACE_H

#include <cstddef>
#include <algorithm>


namespace cpgf {


template <typename T>
class GSharedInterface
{
private:
    typedef GSharedInterface<T> ThisType;

public:
	GSharedInterface(): rawPointer(NULL) {
	}

	explicit GSharedInterface(T * p) : rawPointer(p) {
		if(this->rawPointer != NULL) {
			this->rawPointer->addReference();
		}
	}

	GSharedInterface(const GSharedInterface & other) : rawPointer(other.rawPointer) {
		if(this->rawPointer != NULL) {
			this->rawPointer->addReference();
		}
	}
	
	GSharedInterface & operator = (GSharedInterface other) {
		this->swap(other);
		
		return *this;
	}
	
	~GSharedInterface() {
		if(this->rawPointer != NULL) {
			this->rawPointer->releaseReference();
		}
	}

	inline void reset(T * p = NULL) {
		ThisType(p).swap(*this);
	}

	inline T & operator * () const {
		return *this->rawPointer;
	}

	inline T * operator -> () const {
		return this->rawPointer;
	}

	inline bool operator ! () const {
		return this->rawPointer == NULL;
	}

	inline T * get() const {
		return this->rawPointer;
	}

	inline T * take() {
		T * p = this->rawPointer;
		
		this->rawPointer = NULL;
		
		return p;
	}

	inline operator bool() {
		return this->rawPointer != NULL;
	}

	inline operator bool() const {
		return this->rawPointer != NULL;
	}

	inline void swap(GSharedInterface & b) {
		using std::swap;

		swap(this->rawPointer, b.rawPointer);
	}

private:
	void operator == (const GSharedInterface &) const;
	void operator != (const GSharedInterface &) const;

protected:
	T * rawPointer;
};

template <typename T>
void swap(GSharedInterface<T> & a, GSharedInterface<T> & b)
{
	a.swap(b);
}


} // namespace cpgf


#endif
