#include "MathFunctions.h"

status_ getMinimunAverageValue()
{
    char query1[40];
    snprintf(query1,sizeof(query1),"CALC:AVER:MIN?\n");
    return Query(query1);
}

status_ getMaximumAverageValue()
{
    char query1[40];
    snprintf(query1,sizeof(query1),"CALC:AVER:MAX?\n");
    return Query(query1);
}

status_ getAverageValue()
{
    char query1[40];
    snprintf(query1,sizeof(query1),"CALC:AVER:AVER?\n");
    return Query(query1);
}

status_ getCountAverageValue()
{
    char query1[40];
    snprintf(query1,sizeof(query1),"CALC:AVER:COUN?\n");
    return Query(query1);
}

status_ setOffsetValueForZeroFunction(int value_)
{
    if(value_ >=0 && value_<=120)
    {
         char query1[30];
         snprintf(query1,sizeof(query1),"CALC:NULL:OFFS %d\n",value_);
         return Configuration(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="Error parameters out of range: 0 to 120 % of highest range.";
        return estado;
    }
}

status_ setOffsetValueForZeroFunction_MIN()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CALC:NULL:OFFS MIN\n");
    return Configuration(query1);
}

status_ setOffsetValueForZeroFunction_MAX()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CALC:NULL:OFFS MAX\n");
    return Configuration(query1);
}

status_ getOffsetRegisterValueForZeroFunction()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CALC:NULL:OFFS?\n");
    return Query(query1);
}

status_ getOffsetRegisterValueForZeroFunction_MIN()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CALC:NULL:OFFS? MIN\n");
    return Query(query1);
}

status_ getOffsetRegisterValueForZeroFunction_MAX()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CALC:NULL:OFFS? MAX\n");
    return Query(query1);
}

//DB
status_ setStoreRelativeValueRegisterDB(int value_)
{
    char query1[60];
    snprintf(query1,sizeof(query1),"CALC:DB:REF %d\n",value_);
    return Configuration(query1);
}

status_ setStoreRelativeValueRegisterDB_MIN()
{
    char query1[60];
    snprintf(query1,sizeof(query1),"CALC:DB:REF MIN\n");
    return Configuration(query1);
}

status_ setStoreRelativeValueRegisterDB_MAX()
{
    char query1[60];
    snprintf(query1,sizeof(query1),"CALC:DB:REF MAX\n");
    return Configuration(query1);
}

status_ getStoreRelativeValueRegisterDB()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:DB:REF?\n");
    return Query(query1);
}

status_ getStoreRelativeValueRegisterDB_MIN()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:DB:REF? MIN\n");
    return Query(query1);
}

status_ getStoreRelativeValueRegisterDB_MAX()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:DB:REF? MAX\n");
    return Query(query1);
}


status_ setDBmReferenceValue(int value_)
{
    char query1[60];
    snprintf(query1,sizeof(query1),"CALC:DBM:REF %d\n",value_);
    return Configuration(query1);
}

status_ setDBmReferenceValue_MIN()
{
    char query1[60];
    snprintf(query1,sizeof(query1),"CALC:DBM:REF MIN\n");
    return Configuration(query1);
}

status_ setDBmReferenceValue_MAX()
{
    char query1[60];
    snprintf(query1,sizeof(query1),"CALC:DBM:REF MAX\n");
    return Configuration(query1);
}

status_ getDBmReferenceValue()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:DBM:REF?\n");
    return Query(query1);
}

status_ getDBmReferenceValue_MIN()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:DBMREF? MIN\n");
    return Query(query1);
}

status_ gettDBmReferenceValuer_MAX()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:DBM:REF? MAX\n");
    return Query(query1);
}


status_ setLowerLimitForLimitTesting(int value_)
{
    char query1[60];
    snprintf(query1,sizeof(query1),"CALC:LIM:LOW  %d\n",value_);
    return Configuration(query1);
}

status_ setLowerLimitForLimitTesting_MIN()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:LIM:LOW MIN\n");
    return Configuration(query1);
}

