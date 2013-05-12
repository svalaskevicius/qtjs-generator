#!/bin/sh

# find qtheaders -type f -exec perl -p -i -e 's/Q_DISABLE_COPY\((.*)\)/~\1(){ }/g' '{}' \;

rm -Rf qtheaders xml build

cp -R ~/bin/Qt5.0.1/5.0.1/gcc_64/include qtheaders
find qtheaders -type f -exec perl -p -i -e 's/Q_DISABLE_COPY\((.*)\)/\1(const \1 &){ } \1 &operator=(const \1 &){ }/g' '{}' \;


doxygen


find xml -type f -name '*.xml' -exec perl -p -i -e 's#/home/sarunas/priv/dev/qtjs-generator/lib/cpgf/tools/metagen/qt5/qtheaders#/home/sarunas/bin/Qt5.0.1/5.0.1/gcc_64/include#g' '{}' \;

