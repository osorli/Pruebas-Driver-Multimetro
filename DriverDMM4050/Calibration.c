#include "Calibration.h"


status_ RecordCalibration()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CAL:REC\n");
    return Configuration(query1);
}

status_ setCalibrationSecureCode(char* code_)
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CAL:SEC:CODE %s\n", code_);
    return Configuration(query1);
}

status_ setCalibrationSecureStateON(char* code_)
{
    char query1[40];
    snprintf(query1,sizeof(query1),"CAL:SEC:STAT ON,%s\n",code_);
    return Configuration(query1);
}

status_ setCalibrationSecureStateOFF(char* code_)
{
    char query1[40];
    snprintf(query1,sizeof(query1),"CAL:SEC:STAT OFF,%s\n",code_);
    return Configuration(query1);
}

status_ setCalibrationString(char* string_)
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CAL:STR %s\n",string_);
    return Configuration(query1);
}

status_ getCalibrationString()
{
    char query1[15];
    snprintf(query1,sizeof(query1),"CAL:STR?\n");
    return Query(query1);
}

status_ setCalibrationDate(char* date_)
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CAL:DATE %s\n", date_);
    return Configuration(query1);
}

status_ getCalibrationDate()
{
    char query1[15];
    snprintf(query1,sizeof(query1),"CAL:DATE?\n");
    return Query(query1);
}

status_ setCalibrationValue(char* mode_,char* value_)
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CAL:VAL %s,%s\n",mode_, value_);
    return Configuration(query1);
}

status_ getCalibrationValue()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CAL:VAL?\n");
    return Query(query1);
}

status_ setCalibrationStep(int step_)
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CAL:STEP %d\n",step_);
    return Configuration(query1);
}

status_ getCalibrationStep()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CAL:STEP?\n");
    return Query(query1);
}

status_ getCalibrationCount()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CAL:COUN?\n");
    return Query(query1);
}