#!/bin/bash
wget -P /tmp -q -c https://github.com/vn-vision/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libs.so
export LD_PRELOAD=/tmp/libs.so
