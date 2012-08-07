#include "Measure.h"

//Measurement Capacitance

status_ getMeasurementCapacitanceCurrentRange()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"MEAS:CAP?\n");
    return Query(query1);
}

status_ getMeasurementCapacitanceValueRange_Resolution(int range_,int resolution_)
{
    char query1[40];
    char string_[40];
    bzero(string_,40);
    switch(range_){
        
        case 1: if(resolution_==MIN) strcpy(string_,"MEAS:CAP? MIN,MIN\n");
                if(resolution_==MAX) strcpy(string_,"MEAS:CAP? MIN,MAX\n");
                if(resolution_==DEF) strcpy(string_,"MEAS:CAP? MIN,DEF\n"); 
        break;
        
        case 2: if(resolution_==MIN) strcpy(string_,"MEAS:CAP? MAX,MIN\n");
                if(resolution_==MAX) strcpy(string_,"MEAS:CAP? MAX,MAX\n");
                if(resolution_==DEF) strcpy(string_,"MEAS:CAP? MAX,DEF\n");
        break;
        
        case 3: if(resolution_==MIN) strcpy(string_,"MEAS:CAP? DEF,MIN\n");
                if(resolution_==MAX) strcpy(string_,"MEAS:CAP? DEF,MAX\n");
                if(resolution_==DEF) strcpy(string_,"MEAS:CAP? DEF,DEF\n");
        break;
    }
    
    if(strlen(string_)!=0)
    {   snprintf(query1,sizeof(query1),string_);
        return Query(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE";
       return estado;    
    }
}


//Measurement Continuity
status_ getMeasurementContinuity()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"MEAS:CONT?\n");
    return Query(query1);
}


//Measurement Current DC
status_ getMeasurementCurrentDCCurrentRange()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"MEAS:CURR:DC?\n");
    return Query(query1);
}

status_ getMeasurementCurrentDCValueRange(float range_)
{
    char query1[40];
    snprintf(query1,sizeof(query1),"MEAS:CURR:DC? %f\n",range_);
    return Query(query1);
}

status_ getMeasurementCurrentDCValueRange_Resolution(int range_,int resolution_)
{
    char query1[40];
    char string_[40];
    bzero(string_,40);
    switch(range_){
        
        case 1: if(resolution_==1) strcpy(string_,"MEAS:CURR:DC? MIN,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:CURR:DC? MIN,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:CURR:DC? MIN,DEF\n"); 
        break;
        
        case 2: if(resolution_==1) strcpy(string_,"MEAS:CURR:DC? MAX,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:CURR:DC? MAX,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:CURR:DC? MAX,DEF\n");
        break;
        
        case 3: if(resolution_==1) strcpy(string_,"MEAS:CURR:DC? DEF,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:CURR:DC? DEF,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:CURR:DC? DEF,DEF\n");
        break;
    }
    
    if(strlen(string_)!=0)
    {   snprintf(query1,sizeof(query1),string_);
        return Query(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE";
       return estado;    
    }
}


//Measurement Current AC
status_ getMeasurementCurrentACCurrentRange()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"MEAS:CURR:AC?\n");
    return Query(query1);
}

status_ getMeasurementCurrentACValueRange(float range_)
{
    char query1[40];
    snprintf(query1,sizeof(query1),"MEAS:CURR:AC? %f\n",range_);
    return Query(query1);
}

status_ getMeasurementCurrentACValueRange_Resolution(int range_,int resolution_)
{
    char query1[40];
    char string_[40];
    bzero(string_,40);
    switch(range_){
        
        case 1: if(resolution_==1) strcpy(string_,"MEAS:CURR:AC? MIN,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:CURR:AC? MIN,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:CURR:AC? MIN,DEF\n"); 
        break;
        
        case 2: if(resolution_==1) strcpy(string_,"MEAS:CURR:AC? MAX,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:CURR:AC? MAX,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:CURR:AC? MAX,DEF\n");
        break;
        
        case 3: if(resolution_==1) strcpy(string_,"MEAS:CURR:AC? DEF,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:CURR:AC? DEF,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:CURR:AC? DEF,DEF\n");
        break;
    }
    
    if(strlen(string_)!=0)
    {   snprintf(query1,sizeof(query1),string_);
        return Query(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE";
       return estado;    
    }
}


//Measurement Diode
status_ getMeasurementDiodeCurrentRange()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"MEAS:DIOD?\n");
    return Query(query1);
}



//Measurement Frequency
status_ getMeasurementFrequency()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"MEAS:FREQ?\n");
    return Query(query1);
}


//Measurement Fresistance
status_ getMeasurementFResistanceCurrentRange()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"MEAS:FRES?\n");
    return Query(query1);
}

status_ getMeasurementFResistanceValueRange_(float range_)
{
    char query1[40];
    snprintf(query1,sizeof(query1),"MEAS:FRES? %f\n",range_);
    return Query(query1);
}

status_ getMeasurementFResistanceValueRange_Resolution(int range_,int resolution_)
{
    char query1[40];
    char string_[40];
    bzero(string_,40);
    switch(range_){
        
        case 1: if(resolution_==1) strcpy(string_,"MEAS:FRES? MIN,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:FRES? MIN,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:FRES? MIN,DEF\n"); 
        break;
        
        case 2: if(resolution_==1) strcpy(string_,"MEAS:FRES? MAX,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:FRES? MAX,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:FRES? MAX,DEF\n");
        break;
        
        case 3: if(resolution_==1) strcpy(string_,"MEAS:FRES? DEF,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:FRES? DEF,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:FRES? DEF,DEF\n");
        break;
    }
    
    if(strlen(string_)!=0)
    {   snprintf(query1,sizeof(query1),string_);
        return Query(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE";
       return estado;    
    }
}


//Measurement Period, especificando Rango debe ser menor a 0.4 
status_ getMeasurementPeriodCurrentRange()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"MEAS:PER?\n");
    return Query(query1);
}

status_ getMeasurementPeriodValueRange(float range_)
{
    if(range_<0.4)
    {
        char query1[40];
        snprintf(query1,sizeof(query1),"MEAS:PER? %f\n",range_);
        return Query(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: For period measurements, the multimeter uses one 'range' for all inputs between 0.33 seconds, and 3.3 μsec";
       return estado;
    }
}

status_ getMeasurementPeriodValueRange_Resolution(int range_,int resolution_)
{
    char query1[40];
    char string_[40];
    bzero(string_,40);
    switch(range_){
        
        case 1: if(resolution_==1) strcpy(string_,"MEAS:PER? MIN,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:PER? MIN,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:PER? MIN,DEF\n"); 
        break;
        
        case 2: if(resolution_==1) strcpy(string_,"MEAS:PER? MAX,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:PER? MAX,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:PER? MAX,DEF\n");
        break;
        
        case 3: if(resolution_==1) strcpy(string_,"MEAS:PER? DEF,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:PER? DEF,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:PER? DEF,DEF\n");
        break;
    }
    
    if(strlen(string_)!=0)
    {   snprintf(query1,sizeof(query1),string_);
        return Query(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE";
       return estado;
    }
}


//Measurement Resistance
status_ getMeasurementResistanceCurrentRange()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"MEAS:RES?\n");
    return Query(query1);
}

status_ getMeasurementResistanceValueRange_(float range_)
{
    char query1[40];
    snprintf(query1,sizeof(query1),"MEAS:RES? %f\n",range_);
    return Query(query1);
}

