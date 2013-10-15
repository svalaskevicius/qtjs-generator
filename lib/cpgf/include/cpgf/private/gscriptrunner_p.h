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


#ifndef __GSCRIPTRUNNER_P_H
#define __GSCRIPTRUNNER_P_H


#include "cpgf/gapiutil.h"
#include "cpgf/gscopedinterface.h"

namespace cpgf {


struct IScriptObject;

class GScriptRunnerImplement
{
public:
	static GScriptRunner * createScriptRunner(GScriptRunnerImplement * implement);

public:
	GScriptRunnerImplement(IMetaService * service);
	virtual ~GScriptRunnerImplement();

	virtual void executeString(const char * code) = 0;

	IScriptObject * getScripeObject();
	IMetaService * getService();

protected:
	void setScripeObject(IScriptObject * scriptObject);

private:
	GScopedInterface<IMetaService> service;
	GScopedInterface<IScriptObject> scriptObject;
};


} // namespace cpgf



#endif
