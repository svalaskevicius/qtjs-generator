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


#include "cpgf/serialization/gmetaarchivetypemap.h"


namespace cpgf {


int defaultVariantTypeMap[] = {
	vtBool, ptBool,
	vtChar, ptChar,
	vtWchar, ptWchar,
	vtSignedChar, ptSignedChar,
	vtUnsignedChar, ptUnsignedChar,
	vtSignedShort, ptSignedShort,
	vtUnsignedShort, ptUnsignedShort,
	vtSignedInt, ptSignedInt,
	vtUnsignedInt, ptUnsignedInt,
	vtSignedLong, ptSignedLong,
	vtUnsignedLong, ptUnsignedLong,
	vtSignedLongLong, ptSignedLongLong,
	vtUnsignedLongLong, ptUnsignedLongLong,
	vtFloat, ptFloat,
	vtDouble, ptDouble,
	vtLongDouble, ptLongDouble,
	vtObject, ptObject,
	vtString, ptString,
	vtWideString, ptWideString,

	vtEmpty,
};


GVariantType getVariantTypeFromMap(int * variantTypeMap, int mappedType)
{
	while(*variantTypeMap != vtEmpty) {
		if(*(variantTypeMap + 1) == mappedType) {
			return static_cast<GVariantType>(*variantTypeMap);
		}
		variantTypeMap += 2;
	}

	return vtEmpty;
}

int getMappedTypeFromMap(int * variantTypeMap, GVariantType vt)
{
	while(*variantTypeMap != vtEmpty) {
		if(*variantTypeMap == vt) {
			return *(variantTypeMap + 1);
		}
		variantTypeMap += 2;
	}

	return -1;
}

bool permanentTypeIsFundamental(PermanentType type)
{
	return type >= ptBool && type <= ptLongDouble;
}


} // namespace cpgf



