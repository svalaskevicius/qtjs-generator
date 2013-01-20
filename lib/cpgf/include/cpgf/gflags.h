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


#ifndef __GFLAGS_H
#define __GFLAGS_H


namespace cpgf {

namespace gflags_internal {
	template <unsigned int Size>
	struct GFlagsValueType
	{
		typedef unsigned int ValueType;
	};

	template <>
	struct GFlagsValueType <4>
	{
		typedef unsigned int ValueType;
	};

	template <>
	struct GFlagsValueType <8>
	{
		typedef unsigned long long ValueType;
	};
}


template <typename T>
class GFlags
{
private:
	typedef typename gflags_internal::GFlagsValueType<sizeof(T)>::ValueType ValueType;

public:
	GFlags() : value(T()) {
	}
	
	GFlags(T flags) : value(flags) {
	}
	
	GFlags(int flags) : value(flags) {
	}
	
	GFlags(long long flags) : value(flags) {
	}
	
	GFlags(unsigned int flags) : value(flags) {
	}
	
	GFlags(unsigned long long flags) : value(flags) {
	}
	
	GFlags(const GFlags & other) : value(other.value) {
	}
	
	GFlags & operator = (const GFlags & other) {
		this->value = other.value;

		return *this;
	}
	
	operator T () const {
		return this->value;
	}

	operator unsigned int () const {
		return static_cast<unsigned int>(this->value);
	}
	
	operator bool () const {
		return this->value != T(0);
	}
	
	bool operator ! () const {
		return this->value == T(0);
	}
	
	void set(T flags) {
		this->value |= flags;
	}
	
	void clear(T flags) {
		this->value &= ~flags;
	}
	
	void setByBool(T flags, bool value) {
		if(value) {
			this->set(flags);
		}
		else {
			this->clear(flags);
		}
	}
	
	bool has(T flags) const {
		return (this->value & flags) == static_cast<ValueType>(flags);
	}
	
	bool has(ValueType flags) const {
		return (this->value & flags) == static_cast<ValueType>(flags);
	}
	
	bool hasAny(T flags) const {
		return (this->value & flags) != 0;
	}
	
	bool hasAny(ValueType flags) const {
		return (this->value & flags) != 0;
	}
	
private:
	ValueType value;	
};

typedef GFlags<unsigned int> GFlags32;
typedef GFlags<unsigned long long> GFlags64;



} // namespace cpgf



#endif

