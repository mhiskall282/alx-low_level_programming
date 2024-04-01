#!/bin/bash
wget -P /tmp https://github.com/mhiskall282/alx-low_level_programming/blob/main
/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
