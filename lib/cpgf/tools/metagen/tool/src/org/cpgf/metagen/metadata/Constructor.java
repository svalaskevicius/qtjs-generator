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

public class Constructor extends CppInvokable {
	private boolean isExplicit;

	public Constructor() {
		super(EnumCategory.Constructor, "", null);
	}

	public boolean isExplicit() {
		return isExplicit;
	}

	public void setExplicit(boolean isExplicit) {
		this.isExplicit = isExplicit;
	}
	
	public boolean isDefaultConstructor() {
		return ! this.hasParameter();
	}

	public boolean isCopyConstructor() {
		if(this.getParameterList().size() == 1 && this.getOwner() != null) {
			CppType type = this.getParameterList().get(0).getType();
			return type.isConstValueReference() && type.getLiteralType().indexOf(this.getOwner().getPrimaryName()) >= 0;
		}
		else {
			return false;
		}
	}
	
	public boolean isTypeConverter() {
		if(! this.isCopyConstructor()) {
			if(this.getNonDefaultParameterCount() == 1 && this.getOwner() != null) {
				return true;
			}
		}

		return false;
	}
}
