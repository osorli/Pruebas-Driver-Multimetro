#include "MeasureConfiguration.h"

status_ setFunctionCapacitance()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FUNC \"CAP\"\n");
    return Configuration(query1);
}

status_ setFunctionContinuity()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FUNC \"CONT\"\n");
    return Configuration(query1);
}

status_ setFunctionCurrentAC()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FUNC \"CURR:AC\"\n");
    return Configuration(query1);
}

status_ setFunctionCurrentDC()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FUNC \"CURR:DC\"\n");
    return Configuration(query1);
}

status_ setFunctionDiode()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FUNC \"DIOD\"\n");
    return Configuration(query1);
}

status_ setFunctionFResistance()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FUNC \"FRES\"\n");
    return Configuration(query1);
}

status_ setFunctionFrequency()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FUNC \"FREQ\"\n");
    return Configuration(query1);
}

status_ setFunctionPeriod()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FUNC \"PER\"\n");
    return Configuration(query1);
}

status_ setFunctionResistance()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FUNC \"RES\"\n");
    return Configuration(query1);
}

status_ setFunctionTemperature4wire()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FUNC \"TEMP:FRTD\"\n");
    return Configuration(query1);
}

status_ setFunctionTemperature2wire()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FUNC \"TEMP:RTD\"\n");
    return Configuration(query1);
}

status_ setFunctionVoltageDC()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FUNC \"VOLT:DC\"\n");
    return Configuration(query1);
}

status_ setFunctionVoltageAC()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FUNC \"VOLT:AC\"\n");
    return Configuration(query1);
}

status_ setFunctionVoltageDCRatio()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FUNC \"VOLT:DC:RAT\"\n");
    return Configuration(query1);
}

status_ getFunctionPresentMeasurement()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FUNC?\n");
    return Query(query1);
}

//Configuración de Mediciones Voltage AC

status_ setVoltageACFilterFrequencyValue(int n_)
{
    if(n_==3 || n_==20 ||n_==200)
    {
        char query1[20];
        snprintf(query1,sizeof(query1),"VOLT:AC:BAND %d\n",n_);
        return Configuration(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: Value 3|20|200";
       return estado; 
    }
}

status_ setVoltageACFilterFrequencyMIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:AC:BAND MIN\n");
    return Configuration(query1);
}

status_ setVoltageACFilterFrequencyMAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:AC:BAND MAX\n");
    return Configuration(query1);
}

status_ getVoltageACFilterFrequencySetting()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:AC:BAND?\n");
    return Query(query1);
}

status_ setVoltageACRangeValue(float range_)
{
    char query1[40];
    snprintf(query1,sizeof(query1),"VOLT:AC:RANG %f\n",range_);
    return Configuration(query1);
}

status_ setVoltageACRangeMIN()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"VOLT:AC:RANG MAX\n");
    return Configuration(query1);
}

status_ setVoltageACRangeMAX()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"VOLT:AC:RANG MAX\n");
    return Configuration(query1);
}

status_ setVoltageACAutoRangeON()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"VOLT:AC:RANG:AUTO ON\n");
    return Configuration(query1);
}

status_ setVoltageACAutoRangeOFF()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"VOLT:AC:RANG:AUTO OFF\n");
    return Configuration(query1);
}

status_ getVoltageACAutoRangeState()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"VOLT:AC:RANG:AUTO?\n");
    return Query(query1);
}

//Se pueden consultar con MIN o MAX pero esta es la consulta general.
status_ getVoltageACRangeSetting()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:AC:RANG?\n");
    return Query(query1);
}

status_ setVoltageACResolutionMIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:AC:RES MIN\n");
    return Configuration(query1);
}

status_ setVoltageACResolutionMAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:AC:RES MAX\n");
    return Configuration(query1);
}

//Se pueden consultar con MIN o MAX pero esta es la consulta general.
status_ getVoltageACResolutionState()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:AC:RES?\n");
    return Query(query1);
}


//Configuración de Mediciones Voltage DC
status_ setVoltageDCFilterFrequencyValue(int n_)
{
    if(n_==3 || n_==20 ||n_==200)
    {
        char query1[20];
        snprintf(query1,sizeof(query1),"VOLT:DC:BAND %d\n",n_);
        return Configuration(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: Value 3|20|200";
       return estado; 
    }
}

status_ setVoltageDCFilterFrequencyMIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:DC:BAND MIN\n");
    return Configuration(query1);
}

status_ setVoltageDCFilterFrequencyMAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:DC:BAND MAX\n");
    return Configuration(query1);
}

status_ getVoltageDCFilterFrequencySetting()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:DC:BAND?\n");
    return Query(query1);
}

status_ setVoltageDCRangeValue(float range_)
{
    char query1[40];
    snprintf(query1,sizeof(query1),"VOLT:DC:RANG %f\n",range_);
    return Configuration(query1);
}

status_ setVoltageDCRangeMIN()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"VOLT:DC:RANG MAX\n");
    return Configuration(query1);
}

status_ setVoltageDCRangeMAX()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"VOLT:DC:RANG MAX\n");
    return Configuration(query1);
}

status_ setVoltageDCAutoRangeON()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"VOLT:DC:RANG:AUTO ON\n");
    return Configuration(query1);
}

status_ setVoltageDCAutoRangeOFF()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"VOLT:DC:RANG:AUTO OFF\n");
    return Configuration(query1);
}

status_ getVoltageDCAutoRangeState()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"VOLT:DC:RANG:AUTO?\n");
    return Query(query1);
}

//Se pueden consultar con MIN o MAX pero esta es la consulta general.
status_ getVoltageDCRangeSetting()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:DC:RANG?\n");
    return Query(query1);
}

status_ setVoltageDCResolutionMIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:DC:RES MIN\n");
    return Configuration(query1);
}

status_ setVoltageDCResolutionMAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:DC:RES MAX\n");
    return Configuration(query1);
}

//Se pueden consultar con MIN o MAX pero esta es la consulta general.
status_ getVoltageDCResolutionState()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:DC:RES?\n");
    return Query(query1);
}

//Configuracion de Filtro de Voltage
status_ setVoltageFilterStateON()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:FILT ON\n");
    return Configuration(query1);
}

status_ setVoltageFilterStateOFF()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:FILT OFF\n");
    return Configuration(query1);
}

status_ getVoltageFilterState()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:FILT?\n");
    return Query(query1);
}

status_ setVoltageDigitalFilterStateON()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:FILT:DIG ON\n");
    return Configuration(query1);
}

status_ setVoltageDigitalFilterStateOFF()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:FILT:DIG OFF\n");
    return Configuration(query1);
}

status_ getVoltageDigitalFilterState()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:FILT:DIG?\n");
    return Query(query1);
}

//Configuracion de Impedance de Voltage
status_ setVoltageAutoImpedanceModeON()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:IMP:AUTO ON\n");
    return Configuration(query1);
}

status_ setVoltageAutoImpedanceModeOFF()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:IMP:AUTO OFF\n");
    return Configuration(query1);
}

status_ getVoltageAutoImpedanceMode()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:IMP:AUTO?\n");
    return Query(query1);
}

//Configuracion de Numero de lineas por ciclo  de Voltage
status_ setVoltageIntegrationTimeNPLCValue(float n_)
{
    if(n_==0.02 || n_==0.2 || n_==1 || n_==10 || n_==100)
    {
        char query1[20];
        snprintf(query1,sizeof(query1),"VOLT:NPLC %f\n",n_);
        return Configuration(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: sets integration time to a preset value of a power line cycle (0.02, 0.2, 1, 10, or 100)";
       return estado;    
    }
}

status_ setVoltageIntegrationTimeNPLC_MIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:NPLC MIN\n");
    return Configuration(query1);
}

status_ setVoltageIntegrationTimeNPLC_MAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:NPLC MAX\n");
    return Configuration(query1);
}

status_ getVoltageIntegrationTimeNPLC()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"VOLT:NPLC?\n");
    return Query(query1);
}


//Configuración de Mediciones Corriente AC
status_ setCurrentACFilterFrequencyValue(int n_)
{
    if(n_==3 || n_==20 ||n_==200)
    {
        char query1[20];
        snprintf(query1,sizeof(query1),"CURR:AC:BAND %d\n",n_);
        return Configuration(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: Value 3|20|200";
       return estado; 
    }
}

status_ setCurrentACFilterFrequencyMIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:AC:BAND MIN\n");
    return Configuration(query1);
}

status_ setCurrentACFilterFrequencyMAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:AC:BAND MAX\n");
    return Configuration(query1);
}

status_ getCurrentACFilterFrequencySetting()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:AC:BAND?\n");
    return Query(query1);
}

