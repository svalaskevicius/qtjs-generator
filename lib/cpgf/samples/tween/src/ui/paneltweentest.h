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


#ifndef __PANELTWEENTEST_H
#define __PANELTWEENTEST_H

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4996)
#endif

#include "timer.h"
#include "../testcases/testcase.h"

#include "wx/panel.h"
#include "wx/sizer.h"
#include "wx/button.h"

class ToolPanel;
class PanelCanvas;
class PanelEase;
class PanelCommand;

class PanelTweenTest : public wxPanel
{
private:
	typedef wxPanel super;

public:
	explicit PanelTweenTest(wxWindow * parent);
	~PanelTweenTest();

	void start();
	void end();

	void setTestCase(const TestCasePtr & testCase);

private:
	void onEaseButtonClicked(int easeIndex);
	void onRender(int viewWidth, int viewHeight);
	void onTestCaseChanged(const TestCasePtr & testCase);
	void onTimer(int frameTime);

private:
	ToolPanel * toolPanel;
	PanelEase * easePanel;
	PanelCanvas * canvas;
	PanelCommand * commandPanel;
	TestTimer * timer;
	TestCasePtr testCase;
};


#if defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif
