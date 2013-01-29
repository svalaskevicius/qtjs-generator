Qt API bindings generator for V8 JS engine
==========================================

How to generate
---------------

As the generator is a python script using libclang for parsing Qt headers, the list of pre-requirements is:
  * python
  * libclang (same or newer than rev. bce9205)
  * Qt 5.x

    cd <generator>
    export LD_LIBRARY_PATH=<path to libclang, if not on $PATH>
    ./generator.py <path to Qt include/>
    cd ../ && mkdir build && cd build
    <qt bin>/qmake -recursive ../bindings
    make -j5

License
-------

Eclipse Public License (EPL) http://www.eclipse.org/org/documents/epl-v10.php

