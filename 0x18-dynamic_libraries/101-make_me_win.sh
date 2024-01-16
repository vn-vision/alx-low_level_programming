#!/bin/bash
wget -P /tmp -q -c https://github.com/vn-vision/alx-low_level_programming/raw/c0b6e2e3897745db5fcc69cfdc7c84f9fea79ff7/0x18-dynamic_libraries/libs.so
export LD_PRELOAD=/tmp/libs.so
