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

public class CppEnum extends Item {
	private List<EnumValue> valueList;

	public CppEnum(String name) {
		super(EnumCategory.Enum, name);
		
		this.valueList = new ArrayList<EnumValue>();
	}

	public List<EnumValue> getValueList() {
		return valueList;
	}

	public void addValue(String name, String value) {
		valueList.add(new EnumValue(this, name, value));
	}

}
