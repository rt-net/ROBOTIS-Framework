#!/usr/bin/bash -e

echo "CRANE-X7のサンプルを実行します"
cd $(dirname $0)/bin
sudo ./test config/crane_x7.robot config/crane_x7_init.yaml config/crane_x7_offset.yaml

echo "実行しました"
