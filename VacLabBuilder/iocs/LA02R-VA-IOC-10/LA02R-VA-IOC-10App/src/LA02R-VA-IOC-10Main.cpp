/* This file was automatically generated on Tue 09 Feb 2021 08:10:00 GMT from
 * source: /home/jjc62351/work/builderTestBench/VacLabBuilder/etc/makeIocs/LA02R-VA-IOC-10.xml
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

