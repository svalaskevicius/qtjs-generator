/*
  cpgf Library
  Copyright (C) 2011, 2012 Wang Qi http://www.cpgf.org/
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


#include "cpgf/metautility/gmetadebug.h"
#include "cpgf/gcompiler.h"
#include "cpgf/gmetacommon.h"

#include <stdio.h>


namespace cpgf {


void GMetaDebug::debugBreak(const GMetaVariadicParam * params)
{
#if defined(__i386) || defined(_M_IX86)
	#if defined(G_COMPILER_VC)
		__asm int 3;
	#elif defined(G_COMPILER_GCC)
		__asm__("int $0x03");
	#endif
#else
#endif

	if(params != NULL) {
		// Nothing to do. Inspect params in the debugger if you need.
		GVariant value;
		for(size_t i = 0; i < params->paramCount; i++) {
			value = *(params->params[i]);
		}
	}
}

void GMetaDebug::trace(const char * message)
{
	fprintf(stdout, "%s", message);
}

void GMetaDebug::traceError(const char * message)
{
	fprintf(stderr, "%s", message);
}

void GMetaDebug::traceLine(const char * message)
{
	fprintf(stdout, "%s\n", message);
}

void GMetaDebug::traceErrorLine(const char * message)
{
	fprintf(stderr, "%s\n", message);
}


} // namespace cpgf


