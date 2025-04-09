#!/bin/bash

mkdir -p build
find src -name "*.java" | xargs javac -d build
if [[ "$OSTYPE" == "darwin"* ]]; then
    find src -type f -not -name "*.java" -exec rsync -R {} build \;
else
    find src -type f -not -name "*.java" -exec cp --parents {} build \;
fi
cp -rf build/src/* build
rm -r build/src
cp README.md License.txt build
cd build
jar cfm ../rars1_6.jar ./META-INF/MANIFEST.MF *