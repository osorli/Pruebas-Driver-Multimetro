/* 
 * File:   SystemRelated.h
 * Author: lil0
 *
 * Created on August 7, 2012, 12:53 PM
 */

#ifndef SYSTEMRELATED_H
#define	SYSTEMRELATED_H

#ifdef	__cplusplus
extern "C" {
#endif
#include "Conexion.h"

status_ getMeasurementsFromPrimaryDisplay();
status_ getLastMeasurementsFromPrimaryDisplay();
status_ setSystemWaitForTriggerState();
status_ setDisplayMeterON();
status_ setDisplayMeterOFF();
status_ getDisplayMeterState();
status_ setMessageDisplayMeter(char* msg);
status_ getMessageDisplayMeter();
status_ setClearMessageDisplayMeter();
status_ setIssueSingleBeep();
status_ setBeeperStateON();
status_ getBeeperState();
status_ setMeterSystemDate(char* date_);
status_ getMeterSystemDate();
status_ getMetersErrorQueue();
status_ setMetersErrorBeeperStateON();
status_ setMetersErrorBeeperStateOFF();
status_ getMetersErrorBeeperState();
status_ setMeterSystemTime(char* time_);
status_ getMeterSystemTime();
status_ getMeterSCPIVersion();
status_ getNumberOfStoredReadings();
status_ setResetMeter();
status_ setUserDefinedStringON(char* string_);
status_ setUserDefinedStringOFF();
status_ getMeterIdentificationString();
status_ setCommandLanguageDMM4050();
status_ setCommandLanguageFluke45();
status_ setCommandLanguageFluke8842A();

#ifdef	__cplusplus
}
#endif

#endif	/* SYSTEMRELATED_H */

