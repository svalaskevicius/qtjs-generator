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


#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4996)
#endif

#include "testcase.h"

#include "../ui/sprite.h"
#include "../easeinfo.h"
#include "testcaseutil.h"

#include "cpgf/tween/gtweenlist.h"
#include "cpgf/accessor/gaccessor.h"

#if defined(_WIN32)
    #include <windows.h>
#endif
#include <GL/gl.h>

#include <vector>

using namespace cpgf;
using namespace std;

class TestCaseChart : public TestCase
{
private:
	typedef vector<float> ArrayType;

public:
	TestCaseChart();

	virtual std::string getDescription();
	virtual void render(int viewWidth, int viewHeight);
	virtual void setEase(int easeIndex);
	virtual bool shouldShowCommandButtons() {
		return false;
	}

private:
	void clear();

private:
	ArrayType positions;
};

TestCasePtr createTestCaseChart()
{
	return TestCasePtr(new TestCaseChart);
}

TestCaseChart::TestCaseChart()
{
	this->clear();
}

std::string TestCaseChart::getDescription()
{
	return "Display chart for selected easing function."
	;
}

void TestCaseChart::render(int viewWidth, int viewHeight)
{
	size_t count = this->positions.size();
	if(count == 0) {
		return;
	}

    glDisable(GL_LIGHTING);

	glColor3f(0.8f, 0.8f, 0.8f);
	glVertexPointer(2, GL_FLOAT, 0, &this->positions[0]);
	glDrawArrays(GL_LINE_STRIP, 0, count / 2);
}

void TestCaseChart::setEase(int easeIndex)
{
	this->clear();
	calculateEaseChartPositions(this->positions, getEase(easeIndex)->ease, 0.3f, 1.7f);
}

void TestCaseChart::clear()
{
	this->positions.clear();
}

