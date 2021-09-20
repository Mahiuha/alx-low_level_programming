#!/bin/bash
wget -q --output-document=$HOME/lib_inject.so https://github.com/Elmahdi1962/alx-low_level_programming/blob/master/0x18-dynamic_libraries/lib_inject.so?raw=true
export LD_PRELOAD=$HOME/lib_inject.so
