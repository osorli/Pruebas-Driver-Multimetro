/* 
 * File:   IEEE488Interface.h
 * Author: lil0
 *
 * Created on July 26, 2012, 1:22 PM
 */

#ifndef IEEE488INTERFACE_H
#define	IEEE488INTERFACE_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "Conexion.h"
    
status_ setClearStatus();
status_ getStandardEventEnableRegister();
status_ getStandardEventRegister_Error();
status_ getMeterIdentificationString();
status_ getOperationCompleteStatus();
status_ setOperationCompleteBit();
status_ setPowerOnStatusClear(int bit_);
status_ getPowerOnStatusClearSetting();
status_ setResetMeter();
status_ setBitsStatusByteRegister(int bit_);
status_ getBitsStatusByteRegister();
status_ getStatusByteSummaryRegister();
status_ getSelfTestStatus();

#ifdef	__cplusplus
}
#endif

#endif	/* IEEE488INTERFACE_H */

