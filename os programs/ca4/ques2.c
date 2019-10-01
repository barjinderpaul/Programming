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
	
	datum key1, data1, ndata1;	//datum types
	char *k1 = "key1";		//key value
	myd d1 = {1,"ABC",10000,"Manager"};	//struct d1 elements
	key1.dptr = k1;			//key got the to the pointer to value
	key1.dsize = strlen(k1) + 1;	//key size
	data1.dptr = (char *)&d1;	//data got the pointer to value;
	data1.dsize = sizeof(d1);	//data size
	file=gdbm_open("DB1",0,GDBM_WRCREAT|GDBM_READER,0660,0); //database opened
	gdbm_store(file,key1,data1,GDBM_INSERT);		//data stored in database
	ndata1=gdbm_fetch(file,key1);		//data fetched
	
	printf("Data: %d\n",((myd *)ndata1.dptr)->id);
	printf("Data: %s\n",((myd *)ndata1.dptr)->name);
	printf("Data: %d\n",((myd *)ndata1.dptr)->salary);
	printf("Data: %s\n",((myd *)ndata1.dptr)->designation);
	gdbm_close(file);

}
