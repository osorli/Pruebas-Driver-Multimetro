#include "Triggering.h"

status_ setTriggerSystemInitiateWait()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"INIT\n");
    return Configuration(query1);
}

status_ setEnableStoringMeasurements()
{
    char query1[40];
    snprintf(query1,sizeof(query1),"DATA:FEED RDG_STORE,\"CALC\"\n");
    return Configuration(query1);
}        

status_ setDisableStoringMeasurements()
{
    char query1[40];
    snprintf(query1,sizeof(query1),"DATA:FEED RDG_STORE,\"\"\n");
    return Configuration(query1);
}   

status_ setNumberMeasurementsPerTrigger(int value_)
{
    if(value_>=0 && value_<=50000)
    {
         char query1[40];
         snprintf(query1,sizeof(query1),"SAMP:COUN %d\n",value_);
        return Configuration(query1);
    }
    else
    {
       status_ estado;
       estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
       estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: Uses values between 0 to 50,000.";
       return estado;
    }
} 

status_ setNumberMeasurementsPerTriggerMIN()
{
    char query1[20];
         snprintf(query1,sizeof(query1),"SAMP:COUN MIN\n");
        return Configuration(query1);
} 

status_ setNumberMeasurementsPerTriggerMAX()
{
    char query1[20];
         snprintf(query1,sizeof(query1),"SAMP:COUN MAX\n");
        return Configuration(query1);
} 

status_ getNumberMeasurementsPerTrigger()
{
    char query1[20];
         snprintf(query1,sizeof(query1),"SAMP:COUN?\n");
        return Query(query1);
} 

status_ setNumberOfTriggerBeforBecomesIDLE(int value_)
{
    if(value_>=0 && value_<=50000)
    {
         char query1[40];
         snprintf(query1,sizeof(query1),"TRIG:COUN %d\n",value_);
        return Configuration(query1);
    }
    else
    {
       status_ estado;
       estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
       estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: Uses values between 0 to 50,000.";
       return estado;
    }
} 

status_ setNumberOfTriggerBeforBecomesIDLE_MIN()
{
    char query1[40];
    snprintf(query1,sizeof(query1),"TRIG:COUN MIN\n");
    return Configuration(query1);
}

status_ setNumberOfTriggerBeforBecomesIDLE_MAX()
{
    char query1[40];
    snprintf(query1,sizeof(query1),"TRIG:COUN MAX\n");
    return Configuration(query1);
}

status_ setNumberOfTriggerBeforBecomesIDLE_Infinite()
{
    char query1[40];
    snprintf(query1,sizeof(query1),"TRIG:COUN INF\n");
    return Configuration(query1);
}

status_ getNumberOfTriggerBeforBecomesIDLE_MIN()
{
    char query1[40];
    snprintf(query1,sizeof(query1),"TRIG:COUN?\n");
    return Query(query1);
}

status_ setDelayTrigger(int seconds_)
{
    if(seconds_>=0 && seconds_<=3600)
    {
         char query1[40];
        snprintf(query1,sizeof(query1),"TRIG:DEL %d\n",seconds_);
        return Configuration(query1);
    }
    else
    {
       status_ estado;
       estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
       estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: Uses values between 0 to 3600.";
       return estado;
    }
}

status_ setDelayTriggerMIN()
{
    char query1[20];
        snprintf(query1,sizeof(query1),"TRIG:DEL MIN\n");
        return Configuration(query1);
}

status_ setDelayTriggerMAX()
{
    char query1[20];
        snprintf(query1,sizeof(query1),"TRIG:DEL MAX\n");
        return Configuration(query1);
}

status_ getCurrentDelayTrigger()
{
    char query1[10];
        snprintf(query1,sizeof(query1),"TRIG:DEL?\n");
        return Query(query1);
}

status_ setMeterTriggerSourceBUS()
{
    char query1[20];
        snprintf(query1,sizeof(query1),"TRIG:SOUR BUS\n");
        return Configuration(query1);
}    

status_ setMeterTriggerSourceIMMediate()
{
    char query1[20];
        snprintf(query1,sizeof(query1),"TRIG:SOUR IMM\n");
        return Configuration(query1);
} 

status_ setMeterTriggerSourceEXTernal()
{
    char query1[20];
        snprintf(query1,sizeof(query1),"TRIG:SOUR EXT\n");
        return Configuration(query1);
}

status_ getMeterTriggerCurrentSource()
{
    char query1[20];
        snprintf(query1,sizeof(query1),"TRIG:SOUR?\n");
        return Query(query1);
}