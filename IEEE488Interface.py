class IEEE488:

	def __init__(self, ref):
		self.this=ref
	
	def setClearStatus(self):
		self.this.sc.enviar_comando("*CLS\n")
		
	def setBitsStandarEventRegister(self, value_):
		self.this.sc.enviar_comando("*CLS "+ str(value_) +"\n")
		
		#Querys
	
	def getStandardEventEnableRegister(self):
		self.this.sc.enviar_comando("*ESE?\n")
		return self.this.sc.obtener_respuesta()
		
	def getStandardEventRegister_Error(self):
		self.this.sc.enviar_comando("*ESR?\n")
		return self.this.sc.obtener_respuesta()

	def getMeterIdentificationString(self):
		self.this.sc.enviar_comando("*IDN?\n")
		return self.this.sc.obtener_respuesta()
	
	def getOperationCompleteStatus(self):
		self.this.sc.enviar_comando("*OPC?\n")

	def setOperationCompleteBit(self):
		self.this.sc.enviar_comando("*OPC\n")

	def setPowerOnStatusClear(self, Status_):
		self.this.sc.enviar_comando("*PSC "+str(Status_)+"\n")
		
	def getsPowerOnStatusClearSetting(self):
		self.this.sc.enviar_comando("*PSC?\n")

	def setResetMeter(self):
		self.this.sc.enviar_comando("*RST\n")
		
	def setBitsStatusByteRegister(self, value_):
		self.this.sc.enviar_comando("*SRE "+ str(value_) +"\n")

	def getBitsStatusByteRegister(self):
		self.this.sc.enviar_comando("*SRE?\n")
		return self.this.sc.obtener_respuesta()
		
	def getStatusByteSummaryRegister(self):
		self.this.sc.enviar_comando("*STB?\n")
		return self.this.sc.obtener_respuesta()
	
	def getSelfTestStatus(self):
		self.this.sc.enviar_comando("*TST?\n")
		return self.this.sc.obtener_respuesta()
