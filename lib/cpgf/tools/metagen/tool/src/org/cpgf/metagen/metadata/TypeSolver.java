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

import java.util.HashMap;
import java.util.Map;

import org.cpgf.metagen.cppparser.ParsedType;


public class TypeSolver {
	private MetaInfo metaInfo;
	private PredefinedClassTraitsList predefinedClassTraits;
	private Map<String, ParsedType> parsedTypeMap;
	private Map<String, ClassTraits> classTraitsMap;
	private Map<String, CppClass> classMap;
	
	public TypeSolver(MetaInfo metaInfo, PredefinedClassTraitsList predefinedClassTraits) {
		this.metaInfo = metaInfo;
		this.predefinedClassTraits = predefinedClassTraits;
		this.parsedTypeMap = new HashMap<String, ParsedType>();
		this.classTraitsMap = new HashMap<String, ClassTraits>();
		this.classMap = new HashMap<String, CppClass>();
	}

	public ParsedType getParsedType(String literalType) {
		ParsedType type = null; // this.parsedTypeMap.get(literalType);

		if(type == null) {
			type = new ParsedType(literalType);
			this.parsedTypeMap.put(literalType, type);
		}

		return type;
	}

	public CppClass getCppClass(String qualifiedType) {
		CppClass cppClass = this.classMap.get(qualifiedType);

		if(cppClass == null) {
			cppClass = this.metaInfo.findClassByName(qualifiedType);
			if(cppClass != null) {
				this.classMap.put(qualifiedType, cppClass);
			}
		}

		return cppClass;
	}

	public ClassTraits getClassTraits(String qualifiedType) {
		ClassTraits traits = this.classTraitsMap.get(qualifiedType);

		if(traits == null) {
			traits = this.predefinedClassTraits.findTraits(qualifiedType);
		}

		if(traits == null) {
			CppClass cppClass = this.getCppClass(qualifiedType);
			if(cppClass == null) {
				traits = new ClassTraits();
			}
			else {
				traits = cppClass.getTraits();
			}
			this.classTraitsMap.put(qualifiedType, traits);
		}

		return traits;
	}
}
