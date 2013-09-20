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


package org.cpgf.metagen.metadata;

import java.util.ArrayList;
import java.util.List;

import org.cpgf.metagen.cppparser.ParserUtil;


public class TemplateInstance {
	private String fullType;
	private CppClass templateClass;
	private String mapName;
	private List<String> arguments;
	
	public TemplateInstance(String fullType, CppClass templateClass, String mapName) {
		this.fullType = fullType;
		this.templateClass = templateClass;
		this.mapName = mapName;
		
		if(this.mapName == null || this.mapName.length() == 0) {
			this.mapName = this.fullType;
		}
	}

	public String getFullType() {
		return fullType;
	}

	public CppClass getTemplateClass() {
		return templateClass;
	}

	public String getTemplateType() {
		return this.fullType.substring(this.fullType.indexOf('<') + 1, this.fullType.lastIndexOf('>'));
	}
	
	public List<String> getArguments() {
		if(this.arguments == null) {
			this.arguments = new ArrayList<String>();
			ParserUtil.splitDelimitedString(this.arguments, this.getTemplateType(), ',', 0);
		}
		return this.arguments;
	}

	public String getMapName() {
		return mapName;
	}
}
