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



#ifdef _MSC_VER
	#define CPGF_MD_TEMPLATE

	#if _MSC_VER >= 1500
		#define CPGF_MD_STL_QUIRK_CONST_ITERATOR() 1
	#endif
#endif

#ifdef G_COMPILER_CPPBUILDER
	#define CPGF_MD_TEMPLATE
#endif

#ifndef CPGF_MD_TEMPLATE
	#define CPGF_MD_TEMPLATE template
#endif

#ifndef CPGF_MD_STL_QUIRK_CONST_ITERATOR
	#define CPGF_MD_STL_QUIRK_CONST_ITERATOR() 0
#endif


#define M(Type, Name) define.CPGF_MD_TEMPLATE _method(# Name, &Type::Name);
#define GM(Name) define.CPGF_MD_TEMPLATE _method(# Name, &Name);

#define ENUM_VALUE(Type, Name) .CPGF_MD_TEMPLATE _element(# Name, Type::Name)
#define GENUM_VALUE(Name) .CPGF_MD_TEMPLATE _element(# Name, Name)
