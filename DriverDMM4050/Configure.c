#include "Configure.h"

//Configure Voltage DC
status_ setVoltageDC_range_resolution(float range_, float resolution_)
{
    char query1[50];
   if(range_>1)
   {
        snprintf(query1,sizeof(query1),"CONF:VOLT:DC %f , %f \n",range_,resolution_);
        return Configuration(query1);
   }
   else
   {
       status_ estado;
       estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
       estado.description="ERROR_PARAMETERS_OUT_OF_RANGE";
       return estado;
   }
}

status_ setVoltageDC_range(float range_)
{
    char query1[50];
   if(range_>1)
   {
        snprintf(query1,sizeof(query1),"CONF:VOLT:DC %f\n",range_);
        return Configuration(query1);
   }
   else
   {
       status_ estado;
       estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
       estado.description="ERROR_PARAMETERS_OUT_OF_RANGE";
       return estado;
   }
}

status_ setVoltageDC()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CONF:VOLT:DC\n");
    return Configuration(query1);
}

//Configure Voltage AC
status_ setVoltageAC_range_resolution(float range_, float resolution_)
{
    char query1[50];
   if(range_>1)
   {
        snprintf(query1,sizeof(query1),"CONF:VOLT:AC %f , %f \n",range_,resolution_);
        return Configuration(query1);
   }
   else
   {
       status_ estado;
       estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
       estado.description="ERROR_PARAMETERS_OUT_OF_RANGE";
       return estado;
   }
}

status_ setVoltageAC_range(float range_)
{
    char query1[50];
   if(range_>1)
   {
        snprintf(query1,sizeof(query1),"CONF:VOLT:AC %f\n",range_);
        return Configuration(query1);
   }
   else
   {
       status_ estado;
       estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
       estado.description="ERROR_PARAMETERS_OUT_OF_RANGE";
       return estado;
   }
}

status_ setVoltageAC()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CONF:VOLT:AC\n");
    return Configuration(query1);
}

//Configure Current DC

status_ setCurrentDC_range_resolution(float range_, float resolution_)
{
    char query1[50];
   if(range_>1)
   {
        snprintf(query1,sizeof(query1),"CONF:CURR:DC %f , %f \n",range_,resolution_);
        return Configuration(query1);
   }
   else
   {
       status_ estado;
       estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
       estado.description="ERROR_PARAMETERS_OUT_OF_RANGE";
       return estado;
   }
}

status_ setCurrentDC_range(float range_)
{
    char query1[50];
   if(range_>1)
   {
        snprintf(query1,sizeof(query1),"CONF:CURR:DC %f\n",range_);
        return Configuration(query1);
   }
   else
   {
       status_ estado;
       estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
       estado.description="ERROR_PARAMETERS_OUT_OF_RANGE";
       return estado;
   }
}

status_ setCurrentDC()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CONF:CURR:DC\n");
    return Configuration(query1);
}

//Configure Current AC
status_ setCurrentAC_range_resolution(float range_, float resolution_)
{
    char query1[50];
   if(range_>1)
   {
        snprintf(query1,sizeof(query1),"CONF:CURR:AC %f , %f \n",range_,resolution_);
        return Configuration(query1);
   }
   else
   {
       status_ estado;
       estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
       estado.description="ERROR_PARAMETERS_OUT_OF_RANGE";
       return estado;
   }
}

status_ setCurrentAC_range(float range_)
{
    char query1[50];
   if(range_>1)
   {
        snprintf(query1,sizeof(query1),"CONF:CURR:AC %f\n",range_);
        return Configuration(query1);
   }
   else
   {
       status_ estado;
       estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
       estado.description="ERROR_PARAMETERS_OUT_OF_RANGE";
       return estado;
   }
}

status_ setCurrentAC()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CONF:CURR:AC\n");
    return Configuration(query1);
}

//Configure Resistance
status_ setResistance_range_resolution(float range_, float resolution_)
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CONF:RES %f , %f \n",range_,resolution_);
    return Configuration(query1);
}

status_ setResistance_range(float range_)
{
   char query1[50];
   snprintf(query1,sizeof(query1),"CONF:RES %f\n",range_);
   return Configuration(query1);
   
}

status_ setResistance()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CONF:RES\n");
    return Configuration(query1);
}

//Configure FResistance
status_ setFresistance_range_resolution(float range_, float resolution_)
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CONF:FRES %f , %f \n",range_,resolution_);
    return Configuration(query1);
}

