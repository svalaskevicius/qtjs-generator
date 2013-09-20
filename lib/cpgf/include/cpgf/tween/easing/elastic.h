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


#ifndef __TWEEN_EASING_ELASTIC_H
#define __TWEEN_EASING_ELASTIC_H

#include "cpgf/tween/gtweencommon.h"

namespace cpgf {

struct ElasticEase
{
public:
	static GTweenEaseType easeIn(GTweenNumber amplitude = 0.0f, GTweenNumber period = 0.0f) {
		return GTweenEaseType(_easeIn(amplitude, period));
	}
	
	static GTweenEaseType easeOut(GTweenNumber amplitude = 0.0f, GTweenNumber period = 0.0f) {
		return GTweenEaseType(_easeOut(amplitude, period));
	}
	
	static GTweenEaseType easeInOut(GTweenNumber amplitude = 0.0f, GTweenNumber period = 0.0f) {
		return GTweenEaseType(_easeInOut(amplitude, period));
	}
	
private:
	struct _easeIn {
		_easeIn(GTweenNumber amplitude, GTweenNumber period) : amplitude(amplitude), period(period) {}
		
		GTweenNumber operator() (const GTweenEaseParam * param) const {
			GTweenNumber s;
			if(param->current == 0.0f) {
				return 0.0f;
			}
			if(param->current >= param->total) {
				return 1.0f;
			}
			GTweenNumber t = param->current / param->total;
			GTweenNumber np = period;
			GTweenNumber na = amplitude;
			if(np == 0.0) {
				np = param->total * 0.3f;
			}
			if(na == 0.0f || na < 1.0f) {
				na = 1.0f;
				s = np / 4.0f;
			}
			else {
				s = np / pi2() * asin(1.0f / na);
			}
			t -= 1.0f;
			return -na * pow(2, 10 * t) * sin((t * param->total - s) * pi2() / np);
		}
		
		GTweenNumber amplitude;
		GTweenNumber period;
	};
	
	struct _easeOut {
		_easeOut(GTweenNumber amplitude, GTweenNumber period) : amplitude(amplitude), period(period) {}
		
		GTweenNumber operator() (const GTweenEaseParam * param) const {
			GTweenNumber s;
			if(param->current == 0.0f) {
				return 0.0f;
			}
			if(param->current >= param->total) {
				return 1.0f;
			}
			GTweenNumber t = param->current / param->total;
			GTweenNumber np = period;
			GTweenNumber na = amplitude;
			if(np == 0.0) {
				np = param->total * 0.3f;
			}
			if(na == 0.0f || na < 1.0f) {
				na = 1.0f;
				s = np / 4.0f;
			}
			else {
				s = np / pi2() * asin(1.0f / na);
			}
			return na * pow(2, -10 * t) * sin((t * param->total - s) * pi2() / np) + 1.0f;
		}
		
		GTweenNumber amplitude;
		GTweenNumber period;
	};
	
	struct _easeInOut {
		_easeInOut(GTweenNumber amplitude, GTweenNumber period) : amplitude(amplitude), period(period) {}
		
		GTweenNumber operator() (const GTweenEaseParam * param) const {
			GTweenNumber s;
			if(param->current == 0.0f) {
				return 0.0f;
			}
			if(param->current >= param->total) {
				return 1.0f;
			}
			GTweenNumber t = param->current / (param->total * 0.5f);
			GTweenNumber np = period;
			GTweenNumber na = amplitude;
			if(np == 0.0) {
				np = param->total * (0.3f * 1.5f);
			}
			if(na == 0.0f || na < 1.0f) {
				na = 1.0f;
				s = np / 4.0f;
			}
			else {
				s = np / pi2() * asin(1.0f / na);
			}
			if(t < 1) {
				t -= 1.0f;
				return -0.5f * na * pow(2, 10 * t) * sin((t * param->total - s) * pi2() / np);
			}
			else {
				t -= 1.0f;
				return na * pow(2, -10 * t) * sin((t * param->total - s) * pi2() / np) * 0.5f + 1.0f;
			}
		}
		
		GTweenNumber amplitude;
		GTweenNumber period;
	};
	
	static GTweenNumber pi() {
		return 3.14159265f;
	}
	
	static GTweenNumber pi2() {
		return 2 * pi();
	}
};


} // namespace cpgf


#endif
