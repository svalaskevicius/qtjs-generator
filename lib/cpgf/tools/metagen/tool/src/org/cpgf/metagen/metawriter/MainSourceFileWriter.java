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

import org.cpgf.metagen.Config;
import org.cpgf.metagen.codewriter.CppWriter;
import org.cpgf.metagen.metadata.CppClass;

public class MainSourceFileWriter extends CodeFileWriter {
	public MainSourceFileWriter(Config config) {
		super(config, null, null);
	}

	@Override
	public boolean shouldSkip() {
		return ! this.getConfig().autoRegisterToGlobal;
	}
	
	@Override
	protected String getOutputDirectory() {
		return this.getConfig().sourceOutput;
	}

	@Override
	protected String getOutputFileName() {
		return this.getConfig().mainSourceFile + this.getConfig().sourceExtension;
	}
	
	@Override
	protected void doWrite(CppWriter codeWriter) throws Exception {
		codeWriter.include(this.getConfig().metaHeaderPath + this.getConfig().mainSourceFile + ".h");
		codeWriter.include("cpgf/gmetadefine.h");
		codeWriter.include("cpgf/goutmain.h");

		codeWriter.writeLine("");
		codeWriter.writeLine("");
		
		codeWriter.useNamespace("cpgf");
		codeWriter.writeLine("");

		codeWriter.beginNamespace(this.getConfig().cppNamespace);
		
		codeWriter.beginNamespace("");

		codeWriter.writeLine("G_AUTO_RUN_BEFORE_MAIN()");

		codeWriter.beginBlock();

		CppClass global = new CppClass(null);
		WriterUtil.defineMetaClass(this.getConfig(), codeWriter, global, "_d", "define");

		codeWriter.writeLine(this.getMainFunctionName() + "(_d);");

		codeWriter.endBlock();
		codeWriter.writeLine("");

		codeWriter.endNamespace("");
		
		codeWriter.endNamespace(this.getConfig().cppNamespace);
	}

	private String getMainFunctionName() {
		return this.getConfig().metaClassMainRegisterPrefix + this.getConfig().projectID;
	}

}