status_ setFresistance_range(float range_)
{
   char query1[50];
   snprintf(query1,sizeof(query1),"CONF:FRES %f\n",range_);
   return Configuration(query1);
   
}

status_ setFresistance()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CONF:FRES\n");
    return Configuration(query1);
}

//Configure Frequency
status_ setFrequency_range_resolution(float range_, float resolution_)
{
    char query1[50];
    if(range_>2)
   {
        snprintf(query1,sizeof(query1),"CONF:FREQ %f , %f \n",range_,resolution_);
        return Configuration(query1);
   }
   else
   {
       status_ estado;
       estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
       estado.description="ERROR_PARAMETERS_OUT_OF_RANGE, Uses one 'range' for all inputs between 3 Hz, and 300 kHz";
       return estado;
   }
}

status_ setFrequency_range(float range_)
{
    char query1[50];
    if(range_>2)
   {
        snprintf(query1,sizeof(query1),"CONF:FREQ %f\n",range_);
        return Configuration(query1);
   }
   else
   {
       status_ estado;
       estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
       estado.description="ERROR_PARAMETERS_OUT_OF_RANGE, Uses one 'range' for all inputs between 3 Hz, and 300 kHz";
       return estado;
   }
}

status_ setFrequency()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CONF:FREQ\n");
    return Configuration(query1);

}

//Configure Period
status_ setPeriod_range_resolution(float range_, float resolution_)
{
    char query1[50];
    if(range_< 1)
   {
        snprintf(query1,sizeof(query1),"CONF:PER %f , %f \n",range_,resolution_);
        return Configuration(query1);
   }
   else
   {
       status_ estado;
       estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
       estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: Uses one range for all inputs between 0.33 seconds, and 3.3 μsec.";
       return estado;
   }
}

status_ setPeriod_range(float range_)
{
    char query1[50];
    if(range_<1)
   {
        snprintf(query1,sizeof(query1),"CONF:PER %f\n",range_);
        return Configuration(query1);
   }
   else
   {
       status_ estado;
       estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
       estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: Uses one range for all inputs between 0.33 seconds, and 3.3 μsec.";
       return estado;
   }
}

status_ setPeriod()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CONF:PER\n");
    return Configuration(query1);

}

//Configure Capacitance
status_ setCapacitance_range_resolution(float range_, float resolution_)
{
    char query1[50];
    if(range_< 1)
   {
        snprintf(query1,sizeof(query1),"CONF:CAP %f , %f \n",range_,resolution_);
        return Configuration(query1);
   }
   else
   {
       status_ estado;
       estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
       estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: Uses one range for all inputs between 0.33 seconds, and 3.3 μsec.";
       return estado;
   }
}

status_ setCapacitance_range(float range_)
{
    char query1[50];
    if(range_<1)
   {
        snprintf(query1,sizeof(query1),"CONF:CAP %f\n",range_);
        return Configuration(query1);
   }
   else
   {
       status_ estado;
       estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
       estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: Uses one range for all inputs between 0.33 seconds, and 3.3 μsec.";
       return estado;
   }
}

status_ setCapacitance()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CONF:CAP\n");
    return Configuration(query1);

}

//Configure Temperature 4 wire
status_ setTemperature4wire_type(char* type_)
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CONF:TEMP:FRTD %s\n",type_);
    return Configuration(query1);
}

status_ setTemperature4wire()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CONF:TEMP:FRTD\n");
    return Configuration(query1);
}

//Configure Temperature 2 wire
status_ setTemperature2wire_type(char* type_)
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CONF:TEMP:RTD %s\n",type_);
    return Configuration(query1);
}

status_ setTemperature2wire()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CONF:TEMP:RTD\n");
    return Configuration(query1);
}

//Configure Continuity
status_ setContinuity()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CONF:CONT\n");
    return Configuration(query1);
}

//Configure Diode
status_ setDiode_Voltage_Current(float Voltage_,float Current_)
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CONF:DIOD %f,%f\n",Voltage_,Current_);
    return Configuration(query1);
}

status_ setDiode_Voltage(float Voltage_)
{
    char query1[40];
    snprintf(query1,sizeof(query1),"CONF:DIOD %f\n",Voltage_);
    return Configuration(query1);
}

status_ setDiode()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CONF:DIOD\n");
    return Configuration(query1);
}

status_ getConfig()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CONF?\n");
    return Query(query1);

}