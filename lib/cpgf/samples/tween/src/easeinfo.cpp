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


#include "easeinfo.h"

#include "cpgf/tween/easing/linear.h"
#include "cpgf/tween/easing/back.h"
#include "cpgf/tween/easing/bounce.h"
#include "cpgf/tween/easing/circle.h"
#include "cpgf/tween/easing/cubic.h"
#include "cpgf/tween/easing/elastic.h"
#include "cpgf/tween/easing/exponent.h"
#include "cpgf/tween/easing/quad.h"
#include "cpgf/tween/easing/quart.h"
#include "cpgf/tween/easing/quint.h"
#include "cpgf/tween/easing/sine.h"

using namespace cpgf;


const EaseInfo easeList[] = {
	{ "Back-In", BackEase::easeIn() },
	{ "Back-Out", BackEase::easeOut() },
	{ "Back-InOut", BackEase::easeInOut() },

	{ "Bounce-In", BounceEase::easeIn() },
	{ "Bounce-Out", BounceEase::easeOut() },
	{ "Bounce-InOut", BounceEase::easeInOut() },

	{ "Circle-In", CircleEase::easeIn() },
	{ "Circle-Out", CircleEase::easeOut() },
	{ "Circle-InOut", CircleEase::easeInOut() },
	
	{ "Cubic-In", CubicEase::easeIn() },
	{ "Cubic-Out", CubicEase::easeOut() },
	{ "Cubic-InOut", CubicEase::easeInOut() },

	{ "Elastic-In", ElasticEase::easeIn() },
	{ "Elastic-Out", ElasticEase::easeOut() },
	{ "Elastic-InOut", ElasticEase::easeInOut() },
	
	{ "Exponent-In", ExponentEase::easeIn() },
	{ "Exponent-Out", ExponentEase::easeOut() },
	{ "Exponent-InOut", ExponentEase::easeInOut() },

	{ "Quad-In", QuadEase::easeIn() },
	{ "Quad-Out", QuadEase::easeOut() },
	{ "Quad-InOut", QuadEase::easeInOut() },
	
	{ "Quart-In", QuartEase::easeIn() },
	{ "Quart-Out", QuartEase::easeOut() },
	{ "Quart-InOut", QuartEase::easeInOut() },
	
	{ "Quint-In", QuintEase::easeIn() },
	{ "Quint-Out", QuintEase::easeOut() },
	{ "Quint-InOut", QuintEase::easeInOut() },
	
	{ "Sine-In", SineEase::easeIn() },
	{ "Sine-Out", SineEase::easeOut() },
	{ "Sine-InOut", SineEase::easeInOut() },
	
	{ "Linear", LinearEase::ease() },
};

int getEaseCount()
{
	return sizeof(easeList) / sizeof(easeList[0]);
}

const EaseInfo * getEase(int index)
{
	return &easeList[index];
}
