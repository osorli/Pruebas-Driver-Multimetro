from MultimeterDMM4050 import*
import time

if __name__ == "__main__":
	Multimeter = multimeter()
	#Multimeter.Conectar("192.168.10.103",3490)
	Multimeter.Settings()
	#time.sleep(1.0)
	#Multimeter.Status()
	#Multimeter.Measure()
	print "Medicion de Resistencia: %s " % Multimeter.getMeasure()
	time.sleep(1.0)
	Multimeter.Desconectar()
