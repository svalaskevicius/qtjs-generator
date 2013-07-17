Qt API bindings generator for V8 JS engine
==========================================

WARNING
-------

The project is yet in a pre-alpha state and is not yet (fully) functional.
It is only recommended to use it, if you are prepared to debug and implement the missing features ;)

How to build
------------

### Requirements

* C++11 supporting compiler, tested with gcc 4.7.2
* doxygen
* JDK (for building the metadata generator)
* cmake (for building cpgf library)
* bash & perl (for preprocessing etc)
* Qt5

### Building

~~~~~bash
# build cpgf
pushd lib/cpgf/build/
vim build.config.txt # adjust paths to the libraries used
make linux TARGET=lib # or an alternative for your platform, see cpgf documentation
popd

# build metagen tool 
pushd lib/cpgf/tools/metagen
# **download rhino from https://developer.mozilla.org/en-US/docs/Rhino/Download_Rhino and put js.jar here**
cd tool
bash compile.sh
popd

# generate binding code
pushd metagen
bash gen_pp.sh <path to Qt includes>
sh metagen.sh
popd

# build it!
mkdir -p build
cd build
<path to Qt>/bin/qmake ../src
make
~~~~~

License
-------

Eclipse Public License (EPL) http://www.eclipse.org/org/documents/epl-v10.php

