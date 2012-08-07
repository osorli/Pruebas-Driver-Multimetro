#include "RS232Interface.h"

status_ setMeterToLocalMode()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"SYST:LOC\n");
    return Configuration(query1);
}

status_ setMeterToRemoteMode()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"SYST:REM\n");
    return Configuration(query1);
}

status_ setMeterToRWLockMode()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"SYST:RWL\n");
    return Configuration(query1);
}