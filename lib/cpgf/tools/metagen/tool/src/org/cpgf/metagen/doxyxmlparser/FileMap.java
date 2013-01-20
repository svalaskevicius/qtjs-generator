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
import java.util.HashMap;
import java.util.List;

import org.cpgf.metagen.Util;
import org.w3c.dom.Node;


public class FileMap {
	private HashMap<String, FileInfo> fileMap;
	private List<String> locationList;
	
	public FileMap() {
		this.fileMap = new HashMap<String, FileInfo>();
		this.locationList = new ArrayList<String>();
	}
	
	public void addLocation(String location, Node node) {
		if(! this.fileMap.containsKey(location)) {
			this.fileMap.put(location, new FileInfo(location));
			this.locationList.add(location);
		}
		
		FileInfo fileInfo = this.fileMap.get(location);
		for(Node child : Util.getChildNodesByName(node, "innernamespace")) {
			fileInfo.getNamespaceList().add(Util.getNodeText(child));
		}
	}

	public HashMap<String, FileInfo> getFileMap() {
		return fileMap;
	}
}
