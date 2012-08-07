/* 
 * File:   MeasureConfiguration.h
 * Author: lil0
 *
 * Created on August 2, 2012, 3:32 PM
 */

#ifndef MEASURECONFIGURATION_H
#define	MEASURECONFIGURATION_H

#ifdef	__cplusplus
extern "C" {
#endif
#include "Conexion.h"
    
status_ setFunctionCapacitance();
status_ setFunctionContinuity();
status_ setFunctionCurrentAC();
status_ setFunctionCurrentDC();
status_ setFunctionDiode();
status_ setFunctionFResistance();
status_ setFunctionFrequency();
status_ setFunctionPeriod();
status_ setFunctionResistance();
status_ setFunctionTemperature4wire();
status_ setFunctionTemperature2wire();
status_ setFunctionVoltageDC();
status_ setFunctionVoltageAC();
status_ setFunctionVoltageDCRatio();
status_ getFunctionPresentMeasurement();

status_ setVoltageACFilterFrequencyValue(int n_);
status_ setVoltageACFilterFrequencyMIN();
status_ setVoltageACFilterFrequencyMAX();
status_ getVoltageACFilterFrequencySetting();
status_ setVoltageACRangeValue(float range_);
status_ setVoltageACRangeMIN();
status_ setVoltageACRangeMAX();
status_ setVoltageACAutoRangeON();
status_ setVoltageACAutoRangeOFF();
status_ getVoltageACAutoRangeState();
status_ getVoltageACRangeSetting();
status_ setVoltageACResolutionMIN();
status_ setVoltageACResolutionMAX();
status_ getVoltageACResolutionState();
status_ setVoltageDCFilterFrequencyValue(int n_);
status_ setVoltageDCFilterFrequencyMIN();
status_ setVoltageDCFilterFrequencyMAX();
status_ getVoltageDCFilterFrequencySetting();
status_ setVoltageDCRangeValue(float range_);
status_ setVoltageDCRangeMIN();
status_ setVoltageDCRangeMAX();
status_ setVoltageDCAutoRangeON();
status_ setVoltageDCAutoRangeOFF();
status_ getVoltageDCAutoRangeState();
status_ getVoltageDCRangeSetting();
status_ setVoltageDCResolutionMIN();
status_ setVoltageDCResolutionMAX();
status_ getVoltageDCResolutionState();
status_ setVoltageFilterStateON();
status_ setVoltageFilterStateOFF();
status_ getVoltageFilterState();
status_ setVoltageDigitalFilterStateON();
status_ setVoltageDigitalFilterStateOFF();
status_ getVoltageDigitalFilterState();
status_ setVoltageAutoImpedanceModeON();
status_ setVoltageAutoImpedanceModeOFF();
status_ getVoltageAutoImpedanceMode();
status_ setVoltageIntegrationTimeNPLCValue(float n_);
status_ setVoltageIntegrationTimeNPLC_MIN();
status_ setVoltageIntegrationTimeNPLC_MAX();
status_ getVoltageIntegrationTimeNPLC();

status_ setCurrentACFilterFrequencyValue(int n_);
status_ setCurrentACFilterFrequencyMIN();
status_ setCurrentACFilterFrequencyMAX();
status_ getCurrentACFilterFrequencySetting();
status_ setCurrentACRangeValue(float range_);
status_ setCurrentACRangeMIN();
status_ setCurrentACRangeMAX();
status_ setCurrentACAutoRangeON();
status_ setCurrentACAutoRangeOFF();
status_ getCurrentACAutoRangeState();
status_ getCurrentACRangeSetting();
status_ setCurrentACResolutionMIN();
status_ setCurrentACResolutionMAX();
status_ getCurrentACResolutionState();
status_ setCurrentFilterStateON();
status_ setCurrentFilterStateOFF();
status_ getCurrentFilterState();
status_ setCurrentDigitalFilterStateON();
status_ setCurrentDigitalFilterStateOFF();
status_ getCurrentDigitalFilterState();
status_ setCurrentIntegrationTimeNPLCValue(float n_);
status_ setCurrentIntegrationTimeNPLC_MIN();
status_ setCurrentIntegrationTimeNPLC_MAX();
status_ getCurrentIntegrationTimeNPLC();
status_ setCurrentRangeValue(float value_);
status_ setCurrentRangeMIN();
status_ setCurrentRangeMAX();
status_ getCurrentRangeSetting();
status_ setCurrentResolutionMIN();
status_ setCurrentResolutionMAX();
status_ getCurrentResolutionSetting();

status_ setResistanceFilterStateON();
status_ setResistanceFilterStateOFF();
status_ getResistanceFilterState();
status_ setResistanceDigitalFilterStateON();
status_ setResistanceDigitalFilterStateOFF();
status_ getResistanceDigitalFilterState();
status_ setResistanceIntegrationTimeNPLCValue(float n_);
status_ setResistanceIntegrationTimeNPLC_MIN();
status_ setResistanceIntegrationTimeNPLC_MAX();
status_ getResistanceIntegrationTimeNPLC();
status_ setResistanceRangeValue(float value_);
status_ setResistanceRangeMIN();
status_ setResistanceRangeMAX();
status_ getResistanceRangeSetting();
status_ setResistanceResolutionMIN();
status_ setResistanceResolutionMAX();
status_ getResistanceResolutionSetting();

status_ setFResistanceFilterStateON();
status_ setFResistanceFilterStateOFF();
status_ getFResistanceFilterState();
status_ setFResistanceDigitalFilterStateON();
status_ setFResistanceDigitalFilterStateOFF();
status_ getFResistanceDigitalFilterState();
status_ setFResistanceIntegrationTimeNPLCValue(float n_);
status_ setFResistanceIntegrationTimeNPLC_MIN();
status_ setFResistanceIntegrationTimeNPLC_MAX();
status_ getFResistanceIntegrationTimeNPLC();
status_ setFResistanceRangeValue(float value_);
status_ setFResistanceRangeMIN();
status_ setFResistanceRangeMAX();
status_ getFResistanceRangeSetting();
status_ setFResistanceResolutionMIN();
status_ setFResistanceResolutionMAX();
status_ getFResistanceResolutionSetting();

status_ setFrequencyApertureTimeValue(float n_);
status_ setFrequencyApertureTimeMIN();
status_ setFrequencyApertureTimeMAX();
status_ setFrequencyVoltageInputRangeValue(float n_);
status_ setFrequencyVoltageInputRangeMIN();
status_ setFrequencyVoltageInputRangeMAX();
status_ setFrequencyVoltageAutoRangeON();
status_ setFrequencyVoltageAutoRangeOFF();
status_ getFrequencyVoltageAutoRangeSetting();
status_ getFrequencyVoltageRangeSetting();

status_ setPeriodApertureTimeValue(float n_);
status_ setPeriodApertureTimeMIN();
status_ setPeriodApertureTimeMAX();
status_ setPeriodVoltageInputRangeValue(float n_);
status_ setPeriodVoltageInputRangeMIN();
status_ setPeriodVoltageInputRangeMAX();
status_ setPeriodVoltageAutoRangeON();
status_ setPeriodVoltageAutoRangeOFF();
status_ getPeriodVoltageAutoRangeSetting();
status_ getPeriodVoltageRangeSetting();

status_ setCapacitanceRangeValue(char* value_);
status_ setCapacitanceRangeMIN();
status_ setCapacitanceRangeMAX();
status_ getCapacitanceRangeSetting();
status_ setCapacitanceResolutionMIN();
status_ setCapacitanceResolutionMAX();
status_ getCapacitanceResolutionSetting();

status_ setTemperatureRTDAlphaParameter(float n_);
status_ getTemperatureRTDAlphaParameter();
status_ setTemperatureRTDIntegrationTimeNPLCValue(float n_);
status_ setTemperatureRTDIntegrationTimeNPLC_MIN();
status_ setTemperatureRTDIntegrationTimeNPLC_MAX();
status_ getTemperatureRTDIntegrationTimeNPLC();
status_ setTemperatureRTDZeroDegreesC(int r0_);
status_ getTemperatureRTDZeroDegreesC();
status_ setTemperatureRTDTypePT100_385();
status_ setTemperatureRTDTypePT100_392();
status_ setTemperatureRTDTypeCUST1();
status_ getTemperatureRTDType();
status_ setTemperatureFRTDAlphaParameter(float n_);
status_ getTemperatureFRTDAlphaParameter();
status_ setTemperatureFRTDIntegrationTimeNPLCValue(float n_);
status_ setTemperatureFRTDIntegrationTimeNPLC_MIN();
status_ setTemperatureFRTDIntegrationTimeNPLC_MAX();
status_ getTemperatureFRTDIntegrationTimeNPLC();
status_ setTemperatureFRTDZeroDegreesC(int r0_);
status_ getTemperatureFRTDZeroDegreesC();
status_ setTemperatureFRTDTypePT100_385();
status_ setTemperatureFRTDTypePT100_392();
status_ setTemperatureFRTDTypeCUST1();
status_ getTemperatureFRTDType();

status_ setFilterAnalogStateON();
status_ setFilterAnalogStateOFF();
status_ getFilterAnalogState();
status_ setFilterDigitalStateON();
status_ setFilterDigitalStateOFF();
status_ getFilterDigitalState();

status_ setFilterFrequencyValue(int n_);
status_ setFilterFrequencyMIN();
status_ setFilterFrequencyMAX();
status_ getFilterFrequencySetting();

status_ setAutozeroModeON();
status_ setAutozeroModeOFF();
status_ setAutozeroModeONCE();
status_ getAutozeroMode();

status_ setImpedanceAutoInputON();
status_ setImpedanceAutoInputOFF();
status_ getImpedanceAutoInputMode();

status_ getInputTerminalSelection();
#ifdef	__cplusplus
}
#endif

#endif	/* MEASURECONFIGURATION_H */

