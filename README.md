Qt API bindings generator for V8 JS engine
==========================================

WARNING
-------

The project is yet in a pre-alpha state and is not yet (fully) functional.
It is only recommended to use it, if you are prepared to debug and implement the missing features ;)

There are currently two implementations being worked on:
  * generate the reflection code using python and clang, bind it to v8 using vu8 library.
  * use the cpgf library for C++ reflection (generates code using doxygen), and use the built-in
    bindings API (which also supports more target languages OOTB).

How to generate
---------------

As the generator is a python script using libclang for parsing Qt headers, the list of pre-requirements is:
  * python
  * libclang (same or newer than rev. bce9205)
  * Qt 5.x
  
```
    cd <generator>
    export LD_LIBRARY_PATH=<path to libclang, if not on $PATH>
    ./generator.py <path to Qt include/>
    cd ../ && mkdir build && cd build
    <qt bin>/qmake -recursive ../bindings
    make -j5
```

License
-------

Eclipse Public License (EPL) http://www.eclipse.org/org/documents/epl-v10.php

