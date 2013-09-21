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


#ifndef __GMETAANNOTATION_H
#define __GMETAANNOTATION_H

#include "cpgf/private/gmetaannotation_p.h"

#include "cpgf/gscopedptr.h"

#include <string>
#include <string.h>




namespace cpgf {

GMAKE_FINAL(GAnnotationValue)

class GAnnotationValue : GFINAL_BASE(GAnnotationValue)
{
public:
	GAnnotationValue() {
	}

	template <typename T>
	explicit GAnnotationValue(const T & value) {
		meta_internal::InitAnnoVariant<T>::init(this->var, value);
	}

	GAnnotationValue(const GAnnotationValue & other);
	GAnnotationValue & operator = (GAnnotationValue other);

	~GAnnotationValue();

	void swap(GAnnotationValue & other);

	const GVariant * getVariant() const;

	bool canToString() const;
	bool canToWideString() const;
	bool canToInt() const;

	const char * toString() const;
	const wchar_t * toWideString() const;
	int toInt() const;
	bool toBoolean() const;

	template <typename T>
	T toObject() const {
		return fromVariant<T>(this->var);
	}

private:
	GVariant var;
};


GMAKE_FINAL(GAnnotationItem)

class GAnnotationItem : GFINAL_BASE(GAnnotationItem)
{
public:
	GAnnotationItem();
	~GAnnotationItem();

	GAnnotationItem(const char * name, const GAnnotationValue & value);

	GAnnotationItem(const GAnnotationItem & other);

	GAnnotationItem & operator = (const GAnnotationItem & other);

	const char * getName() const;
	const GAnnotationValue * getValue() const;
	
private:
	GScopedPointer<meta_internal::GAnnotationItemImplement> implement;
	GAnnotationValue value;
};


GMAKE_FINAL(GMetaAnnotation)

class GMetaAnnotation : public GMetaItem, GFINAL_BASE(GMetaAnnotation)
{
private:
	typedef GMetaItem super;

public:
	GMetaAnnotation(const char * name);
	virtual ~GMetaAnnotation();

	template <typename T>
	void addItem(const char * name, const T & value) {
		this->doAddItem(new GAnnotationItem(name, GAnnotationValue(value)));
	}

	template <typename T>
	GMetaAnnotation & operator() (const char * name, const T & value) {
		this->addItem(name, value);

		return *this;
	}

	const GMetaItem * getMetaItem() const;

	const GAnnotationValue * getValue(const char * name) const;
	size_t getCount() const;
	const char * getNameAt(size_t index) const;
	const GAnnotationValue * getValueAt(size_t index) const;

	virtual GMetaExtendType getItemExtendType(uint32_t flags) const;

private:
	void setMetaItem(const GMetaItem * metaItem);

	void clear();
	
	void doAddItem(GAnnotationItem * item);

private:
	GScopedPointer<meta_internal::GMetaAnnotationImplement> implement;
	const GMetaItem * metaItem;

private:
	friend class GMetaClass;
	friend class GMetaItem;
};


} // namespace cpgf

#endif
