#include "Conexion.h"

void error(const char *msg)
{
    perror(msg);
    exit(0);
}

void Conexion(char *ip_, char *port_)
{
    int sockfd, portno, n;
    struct sockaddr_in serv_addr;
    struct hostent *server;
    
    char buffer[256];
    char cmd1[20];
 
    
    portno = atoi(port_); // guarda el puerto
    sockfd = socket(AF_INET, SOCK_STREAM, 0); // Define el tipo de socket
    
    // Define errores en los sockets. 
    if (sockfd < 0) 
        error("ERROR opening socket");

    // Obtiene el servidor a partir del argumento en linea de comandos
    server = gethostbyname(ip_);
    // Si server es NULL es porque no encontro el servidor o dir IP
    if (server == NULL) {
        fprintf(stderr,"ERROR, no such host\n");
        exit(0);
    }

    // Receta de cocina 
    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    bcopy((char *)server->h_addr, 
         (char *)&serv_addr.sin_addr.s_addr,
         server->h_length);
    serv_addr.sin_port = htons(portno);

    // Se conecta
    if (connect(sockfd,(struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0) 
        error("ERROR connecting");
    // Lee una cadena de la linea de comandos
     
    strcpy(cmd1, "SYST:REM\n");
    
    //Escribe en el socket sockfd, la informacion del buffer, con longitud len(buffer)
   
    n = write(sockfd,cmd1,strlen(cmd1));

    if (n < 0) 
         error("ERROR writing to socket");

    bzero(buffer,256);

    n = read(sockfd,buffer,255);

    if (n < 0) 
         error("ERROR reading from socket");

    printf("%s\n",buffer);
    close(sockfd);
}