status_ setCurrentACRangeValue(float range_)
{
    char query1[40];
    snprintf(query1,sizeof(query1),"CURR:AC:RANG %f\n",range_);
    return Configuration(query1);
}

status_ setCurrentACRangeMIN()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CURR:AC:RANG MAX\n");
    return Configuration(query1);
}

status_ setCurrentACRangeMAX()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CURR:AC:RANG MAX\n");
    return Configuration(query1);
}

status_ setCurrentACAutoRangeON()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CURR:AC:RANG:AUTO ON\n");
    return Configuration(query1);
}

status_ setCurrentACAutoRangeOFF()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CURR:AC:RANG:AUTO OFF\n");
    return Configuration(query1);
}

status_ getCurrentACAutoRangeState()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"CURR:AC:RANG:AUTO?\n");
    return Query(query1);
}

//Se pueden consultar con MIN o MAX pero esta es la consulta general.
status_ getCurrentACRangeSetting()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:AC:RANG?\n");
    return Query(query1);
}

status_ setCurrentACResolutionMIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:AC:RES MIN\n");
    return Configuration(query1);
}

status_ setCurrentACResolutionMAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:AC:RES MAX\n");
    return Configuration(query1);
}

//Se pueden consultar con MIN o MAX pero esta es la consulta general.
status_ getCurrentACResolutionState()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:AC:RES?\n");
    return Query(query1);
}

//Configuracion de Filtro de Corriente
status_ setCurrentFilterStateON()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:FILT ON\n");
    return Configuration(query1);
}

status_ setCurrentFilterStateOFF()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:FILT OFF\n");
    return Configuration(query1);
}

status_ getCurrentFilterState()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:FILT?\n");
    return Query(query1);
}

status_ setCurrentDigitalFilterStateON()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:FILT:DIG ON\n");
    return Configuration(query1);
}

status_ setCurrentDigitalFilterStateOFF()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:FILT:DIG OFF\n");
    return Configuration(query1);
}

status_ getCurrentDigitalFilterState()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:FILT:DIG?\n");
    return Query(query1);
}

//Configuracion de Numero de lineas por ciclo  de Corriente
status_ setCurrentIntegrationTimeNPLCValue(float n_)
{
    if(n_==0.02 || n_==0.2 || n_==1 || n_==10 || n_==100)
    {
        char query1[20];
        snprintf(query1,sizeof(query1),"CURR:NPLC %f\n",n_);
        return Configuration(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: sets integration time to a preset value of a power line cycle (0.02, 0.2, 1, 10, or 100)";
       return estado;    
    }
}

status_ setCurrentIntegrationTimeNPLC_MIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:NPLC MIN\n");
    return Configuration(query1);
}

status_ setCurrentIntegrationTimeNPLC_MAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:NPLC MAX\n");
    return Configuration(query1);
}

status_ getCurrentIntegrationTimeNPLC()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:NPLC?\n");
    return Query(query1);
}

status_ setCurrentRangeValue(float value_)
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:RANG %f\n",value_);
    return Configuration(query1);
}

status_ setCurrentRangeMIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:RANG MIN\n");
    return Configuration(query1);
}

status_ setCurrentRangeMAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:RANG MAX\n");
    return Configuration(query1);
}

//Se pueden consultar con MIN o MAX pero esta es la consulta general.
status_ getCurrentRangeSetting()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:RANG?\n");
    return Query(query1);
}

status_ setCurrentResolutionMIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:RES MIN\n");
    return Configuration(query1);
}

status_ setCurrentResolutionMAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:RES MAX\n");
    return Configuration(query1);
}

//Se pueden consultar con MIN o MAX pero esta es la consulta general.
status_ getCurrentResolutionSetting()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CURR:RES?\n");
    return Query(query1);
}


//Configuracion de Filtro de Resistencia
status_ setResistanceFilterStateON()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"RES:FILT ON\n");
    return Configuration(query1);
}

status_ setResistanceFilterStateOFF()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"RES:FILT OFF\n");
    return Configuration(query1);
}

status_ getResistanceFilterState()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"RES:FILT?\n");
    return Query(query1);
}

status_ setResistanceDigitalFilterStateON()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"RES:FILT:DIG ON\n");
    return Configuration(query1);
}

status_ setResistanceDigitalFilterStateOFF()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"RES:FILT:DIG OFF\n");
    return Configuration(query1);
}

