#include<stdlib.h>
#include<stdio.h>
#include "mysql.h"
MYSQL_ROW sqlrows;
MYSQL *connection,*res_ptr;
void display_rows(){
unsigned int count=0;
while(count<mysql_field_count(connection)){
printf("%s\n",sqlrows[count]);
count++;
}
}

int main(int argc,char *argv[]){
	
	
	connection = mysql_init(NULL);
	if(connection==NULL){
		fprintf(stderr,"mysql_init failed\n");
		exit(1);
	}
	else{
	connection=mysql_real_connect(connection,"localhost","root","root","db1",0,NULL,0);
	if(!connection){
		printf("connection failed\n");
		exit(1);		
	}
	else{
		printf("connection succeeded\n");
		//int res;
		/*res=mysql_query(connection,"CREATE TABLE student(id int, name varchar(30))");
		if(res == 0){
		printf("table created\n");		
		} 
		else{
			printf("error in creating table\n");
			exit(1);
		}*/
		int res;
		res=mysql_query(connection,"Insert into student values(1,'benny')");
		if(res==0)
			printf("Insert successful\n");
		else
			printf("Error in insert\n");		
		}
		int res2=mysql_query(connection,"select id,name from student");
		if(res2!=0)
			printf("Cannot retrieve\n");
		else{
			res_ptr=mysql_store_result(connection);
			if(res_ptr){
				printf("Retrieved rows = %lu\n",mysql_num_rows(res_ptr));
				while(sqlrows=mysql_fetch_row(res_ptr)){
					printf("data =\n");
					display_rows();				
				}
			}		
		}
	
	}
}