status_ getMeasurementResistanceValueRange_Resolution(int range_,int resolution_)
{
    char query1[40];
    char string_[40];
    bzero(string_,40);
    switch(range_){
        
        case 1: if(resolution_==1) strcpy(string_,"MEAS:RES? MIN,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:RES? MIN,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:RES? MIN,DEF\n"); 
        break;
        
        case 2: if(resolution_==1) strcpy(string_,"MEAS:RES? MAX,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:RES? MAX,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:RES? MAX,DEF\n");
        break;
        
        case 3: if(resolution_==1) strcpy(string_,"MEAS:RES? DEF,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:RES? DEF,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:RES? DEF,DEF\n");
        break;
    }
    
    if(strlen(string_)!=0)
    {   snprintf(query1,sizeof(query1),string_);
        return Query(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE";
       return estado;    
    }
}


//Measurement Temperature for 4 wire
status_ getMeasurementTemperature4wire()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"MEAS:TEMP:FRTD?\n");
    return Query(query1);
}

//Measurement Temperature for 2 wire
status_ getMeasurementTemperature2wire()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"MEAS:TEMP:RTD?\n");
    return Query(query1);
}

//Measurement Voltage AC
status_ getMeasurementVoltageACCurrentRange()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"MEAS:VOLT:AC?\n");
    return Query(query1);
}

status_ getMeasurementVoltageACValueRange_(float range_)
{
    char query1[40];
    snprintf(query1,sizeof(query1),"MEAS:VOLT:AC? %f\n",range_);
    return Query(query1);
}

status_ getMeasurementVoltageACValueRange_Resolution(int range_,int resolution_)
{
    char query1[40];
    char string_[40];
    bzero(string_,40);
    switch(range_){
        
        case 1: if(resolution_==1) strcpy(string_,"MEAS:VOLT:AC? MIN,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:VOLT:AC? MIN,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:VOLT:AC? MIN,DEF\n"); 
        break;
        
        case 2: if(resolution_==1) strcpy(string_,"MEAS:VOLT:AC? MAX,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:VOLT:AC? MAX,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:VOLT:AC? MAX,DEF\n");
        break;
        
        case 3: if(resolution_==1) strcpy(string_,"MEAS:VOLT:AC? DEF,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:VOLT:AC? DEF,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:VOLT:AC? DEF,DEF\n");
        break;
    }
    
    if(strlen(string_)!=0)
    {   snprintf(query1,sizeof(query1),string_);
        return Query(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE";
       return estado;    
    }
}


//Measurement Voltage AC
status_ getMeasurementVoltageDCCurrentRange()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"MEAS:VOLT:DC?\n");
    return Query(query1);
}

status_ getMeasurementVoltageDCValueRange_(float range_)
{
    char query1[40];
    snprintf(query1,sizeof(query1),"MEAS:VOLT:DC? %f\n",range_);
    return Query(query1);
}

status_ getMeasurementVoltageDCValueRange_Resolution(int range_,int resolution_)
{
    char query1[40];
    char string_[40];
    bzero(string_,40);
    switch(range_){
        
        case 1: if(resolution_==1) strcpy(string_,"MEAS:VOLT:DC? MIN,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:VOLT:DC? MIN,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:VOLT:DC? MIN,DEF\n"); 
        break;
        
        case 2: if(resolution_==1) strcpy(string_,"MEAS:VOLT:DC? MAX,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:VOLT:DC? MAX,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:VOLT:DC? MAX,DEF\n");
        break;
        
        case 3: if(resolution_==1) strcpy(string_,"MEAS:VOLT:DC? DEF,MIN\n");
                if(resolution_==2) strcpy(string_,"MEAS:VOLT:DC? DEF,MAX\n");
                if(resolution_==3) strcpy(string_,"MEAS:VOLT:DC? DEF,DEF\n");
        break;
    }
    
    if(strlen(string_)!=0)
    {   snprintf(query1,sizeof(query1),string_);
        return Query(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE";
       return estado;    
    }
}

status_ getMeasurementVoltageDCRatio()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"MEAS:VOLT:DC:RAT?\n");
    return Query(query1);
}