status_ getResistanceDigitalFilterState()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"RES:FILT:DIG?\n");
    return Query(query1);
}

//Configuracion de Numero de lineas por ciclo  de Resistencia
status_ setResistanceIntegrationTimeNPLCValue(float n_)
{
    if(n_==0.02 || n_==0.2 || n_==1 || n_==10 || n_==100)
    {
        char query1[20];
        snprintf(query1,sizeof(query1),"RES:NPLC %f\n",n_);
        return Configuration(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: sets integration time to a preset value of a power line cycle (0.02, 0.2, 1, 10, or 100)";
       return estado;    
    }
}

status_ setResistanceIntegrationTimeNPLC_MIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"RES:NPLC MIN\n");
    return Configuration(query1);
}

status_ setResistanceIntegrationTimeNPLC_MAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"RES:NPLC MAX\n");
    return Configuration(query1);
}

status_ getResistanceIntegrationTimeNPLC()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"RES:NPLC?\n");
    return Query(query1);
}

status_ setResistanceRangeValue(float value_)
{
    char query1[20];
    snprintf(query1,sizeof(query1),"RES:RANG %f\n",value_);
    return Configuration(query1);
}

status_ setResistanceRangeMIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"RES:RANG MIN\n");
    return Configuration(query1);
}

status_ setResistanceRangeMAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"RES:RANG MAX\n");
    return Configuration(query1);
}

//Se pueden consultar con MIN o MAX pero esta es la consulta general.
status_ getResistanceRangeSetting()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"RES:RANG?\n");
    return Query(query1);
}

status_ setResistanceResolutionMIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"RES:RES MIN\n");
    return Configuration(query1);
}

status_ setResistanceResolutionMAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"RES:RES MAX\n");
    return Configuration(query1);
}

//Se pueden consultar con MIN o MAX pero esta es la consulta general.
status_ getResistanceResolutionSetting()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"RES:RES?\n");
    return Query(query1);
}

//Configuracion de Filtro de FResistencia
status_ setFResistanceFilterStateON()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FRES:FILT ON\n");
    return Configuration(query1);
}

status_ setFResistanceFilterStateOFF()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FRES:FILT OFF\n");
    return Configuration(query1);
}

status_ getFResistanceFilterState()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FRES:FILT?\n");
    return Query(query1);
}

status_ setFResistanceDigitalFilterStateON()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FRES:FILT:DIG ON\n");
    return Configuration(query1);
}

status_ setFResistanceDigitalFilterStateOFF()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FRES:FILT:DIG OFF\n");
    return Configuration(query1);
}

status_ getFResistanceDigitalFilterState()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FRES:FILT:DIG?\n");
    return Query(query1);
}

//Configuracion de Numero de lineas por ciclo  de FResistencia
status_ setFResistanceIntegrationTimeNPLCValue(float n_)
{
    if(n_==0.02 || n_==0.2 || n_==1 || n_==10 || n_==100)
    {
        char query1[20];
        snprintf(query1,sizeof(query1),"FRES:NPLC %f\n",n_);
        return Configuration(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: sets integration time to a preset value of a power line cycle (0.02, 0.2, 1, 10, or 100)";
       return estado;    
    }
}

status_ setFResistanceIntegrationTimeNPLC_MIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FRES:NPLC MIN\n");
    return Configuration(query1);
}

status_ setFResistanceIntegrationTimeNPLC_MAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FRES:NPLC MAX\n");
    return Configuration(query1);
}

status_ getFResistanceIntegrationTimeNPLC()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FRES:NPLC?\n");
    return Query(query1);
}

status_ setFResistanceRangeValue(float value_)
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FRES:RANG %f\n",value_);
    return Configuration(query1);
}

status_ setFResistanceRangeMIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FRES:RANG MIN\n");
    return Configuration(query1);
}

status_ setFResistanceRangeMAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FRES:RANG MAX\n");
    return Configuration(query1);
}

//Se pueden consultar con MIN o MAX pero esta es la consulta general.
status_ getFResistanceRangeSetting()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FRES:RANG?\n");
    return Query(query1);
}

status_ setFResistanceResolutionMIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FRES:RES MIN\n");
    return Configuration(query1);
}

status_ setFResistanceResolutionMAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FRES:RES MAX\n");
    return Configuration(query1);
}

