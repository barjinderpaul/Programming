#include<stdio.h>
#include<stdio.h>
#include "mysql.h"
#include<unistd.h>

int main(){
	MYSQL *connection;
	connection = mysql_init(NULL);
	if(connection==NULL){
		fprintf(stderr,"connection failed");
		exit(1);
	}
	connection = mysql_real_connect(connection,"localhost","root","root","db1",0,NULL,0);
	if(connection){
		printf("connection succesfu;;\n");
	}
	else{
		printf("connection failed\n");	
	}
	mysql_close(connection);
	
}