status_ setLowerLimitForLimitTesting_MAX()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:LIM:LOW MAX\n");
    return Configuration(query1);
}

status_ getLowerLimitRegisterValue()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:LIM:LOW?\n");
    return Query(query1);
}

status_ getLowerLimitRegisterValue_MIN()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:LIM:LOW? MIN\n");
    return Query(query1);
}

status_ getLowerLimitRegisterValue_MAX()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:LIM:LOW? MAX\n");
    return Query(query1);
}


status_ setUpperLimitForLimitTesting(int value_)
{
    char query1[60];
    snprintf(query1,sizeof(query1),"CALC:LIM:UPP  %d\n",value_);
    return Configuration(query1);
}

status_ setUpperLimitForLimitTesting_MIN()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:LIM:UPP MIN\n");
    return Configuration(query1);
}

status_ setUpperLimitForLimitTesting_MAX()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:LIM:UPP MAX\n");
    return Configuration(query1);
}

status_ getUpperLimitRegisterValue()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:LIM:UPP?\n");
    return Query(query1);
}

status_ getUpperLimitRegisterValue_MIN()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:LIM:UPP? MIN\n");
    return Query(query1);
}

status_ getUpperLimitRegisterValue_MAX()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:LIM:UPP? MAX\n");
    return Query(query1);
}

status_ setEnableStoringMeasurementsCalculate()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"DATA:FEED RDG_STORE,'CALC'\n");
    return Configuration(query1);
}

status_ setDisableStoringMeasurementsCalculate()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"DATA:FEED RDG_STORE,''\n");
    return Configuration(query1);
}

status_  getStateReadingStoreSetting()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"DATA:FEED?\n");
    return Query(query1);

}

status_ setMxPlusBCalculationStateON()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:KMAT:STAT ON\n");
    return Configuration(query1);
}

status_ setMxPlusBCalculationStateOFF()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:KMAT:STAT OFF\n");
    return Configuration(query1);
}

status_ getMxPlusBCalculationState()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:KMAT:STAT?\n");
    return Query(query1);
}

status_ setMFactorValueForMxPlusBCalculation(int m_)
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:KMAT:MMF %d\n",m_);
    return Configuration(query1);
}

status_ getMFactorValueForMxPlusBCalculation()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:KMAT:MMF?\n");
    return Query(query1);
}

status_ setBFactorValueForMxPlusBCalculation(int b_)
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:KMAT:MBF %d\n",b_);
    return Configuration(query1);
}

status_ getBFactorValueForMxPlusBCalculation()
{
    char query1[50];
    snprintf(query1,sizeof(query1),"CALC:KMAT:MBF?\n");
    return Query(query1);
}

status_ setUnitsNameForMxPlusBCalculation(char* name_)
{
    if(strlen(name_)==3)
    {
        char query1[30];
        snprintf(query1,sizeof(query1),"CALC:KMAT:MUN %s\n",name_);
        return Configuration(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="Example: Sets units to 'VOL'";
        return estado;
    }
}

status_ getUnitsNameForMxPlusBCalculation()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CALC: KMAT:MUN?\n");
    return Query(query1);
}

status_ setMathFunctionDBMmode()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CALC:FUNC DBM\n");
    return Configuration(query1);
}

status_ setMathFunctionDBmode()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CALC:FUNC DB\n");
    return Configuration(query1);
}

status_ setMathFunctionAVERAGEmode()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CALC:FUNC AVER\n");
    return Configuration(query1);
}

status_ setMathFunctionLIMITmode()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CALC:FUNC LIM\n");
    return Configuration(query1);
}

status_ getMathFunctionMode()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CALC:FUNC?\n");
    return Query(query1);
}

status_ setMathFunctionStateON()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CALC:STAT ON\n");
    return Configuration(query1);
}

status_ setMathFunctionStateOFF()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CALC:STAT OFF\n");
    return Configuration(query1);
}

status_ getMathFunctionStatus()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CALC:STAT?\n");
    return Query(query1);
}