//Se pueden consultar con MIN o MAX pero esta es la consulta general.
status_ getFResistanceResolutionSetting()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FRES:RES?\n");
    return Query(query1);
}

//Configuracion de Apertura de tiempo de Frecuencia
status_ setFrequencyApertureTimeValue(float n_)
{
    if(n_==0.01|| n_==0.1 || n_==1)
    {
        char query1[20];
        snprintf(query1,sizeof(query1),"FREQ:APER %f\n",n_);
        return Configuration(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: sets value  (0.01, 0.1, or 1)";
       return estado;    
    }
}

status_ setFrequencyApertureTimeMIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FREQ:APER MIN\n");
    return Configuration(query1);
}

status_ setFrequencyApertureTimeMAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FREQ:APER MAX\n");
    return Configuration(query1);
}

//Configuración del rango de Voltage de Frequencia
status_ setFrequencyVoltageInputRangeValue(float n_)
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FREQ:VOLT:RANG %f\n",n_);
    return Configuration(query1);
}

status_ setFrequencyVoltageInputRangeMIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FREQ:VOLT:RANG MIN\n");
    return Configuration(query1);
}

status_ setFrequencyVoltageInputRangeMAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FREQ:VOLT:RANG MIN\n");
    return Configuration(query1);
}

status_ setFrequencyVoltageAutoRangeON()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"FREQ:VOLT:RANG:AUTO ON\n");
    return Configuration(query1);
}

status_ setFrequencyVoltageAutoRangeOFF()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"FREQ:VOLT:RANG:AUTO OFF\n");
    return Configuration(query1);
}

status_ getFrequencyVoltageAutoRangeSetting()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"FREQ:VOLT:RANG:AUTO?\n");
    return Query(query1);
}

//Se pueden consultar con MIN o MAX pero esta es la consulta general.
status_ getFrequencyVoltageRangeSetting()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FREQ:VOLT:RANG?\n");
    return Configuration(query1);
}


//Configuracion de Apertura de tiempo de Periodo
status_ setPeriodApertureTimeValue(float n_)
{
    if(n_==0.01|| n_==0.1 || n_==1)
    {
        char query1[20];
        snprintf(query1,sizeof(query1),"PER:APER %f\n",n_);
        return Configuration(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: sets value  (0.01, 0.1, or 1)";
       return estado;    
    }
}

status_ setPeriodApertureTimeMIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"PER:APER MIN\n");
    return Configuration(query1);
}

status_ setPeriodApertureTimeMAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"PER:APER MAX\n");
    return Configuration(query1);
}

//Configuración del rango de Voltage de Periodo
status_ setPeriodVoltageInputRangeValue(float n_)
{
    char query1[20];
    snprintf(query1,sizeof(query1),"PER:VOLT:RANG %f\n",n_);
    return Configuration(query1);
}

status_ setPeriodVoltageInputRangeMIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"PER:VOLT:RANG MIN\n");
    return Configuration(query1);
}

status_ setPeriodVoltageInputRangeMAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"PER:VOLT:RANG MIN\n");
    return Configuration(query1);
}

status_ setPeriodVoltageAutoRangeON()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"PER:VOLT:RANG:AUTO ON\n");
    return Configuration(query1);
}

status_ setPeriodVoltageAutoRangeOFF()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"PER:VOLT:RANG:AUTO OFF\n");
    return Configuration(query1);
}

status_ getPeriodVoltageAutoRangeSetting()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"PER:VOLT:RANG:AUTO?\n");
    return Query(query1);
}

//Se pueden consultar con MIN o MAX pero esta es la consulta general.
status_ getPeriodVoltageRangeSetting()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"PER:VOLT:RANG?\n");
    return Configuration(query1);
}


//Configurando el rango para medir la Capacitancia de la siguiente manera 1e-4 en formato cadena
status_ setCapacitanceRangeValue(char* value_)
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CAP:RANG %s\n",value_);
    return Configuration(query1);
}

status_ setCapacitanceRangeMIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CAP:RANG MIN\n");
    return Configuration(query1);
}

status_ setCapacitanceRangeMAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CAP:RANG MAX\n");
    return Configuration(query1);
}

//Se pueden consultar con MIN o MAX pero esta es la consulta general.
status_ getCapacitanceRangeSetting()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CAP:RANG?\n");
    return Query(query1);
}

status_ setCapacitanceResolutionMIN()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CAP:RES MIN\n");
    return Configuration(query1);
}

