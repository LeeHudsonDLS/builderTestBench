/* This file was automatically generated on Wed 10 Jul 2019 13:08:16 BST from
 * source: /home/jjc62351/work/builderTestBench/r7AravisBuilder/etc/makeIocs/BLTEST-LCH-IOC-01.xml
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

