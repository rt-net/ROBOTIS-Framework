#!/usr/bin/bash -e

echo "ビルドします"
cd $(dirname $0)
cmake -B build
cmake --build build
cmake --install build

echo "ビルドしました"