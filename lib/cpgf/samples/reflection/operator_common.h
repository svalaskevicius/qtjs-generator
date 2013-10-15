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


#ifndef __OPERATOR_COMMON_H
#define __OPERATOR_COMMON_H

#include "cpgf/gmetadefine.h"
#include "cpgf/goutmain.h"

#include "cpgf/gtestutil.h"
#include "cpgf/gmetaoperator.h"
#include "cpgf/gmetaapiutil.h"

#include "cpgf/gscopedinterface.h"

#include <iostream>
#include <string>


#define DEF_TEST_OBJECT(CLS) \
	public: \
		CLS() : value(cpgf::testRand(100, 10000)) {} \
		explicit CLS(int value) : value(value) {} \
		CLS(const CLS & other) : value(other.value) {} \
		CLS & operator = (const CLS & other) { this->value = other.value; return *this; } \
		bool operator == (const CLS & other) const { return this->value == other.value; } \
		bool operator != (const CLS & other) const { return this->value != other.value; } \
	public: \
		int value;


inline const cpgf::GMetaOperator * getOperator(cpgf::GMetaOpType op, const cpgf::GMetaClass * metaClass, int index = 0)
{
	for(unsigned int i = 0; i < metaClass->getOperatorCount(); ++i) {
		const cpgf::GMetaOperator * meta = metaClass->getOperatorAt(i);

		if(meta->getOperator() == op) {
			if(index <= 0) {
				return meta;
			}

			--index;
		}
	}

	return NULL;
}

inline cpgf::IMetaOperator * getOperator(cpgf::GMetaOpType op, const cpgf::GScopedInterface<cpgf::IMetaClass> & metaClass, int index = 0)
{
	for(unsigned int i = 0; i < metaClass->getOperatorCount(); ++i) {
		cpgf::GScopedInterface<cpgf::IMetaOperator> meta(metaClass->getOperatorAt(i));

		if(meta->getOperator() == op) {
			if(index <= 0) {
				return meta.take();
			}

			--index;
		}
	}

	return NULL;
}





#endif
