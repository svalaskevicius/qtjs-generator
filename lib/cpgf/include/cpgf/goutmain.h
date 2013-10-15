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


#ifndef __GOUTMAIN_H
#define __GOUTMAIN_H

#include "cpgf/gpp.h"


#define G_RUN_BEFORE_MAIN(...) \
	namespace { \
	static struct GPP_CONCAT(I_rUnBeforemAin_, __LINE__) { GPP_CONCAT(I_rUnBeforemAin_, __LINE__)() {__VA_ARGS__ ;} } GPP_CONCAT(v_rUnBeforemAin_, __LINE__); \
	}

#define G_AUTO_RUN_BEFORE_MAIN() I_G_AUTO_RUN_BEFORE_MAIN(__LINE__)

#define I_G_AUTO_RUN_BEFORE_MAIN(ln) \
	void GPP_CONCAT(I_AutorUnBeforemAin_, ln)(); \
	G_RUN_BEFORE_MAIN(GPP_CONCAT(I_AutorUnBeforemAin_, ln)()); \
	void GPP_CONCAT(I_AutorUnBeforemAin_, ln)()



#endif
