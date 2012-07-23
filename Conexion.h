#ifndef __CONEXION_h
#define __CONEXION_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h> 

void Conexion(char *ip_, char *port_);
void error(const char *msg);
#endif
