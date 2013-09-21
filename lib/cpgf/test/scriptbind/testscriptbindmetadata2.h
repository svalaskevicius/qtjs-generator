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


#ifndef __TESTSCRIPTBINDMETADATA2_H
#define __TESTSCRIPTBINDMETADATA2_H

#include "../testmetatraits.h"

#include "cpgf/gmetaclass.h"

#include "cpgf/scriptbind/gscriptbind.h"
#include "cpgf/scriptbind/gscriptbindapi.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"

#include "testscriptbindmetadata1.h"
#include "testscriptbind.h"

#include <string.h>

#include <string>


namespace testscript {


class TestObject
{
public:
	TestObject() : value(Magic1) {
		this->rawPointer = &this->raw;
	}
	
	TestObject(const TestObject & other) : value(other.value) {
		(void)other;
		
		this->rawPointer = &this->raw;
	}

	TestObject(int value) : value(value) {
		this->rawPointer = &this->raw;
	}
	
	TestObject(int a, const std::string & s) : value(static_cast<int>(a + s.length())) {
		this->rawPointer = &this->raw;
	}
	
	TestObject & operator = (const TestObject & other) {
		(void)other;

		this->value = Magic3;

		return *this;
	}
	
	TestObject * self() {
		return this;
	}
	
	const TestObject * selfConst() {
		return this;
	}
	
	volatile TestObject * selfVolatile() {
		return this;
	}
	
	const volatile TestObject * selfConstVolatile() {
		return this;
	}
	
	int methodConst() {
		return 0;
	}
	
	int methodConst() const {
		return 1;
	}
	
	int methodVolatile() {
		return 0;
	}
	
	int methodVolatile() volatile {
		return 1;
	}
	
	int methodConstVolatile() {
		return 0;
	}
	
	int methodConstVolatile() const volatile {
		return 1;
	}
	
	int methodOverload(const TestObject & obj, int n) const {
		return obj.value + n;
	}
	
	int methodOverload(int n, const TestObject & obj) const {
		return obj.value + n + 1;
	}
	
	int methodOverload(int a, int b) const {
		return a * b;
	}
	
	int methodOverload(const char * s, int n) const {
		return static_cast<int>(strlen(s) + n);
	}
	
	int methodOverload(int n, const char * s) const {
		return static_cast<int>(strlen(s) + n + 1);
	}
	
	int methodOverload(const std::string & s, int n) const {
		return static_cast<int>(s.length() * n);
	}
	
	int methodOverload(int n, const std::string & s) const {
		return static_cast<int>(s.length() * n + 1);
	}
	
	int methodOverloadObject(const TestBase * obj) const {
		(void)obj;

		return TestBase().getValue();
	}
	
	int methodOverloadObject(const TestA * obj) const {
		(void)obj;

		return TestA().getValue();
	}
	
	int methodOverloadObject(const TestB * obj) const {
		(void)obj;

		return TestB().getValue();
	}
	
	int methodOverloadObject(const TestC * obj) const {
		(void)obj;

		return TestC().getValue();
	}

	int add(int n) const {
		return this->value + n;
	}

	static int incStaticValue() {
		++staticValue;
		return staticValue;
	}

	RawData * pointerRaw() {
		return &this->raw;
	}
	
	RawData & refRaw() {
		return this->raw;
	}

	bool isRawPointer(const RawData * p) const {
		return p == &this->raw;
	}
	
	bool isRawRef(const RawData & r) const {
		return &r == &this->raw;
	}
	
	void setRaw(RawData * p, int n, const char * s) {
		p->n = n;
		p->s = s;
	}

	TestData & refData() {
		return this->data;
	}
	
	TestData * pointerData() {
		return &this->data;
	}
	
	const TestData & constRefData() {
		return this->data;
	}
	
	const TestData * constPointerData() {
		return &this->data;
	}
	
	int scriptObjectCallback(cpgf::IScriptObject * scriptObject) {
		return cpgf::fromVariant<int>(cpgf::scriptGetValue(scriptObject, "myInt").toFundamental()) + 38;
	}

	cpgf::GVariant getVariant(int cat) const {
		switch(cat) {
			case 1:
				return "abc";

			case 2:
				return 1.5;

			default:
				return 38;
		}
	}
	
public:
	int	value;
	RawData raw;
	RawData * rawPointer;
	TestData data;

	static int staticValue;
};



}


#endif
