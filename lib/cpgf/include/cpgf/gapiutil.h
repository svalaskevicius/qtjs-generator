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


#ifndef __GAPIUTIL_H
#define __GAPIUTIL_H


#include "cpgf/gapi.h"
#include "cpgf/gscopedptr.h"

#include <string>


#define G_INTERFACE_IMPL_OBJECT_DERIVED \
protected: \
	virtual uint32_t G_API_CC unused_queryInterface(void *, void *) { return 0; } \
	virtual uint32_t G_API_CC addReference() { return this->ginterface_implObject.addReference(); } \
	virtual uint32_t G_API_CC releaseReference() { return this->ginterface_implObject.releaseReference(this); }

#define G_INTERFACE_IMPL_OBJECT \
protected: \
	cpgf::GImplObject ginterface_implObject; \
	G_INTERFACE_IMPL_OBJECT_DERIVED

#define G_INTERFACE_IMPL_EXTENDOBJECT_DERIVED \
protected: \
	virtual int32_t G_API_CC getErrorCode() { return this->ginterface_implExtendObject.getErrorCode(); } \
	virtual const char * G_API_CC getErrorMessage() { return this->ginterface_implExtendObject.getErrorMessage(); }

#define G_INTERFACE_IMPL_EXTENDOBJECT \
protected: \
	cpgf::GImplExtendObject ginterface_implExtendObject; \
	G_INTERFACE_IMPL_EXTENDOBJECT_DERIVED

namespace cpgf {


class GImplObject
{
public:
	GImplObject();
	virtual ~GImplObject();

	uint32_t queryInterface(void *, void *);
	uint32_t addReference();
	
	template <typename T>
	uint32_t releaseReference(T * p)
	{
		if(this->referenceCount > 0) {
			--this->referenceCount;
		}

		unsigned int refCount = this->referenceCount;

		if(this->referenceCount == 0) {
			delete p;
		}

		return refCount;
	}

private:
	unsigned int referenceCount;
};

class GImplExtendObject : public GImplObject
{
private:
	struct ExtendObjectErrorInfo {
		int32_t errorCode;
		std::string message;
	};

public:
	GImplExtendObject();

	void clearError();
	void handleError(int errorCode, const char * message);

	int32_t getErrorCode();
	const char * getErrorMessage();

private:
	GScopedPointer<ExtendObjectErrorInfo> errorInfo;
};

class GImplMemoryAllocator : public GImplObject, public IMemoryAllocator
{
	G_INTERFACE_IMPL_OBJECT

protected:
	virtual void * G_API_CC allocate(uint32_t size);
	virtual void G_API_CC free(void * p);
	virtual void * G_API_CC reallocate(void * p, uint32_t size);
};


} // namespace cpgf



#endif
