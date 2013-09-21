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


package com.cpgf.metagen.cppparser;

import static org.junit.Assert.*;

import org.cpgf.metagen.cppparser.EnumCompoundType;
import org.cpgf.metagen.cppparser.ParsedType;
import org.junit.Test;

public class TestParsedType {
	@Test
	public void testBaseType() {
		ParsedType type;

		type = new ParsedType(" int ");
		assertEquals(type.getBaseType(), "int");

		type = new ParsedType(" const long * ");
		assertEquals(type.getBaseType(), "long");

		type = new ParsedType(" class MyClass * ");
		assertEquals(type.getBaseType(), "MyClass");

		type = new ParsedType(" volatile int []");
		assertEquals(type.getBaseType(), "int");
	}

	@Test
	public void testArray() {
		ParsedType type;

		type = new ParsedType(" int ");
		assertFalse(type.isArray());

		type = new ParsedType(" int[  ] ");
		assertTrue(type.isArray());
		assertEquals(type.getArrayDimension(), 1);
		assertEquals(type.getDimensionAt(0), "");

		type = new ParsedType(" int[ 2 ][10 *   6][3] ");
		assertTrue(type.isArray());
		assertEquals(type.getArrayDimension(), 3);
		assertEquals(type.getDimensionAt(0), "2");
		assertEquals(type.getDimensionAt(1), "10 * 6");
		assertEquals(type.getDimensionAt(2), "3");

		type = new ParsedType(" MyTemplate<int[]> ");
		assertFalse(type.isArray());
	}
	

	@Test
	public void testPointerAndReference() {
		ParsedType type;

		type = new ParsedType(" int ");
		assertEquals(type.getReference(), EnumCompoundType.None);
		assertEquals(type.getRValueReference(), EnumCompoundType.None);
		assertEquals(type.getPointerCount(), 0);

		type = new ParsedType(" int * &");
		assertEquals(type.getReference(), EnumCompoundType.NoCV);
		assertEquals(type.getRValueReference(), EnumCompoundType.None);
		assertEquals(type.getPointerCount(), 1);
		assertEquals(type.getPointerAt(0), EnumCompoundType.NoCV);

		type = new ParsedType(" const int * volatile * * const volatile");
		assertEquals(type.getReference(), EnumCompoundType.None);
		assertEquals(type.getRValueReference(), EnumCompoundType.None);
		assertEquals(type.getPointerCount(), 3);
		assertEquals(type.getPointerAt(0), EnumCompoundType.Const);
		assertEquals(type.getPointerAt(1), EnumCompoundType.Volatile);
		assertEquals(type.getPointerAt(2), EnumCompoundType.NoCV);

		type = new ParsedType(" int const & volatile");
		assertEquals(type.getReference(), EnumCompoundType.Const);
		assertEquals(type.getRValueReference(), EnumCompoundType.None);
		assertEquals(type.getPointerCount(), 0);
	}

}
