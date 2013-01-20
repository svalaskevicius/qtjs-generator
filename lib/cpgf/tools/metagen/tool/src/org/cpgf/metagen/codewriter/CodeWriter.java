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

public class CodeWriter {
	private int indent;
	private String text;
	
	public CodeWriter() {
		this.indent = 0;
		this.text = "";
	}

	public void incIndent() {
		++this.indent;
	}

	public void decIndent() {
		--this.indent;
		if(this.indent < 0) {
			this.indent = 0;
		}
	}
	
	private String getIndentText() {
		String indentText = "";
		for(int i = 0; i < this.indent; ++i) {
			indentText = indentText + "    "; 
		}
		
		return indentText;
	}
	
	public void write(String s) {
		if(s == null || s.length() == 0) {
			return;
		}

		String indentText = this.getIndentText();

		if(this.text.length() > 0 && this.text.lastIndexOf('\n') == this.text.length() - 1) {
			this.text = this.text + indentText;
		}

		this.text = this.text + s;
	}
	
	public void writeLine(String s) {
		this.write(s + "\n");
	}
	
	public void writeMultipleLines(String s) {
		if(s.length() > 0) {
			String[] lines = s.split("\n");
			for(String line : lines) {
				this.write(line + "\n");
			}
		}
	}
	
	public void write(CodeWriter other) {
		if(other == null || other.getText().length() == 0) {
			return;
		}

		String indentText = this.getIndentText();
		String s = other.getText();
		s = s.replaceAll("\n", "\n" + indentText);
		s = indentText + s;
		s = s.replaceFirst(" +$", "");
		this.text = this.text + s;
	}

	public String getText() {
		return this.text;
	}

	public int getIndent() {
		return indent;
	}

	public void setIndent(int indent) {
		this.indent = indent;
	}

}
