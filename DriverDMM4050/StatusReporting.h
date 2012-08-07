/* 
 * File:   StatusReporting.h
 * Author: lil0
 *
 * Created on August 7, 2012, 11:43 AM
 */

#ifndef STATUSREPORTING_H
#define	STATUSREPORTING_H

#ifdef	__cplusplus
extern "C" {
#endif
#include "Conexion.h"

status_ setClearStatusByte();
status_ setEnableBitsStandardEventRegister(int bit_);
status_ getStandardEventEnableRegister();
status_ getStandardEventRegister();
status_ setOperationCompleteBitStandardEventRegister();
status_ getOneMetersOutputBuffer();
status_ setPowerONStatusClear();
status_ setPowerOFFStatusClear();
status_ getStatusClearState();
status_ setEnableBitsStatusByteRegister(int bit_);
status_ getBitsStatusByteRegister();
status_ getStatusByteSummaryRegister();
status_ setClearQuestionableDataEnableRegister();
status_ setEnableBitsQuestionableDataEnableRegister(int bit_);
status_ getQuestionableDataRegister();
status_ getQuestionableDataEnableRegister();



#ifdef	__cplusplus
}
#endif

#endif	/* STATUSREPORTING_H */

