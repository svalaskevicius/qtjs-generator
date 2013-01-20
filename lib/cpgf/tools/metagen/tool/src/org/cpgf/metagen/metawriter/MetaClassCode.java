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


package org.cpgf.metagen.metawriter;

public class MetaClassCode {
	public String headerCode = "";
	public String sourceCode = "";
	public String createFunctionName = "";
	
	public MetaClassCode() {
		this.headerCode = "";
		this.sourceCode = "";
		this.createFunctionName = "";
	}
	
	public MetaClassCode(MetaClassCode other) {
		this.headerCode = other.headerCode;
		this.sourceCode = other.sourceCode;
		this.createFunctionName = other.createFunctionName;
	}
	
}
