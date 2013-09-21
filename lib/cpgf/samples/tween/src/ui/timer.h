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


#ifndef __TIMER_H
#define __TIMER_H

#include "cpgf/gcallback.h"

#include "wx/timer.h"

typedef cpgf::GCallback<void (int)> TimerCallback;

const int FrameTime = 10;

class TestTimer : public wxTimer
{
public:
	TestTimer(const TimerCallback & callback)
		: callback(callback), previousTime(wxGetLocalTimeMillis()),
			frameRate(0), timeInCurrentSecond(0), frameCountInCurrentSecond(0)
	{
		this->Start(FrameTime);
	}
	
	virtual void Notify() {
		wxLongLong t = wxGetLocalTimeMillis();
		int dt = (int)((t - this->previousTime).ToLong());
		this->previousTime = t;

		++frameCountInCurrentSecond;
		timeInCurrentSecond += dt;
		if(timeInCurrentSecond >= 1000) {
			frameRate = frameCountInCurrentSecond;
			timeInCurrentSecond = 0;
			frameCountInCurrentSecond = 0;
		}

		this->callback(dt);
	}

	int getFrameRate() const {
		return this->frameRate;
	}
	
private:
	TimerCallback callback;
	wxLongLong previousTime;
	int frameRate;
	int timeInCurrentSecond;
	int frameCountInCurrentSecond;
};


#endif
