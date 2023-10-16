#!/bin/bash
wget -P /tmp https://github.com/ridasadiki/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libgiga.so
export LP_PRELOAD=/tmp/libgiga.so
