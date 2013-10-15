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


#ifndef __GMETADEFAULTPARAM_P_H
#define __GMETADEFAULTPARAM_P_H

#include "cpgf/gscopedptr.h"

#include <vector>

namespace cpgf {

namespace meta_internal {


class GMetaDefaultParamList
{
private:
	typedef std::vector<GVariant> DefaultValueList;

public:
	~GMetaDefaultParamList();

	void addDefault(const GVariant & v);
	const GVariant & getDefault(size_t index);
	size_t getDefaultCount() const;

	size_t loadDefaultParams(const GVariant ** paramBuffer, size_t passedParamCount,
		size_t prototypeParamCount);

private:
	DefaultValueList defaultValueList;
};


} // namespace meta_internal

} // namespace cpgf


#endif
