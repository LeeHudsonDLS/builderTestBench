/* This file was automatically generated on Tue 18 Jun 2019 08:20:29 BST from
 * source: /home/jjc62351/work/builderTestBench/leyboldBuilder/etc/makeIocs/BL99I-LCH-IOC-01.xml
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

