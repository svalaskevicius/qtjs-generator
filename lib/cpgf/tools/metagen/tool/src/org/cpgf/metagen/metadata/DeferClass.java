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

import java.util.List;

import org.cpgf.metagen.Util;


public class DeferClass {
	private String name;
	private EnumVisibility visibility;
	private CppClass cppClass;
	
	public DeferClass(String name, EnumVisibility visibility) {
		this.name = name;
		this.visibility = visibility;
	}
	
	public DeferClass(CppClass cppClass) {
		this.cppClass = cppClass;
		this.visibility = EnumVisibility.Public;
	}
	
	public void resolve(List<CppClass> classList) {
		if(this.cppClass == null) {
			this.cppClass = (CppClass)(Util.findItemByName(classList, this.name));
		}

		if(this.cppClass != null) {
			this.cppClass.setVisibility(this.getVisibility());
		}
	}

	public CppClass getCppClass() {
		return cppClass;
	}

	public EnumVisibility getVisibility() {
		return visibility;
	}

	public String getName() {
		return name;
	}

}
