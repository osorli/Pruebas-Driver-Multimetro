/* 
 * File:   Configure.h
 * Author: lil0
 *
 * Created on July 24, 2012, 5:20 PM
 */

#ifndef CONFIGURE_H
#define	CONFIGURE_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "Conexion.h"
       
status_ setVoltageDC_range_resolution(float range_, float resolution_);
status_ setVoltageDC_range(float range_);
status_ setVoltageDC();

status_ setVoltageAC_range_resolution(float range_, float resolution_);
status_ setVoltageAC_range(float range_);
status_ setVoltageAC();

status_ setCurrentDC_range_resolution(float range_, float resolution_);
status_ setCurrentDC_range(float range_);
status_ setCurrentDC();

status_ setResistance_range_resolution(float range_, float resolution_);
status_ setResistance_range(float range_);
status_ setResistance();

status_ setFresistance_range_resolution(float range_, float resolution_);
status_ setFresistance_range(float range_);
status_ setFresistance();

status_ setFrequency_range_resolution(float range_, float resolution_);
status_ setFrequency_range(float range_);
status_ setFrequency();

status_ setPeriod_range_resolution(float range_, float resolution_);
status_ setPeriod_range(float range_);
status_ setPeriod();

status_ setCapacitance_range_resolution(float range_, float resolution_);
status_ setCapacitance_range(float range_);
status_ setCapacitance();

status_ setTemperature4wire_type(char* type_);
status_ setTemperature4wire();

status_ setTemperature2wire_type(char* type_);
status_ setTemperature2wire();

status_ setContinuity();

status_ setDiode_Voltage_Current(float Voltage_,float Current_);
status_ setDiode_Voltage(float Voltage_);
status_ setDiode();

status_ getConfig();


#ifdef	__cplusplus
}
#endif

#endif	/* CONFIGURE_H */

