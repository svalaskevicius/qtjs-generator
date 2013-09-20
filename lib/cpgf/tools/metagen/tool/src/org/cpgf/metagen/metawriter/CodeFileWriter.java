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


package org.cpgf.metagen.metawriter;

import java.util.List;

import org.cpgf.metagen.Config;
import org.cpgf.metagen.Util;
import org.cpgf.metagen.codewriter.CppWriter;
import org.cpgf.metagen.doxyxmlparser.FileInfo;
import org.cpgf.metagen.metadata.MetaInfo;

public class CodeFileWriter {
	private FileInfo fileInfo;
	private Config config;
	private MetaInfo metaInfo;

	public CodeFileWriter(Config config, MetaInfo metaInfo, FileInfo fileInfo) {
		this.config = config;
		this.metaInfo = metaInfo;
		this.fileInfo = fileInfo;
	}
	
	public boolean shouldSkip() {
		return false;
	}
	
	public void getCreationFunctionNames(List<String> creationFunctionNames) {
		if(this.shouldSkip()) {
			return;
		}
		
		this.doGetCreationFunctionNames(creationFunctionNames);
	}
	
	protected void doGetCreationFunctionNames(List<String> creationFunctionNames) {
	}
	
	public void write() {
		String fullFileName = Util.concatFileName(this.getOutputDirectory(), this.getOutputFileName());
		
		if(this.shouldSkip()) {
			Util.deleteFile(fullFileName);
			return;
		}
		
		CppWriter codeWriter = new CppWriter();
		
		WriterUtil.writeCommentForAutoGeneration(codeWriter);	

		try {
			this.doWrite(codeWriter);
			Util.forceCreateDirectories(this.getOutputDirectory());
			Util.writeTextToFile(fullFileName, codeWriter.getText());
		}
		catch(Exception e) {
			e.printStackTrace();
		}
	}
	
	protected String getOutputDirectory() {
		return null;
	}

	protected String getOutputFileName() {
		return null;
	}
	
	protected void doWrite(CppWriter codeWriter) throws Exception {
	}

	protected FileInfo getFileInfo() {
		return fileInfo;
	}

	protected Config getConfig() {
		return config;
	}

	protected MetaInfo getMetaInfo() {
		return metaInfo;
	}

}
