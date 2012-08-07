/* 
 * File:   RS232Interface.h
 * Author: lil0
 *
 * Created on August 7, 2012, 11:36 AM
 */

#ifndef RS232INTERFACE_H
#define	RS232INTERFACE_H

#ifdef	__cplusplus
extern "C" {
#endif
#include "Conexion.h"

status_ setMeterToLocalMode();
status_ setMeterToRemoteMode();
status_ setMeterToRWLockMode();

#ifdef	__cplusplus
}
#endif

#endif	/* RS232INTERFACE_H */

