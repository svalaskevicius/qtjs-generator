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


#include "cpgf/gcompiler.h"
#include "cpgf/gmetadefine.h"

#if defined(_WIN32)
    #include <windows.h>
#endif

#ifdef G_OS_APPLE
    #include <OpenGL/gl.h>
#else
    #include <GL/gl.h>
#endif

#include "cpgf/metadata/opengl/gmetadata_opengl.h"

using namespace cpgf;


void registerOpenGL(GMetaClass * metaClass)
{
	GDefineMetaClass<void> define = GDefineMetaClass<void>::fromMetaClass(metaClass);

	buildMetaData_open_gl(define);
}

