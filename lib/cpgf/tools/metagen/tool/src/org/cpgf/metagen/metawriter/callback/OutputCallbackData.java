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


package org.cpgf.metagen.metawriter.callback;

import java.util.ArrayList;
import java.util.List;

import org.cpgf.metagen.Util;
import org.cpgf.metagen.metadata.ClassWrapperConfig;

public class OutputCallbackData {
	private boolean skipBind;
	private boolean separatedFile;
	private String headerCode;
	private String sourceCode;
	private ClassWrapperConfig wrapperConfig;
	private List<String> headerIncludeList;
	
	public OutputCallbackData() {
		this.skipBind = false;
		this.separatedFile = false;
	}

	public boolean isSkipBind() {
		return skipBind;
	}

	public void setSkipBind(boolean skipBind) {
		this.skipBind = skipBind;
	}
	
	public boolean isInSeparatedFile() {
		return this.separatedFile;
	}
	
	public void putInSeparatedFile() {
		this.separatedFile = true;
	}
	
	public void trace(String message) {
		Util.trace(message);
	}
	
	public void addHeaderCode(String code) {
		if(this.headerCode == null) {
			this.headerCode = "";
		}
		
		this.headerCode = this.headerCode + code + "\n";
	}

	public void addSourceCode(String code) {
		if(this.sourceCode == null) {
			this.sourceCode = "";
		}
		
		this.sourceCode = this.sourceCode + code + "\n";
	}

	public String getHeaderCode() {
		return headerCode;
	}

	public String getSourceCode() {
		return sourceCode;
	}

	public boolean wrapClass() {
		return this.wrapperConfig != null && this.wrapperConfig.isWrapClass();
	}
	
	public ClassWrapperConfig getWrapperConfig() {
		if(this.wrapperConfig == null) {
			this.wrapperConfig = new ClassWrapperConfig();
		}
		return this.wrapperConfig;
	}
	
	public List<String> getHeaderIncludeList() {
		return this.headerIncludeList;
	}
	
	public void addHeaderInclude(String include) {
		if(this.headerIncludeList == null) {
			this.headerIncludeList = new ArrayList<String>();
		}
		this.headerIncludeList.add(include);
	}
	
}
