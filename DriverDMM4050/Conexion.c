#include "Conexion.h"
/*Definicion de errores*/

void error(const char *msg)
{
    perror(msg);
}
    
int ConnectionOpen(char* ip_, char* port_)
{
    portno = atoi(port_); // guarda el puerto
    sockfd = socket(AF_INET, SOCK_STREAM, 0); // Define el tipo de socket
    
    // Define errores en los sockets. 
    if (sockfd < 0) 
        return ERROR_OPENING_SOCKET;
       // error("ERROR opening socket");
    else
    {
        // Obtiene el servidor a partir del argumento en linea de comandos
        server = gethostbyname(ip_);
        // Si server es NULL es porque no encontro el servidor o dir IP
        if (server == NULL) 
                return ERROR_NO_SUCH_HOST;

        // Receta de cocina 
        bzero((char *) &serv_addr, sizeof(serv_addr));
        serv_addr.sin_family = AF_INET;
        bcopy((char *)server->h_addr, 
                (char *)&serv_addr.sin_addr.s_addr,
                server->h_length);
         serv_addr.sin_port = htons(portno);

        // Se conecta
        if (connect(sockfd,(struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0) 
                return ERROR_CONNECTING;
        //Lee una cadena de la linea de comandos
     
        /* strcpy(cmd1, "SYST:REM\n");
    
        //Escribe en el socket sockfd, la informacion del buffer, con longitud len(buffer)
        n = write(sockfd,cmd1,strlen(cmd1));

        if (n < 0) 
                return ERROR_WRITING_TO_SOCKET;*/
      }
    return SUCCESSFUL;
}

status_ Configuration(char *command)
{
    status_ estado;
    char cmd[strlen(command)+1];
    strcpy(cmd,command);
    n= write(sockfd,cmd,strlen(cmd));
    if(readable_timeo(sockfd,2)==0)
    {
        estado.code = ERROR_EXECUTING_COMMAND;
        estado.description = ScanError();
        return estado;
    }
    else
    {
     estado.code=SUCCESSFUL;
     estado.description="";
     return estado;
    }
}

status_ Query(char *command)
{
    status_ estado;
    char cmd[strlen(command)+1];
    strcpy(cmd,command);
    n= write(sockfd,cmd,strlen(cmd));
    if(readable_timeo(sockfd,2)>0)
    { 
        if (n < 0) 
        { estado.code=ERROR_WRITING_TO_SOCKET;
          estado.description="ERROR_WRITING_TO_SOCKET";
          return estado;
        }
        
        bzero(buffer,400);
        n= read(sockfd,buffer,399);
        if (n < 0) 
        { estado.code=ERROR_READING_FROM_SOCKET;
          estado.description="ERROR_READING_FROM_SOCKET";
          return estado;
        }
        
        estado.code=SUCCESSFUL;
        estado.description=buffer;
      return estado;
    } 
    else{
        estado.code = ERROR_EXECUTING_COMMAND;
        estado.description = ScanError();
        return estado;
    }
}

void InitRemote()
{
    strcpy(cmd1, "SYST:REM\n");
    n = write(sockfd,cmd1,strlen(cmd1));
}

void StopRemote()
{
   char cmd[20];
   strcpy(cmd, "SYST:LOC\n");
   n = write(sockfd,cmd,strlen(cmd));
   sleep(1);
}

status_ getMeasureCurrentResistence()
{
    return Query("MEAS:RES?\n");
}

void sendText()
{
    Configuration("DISP:TEXT 'WORKING...'\n");
}

char* ScanError()
{
    char cmd[20];
    char cmd2[20];
    strcpy(cmd, "*ESR?\n");
    n = write(sockfd,cmd,strlen(cmd));sleep(1);
    bzero(bError,400);
    read(sockfd,bError,399);
    if(strcmp(bError,"+0")!=0)
    {
        strcpy(cmd2, "SYST:ERR?\n");
        bzero(bError,400);
        n = write(sockfd,cmd2,strlen(cmd2)); 
        read(sockfd,bError,399);
        return bError;
    }
    return "";
}

void ConnectionClose()
{
    /*char cmd[20];
    strcpy(cmd, "SYST:LOC\n");
    n = write(sockfd,cmd,strlen(cmd));
    sleep(1);
    if (n < 0) 
         error("ERROR writing to socket");*/
    shutdown(sockfd,2);
}

int readable_timeo(int fd, int sec)
{
    fd_set rset;
    struct timeval tv;
    FD_ZERO(&rset);
    FD_SET(fd,  &rset);
    tv.tv_sec=sec;
    tv.tv_usec=0;
    return (select(fd + 1, &rset, NULL, NULL, &tv));
}

