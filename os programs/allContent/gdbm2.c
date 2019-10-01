#include<stdio.h>
#include<string.h>
#include<gdbm.h>
#include<unistd.h>
#include<stdlib.h>

typedef struct dbm_struct{
	int id;
	char name[24];
	int salary;
	char dept[24];
}dbms;

int main(){
	
	GDBM_FILE file; //file type GDBM
	datum key1,data1,returnData;
	char *k1 = "Key1";	//Key value;
	char eid[1],esalary[10000];
	char ename[24];
	char edept[24];	
	read(0,ename,5);
	read(0,eid,1);
	read(0,esalary,5);
	read(0,edept,3);
	
	dbms d1 = {(int)eid,(char)ename,(int)esalary,(char)edept};
	key1.dptr=k1;	//datamKey1.dptr
	key1.dsize = strlen(k1)+1;
	data1.dptr = (char *)&d1;
	data1.dsize = sizeof(d1);
	
	file = gdbm_open("Database1",0,GDBM_WRCREAT|GDBM_READER,0660,0);
	if(!file){
		fprintf(stderr,"failed to open database\n");
		exit(EXIT_FAILURE);
	}
	else{
		gdbm_store(file,key1,data1,GDBM_REPLACE);
		returnData = gdbm_fetch(file,key1);
		printf("Id = %d \n",((dbms *)returnData.dptr)->id);
		printf(" Name = %s\n",((dbms *)returnData.dptr)->name);
		printf(" Salary = %d\n",((dbms *)returnData.dptr)->salary);
		printf(" dept = %s\n",((dbms *)returnData.dptr)->dept);		
		gdbm_close(file);	
	}
}
