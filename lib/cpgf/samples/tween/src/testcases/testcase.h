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


#ifndef __TESTCASE_H
#define __TESTCASE_H

#include "cpgf/gsharedptr.h"
#include "cpgf/tween/gtweencommon.h"

#include <string>

struct TweenParam
{
	TweenParam()
		: useFrames(false), backward(false), duration(2000), delay(0), timeScale(1.0), repeat(0), yoyo(false), repeatDelay(0)
	{}

	bool useFrames;
	bool backward;
	cpgf::GTweenNumber duration;
	cpgf::GTweenNumber delay;
	cpgf::GTweenNumber timeScale;
	int repeat;
	bool yoyo;
	cpgf::GTweenNumber repeatDelay;
};

class TestCase
{
public:
	TestCase();
	virtual ~TestCase();

	virtual std::string getDescription() = 0;
	virtual void render(int viewWidth, int viewHeight) = 0;
	virtual void setEase(int easeIndex);
	
	virtual bool shouldShowCommandButtons();
	virtual bool shouldShowEaseButtons();
	virtual bool shouldShowPauseResumeButtons();
	
	void reset();
	void play();
	void pause();
	void resume();
	void setTweenParam(const TweenParam & tweenParam);
	
	cpgf::GTweenable * getTweenable() const {
		return this->tweenable;
	}

protected:
	virtual void doReset();

	void setTweenable(cpgf::GTweenable * tweenable);
	cpgf::GTweenNumber getDuration() const {
		return this->tweenParam.duration;
	}

	bool useFrames() const {
		return this->tweenParam.useFrames;
	}

	void resetEase();
	void resetTweenParam();

private:
	void onTweenableDestroy();
	void detachCurrentTweenable();

private:
	cpgf::GTweenable * tweenable;
	cpgf::GTweenEaseType ease;
	TweenParam tweenParam;
};

typedef cpgf::GSharedPointer<TestCase> TestCasePtr;

#endif