status_ setCapacitanceResolutionMAX()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CAP:RES MAX\n");
    return Configuration(query1);
}

//Se pueden consultar con MIN o MAX pero esta es la consulta general.
status_ getCapacitanceResolutionSetting()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"CAP:RES?\n");
    return Query(query1);
}

//Configuracion de la variable alpha en Temperatura
status_ setTemperatureRTDAlphaParameter(float n_)
{
    if(n_>=.00374 && n_<=.00393)
    {
        char query1[20];
        snprintf(query1,sizeof(query1),"TEMP:RTD:ALPH %f\n",n_);
        return Configuration(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: sets value  .00374 to .00393 Sets the alpha parameter.)";
       return estado;    
    }
}

status_ getTemperatureRTDAlphaParameter()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"TEMP:RTD:ALPH?\n");
    return Query(query1);
}

status_ setTemperatureRTDIntegrationTimeNPLCValue(float n_)
{
    if(n_==0.02 || n_==0.2 || n_==1 || n_==10 || n_==100)
    {
        char query1[20];
        snprintf(query1,sizeof(query1),"TEMP:RTD:NPLC %f\n",n_);
        return Configuration(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: sets integration time to a preset value of a power line cycle (0.02, 0.2, 1, 10, or 100)";
       return estado;    
    }
}

status_ setTemperatureRTDIntegrationTimeNPLC_MIN()
{
    char query1[30];
        snprintf(query1,sizeof(query1),"TEMP:RTD:NPLC MIN\n");
        return Configuration(query1);
}

status_ setTemperatureRTDIntegrationTimeNPLC_MAX()
{
    char query1[30];
        snprintf(query1,sizeof(query1),"TEMP:RTD:NPLC MAX\n");
        return Configuration(query1);
}

status_ getTemperatureRTDIntegrationTimeNPLC()
{
    char query1[20];
        snprintf(query1,sizeof(query1),"TEMP:RTD:NPLC?\n");
        return Query(query1);
}

status_ setTemperatureRTDZeroDegreesC(int r0_)
{
    char query1[30];
    snprintf(query1,sizeof(query1),"TEMP:RTD:R0 %d\n",r0_);
    return Configuration(query1);
}

status_ getTemperatureRTDZeroDegreesC()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"TEMP:RTD:R0?\n");
    return Query(query1);
}


status_ setTemperatureRTDTypePT100_385()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"TEMP:RTD:TYP PT100_385\n");
    return Configuration(query1);
}

status_ setTemperatureRTDTypePT100_392()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"TEMP:RTD:TYP PT100_392\n");
    return Configuration(query1);
}

status_ setTemperatureRTDTypeCUST1()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"TEMP:RTD:TYP CUST1\n");
    return Configuration(query1);
}

status_ getTemperatureRTDType()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"TEMP:RTD:TYP?\n");
    return Query(query1);
}


//Configuracion de la variable alpha en Temperatura FRTD
status_ setTemperatureFRTDAlphaParameter(float n_)
{
    if(n_>=.00374 && n_<=.00393)
    {
        char query1[20];
        snprintf(query1,sizeof(query1),"TEMP:FRTD:ALPH %f\n",n_);
        return Configuration(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: sets value  .00374 to .00393 Sets the alpha parameter.)";
       return estado;    
    }
}

status_ getTemperatureFRTDAlphaParameter()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"TEMP:FRTD:ALPH?\n");
    return Query(query1);
}

status_ setTemperatureFRTDIntegrationTimeNPLCValue(float n_)
{
    if(n_==0.02 || n_==0.2 || n_==1 || n_==10 || n_==100)
    {
        char query1[20];
        snprintf(query1,sizeof(query1),"TEMP:FRTD:NPLC %f\n",n_);
        return Configuration(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: sets integration time to a preset value of a power line cycle (0.02, 0.2, 1, 10, or 100)";
       return estado;    
    }
}

status_ setTemperatureFRTDIntegrationTimeNPLC_MIN()
{
    char query1[30];
        snprintf(query1,sizeof(query1),"TEMP:FRTD:NPLC MIN\n");
        return Configuration(query1);
}

status_ setTemperatureFRTDIntegrationTimeNPLC_MAX()
{
    char query1[30];
        snprintf(query1,sizeof(query1),"TEMP:FRTD:NPLC MAX\n");
        return Configuration(query1);
}

status_ getTemperatureFRTDIntegrationTimeNPLC()
{
    char query1[20];
        snprintf(query1,sizeof(query1),"TEMP:FRTD:NPLC?\n");
        return Query(query1);
}

status_ setTemperatureFRTDZeroDegreesC(int r0_)
{
    char query1[30];
    snprintf(query1,sizeof(query1),"TEMP:FRTD:R0 %d\n",r0_);
    return Configuration(query1);
}

status_ getTemperatureFRTDZeroDegreesC()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"TEMP:FRTD:R0?\n");
    return Query(query1);
}


