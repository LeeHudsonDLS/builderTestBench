/* This file was automatically generated on Thu 06 Dec 2018 14:59:37 GMT from
 * source: /home/jjc62351/work/Builder/SemBuilder/etc/makeIocs/BL99I-LCH-IOC-01.xml
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

