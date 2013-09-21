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

import java.util.List;

import org.cpgf.metagen.Util;
import org.cpgf.metagen.cppparser.ParserUtil;


public class CppInvokable extends ParameteredItem {
	private CppType resultType;

	public CppInvokable(EnumCategory category, String name, CppType resultType) {
		super(category, name);
		
		this.resultType = resultType;
	}

	public CppType getResultType() {
		return resultType;
	}

	public void setResultType(CppType resultType) {
		this.resultType = resultType;
	}
	
	public boolean hasResult() {
		return ! this.resultType.isVoid();
	}

	@Override
	public void getPolicyRules(List<String> rules) {
		if(this.resultType != null) {
			getPolicyRuleForParameter(rules, this.resultType, -1);
		}
		
		int indexOffset = this.getParameterPolicyRuleStartIndex();
		
		for(int i = 0; i < this.getParameterList().size(); ++i) {
			getPolicyRuleForParameter(rules, this.getParameterList().get(i).getType(), i + indexOffset);
		}
	}
	
	protected int getParameterPolicyRuleStartIndex() {
		return 0;
	}

	public static void getPolicyRuleForParameter(List<String> rules, CppType type, int parameterIndex) {
		ClassTraits traits = type.getClassTraits();

		if(traits != null) {
			if(type.isConstValueReference()) {
				if(traits.isHasTypeConvertConstructor() && !traits.isCopyConstructorHidden()) {
					Util.addToList(rules, ParserUtil.composePolicyRuleForParameter("GMetaRuleCopyConstReference", parameterIndex));
				}
				
				return;
			}
			
			if(type.isPointer()) {
				return;
			}
			
			if(traits.isCopyConstructorHidden()) {
				Util.addToList(rules, ParserUtil.composePolicyRuleForParameter("GMetaRuleParamNoncopyable", parameterIndex));
			}
			
		}
	}

	@Override
	public void replaceInType(String pattern, String substitute)
	{
		super.replaceInType(pattern, substitute);

		if(this.resultType != null) {
			this.resultType.setLiteralType(this.resultType.getLiteralType().replaceAll(pattern, substitute));
		}
	}
	

}
