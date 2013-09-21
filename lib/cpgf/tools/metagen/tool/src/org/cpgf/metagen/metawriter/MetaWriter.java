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

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

import org.cpgf.metagen.Config;
import org.cpgf.metagen.Util;
import org.cpgf.metagen.doxyxmlparser.FileInfo;
import org.cpgf.metagen.doxyxmlparser.FileMap;
import org.cpgf.metagen.metadata.CppClass;
import org.cpgf.metagen.metadata.MetaInfo;
import org.cpgf.metagen.metadata.TemplateInstance;


public class MetaWriter {
	private List<CodeFileWriter> fileWriterList;
	private MetaInfo metaInfo;
	private List<CppClass> classList;
	private Config config;
	private FileMap fileMap;

	public MetaWriter(Config config, MetaInfo metaInfo, FileMap fileMap) {
		this.metaInfo = metaInfo;
		this.classList = this.metaInfo.getClassList();
		this.fileMap = fileMap;
		this.config = config;

		this.fileWriterList = new ArrayList<CodeFileWriter>();
	}

	public void write() throws Exception
	{
		Util.trace("Building file information.");

		this.buildFileWriterList();
		this.buildMainFileWriterList();

		Util.trace("Writing files.");

		for(CodeFileWriter fileWriter : this.fileWriterList) {
			fileWriter.write();
		}
	}

	private void buildFileWriterList()
	{
		HashMap<String, ClassSourceFileWriter> locationSourceFileWriterMap = new HashMap<String, ClassSourceFileWriter>();
		HashMap<String, ClassHeaderFileWriter> locationHeaderFileWriterMap = new HashMap<String, ClassHeaderFileWriter>();

		for(CppClass cppClass : this.classList) {
			String location = cppClass.getLocation();
			String key = location.toLowerCase();

			FileInfo fileInfo = this.fileMap.getFileMap().get(location);
			if(fileInfo == null) {
				continue;
			}
			
			if(cppClass.isTemplate()) {
				List<TemplateInstance> templateInstanceList = this.metaInfo.findTemplateInstances(cppClass);
				if(templateInstanceList != null) {
					for(TemplateInstance templateInstance : templateInstanceList) {
						TemplateInstanceSourceFileWriter templateInstanceSourceFileWriter = new TemplateInstanceSourceFileWriter(this.config, this.metaInfo, fileInfo, location, templateInstance); 
						this.fileWriterList.add(templateInstanceSourceFileWriter);
					}
				}
			}
			
			if(this.metaInfo.getCallbackClassMap().getData(cppClass).isInSeparatedFile()) {
				ClassSourceFileWriter sourceFileWriter = this.createAndAddSourceFileWriter(fileInfo, location, cppClass);
				sourceFileWriter.addClass(cppClass);

				ClassHeaderFileWriter headerFileWriter = this.createAndAddHeaderFileWriter(fileInfo, location, cppClass);
				headerFileWriter.addClass(cppClass);
			}
			else {
				if(! locationSourceFileWriterMap.containsKey(key)) {
					ClassSourceFileWriter sourceFileWriter = this.createAndAddSourceFileWriter(fileInfo, location, null);
					locationSourceFileWriterMap.put(key, sourceFileWriter);
				}
				locationSourceFileWriterMap.get(key).addClass(cppClass);
				
				if(! locationHeaderFileWriterMap.containsKey(key)) {
					ClassHeaderFileWriter headerFileWriter = this.createAndAddHeaderFileWriter(fileInfo, location, null);
					locationHeaderFileWriterMap.put(key, headerFileWriter);
				}
				locationHeaderFileWriterMap.get(key).addClass(cppClass);
			}
		}
	}
	
	private ClassSourceFileWriter createAndAddSourceFileWriter(FileInfo fileInfo, String location, CppClass cppClass) {
		ClassSourceFileWriter sourceFileWriter = new ClassSourceFileWriter(this.config, this.metaInfo, fileInfo, location, this.makeTargetFileName(location, cppClass));
		this.fileWriterList.add(sourceFileWriter);
		
		return sourceFileWriter; 
	}
	
	private ClassHeaderFileWriter createAndAddHeaderFileWriter(FileInfo fileInfo, String location, CppClass cppClass) {
		ClassHeaderFileWriter headerFileWriter = new ClassHeaderFileWriter(this.config, this.metaInfo, fileInfo, location, this.makeTargetFileName(location, cppClass));
		this.fileWriterList.add(headerFileWriter);
		
		return headerFileWriter;
	}
	
	private void buildMainFileWriterList()
	{
		List<String> creationFunctionNames = new ArrayList<String>();

		for(CodeFileWriter fileWriter : this.fileWriterList) {
			fileWriter.getCreationFunctionNames(creationFunctionNames);
		}
		
		this.fileWriterList.add(new MainHeaderFileWriter(this.config, creationFunctionNames));
		this.fileWriterList.add(new MainSourceFileWriter(this.config));
	}

	private String makeTargetFileName(String sourceFileName)
	{
		return this.config.sourceFilePrefix + Util.getBaseFileName(sourceFileName);
	}

	private String makeTargetFileName(String sourceFileName, CppClass cppClass)
	{
		if(cppClass == null) {
			return makeTargetFileName(sourceFileName);
		}
		
		String suffix = "_";
		if(cppClass.isGlobal()) {
			suffix = suffix + "global";
		}
		else {
			suffix = suffix + cppClass.getPrimaryName();
		}
		return this.config.sourceFilePrefix + Util.getBaseFileName(sourceFileName) + suffix;
	}
}
