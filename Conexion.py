import socket
import time 

class conexion():
    
    def __init__(self, ip_, port_):
        ''' Constructor de la clase '''
        # Definiciones generales. Variables y constante globales para toda la clase. 
        self.socket = socket.socket()
        self.dir_ip = ip_
        self.puerto = port_
        
    def conectar(self):
        try:
            self.socket.connect((self.dir_ip, self.puerto))
            return True
        except:
            print "No fue posible realizar la conexion"
            return False

    def desconectar(self):
		self.socket.shutdown(socket.SHUT_WR)
        

    def enviar_comando(self, comando):
        try:
            self.socket.sendall(comando)
            return True
        except:
            print "No fue posible enviar el comando"
            return False

    def obtener_respuesta(self):
        try:
            recibido = self.socket.recv(100) #Numero de bytes para recibir
            return recibido
        except:
            return ""
    


"""if __name__ == "__main__":
    sc = driver_dmm()
    sc.conectar()
    sc.enviar_comando("*IDN?\n")
    time.sleep(0.5)
    res = sc.obtener_respuesta()
    print "Se recibio : %s" % (res)
    sc.desconectar()"""
