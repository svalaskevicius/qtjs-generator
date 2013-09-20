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


#ifndef __GTIMELINE_H
#define __GTIMELINE_H

#include "cpgf/tween/gtweenlist.h"

#include <algorithm>

namespace cpgf {


class GTimeline : public GTweenList
{
private:
	typedef GTweenList super;

public:
	GTimeline();
	~GTimeline();

public:
	virtual void removeForInstance(const void * instance);
	virtual GTweenNumber getDuration() const;
	
	GTweenNumber append(const GTweenable & tweenable);
	void prepend(const GTweenable & tweenable);
	void insert(GTweenNumber time, const GTweenable & tweenable);
	void setAt(GTweenNumber time, const GTweenable & tweenable);
	
	GTweenNumber getStartTime(const GTweenable & tweenable);

public:
	GTimeline & backward(bool value) { return static_cast<GTimeline &>(super::backward(value)); }
	GTimeline & useFrames(bool value) { return static_cast<GTimeline &>(super::useFrames(value)); }
	GTimeline & delay(GTweenNumber value) { return static_cast<GTimeline &>(super::delay(value)); }
	GTimeline & timeScale(GTweenNumber value) { return static_cast<GTimeline &>(super::timeScale(value)); }

	GTimeline & repeat(int repeatCount) { return static_cast<GTimeline &>(super::repeat(repeatCount)); }
	GTimeline & repeatDelay(GTweenNumber value) { return static_cast<GTimeline &>(super::repeatDelay(value)); }
	GTimeline & yoyo(bool value) { return static_cast<GTimeline &>(super::yoyo(value)); }

	GTimeline & onComplete(const GTweenCallback & value) { return static_cast<GTimeline &>(super::onComplete(value)); }
	GTimeline & onDestroy(const GTweenCallback & value) { return static_cast<GTimeline &>(super::onDestroy(value)); }
	GTimeline & onUpdate(const GTweenCallback & value) { return static_cast<GTimeline &>(super::onUpdate(value)); }
	GTimeline & onRepeat(const GTweenCallback & value) { return static_cast<GTimeline &>(super::onRepeat(value)); }

protected:
	virtual void performTime(GTweenNumber elapsed, GTweenNumber frameDuration, bool forceReversed, bool forceUseFrames);

private:
	void invalidDurationTime();

private:
	mutable GTweenNumber durationTime;
};


} // namespace cpgf



#endif
