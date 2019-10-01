#include<stdio.h>
#include<string.h>
#include<gdbm.h>


 typedef struct myd_tag{
                 int id;
                 char name[24];
		 int salary;
		 char designation[50];
               }myd;

int main(int argc, char *argv[])
{
	GDBM_FILE file;
	
	datum key1, data1, ndata1;	
	char *k1 = "key1";	
	myd d1 = {1,"ABC",10000,"Manager"};	
	key1.dptr = k1;			
	key1.dsize = strlen(k1) + 1;	
	data1.dptr = (char *)&d1;	
	data1.dsize = sizeof(d1);	
	file=gdbm_open("DB1",0,GDBM_WRCREAT|GDBM_READER,0660,0);
	gdbm_store(file,key1,data1,GDBM_INSERT);	
	ndata1=gdbm_fetch(file,key1);		
	
	printf("nData: %d\n",((myd *)ndata1.dptr)->id);
	printf("nData: %s\n",((myd *)ndata1.dptr)->name);
	printf("nData: %d\n",((myd *)ndata1.dptr)->salary);
	
	gdbm_close(file);

}
