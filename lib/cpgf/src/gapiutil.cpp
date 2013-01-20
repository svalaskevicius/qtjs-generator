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


#include "cpgf/gapiutil.h"
#include "cpgf/gerrorcode.h"

#include <stdlib.h>


namespace cpgf {


GImplObject::GImplObject()
	: referenceCount(1)
{
}

uint32_t GImplObject::queryInterface(void *, void *)
{
	return 0;
}

uint32_t GImplObject::addReference()
{
	++this->referenceCount;

	return this->referenceCount;
}


GImplExtendObject::GImplExtendObject()
	: errorInfo()
{
}

void GImplExtendObject::clearError()
{
	if(this->errorInfo) {
		this->errorInfo->errorCode = Error_None;
	}
}

void GImplExtendObject::handleError(int errorCode, const char * message)
{
	if(! this->errorInfo) {
		this->errorInfo.reset(new ExtendObjectErrorInfo);
	}

	this->errorInfo->errorCode = errorCode;
	this->errorInfo->message = message;
}

int32_t GImplExtendObject::getErrorCode()
{
	if(this->errorInfo) {
		return this->errorInfo->errorCode;
	}
	else {
		return Error_None;
	}
}

const char * GImplExtendObject::getErrorMessage()
{
	if(this->errorInfo) {
		return this->errorInfo->message.c_str();
	}
	else {
		return NULL;
	}
}


void * G_API_CC GImplMemoryAllocator::allocate(uint32_t size)
{
	return malloc(size);
}

void G_API_CC GImplMemoryAllocator::free(void * p)
{
	::free(p);
}

void * G_API_CC GImplMemoryAllocator::reallocate(void * p, uint32_t size)
{
	return realloc(p, size);
}


} // namespace cpgf
