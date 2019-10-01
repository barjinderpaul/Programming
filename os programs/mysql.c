#include<stdlib.h>
#include<stdio.h>
#include "mysql.h"
int main(){
	MYSQL *conn_ptr;
	conn_ptr = mysql_init(NULL);
	if( !conn_ptr) {
	fprintf(stderr,"mysql init failed\n");
	return EXIT_FAILURE;
	}	
	
	conn_ptr = mysql_real_connect(conn_ptr,"localhost","root","root","newtoday",0,NULL,0);
	if(conn_ptr)
		printf("connection done \n";
	else
		printf("no connection made \n"
	mysql_close(conn_ptr);

	return EXIT_SUCCESS

}
