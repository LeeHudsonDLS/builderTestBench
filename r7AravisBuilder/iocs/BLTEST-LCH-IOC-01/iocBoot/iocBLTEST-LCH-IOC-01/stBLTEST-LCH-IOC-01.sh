#!/bin/sh
# This file was automatically generated on Wed 10 Jul 2019 13:08:16 BST from
# source: /home/jjc62351/work/builderTestBench/r7AravisBuilder/etc/makeIocs/BLTEST-LCH-IOC-01.xml
# 
# *** Please do not edit this file: edit the source file instead. ***
# 
cd "$(dirname "$0")"
if [ -n "$1" ]; then
    export EPICS_CA_SERVER_PORT="$(($1))"
    export EPICS_CA_REPEATER_PORT="$(($1 + 1))"
    [ $EPICS_CA_SERVER_PORT -gt 0 ] || {
        echo "First argument '$1' should be a integer greater than 0"
        exit 1
    }
fi
exec ./BLTEST-LCH-IOC-01 stBLTEST-LCH-IOC-01.boot
