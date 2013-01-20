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

import java.util.ArrayList;
import java.util.List;

public class PredefinedClassTraitsList {
	private class TraitsItem {
		public String pattern;
		public ClassTraits traits;
	};
	
	private List<TraitsItem> traitsList;
	
	public PredefinedClassTraitsList() {
		this.traitsList = new ArrayList<PredefinedClassTraitsList.TraitsItem>();
	}
	
	public void addTraits(String pattern, ClassTraits traits) {
		TraitsItem item = new TraitsItem();
		item.pattern = pattern;
		item.traits = traits;
		this.traitsList.add(item);
	}
	
	public ClassTraits findTraits(String name) {
		for(TraitsItem item : this.traitsList) {
			if(name.matches(item.pattern)) {
				return item.traits;
			}
		}
		
		return null;
	}
	
	public ClassTraits findTraits(CppClass cppClass) {
		return this.findTraits(cppClass.getQualifiedName());
	}
}
