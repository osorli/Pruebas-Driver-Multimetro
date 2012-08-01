#include <stdio.h>
#include <stdlib.h>
#include "Conexion.h"
#include "Configure.h"
#include "Calibration.h"
#include "MathFunctions.h"

int main(int argc, char** argv) {

    int status= ConnectionOpen("192.168.10.103","3490");
    if(status==ERROR_CONNECTING)
        printf("hubo un error abriendo socket");
    else
    {
      InitRemote();
      printf("Fecha de Calibracion: %s\n", getCalibrationDate().description); 
      sendText();
      printf("Resistencia actual: %s\n", getMeasureCurrentResistence().description);
      printf("Promedio de mediciones: %s\n", getAverageValue().description);
      
      /*
      setMathFunctionStateON();
      setMathFunctionAVERAGEmode();
      if((setVoltageAC_range_resolution(2,0.001).code)==SUCCESSFUL)
        printf("Ejemplo de un error: %s\n",setVoltageAC_range_resolution(1,0.001).description);
      */
                
      sleep(2);
      StopRemote();

      ConnectionClose();
    }
   return (EXIT_SUCCESS);
}
/*
 * No se aceptan comandos simultaneos se deben de mandar uno por uno siguiendo las 4 reglas
 * de ejecucion de comandos.
 * 
 * syst:rem
MEAS:RES?
CALC:STAT ON
CALC:FUNC AVER
CALC:AVER:MIN?
CAL:DATE?
 
 */
