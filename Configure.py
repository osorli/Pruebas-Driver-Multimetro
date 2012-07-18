class configure:


	def __init__(self, ref):
		self.this=ref
	
	#checar parametros de resolution
	def setVoltageDC(self, range_=0, resolution_=0.001):
		if(range_>1):
			self.this.sc.enviar_comando("CONF:VOLT:DC "+str(range_)+","+str(resolution_)+"\n")
		else:
			self.this.sc.enviar_comando("CONF:VOLT:DC "+str(range_)+ "\n")	
	
	
	def setVoltageAC(self, range_=0 , resolution_=0.001):
		if(range_>1):
			self.this.sc.enviar_comando("CONF:VOLT:AC "+str(range_)+","+str(resolution_)+"\n")
		else:
			self.this.sc.enviar_comando("CONF:VOLT:AC"+str(range_)+ "\n")
	
		
	def setCurrentDC(self, range_=0 , resolution_=0.001):
		if(range_>1):
			self.this.sc.enviar_comando("CONF:CURR:DC"+str(range_)+ ","+str(resolution_)+"\n")
		else:
			self.this.sc.enviar_comando("CONF:CURR:DC"+str(range_)+ "\n")
		
	def setCurrentAC(self, range_=0, resolution_=0.001):
		if(range_>1):
			self.this.sc.enviar_comando("CONF:CURR:AC"+str(range_)+ ","+str(resolution_)+"\n")
		else:
			self.this.sc.enviar_comando("CONF:CURR:AC"+str(range_)+ "\n")
	
	def setResistance(self, range_=0, resolution_=0.001):
		self.this.sc.enviar_comando("CONF:RES "+str(range_)+","+str(resolution_)+ "\n")
		
	def setFresistance(self, range_=0):
		self.this.sc.enviar_comando("CONF:FRES "+str(range_)+","+str(resolution_)+ "\n")
	
	def setFrequency(self, range_=0):
		self.this.sc.enviar_comando("CONF:FREQ "+str(range_)+ "\n")
		
	def setPeriod(self, range_=0):
		self.this.sc.enviar_comando("CONF:PER "+str(range_)+ "\n")
		
	def setCapacitance(self, range_=0):
		self.this.sc.enviar_comando("CONF:CAP "+str(range_)+ "\n")
		
		
		
	def setTemperature4wire(self, type_=0):
		self.this.sc.enviar_comando("CONF:TEMP:FRTD "+str(type_)+ "\n")
		
	def setTemperature2wire(self, type_=0):
		self.this.sc.enviar_comando("CONF:TEMP:RTD "+str(type_)+ "\n")
		
	def setContinuity(self):
		self.this.sc.enviar_comando("CONF:CONT\n")
		
	def setDiode(self, low_=0 , high_=0):
		self.this.sc.enviar_comando("CONF:DIOD "+str(low_)+ "\n")
		
	def getConfig(self):
		self.this.sc.enviar_comando("CAL?\n")
		return self.this.sc.obtener_respuesta()
