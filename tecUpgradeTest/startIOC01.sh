kill -9 `pidof ./BL99I-LCH-IOC-01 stBL99I-LCH-IOC-01.boot`
#cd /dls_sw/work/R3.14.12.3/support/asyn/opi/edm
#edm -m P=BL99I,R=-LCH-ASYN-01 asynRecord.edl &
#cd /home/jjc62351/work/leybold/leyboldApp/opi/edl
#edm Debug.edl &
cd /home/jjc62351/work/Builder/newleyboldBuilder/iocs/BL99I-LCH-IOC-01/bin/linux-x86_64
./stBL99I-LCH-IOC-01-gui &
./stBL99I-LCH-IOC-01.sh 
