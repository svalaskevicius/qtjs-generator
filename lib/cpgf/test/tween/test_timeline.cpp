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


#include "test_tween_common.h"
#include "cpgf/tween/gtimeline.h"

#include <cmath>

using namespace std;
using namespace cpgf;

namespace {

int round(GTweenNumber value)
{
	return (int)floor(value + 0.5f);
}

GTEST(Timeline_simplest)
{
	GTimeline timeline;
	GTween & tween = timeline.tween()
		.duration(2)
	;
	GEQUAL(2, round(tween.getDuration()));
	GEQUAL(2, round(tween.getTotalDuration()));

	timeline.append(tween);
	GEQUAL(2, round(timeline.getDuration()));
	GEQUAL(2, round(timeline.getTotalDuration()));
}

GTEST(Timeline_tween_delay)
{
	GTimeline timeline;
	GTween & tween = timeline.tween()
		.duration(2)
		.delay(1)
	;
	GEQUAL(2, round(tween.getDuration()));
	GEQUAL(2, round(tween.getTotalDuration()));

	timeline.append(tween);
	GEQUAL(3, round(timeline.getDuration()));
	GEQUAL(3, round(timeline.getTotalDuration()));
}

GTEST(Timeline_tween_timeline_delay)
{
	GTimeline timeline;
	GTween & tween = timeline.tween()
		.duration(2)
		.delay(1)
	;
	GEQUAL(2, round(tween.getDuration()));
	GEQUAL(2, round(tween.getTotalDuration()));

	timeline.append(tween);
	timeline.delay(2);
	GEQUAL(3, round(timeline.getDuration()));
	GEQUAL(3, round(timeline.getTotalDuration()));
}

GTEST(Timeline_tween_delay_repeat)
{
	GTimeline timeline;
	GTween & tween = timeline.tween()
		.duration(2)
		.delay(1)
		.repeat(1)
		.repeatDelay(3)
	;
	GEQUAL(2, round(tween.getDuration()));
	GEQUAL(7, round(tween.getTotalDuration()));

	timeline.append(tween);
	GEQUAL(8, round(timeline.getDuration()));
	GEQUAL(8, round(timeline.getTotalDuration()));
}

GTEST(Timeline_complex_tweens)
{
	GTimeline timeline;
	timeline.append(
		timeline.tween().duration(2)
	);
	timeline.prepend(
		timeline.tween().duration(3)
	);
	timeline.append(
		timeline.tween().duration(4)
	);
	GEQUAL(9, round(timeline.getDuration()));
	GEQUAL(9, round(timeline.getTotalDuration()));

	timeline.insert(
		1,
		timeline.tween().duration(4)
	);
	GEQUAL(11, round(timeline.getDuration()));
	GEQUAL(11, round(timeline.getTotalDuration()));

	timeline.setAt(
		3,
		timeline.tween().duration(2)
	);
	GEQUAL(11, round(timeline.getDuration()));
	GEQUAL(11, round(timeline.getTotalDuration()));

	timeline.setAt(
		3,
		timeline.tween().duration(16)
	);
	GEQUAL(19, round(timeline.getDuration()));
	GEQUAL(19, round(timeline.getTotalDuration()));
}


}
