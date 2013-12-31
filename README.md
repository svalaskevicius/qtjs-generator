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

Getting started
---------------

While there is no install script yet, the built qtjs runner can be launched using
the wrapper scripts in the tools directory.

~~~~bash
    cd tools
    ./qtjs
~~~~~~~~

You'll see the nodejs prompt. Try typing "qt<Enter>" -
the screen should be filled with the Qt classes available
for usage.

Try the following:
~~~~~js
    var a = new qt.QMessageBox()
    a.setText(new qt.QString("Hello World!"))
    a.show()
~~~~~~~

Or check the prepared examples:
~~~~~~~bash
    cd examples/
    ../tools/qtjs widgets.js
~~~~~~~~~~~

`qtjs` can by symlinked to a directory in $PATH and it will be available throughout the system.
Also, it can act as the `node` or `nodejs` launcher with the compatible `npm` symlinked in the same
tools directory - all node packages can be used together with the Qt bindings.

License
-------

Eclipse Public License (EPL) http://www.eclipse.org/org/documents/epl-v10.php

