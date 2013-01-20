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


package org.cpgf.metagen.doxyxmlparser;

import java.util.ArrayList;
import java.util.List;

import org.cpgf.metagen.Util;


public class FileInfo {
	private String location;
	private List<String> namespaceList;
	
	public FileInfo(String location) {
		this.location = location;
		this.namespaceList = new ArrayList<String>();
	}

	public String getLocation() {
		return location;
	}

	public List<String> getNamespaceList() {
		return namespaceList;
	}
	
	public void appendNamespaces(List<String> otherNamespaces) {
		for(String namespace : otherNamespaces) {
			Util.addToList(this.namespaceList, namespace);
		}
	}
	
}
