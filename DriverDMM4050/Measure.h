/* 
 * File:   Measure.h
 * Author: lil0
 *
 * Created on August 1, 2012, 12:11 PM
 */

#ifndef MEASURE_H
#define	MEASURE_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#include "Conexion.h"
    
#define MIN 1
#define MAX 2
#define DEF 3 

status_ getMeasurementCapacitanceCurrentRange();
status_ getMeasurementCapacitanceValueRange_Resolution(int range_,int resolution_);

status_ getMeasurementContinuity();

status_ getMeasurementCurrentDCCurrentRange();
status_ getMeasurementCurrentDCValueRange(float range_);
status_ getMeasurementCurrentDCValueRange_Resolution(int range_,int resolution_);

status_ getMeasurementCurrentACCurrentRange();
status_ getMeasurementCurrentACValueRange(float range_);
status_ getMeasurementCurrentACValueRange_Resolution(int range_,int resolution_);


status_ getMeasurementDiodeCurrentRange();

status_ getMeasurementFrequency();

status_ getMeasurementFResistanceCurrentRange();
status_ getMeasurementFResistanceValueRange_(float range_);
status_ getMeasurementFResistanceValueRange_Resolution(int range_,int resolution_);

status_ getMeasurementPeriodCurrentRange();
status_ getMeasurementPeriodValueRange(float range_);
status_ getMeasurementPeriodValueRange_Resolution(int range_,int resolution_);

status_ getMeasurementResistanceCurrentRange();
status_ getMeasurementResistanceValueRange_(float range_);
status_ getMeasurementResistanceValueRange_Resolution(int range_,int resolution_);

status_ getMeasurementTemperature4wire();
status_ getMeasurementTemperature2wire();

status_ getMeasurementVoltageACCurrentRange();
status_ getMeasurementVoltageACValueRange_(float range_);
status_ getMeasurementVoltageACValueRange_Resolution(int range_,int resolution_);

status_ getMeasurementVoltageDCCurrentRange();
status_ getMeasurementVoltageDCValueRange_(float range_);
status_ getMeasurementVoltageDCValueRange_Resolution(int range_,int resolution_);

#ifdef	__cplusplus
}
#endif

#endif	/* MEASURE_H */

