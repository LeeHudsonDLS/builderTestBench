/* This file was automatically generated on Wed 07 Nov 2018 14:03:41 GMT from
 * source: /home/jjc62351/work/Builder/transfocatorTest/etc/makeIocs/BL99I-LCH-IOC-01.xml
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

