/* This file was automatically generated on Thu 09 Jan 2020 09:10:11 GMT from
 * source: /home/jjc62351/work/builderTestBench/BL03I-TEST/etc/makeIocs/BL99I-LCH-IOC-01.xml
 * 
 * *** Please do not edit this file: edit the source file instead. ***
 *  */
#include "epicsExit.h"
#include "epicsThread.h"
#include "iocsh.h"

int main(int argc, char *argv[])
{
    if(argc>=2) {
        iocsh(argv[1]);
        epicsThreadSleep(.2);
    }
    iocsh(NULL);
    epicsExit(0);
    return 0;
}
