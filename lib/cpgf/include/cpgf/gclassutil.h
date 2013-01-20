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


#ifndef __GCLASSUTIL_H
#define __GCLASSUTIL_H


#define GMAKE_NONCOPYABLE(cls) private: \
	cls(const cls &); \
	cls & operator = (const cls &);

#define GMAKE_FINAL(cls)  \
	class MakeFinal_ ## cls { \
		private: \
			~MakeFinal_ ## cls() {} \
			friend class cls; \
	}; 

#define GFINAL_BASE(cls) virtual public MakeFinal_ ## cls


namespace cpgf {

class GNoncopyable
{
public:
	GNoncopyable() {}

private:
	GNoncopyable(const GNoncopyable &);
	GNoncopyable & operator = (const GNoncopyable &);
};

} // namespace cpgf


#endif
