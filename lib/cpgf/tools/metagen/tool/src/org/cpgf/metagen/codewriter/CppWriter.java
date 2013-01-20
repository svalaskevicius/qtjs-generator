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


package org.cpgf.metagen.codewriter;

public class CppWriter extends CodeWriter {
	public void beginIncludeGuard(String name) {
		name = name.replaceAll("\\.", "_");
		name = name.toUpperCase();
		name = "__" + name;

		this.write("#ifndef " + name + "\n");
		this.write("#define " + name + "\n");
		this.write("\n\n");
	}

	public void endIncludeGuard() {
		this.write("\n\n");
		this.write("#endif");
		this.write("\n");
	}

	public void include(String fileName) {
		this.include(fileName, false);
	}
	
	public void include(String fileName, boolean useBrackets) {
		String begin = useBrackets ? "<" : "\"";
		String end = useBrackets ? ">" : "\"";

		this.write("#include " + begin + fileName + end + "\n");
	}

	public void beginNamespace(String namespace) {
		if(namespace != null) {
			if(! namespace.equals("")) {
				namespace = namespace + " ";
			}
			this.write("namespace " + namespace + "{ \n");
			this.write("\n\n");
		}
	}

	public void endNamespace(String namespace) {
		if(namespace != null) {
			if(namespace.equals("")) {
				this.write("} // unnamed namespace\n");
			}
			else {
				this.write("} // namespace " + namespace + "\n");
			}
			this.write("\n\n");
		}
	}

	public void useNamespace(String namespace) {
		this.write("using namespace " + namespace + ";\n");
	}

	public void beginBlock() {
		this.write("{\n");
		this.incIndent();
	}

	public void endBlock() {
		this.decIndent();
		this.write("}\n");
	}

	public void endBlock(String append) {
		this.decIndent();
		this.write("}" + append + "\n");
	}

}
