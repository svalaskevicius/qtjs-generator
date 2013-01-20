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


package org.cpgf.metagen.metadata;

import java.util.Map;

import org.cpgf.metagen.cppparser.EnumCompoundType;
import org.cpgf.metagen.cppparser.ParsedType;


public class CppType {
	private TypeSolver typeSolver;
	private ParsedType parsedType;

	public CppType(TypeSolver typeSolver, String literalType) {
		this.typeSolver = typeSolver;
		if(typeSolver != null) {
			this.parsedType = typeSolver.getParsedType(literalType);
		}
		else {
			this.parsedType = new ParsedType(literalType);
		}
	}

	public CppType(TypeSolver typeSolver, String literalType, String array) {
		this.typeSolver = typeSolver;
		if(typeSolver != null) {
			this.parsedType = typeSolver.getParsedType(literalType + (array == null ? "" : array));
		}
		else {
			this.parsedType = new ParsedType(literalType + (array == null ? "" : array));
		}
	}
	
	public ParsedType getParsedType() {
		return this.parsedType;
	}

	public String getLiteralType() {
		return this.parsedType.getLiteralType();
	}
	
	public void setLiteralType(String literalType) {
		this.parsedType.setLiteralType(literalType);
	}

	// use to identify the type
	public String getQualifiedBaseType() {
		return this.parsedType.getBaseType();
	}

	public ClassTraits getClassTraits() {
		return this.typeSolver.getClassTraits(this.getQualifiedBaseType());
	}

	public boolean isVoid() {
		return this.parsedType.isVoid();
	}

	public boolean isPointer() {
		return this.parsedType.isPointer();
	}

	public boolean isEmpty() {
		return this.parsedType.isEmpty();
	}
	
	public boolean isConstValueReference() {
		return ! this.parsedType.isPointer()
			&& (this.parsedType.getReference() == EnumCompoundType.Const);
	}

	public boolean isNonConstValueReference() {
		return ! this.parsedType.isPointer()
			&& (this.parsedType.getReference() == EnumCompoundType.NoCV);
	}

	public void replaceToken(Map<String, String> map)
	{
		if(this.parsedType != null) {
			this.parsedType.replaceToken(map);
		}
		else {
			if(map.containsKey(this.getLiteralType())) {
				this.setLiteralType(map.get(this.getLiteralType()));
			}
		}
	}

}
