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


#ifndef __GTWEEN_H
#define __GTWEEN_H

#include "cpgf/tween/gtweencommon.h"
#include "cpgf/private/gtween_p.h"
#include "cpgf/gcontainer.h"

#include <algorithm>

namespace cpgf {


class GTween : public GTweenable
{
private:
	typedef GTweenable super;
	typedef GWiseList<tween_internal::GTweenItem *> ListType;

public:
	GTween();
	~GTween();

	virtual GTweenNumber getDuration() const;
	virtual void removeForInstance(const void * instance);

	template <typename AccessorType>
	GTween & target(const AccessorType & accessor, const typename AccessorType::ValueType & targetValue)
	{
		this->itemList.push_back(new tween_internal::GTweenTargetItem<AccessorType>(accessor, accessor(), targetValue, false));
		return *this;
	}

	template <typename AccessorType>
	GTween & target(const AccessorType & accessor, const typename AccessorType::ValueType & from, const typename AccessorType::ValueType & targetValue)
	{
		this->itemList.push_back(new tween_internal::GTweenTargetItem<AccessorType>(accessor, from, targetValue, false));
		return *this;
	}

	template <typename AccessorType>
	GTween & relative(const AccessorType & accessor, const typename AccessorType::ValueType & relativeValue)
	{
		this->itemList.push_back(new tween_internal::GTweenTargetItem<AccessorType>(accessor, accessor(), relativeValue, true));
		return *this;
	}

	template <typename AccessorType>
	GTween & relative(const AccessorType & accessor, const typename AccessorType::ValueType & from, const typename AccessorType::ValueType & relativeValue)
	{
		this->itemList.push_back(new tween_internal::GTweenTargetItem<AccessorType>(accessor, from, relativeValue, true));
		return *this;
	}

	template <typename AccessorType, typename TargetGetterType>
	GTween & follow(const AccessorType & accessor, const TargetGetterType & targetGetter)
	{
		this->itemList.push_back(new tween_internal::GTweenFollowItem<AccessorType, TargetGetterType>(accessor, accessor(), targetGetter));
		return *this;
	}

	template <typename AccessorType, typename TargetGetterType>
	GTween & follow(const AccessorType & accessor, const typename AccessorType::ValueType & from, const TargetGetterType & targetGetter)
	{
		this->itemList.push_back(new tween_internal::GTweenFollowItem<AccessorType, TargetGetterType>(accessor, from, targetGetter));
		return *this;
	}

	GTween & ease(const GTweenEaseType & ease);
	GTween & duration(GTweenNumber durationTime);

	GTween & backward(bool value) { return static_cast<GTween &>(super::backward(value)); }
	GTween & useFrames(bool value) { return static_cast<GTween &>(super::useFrames(value)); }
	GTween & delay(GTweenNumber value) { return static_cast<GTween &>(super::delay(value)); }
	GTween & timeScale(GTweenNumber value) { return static_cast<GTween &>(super::timeScale(value)); }

	GTween & repeat(int repeatCount) { return static_cast<GTween &>(super::repeat(repeatCount)); }
	GTween & repeatDelay(GTweenNumber value) { return static_cast<GTween &>(super::repeatDelay(value)); }
	GTween & yoyo(bool value) { return static_cast<GTween &>(super::yoyo(value)); }

	GTween & onComplete(const GTweenCallback & value) { return static_cast<GTween &>(super::onComplete(value)); }
	GTween & onDestroy(const GTweenCallback & value) { return static_cast<GTween &>(super::onDestroy(value)); }
	GTween & onUpdate(const GTweenCallback & value) { return static_cast<GTween &>(super::onUpdate(value)); }
	GTween & onRepeat(const GTweenCallback & value) { return static_cast<GTween &>(super::onRepeat(value)); }

protected:
	virtual void performTime(GTweenNumber elapsed, GTweenNumber frameDuration, bool forceReversed, bool forceUseFrames);
	virtual void initialize();

private:
	GTweenEaseType easeCallback;
	GTweenNumber durationTime;

	ListType itemList;
};


} // namespace cpgf



#endif