status_ setTemperatureFRTDTypePT100_385()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"TEMP:FRTD:TYP PT100_385\n");
    return Configuration(query1);
}

status_ setTemperatureFRTDTypePT100_392()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"TEMP:FRTD:TYP PT100_392\n");
    return Configuration(query1);
}

status_ setTemperatureFRTDTypeCUST1()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"TEMP:FRTD:TYP CUST1\n");
    return Configuration(query1);
}

status_ getTemperatureFRTDType()
{
    char query1[30];
    snprintf(query1,sizeof(query1),"TEMP:FRTD:TYP?\n");
    return Query(query1);
}

status_ setFilterAnalogStateON()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FILT ON\n");
    return Configuration(query1);
}

status_ setFilterAnalogStateOFF()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FILT OFF\n");
    return Configuration(query1);
}

status_ getFilterAnalogState()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FILT?\n");
    return Query(query1);
}

status_ setFilterDigitalStateON()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FILT:DIG ON\n");
    return Configuration(query1);
}

status_ setFilterDigitalStateOFF()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FILT:DIG OFF\n");
    return Configuration(query1);
}

status_ getFilterDigitalState()
{
    char query1[20];
    snprintf(query1,sizeof(query1),"FILT:DIG?\n");
    return Query(query1);
}


status_ setFilterFrequencyValue(int n_)
{
    if(n_==3 || n_==20 ||n_==200)
    {
        char query1[20];
        snprintf(query1,sizeof(query1),"DET:BAND %d\n",n_);
        return Configuration(query1);
    }
    else
    {
        status_ estado;
        estado.code=ERROR_PARAMETERS_OUT_OF_RANGE;
        estado.description="ERROR_PARAMETERS_OUT_OF_RANGE: Value 3|20|200";
       return estado; 
    }
}

status_ setFilterFrequencyMIN()
{
    char query1[20];
        snprintf(query1,sizeof(query1),"DET:BAND MIN\n");
        return Configuration(query1);
}

status_ setFilterFrequencyMAX()
{
    char query1[20];
        snprintf(query1,sizeof(query1),"DET:BAND MAX\n");
        return Configuration(query1);
}

status_ getFilterFrequencySetting()
{
    char query1[20];
        snprintf(query1,sizeof(query1),"DET:BAND?\n");
        return Query(query1);
}

status_ setAutozeroModeON()
{
    char query1[20];
        snprintf(query1,sizeof(query1),"ZERO:AUTO ON\n");
        return Configuration(query1);
}

status_ setAutozeroModeOFF()
{
    char query1[20];
        snprintf(query1,sizeof(query1),"ZERO:AUTO OFF\n");
        return Configuration(query1);
}

status_ setAutozeroModeONCE()
{
    char query1[20];
        snprintf(query1,sizeof(query1),"ZERO:AUTO ONCE\n");
        return Configuration(query1);
}

status_ getAutozeroMode()
{
    char query1[20];
        snprintf(query1,sizeof(query1),"ZERO:AUTO?\n");
        return Query(query1);
}

status_ setImpedanceAutoInputON()
{
    char query1[20];
        snprintf(query1,sizeof(query1),"INP:IMP:AUTO ON\n");
        return Configuration(query1);
}

status_ setImpedanceAutoInputOFF()
{
    char query1[20];
        snprintf(query1,sizeof(query1),"INP:IMP:AUTO OFF\n");
        return Configuration(query1);
}

status_ getImpedanceAutoInputMode()
{
    char query1[20];
        snprintf(query1,sizeof(query1),"INP:IMP:AUTO?\n");
        return Query(query1);
}

status_ getInputTerminalSelection()
{
    char query1[20];
        snprintf(query1,sizeof(query1),"ROUT:TERM?\n");
        return Query(query1);
}