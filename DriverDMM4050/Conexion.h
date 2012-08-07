#ifndef CONEXION_H
#define	CONEXION_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h> 
    
int sockfd, portno, n;
struct sockaddr_in serv_addr;
struct hostent *server;
char buffer[400],bError[400];
char cmd1[20];

typedef struct {
        int code;
        char *description;
        }status_;
        
#define ERROR_OPENING_SOCKET 1
#define ERROR_NO_SUCH_HOST 2
#define ERROR_CONNECTING 3
#define ERROR_WRITING_TO_SOCKET 4
#define ERROR_READING_FROM_SOCKET 5
#define ERROR_EXECUTING_COMMAND 6
#define ERROR_PARAMETERS_OUT_OF_RANGE 7
#define SUCCESSFUL 8

int ConnectionOpen(char* ip_, char* port_);
void error(const char *msg);
void ConnectionClose();
char* ScanError();
status_ getMeasureCurrentResistence();
status_ Configuration(char *command);
status_ Query(char *command);
void sendText();
void InitRemote();
void StopRemote();

#ifdef	__cplusplus
}
#endif

#endif	/* CONEXION_H */

