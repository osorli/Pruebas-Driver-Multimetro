#include "SystemRelated.h"

status_ getMeasurementsFromPrimaryDisplay()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"FETCh1?\n");
    return Query(query1);
}

status_ getLastMeasurementsFromPrimaryDisplay()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"FETCh3?\n");
    return Query(query1);
}

status_ setSystemWaitForTriggerState()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"READ?\n");
    return Configuration(query1);
}
 
status_ setDisplayMeterON()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"DISP ON\n");
    return Configuration(query1);
}

status_ setDisplayMeterOFF()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"DISP OFF\n");
    return Configuration(query1);
}

status_ getDisplayMeterState()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"DISP?\n");
    return Query(query1);
}

status_ setMessageDisplayMeter(char* msg)
{
    char query1[40];
    snprintf(query1,sizeof(query1),"DISP:TEXT \"%s\"\n",msg);
    return Configuration(query1);
}

status_ getMessageDisplayMeter()
{
    char query1[40];
    snprintf(query1,sizeof(query1),"DISP:TEXT?\n");
    return Configuration(query1);
}

status_ setClearMessageDisplayMeter()
{
    char query1[40];
    snprintf(query1,sizeof(query1),"DISP:TEXT:CLE\n");
    return Configuration(query1);
}

status_ setIssueSingleBeep()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"SYST:BEEP\n");
    return Configuration(query1);
}

status_ setBeeperStateON()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"SYST:BEEP:STAT ON\n");
    return Configuration(query1);
}

status_ getBeeperState()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"SYST:BEEP:STAT?\n");
    return Query(query1);
}

status_ setMeterSystemDate(char* date_)
{
    char query1[30];
    snprintf(query1,sizeof(query1),"SYST:DATE %s\n",date_);
    return Configuration(query1);
}

status_ getMeterSystemDate()
{
    char query1[15];
    snprintf(query1,sizeof(query1),"SYST:DATE?\n");
    return Query(query1);
}

status_ getMetersErrorQueue()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"SYST:ERR?\n");
    return Query(query1);
}

status_ setMetersErrorBeeperStateON()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"SYST:ERR:BEEP ON\n");
    return Configuration(query1);
}

status_ setMetersErrorBeeperStateOFF()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"SYST:ERR:BEEP OFF\n");
    return Configuration(query1);
}

status_ getMetersErrorBeeperState()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"SYST:ERR:BEEP?\n");
    return Query(query1);
}

status_ setMeterSystemTime(char* time_)
{
    char query1[30];
    snprintf(query1,sizeof(query1),"SYST:TIME %s\n",time_);
    return Configuration(query1);
}

status_ getMeterSystemTime()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"SYST:TIME?\n");
    return Query(query1);
}

status_ getMeterSCPIVersion()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"SYST:VERS?\n");
    return Query(query1);
}

status_ getNumberOfStoredReadings()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"DATA:POIN?\n");
    return Query(query1);
}

status_ setResetMeter()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*RST\n");
    return Configuration(query1);
}

status_ setUserDefinedStringON(char* string_)
{
    char query1[10];
    snprintf(query1,sizeof(query1),"IDN ON,\"%s\"\n",string_);
    return Configuration(query1);
}

status_ setUserDefinedStringOFF()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"IDN OFF\n");
    return Configuration(query1);
}


status_ getMeterIdentificationString()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*IDN?\n");
    return Query(query1);
}

status_ setCommandLanguageDMM4050()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"L1\n");
    return Configuration(query1);
}
  
status_ setCommandLanguageFluke45()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"L2\n");
    return Configuration(query1);
}

status_ setCommandLanguageFluke8842A()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"L3\n");
    return Configuration(query1);
}