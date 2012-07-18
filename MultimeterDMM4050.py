from Conexion import*
from Calibration import*
from Configure import*
import time

class multimeter():

	def __init__(self):
		self.sc = conexion("192.168.10.103",3490)
		self.sc.conectar()
		self.sc.enviar_comando("SYST:REM\n")
		print "hola! multimeter\n "
		time.sleep(1.0)
		
	def Conectar(self, ip_,port_):
		self.sc = conexion(ip_,port_)
		self.sc.conectar()
		self.sc.enviar_comando("SYST:REM\n")
		
		
	def Settings(self):
		time.sleep(1.0)
		self.conf= configure(self)
		self.conf.setVoltageDC(0.1)
		#self.Cal = calibration(self)
		#print self.Cal.getDate()
		#self.Cal.String_("")
		#self.sc.enviar_comando("SYST:REM\n")
	
	def Status(self):
		self.sc.enviar_comando("*IDN?\n")
		self.res = self.sc.obtener_respuesta()
		print "Se recibio : %s" % (self.res)
		time.sleep(0.5)
		
	def Measure(self):
		#time.sleep(0.5)
		self.res = self.sc.enviar_comando("MEAS:RES?\n")
		print "Se recibio : %f" % (self.res)
		time.sleep(0.5)
		 
	def Desconectar(self):
		self.sc.enviar_comando("SYST:LOC\n")
		time.sleep(0.5)
		self.sc.desconectar()
		
	def getMeasure(self):
		self.sc.enviar_comando("MEAS:RES?\n")
		#time.sleep(0.5)
		return self.sc.obtener_respuesta()

	def ProbarExcepcion(self):
		self.sc.enviar_comando("CONF:FREQ 0,0.001\n")
		self.sc.enviar_comando("*ESR?\n")
		#if(self.sc.obtener_respuesta()!=0):
		#	raise 
			
	def Hola(self):
		print "Hola mundo"
