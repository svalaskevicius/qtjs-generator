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


#ifndef __TOOLPANEL_H
#define __TOOLPANEL_H

#include "../uiresource/mainui.h"

#include "../testcases/testcase.h"
#include "cpgf/gcallback.h"


class ToolPanel : public ToolPanelRes
{
private:
	typedef ToolPanelRes super;
	typedef cpgf::GCallback<void (const TestCasePtr & testCase)> CallbackTestCaseChange;
	
public:
	ToolPanel(wxWindow * parent);

	void setOnTestCaseChange(const CallbackTestCaseChange & onTestCaseChange);

protected:
	virtual void onTestTypeSelected( wxCommandEvent& event );
	virtual void onButtonBenchmarkClicked( wxCommandEvent& event );
	virtual void onButtonAboutThisTestCaseClicked( wxCommandEvent& event );
	
	void doOnTestTypeSelected();

private:
	CallbackTestCaseChange onTestCaseChange;
	TestCasePtr currentTestCase;
};


#endif
