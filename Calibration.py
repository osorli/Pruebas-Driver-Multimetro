class calibration:

	def __init__(self, ref):
		self.this=ref
			
	def Rec_(self):
		self.this.sc.enviar_comando("CAL:REC\n")

	def setSecureCode(self, code_):
		self.this.sc.enviar_comando("CAL:SEC:CODE "+str(code_) +"\n")
		
	def setSecureState(self, state, code_):
		self.this.sc.enviar_comando("CAL:SEC:STAT "+str(state)+" "+ str(code_) +"\n")
		
	def setString(self,information):
		self.this.sc.enviar_comando("CAL:STR "+ str(information) +"\n")
		self.this.sc.obtener_respuesta()
		
	def getString(self):
		self.this.sc.enviar_comando("CAL:STR?\n")
		return self.this.sc.obtener_respuesta()
		
	def setDate(self, date_):
		self.this.sc.enviar_comando("CAL:DATE "+ str(date_) +"\n")
	
	def getDate(self):
		self.this.sc.enviar_comando("CAL:DATE?\n")
		return self.this.sc.obtener_respuesta()
		
	def setValue(self, value_):
		self.this.sc.enviar_comando("CAL:VAL "+ str(value_) +"\n")
		
	def getValue(self):
		self.this.sc.enviar_comando("CAL:VAL?\n")
		return self.this.sc.obtener_respuesta()
		
	def setStep(self, Numstep_):
		self.this.sc.enviar_comando("CAL:STEP "+ str(Numstep_) +"\n")
		
	def getStep(self):
		self.this.sc.enviar_comando("CAL:STEP?\n")
		return self.this.sc.obtener_respuesta()
		
	def getCount(self):
		self.this.sc.enviar_comando("CAL:COUN?\n")
