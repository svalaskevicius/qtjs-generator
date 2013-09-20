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


#ifndef __GREFERENCE_h
#define __GREFERENCE_h

#include "cpgf/ggetobjectaddress.h"


namespace cpgf {

template <typename T>
class GReference
{
public:
	typedef T Type;

public:
	explicit GReference(T & data) : dataAddress(getObjectAddress(data)) {
	}

	GReference(const GReference & other) : dataAddress(other.dataAddress) {
	}

	GReference & operator = (const GReference & other) {
		this->dataAddress = other.dataAddress;
	}

	T * operator & () const {
		return this->dataAddress;
	}

	operator T& () const {
		return *this->dataAddress;
	}

private:
	bool operator == (const GReference & other);

private:
	T * dataAddress;
};


template <typename T>
inline GReference<T> makeReference(T & data)
{
	return GReference<T>(data);
}

template <typename T>
inline GReference<T> makeReference(const GReference<T> & data)
{
	return data;
}

template <typename T>
inline GReference<const T> makeReference(const GReference<const T> & data)
{
	return data;
}

template <typename T>
inline GReference<const volatile T> makeReference(const GReference<const volatile T> & data)
{
	return data;
}

template <typename T>
inline GReference<const T> makeConstReference(const T & data)
{
	return GReference<const T>(data);
}

template <typename T>
inline GReference<T> makeConstReference(const GReference<T> & data)
{
	return data;
}

template <typename T>
inline GReference<const T> makeConstReference(const GReference<const T> & data)
{
	return data;
}

template <typename T>
inline GReference<const volatile T> makeConstReference(const GReference<const volatile T> & data)
{
	return data;
}


} //namespace cpgf


#endif
