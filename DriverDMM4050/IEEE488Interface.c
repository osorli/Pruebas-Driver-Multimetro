#include "IEEE488Interface.h"

status_ setClearStatus()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*CLS?\n");
    return Configuration(query1);
}

//Querys

status_ getStandardEventEnableRegister_()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*ESE?\n");
    return Query(query1);
}

status_ getStandardEventRegister_Error()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*ESR?\n");
    return Query(query1);
}

status_ getOperationCompleteStatus()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*OPC?\n");
    return Query(query1);
}

status_ setOperationCompleteBit()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*OPC\n");
    return Configuration(query1);
}

status_ setPowerOnStatusClear(int bit_)
{
    char query1[30];
    snprintf(query1,sizeof(query1),"*PSC %d\n",bit_);
    return Configuration(query1);
}

status_ getPowerOnStatusClearSetting()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*PSC?\n");
    return Query(query1);
}

status_ setBitsStatusByteRegister_(int bit_)
{
    char query1[30];
    snprintf(query1,sizeof(query1),"*SRE %d\n",bit_);
    return Configuration(query1);
}

status_ getBitsStatusByteRegister_()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*SRE?\n");
    return Query(query1);
}

status_ getStatusByteSummaryRegister_()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*STB?\n");
    return Query(query1);
}

status_ getSelfTestStatus()
{
    char query1[10];
    snprintf(query1,sizeof(query1),"*TST?\n");
    return Query(query1);
}

