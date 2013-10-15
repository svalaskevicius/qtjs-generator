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

public class ParameteredItem extends Item {
	private List<Parameter> parameterList;
	private List<Parameter> templateParameterList;
	private boolean isVirtual;
	private boolean isPureVirtual;
	private boolean isTemplate;

	public ParameteredItem(EnumCategory category, String name) {
		super(category, name);

		this.parameterList = new ArrayList<Parameter>();
		this.templateParameterList = new ArrayList<Parameter>();
	}

	public boolean hasParameter() {
		return this.parameterList.size() > 0;
	}
	
	public int getParameterCount() {
		return this.parameterList.size();
	}
	
	public Parameter getParameterAt(int index) {
		return this.parameterList.get(index);
	}

	public List<Parameter> getParameterList() {
		return parameterList;
	}

	public List<Parameter> getTemplateParameterList() {
		return templateParameterList;
	}
	
	public boolean isVirtual() {
		return isVirtual || this.isPureVirtual();
	}

	public void setVirtual(boolean isVirtual) {
		this.isVirtual = isVirtual;
	}

	public boolean isPureVirtual() {
		return isPureVirtual;
	}

	public void setPureVirtual(boolean isPureVirtual) {
		this.isPureVirtual = isPureVirtual;
	}

	public boolean isTemplate() {
		return isTemplate || this.templateParameterList.size() > 0;
	}
	
	public void setTemplate(boolean isTemplate) {
		this.isTemplate = isTemplate;
	}

	public int getNonDefaultParameterCount() {
		int count = 0;
		
		for(Parameter param : this.parameterList) {
			if(param.hasDefaultValue()) {
				break;
			}
			else {
				++count;
			}
		}
		
		return count;
	}

	public boolean removeParameterDefaultValue() {
		for(Parameter param : this.parameterList) {
			if(param.hasDefaultValue()) {
				param.clearDefaultValue();
				
				return true;
			}
		}

		return false;
	}

	public void removeParameter(String paramName) {
		for(int i = 0; i < this.parameterList.size(); ++i) {
			Parameter param = this.parameterList.get(i);
			if(param.getName().equals(paramName)) {
				this.parameterList.remove(i);
				
				break;
			}
		}
	}

	public void removeParameterAt(int index) {
		this.parameterList.remove(index);
	}

	public void setParameterDefaultValue(String paramName, String value) {
		for(int i = 0; i < this.parameterList.size(); ++i) {
			Parameter param = this.parameterList.get(i);
			if(param.getName().equals(paramName)) {
				param.setDefaultValue(value);
				
				break;
			}
		}
	}

	public void setParameterDefaultValueAt(int index, String value) {
		if(index < 0) {
			index += this.parameterList.size();
		}
		Parameter param = this.parameterList.get(index);
		param.setDefaultValue(value);
	}
	
	@Override
	public void replaceInType(String pattern, String substitute)
	{
		super.replaceInType(pattern, substitute);
		
		for(Parameter param : this.parameterList) {
			param.getType().setLiteralType(param.getType().getLiteralType().replaceAll(pattern, substitute));
		}
	}
	
	public boolean hasCallbackParameter() {
		for(Parameter param : this.parameterList) {
			if(param.getCallback() != null) {
				return true;
			}
		}
		
		return false;
	}
}
