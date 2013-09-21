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

import org.cpgf.metagen.Util;



public class Item {
	private String literalName;
	private String primaryName;
	private String qualifiedName;
	private EnumCategory category;
	private EnumVisibility visibility;
	private String location;
	private List<String> namespaces;
	private boolean isStatic;
	private boolean isConst;
	private CppClass owner;

	protected Item(EnumCategory category, String name) {
		if(name == null) {
			name = "";
		}

		this.category = category;
		this.literalName = name;
		this.primaryName = Util.getItemBaseName(name);
		
		this.namespaces = new ArrayList<String>();
	}

	public String getPrimaryName() {
		return primaryName;
	}

	public String getLiteralName() {
		return literalName;
	}

	public String getQualifiedName() {
		if(this.qualifiedName == null) {
			CppClass parent = this.getOwner();
			if(parent == null || parent.isGlobal()) {
				this.qualifiedName = Util.concatQualifiedName(this.getNamespace(), this.getPrimaryName());
			}
			else {
				this.qualifiedName = Util.concatQualifiedName(parent.getQualifiedName(), this.getPrimaryName());
			}
		}

		return this.qualifiedName;
	}
	
	public String getPrefixName() {
		String prefix = this.getFullNamespace();
		if(prefix.equals("")) {
			return this.getPrimaryName();
		}
		else {
			if(this.getPrimaryName().equals("")) {
				return prefix;
			}
			else {
				return prefix + "::" + this.getPrimaryName();
			}
		}
	}
	
	public String getFullNamespace() {
		String namespace = "";
		for(String ns : this.namespaces) {
			if(namespace.length() > 0) {
				namespace = namespace + "::";
			}
			namespace = namespace + ns;
		}
		return namespace;
	}
	
	public void getPolicyRules(List<String> rules) {
	}

	public EnumCategory getCategory() {
		return category;
	}

	public EnumVisibility getVisibility() {
		return visibility;
	}
	
	public void setVisibility(EnumVisibility visibility) {
		this.visibility = visibility;
	}
	
	public boolean isPublic() {
		return this.visibility == EnumVisibility.Public;
	}

	public boolean isProtected() {
		return this.visibility == EnumVisibility.Protected;
	}

	public boolean isPrivate() {
		return this.visibility == EnumVisibility.Private;
	}

	public String getLocation() {
		return location;
	}

	public void setLocation(String location) {
		this.location = location;
	}

	public String getNamespace() {
		return this.namespaces.size() > 0 ? this.namespaces.get(this.namespaces.size() - 1) : "";
	}

	public void setNamespaces(List<String> namespaces) {
		this.namespaces.clear();
		this.namespaces.addAll(namespaces);
	}

	public boolean isStatic() {
		return isStatic || this.owner.isGlobal();
	}

	public void setStatic(boolean isStatic) {
		this.isStatic = isStatic;
	}

	public boolean isConst() {
		return isConst;
	}

	public void setConst(boolean isConst) {
		this.isConst = isConst;
	}

	public CppClass getOwner() {
		return owner;
	}

	public void setOwner(CppClass owner) {
		this.owner = owner;
		this.qualifiedName = null;
	}
	
	public CppClass getRootOwner() {
		CppClass owner = this.owner;

		while(owner.getOwner() != null) {
			owner = owner.getOwner();
		}

		return owner;
	}

	public boolean isConstructor() {
		return this.getCategory() == EnumCategory.Constructor;
	}
	
	public boolean isDestructor() {
		return this.getCategory() == EnumCategory.Destructor;
	}
	
	public boolean isClass() {
		return this.getCategory() == EnumCategory.Class;
	}
	
	public boolean isConstant() {
		return this.getCategory() == EnumCategory.Constant;
	}
	
	public boolean isEnum() {
		return this.getCategory() == EnumCategory.Enum;
	}
	
	public boolean isField() {
		return this.getCategory() == EnumCategory.Field;
	}
	
	public boolean isMethod() {
		return this.getCategory() == EnumCategory.Method;
	}
	
	public boolean isOperator() {
		return this.getCategory() == EnumCategory.Operator;
	}

	public void replaceInType(String pattern, String substitute)
	{
	}

}
