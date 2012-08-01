/* 
 * File:   MathFunctions.h
 * Author: lil0
 *
 * Created on July 27, 2012, 12:17 PM
 */

#ifndef MATHFUNCTIONS_H
#define	MATHFUNCTIONS_H

#ifdef	__cplusplus
extern "C" {
#endif
#include "Conexion.h"

status_ getMinimunAverageValue();
status_ getMaximumAverageValue();
status_ getAverageValue();
status_ getCountAverageValue();
status_ setOffsetValueForZeroFunction(int value_);
status_ setOffsetValueForZeroFunction_MIN();
status_ setOffsetValueForZeroFunction_MAX();
status_ getOffsetRegisterValueForZeroFunction();
status_ setStoreRelativeValueRegister(int value_);
status_ getStoreRelativeValueRegister();
status_ getStoreRelativeValueRegister_MIN();
status_ getStoreRelativeValueRegister_MAX();
status_ setLowerLimitForLimitTesting(int value_);
status_ setLowerLimitForLimitTesting_MIN();
status_ setLowerLimitForLimitTesting_MAX();
status_ getLowerLimitRegisterValue();
status_ getLowerLimitRegisterValue_MIN();
status_ getLowerLimitRegisterValue_MAX();
status_ setUpperLimitForLimitTesting(int value_);
status_ setUpperLimitForLimitTesting_MIN();
status_ setUpperLimitForLimitTesting_MAX();
status_ getUpperLimitRegisterValue();
status_ getUpperLimitRegisterValue_MIN();
status_ getUpperLimitRegisterValue_MAX();
status_ setEnableStoringMeasurementsCalculate();
status_ setDisableStoringMeasurementsCalculate();
status_ getStateReadingStoreSetting();
status_ setMxPlusBCalculationStateON();
status_ setMxPlusBCalculationStateOFF();
status_ getMxPlusBCalculationState();
status_ setMFactorValueForMxPlusBCalculation(int m_);
status_ getMFactorValueForMxPlusBCalculation();
status_ setBFactorValueForMxPlusBCalculation(int b_);
status_ getBFactorValueForMxPlusBCalculation();
status_ setUnitsNameForMxPlusBCalculation(char* name_);
status_ getUnitsNameForMxPlusBCalculation();
status_ setMathFunctionDBMmode();
status_ setMathFunctionDBmode();
status_ setMathFunctionAVERAGEmode();
status_ setMathFunctionLIMITmode();
status_ getMathFunctionMode();
status_ setMathFunctionStateON();
status_ setMathFunctionStateOFF();
status_ getMathFunctionStatus();


#ifdef	__cplusplus
}
#endif

#endif	/* MATHFUNCTIONS_H */

