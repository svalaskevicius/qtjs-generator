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


#ifndef __GTWEENLIST_H
#define __GTWEENLIST_H

#include "cpgf/tween/gtween.h"
#include "cpgf/gmemorypool.h"
#include "cpgf/gscopedptr.h"

#include <list>


namespace cpgf {


class GTimeline;

class GTweenList : public GTweenable
{
private:
	typedef GTweenable super;

protected:
	class TweenableData
	{
	public:
		explicit TweenableData(bool isTimeline);
		bool isTimeline() const;
		bool hasAddedToTimeline() const;
		void addToTimeline();
	public:
		GTweenNumber startTime;
		GTweenable * tweenable;
	private:
		GFlags<int> flags;
	};

	typedef std::list<TweenableData> ListType;


public:
	static GTweenList * getInstance();

public:
	GTweenList();
	~GTweenList();

	GTween & tween();
	GTimeline & timeline();

	size_t getTweenableCount() const;
	void clear();

public:
	void remove(const GTweenable & tweenable);
	virtual GTweenNumber getDuration() const;
	virtual void removeForInstance(const void * instance);

protected:
	virtual void performTime(GTweenNumber elapsed, GTweenNumber frameDuration, bool forceReversed, bool forceUseFrames);
	virtual void doRestartChildren();
	virtual void doRestartChildrenWithDelay();

protected:
	void freeTween(GTweenable * tween, bool isTimeline);

protected:
	GTweenList::ListType tweenList;
	GObjectPool<GTween> tweenPool;
	GScopedPointer<GObjectPool<GTimeline> > timelinePool;
};


} // namespace cpgf


#endif
