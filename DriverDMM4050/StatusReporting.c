#include "StatusReporting.h"

status_ setClearStatusByte()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*CLS\n");
    return Configuration(query1);
}

status_ setEnableBitsStandardEventRegister(int bit_)
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*ESE %d\n",bit_);
    return Configuration(query1);
}

status_ getStandardEventEnableRegister()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*ESE?\n");
    return Query(query1);
}

status_ getStandardEventRegister()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*ESR?\n");
    return Query(query1);
}

status_ setOperationCompleteBitStandardEventRegister()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*OPC\n");
    return Configuration(query1);
}

status_ getOneMetersOutputBuffer()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*OPC?\n");
    return Query(query1);
}

status_ setPowerONStatusClear()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*PSC 1\n");
    return Configuration(query1);
}

status_ setPowerOFFStatusClear()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*PSC 0\n");
    return Configuration(query1);
}

status_ getStatusClearState()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*PSC?\n");
    return Query(query1);
}

status_ setEnableBitsStatusByteRegister(int bit_)
{
    if(bit_ >=0  && bit_<=255)
    {
         char query1[20];
         snprintf(query1,sizeof(query1),"*SRE %d\n",bit_);
         return Configuration(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: Although this register has 8 bits and will accept a number from 0  to 255.";
       return estado; 
    
    }
}

status_ getBitsStatusByteRegister()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*SRE?\n");
    return Query(query1);
}

status_ getStatusByteSummaryRegister()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*STB?\n");
    return Query(query1);
}

status_ setClearQuestionableDataEnableRegister()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"STAT:PRES\n");
    return Configuration(query1);
}

status_ setEnableBitsQuestionableDataEnableRegister(int bit_)
{
    if(bit_ >=0  && bit_<=65535)
    {
         char query1[30];
         snprintf(query1,sizeof(query1),"STAT:QUES:ENAB %d\n",bit_);
         return Configuration(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE:Although a 16-bit register that will accept a number between 0 and 65535, only bits 0, 1, 9, 11, 12, and 13 are used.";
       return estado; 
    }
}

status_ getQuestionableDataRegister()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"STAT:QUES:ENAB?\n");
    return Query(query1);
}

status_ getQuestionableDataEnableRegister()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"STAT:QUES:EVEN?\n");
    return Query(query1);
}