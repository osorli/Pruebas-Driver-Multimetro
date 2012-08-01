/* 
 * File:   Calibration.h
 * Author: lil0
 *
 * Created on July 24, 2012, 4:34 PM
 */

#ifndef CALIBRATION_H
#define	CALIBRATION_H

#ifdef	__cplusplus
extern "C" {
#endif    
#include "Conexion.h"
    
    
status_ RecordCalibration();
status_ setCalibrationSecureCode(char* code_);
status_ setCalibrationSecureStateON(char* code_);
status_ setCalibrationSecureStateOFF(char* code_);
status_ setCalibrationString(char* string_);
status_ getCalibrationString();
status_ setCalibrationDate(char* date_);
status_ getCalibrationDate();
status_ setCalibrationValue(char* mode_,char* value_);
status_ getCalibrationValue();
status_ setCalibrationStep(int step_);
status_ getCalibrationStep();
status_ getCalibrationCount();

#ifdef	__cplusplus
}
#endif

#endif	/* CALIBRATION_H */

